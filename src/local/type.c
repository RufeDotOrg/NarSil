struct vinfo_type {
  int16_t grid[8];
  uint32_t bits_3;
  uint32_t bits_2;
  uint32_t bits_1;
  uint32_t bits_0;
  uint8_t slope_fire_index1;
  uint8_t slope_fire_index2;
  struct vinfo_type* next_0;
  struct vinfo_type* next_1;
  uint8_t y;
  uint8_t x;
  uint8_t d;
  uint8_t r;
};
struct vinfo_hack {
  int num_slopes;
  long slopes[126];
  long slopes_min[20 + 1][20 + 1];
  long slopes_max[20 + 1][20 + 1];
};
typedef struct vinfo_hack vinfo_hack;
struct command_info {
  cmd_code cmd;
  const char* verb;
  cmd_handler_fn fn;
  bool repeat_allowed;
  int auto_repeat_n;
};
enum use { USE_CHARGE, USE_VOICE, USE_SINGLE };
DATA enum EditPlayerState {
  EDIT_PLAYER_UNKNOWN,
  EDIT_PLAYER_STARTED,
  EDIT_PLAYER_BREAK
} edit_player_state = EDIT_PLAYER_UNKNOWN;
struct wiz_query_feature_closure {
  const int* features;
  int n;
};
static struct {
  int index;
  int args;
  int efinfo_flag;
  const char* desc;
  const char* menu_name;
} base_descs[] = {
    {EF_NONE, 0, EFINFO_NONE, "", ""},
    {EF_HEAL_HP, 2, EFINFO_HEAL, "heals %s hitpoints%s", "heal self"},
    {EF_DAMAGE, 1, EFINFO_DICE, "does %s damage to the player", "%s damage"},
    {EF_DART, 1, EFINFO_DICE, "does %s damage to the player", "dart"},
    {EF_PIT, 0, EFINFO_DICE, "player falls in a pit", "pitfall"},
    {EF_PROJECT_LOS, 1, EFINFO_PROJ, "%s which are in line of sight",
     "%s in line of sight"},
    {EF_PROJECT_LOS_GRIDS, 1, EFINFO_PROJ, "%s which are in line of sight",
     "%s in line of sight"},
    {EF_DEADFALL, 0, EFINFO_DICE, "makes rocks fall on the player", "deadfall"},
    {EF_EARTHQUAKE, 1, EFINFO_QUAKE,
     "causes an earthquake around you of radius %d", "cause earthquake"},
    {EF_SPOT, 4, EFINFO_SPOT,
     "creates a ball of %s with radius %d, centred on and hitting the player, "
     "with full intensity to radius %d, dealing %s damage at the centre",
     "engulf with %s"},
    {EF_SPHERE, 4, EFINFO_SPOT,
     "creates a ball of %s with radius %d, centred on the player, with full "
     "intensity to radius %d, dealing %s damage at the centre",
     "project %s"},
    {EF_EXPLOSION, 1, EFINFO_PROJ, "produces a blast of %s", "blast %s"},
    {EF_BREATH, 3, EFINFO_BREATH,
     "breathes a cone of %s with width %d degrees, dealing %s damage at the "
     "source",
     "breathe a cone of %s"},
    {EF_BOLT, 2, EFINFO_BOLT, "casts a bolt of %s dealing %s damage",
     "cast a bolt of %s"},
    {EF_BEAM, 2, EFINFO_BOLT, "casts a beam of %s dealing %s damage",
     "cast a beam of %s"},
    {EF_TERRAIN_BEAM, 1, EFINFO_PROJ, "casts a beam of %s",
     "cast a beam of %s"},
    {EF_NOURISH, 3, EFINFO_FOOD, "%s for %s turns (%s percent)", "%s %s"},
    {EF_CURE, 1, EFINFO_CURE, "cures %s", "cure %s"},
    {EF_TIMED_SET, 2, EFINFO_TIMED, "administers %s for %s turns",
     "administer %s"},
    {EF_TIMED_INC, 2, EFINFO_TIMED, "extends %s for %s turns", "extend %s"},
    {EF_TIMED_INC_CHECK, 1, EFINFO_TIMED, "checks if %s can be extended",
     "checks %s extension"},
    {EF_TIMED_INC_NO_RES, 2, EFINFO_TIMED,
     "extends %s for %s turns (unresistable)", "extend %s"},
    {EF_TERROR, 1, EFINFO_TERROR,
     "administers fear for %s turns, and haste for about half as long",
     "administer fear/haste"},
    {EF_GLYPH, 1, EFINFO_NONE, "inscribes a glyph beneath you",
     "inscribe a glyph"},
    {EF_RESTORE_STAT, 1, EFINFO_STAT, "restores your %s", "restore %s"},
    {EF_DRAIN_STAT, 1, EFINFO_STAT, "reduces your %s", "drains %s"},
    {EF_RESTORE_MANA, 0, EFINFO_NONE, "restores some mana",
     "restore some mana"},
    {EF_REMOVE_CURSE, 1, EFINFO_DICE,
     "attempts power %s removal of a single curse on an object",
     "remove curse"},
    {EF_MAP_AREA, 0, EFINFO_NONE, "maps the current dungeon level",
     "map level"},
    {EF_DETECT_TRAPS, 0, EFINFO_NONE, "detects traps nearby", "detect traps"},
    {EF_DETECT_DOORS, 0, EFINFO_NONE, "detects doors nearby", "detect doors"},
    {EF_DETECT_OBJECTS, 0, EFINFO_NONE, "detects objects nearby",
     "detect objects"},
    {EF_DETECT_MONSTERS, 0, EFINFO_NONE, "detects monsters on the level",
     "detect monsters"},
    {EF_REVEAL_MONSTER, 0, EFINFO_NONE, "reveals a monster", "reveal monster"},
    {EF_CLOSE_CHASMS, 0, EFINFO_NONE, "close nearby chasms", "close_chasms"},
    {EF_IDENTIFY, 0, EFINFO_NONE, "identifie a selected item", "identify"},
    {EF_RECHARGE, 0, EFINFO_NONE,
     "tries to recharge a wand or staff, destroying the wand or staff on "
     "failure",
     "recharge"},
    {EF_SUMMON, 1, EFINFO_SUMM, "summons %s at the current dungeon level",
     "summon %s"},
    {EF_TELEPORT_TO, 0, EFINFO_NONE, "teleports toward a target",
     "teleport to target"},
    {EF_DARKEN_LEVEL, 0, EFINFO_NONE,
     "completely darkens and forgets the level", "darken level"},
    {EF_LIGHT_AREA, 0, EFINFO_NONE, "lights up the surrounding area",
     "light area"},
    {EF_DARKEN_AREA, 0, EFINFO_NONE, "darkens the surrounding area",
     "darken area"},
    {EF_SONG_OF_ELBERETH, 0, EFINFO_NONE, "sings a song of Elbereth",
     "song of Elbereth"},
    {EF_SONG_OF_LORIEN, 0, EFINFO_NONE, "sings a song of Lorien",
     "song of Lorien"},
    {EF_SONG_OF_FREEDOM, 0, EFINFO_NONE, "sings a song of Freedom",
     "song of Freedom"},
    {EF_SONG_OF_BINDING, 0, EFINFO_NONE, "sings a song of Binding",
     "song of Binding"},
    {EF_SONG_OF_PIERCING, 0, EFINFO_NONE, "sings a song of Piercing",
     "song of Piercing"},
    {EF_SONG_OF_OATHS, 0, EFINFO_NONE, "sings a song of Oaths",
     "song of Oaths"},
    {EF_AGGRAVATE, 0, EFINFO_NONE, "makes nearby monsters aggressive",
     "make angry"},
    {EF_NOISE, 0, EFINFO_NONE, "makes a noise that monsters may hear",
     "make a noise"},
    {EF_CREATE_TRAPS, 0, EFINFO_NONE, "create traps on the level",
     "create traps"},
};
struct event_handler_entry {
  struct event_handler_entry* next;
  game_event_handler* fn;
  void* user;
};
struct name {
  struct name* next;
  char* str;
};
struct names_parse {
  unsigned int section;
  unsigned int nnames[RANDNAME_NUM_TYPES];
  struct name* names[RANDNAME_NUM_TYPES];
};
typedef struct _message_t {
  char* str;
  struct _message_t* newer;
  struct _message_t* older;
  uint16_t type;
  uint16_t count;
} message_t;
typedef struct _msgcolor_t {
  uint16_t type;
  uint8_t color;
  struct _msgcolor_t* next;
} msgcolor_t;
typedef struct _msgqueue_t {
  message_t* head;
  message_t* tail;
  msgcolor_t* colors;
  uint32_t count;
  uint32_t max;
} msgqueue_t;
typedef enum {
  BLOW_TAG_NONE,
  BLOW_TAG_TARGET,
  BLOW_TAG_OF_TARGET,
  BLOW_TAG_HAS
} blow_tag_t;
enum monster_sex {
  MON_SEX_NEUTER = 0,
  MON_SEX_MALE,
  MON_SEX_FEMALE,
  MON_SEX_MAX,
};
typedef enum monster_sex monster_sex_t;
struct monster_race_message {
  struct monster_race* race;
  int flags;
  int msg_code;
  int count;
  int delay;
};
struct monster_message_history {
  struct monster* mon;
  int message_code;
};
static const struct {
  const char* msg;
  bool omit_subject;
  int type;
} msg_repository[] = {
    {"[is|are] hurt.", false, MSG_GENERIC},
    {"die[s].", false, MSG_KILL},
    {"[is|are] destroyed.", false, MSG_KILL},
    {"resist[s] a lot.", false, MSG_GENERIC},
    {"[is|are] hit hard.", false, MSG_GENERIC},
    {"resist[s].", false, MSG_GENERIC},
    {"[is|are] immune.", false, MSG_GENERIC},
    {"resist[s] somewhat.", false, MSG_GENERIC},
    {"[is|are] unaffected!", false, MSG_GENERIC},
    {"spawn[s]!", false, MSG_GENERIC},
    {"look[s] healthier.", false, MSG_GENERIC},
    {"fall[s] asleep.", false, MSG_GENERIC},
    {"wake[s] up.", false, MSG_GENERIC},
    {"notice[s] you.", false, MSG_GENERIC},
    {"wake[s] up and notice[s] you.", false, MSG_GENERIC},
    {"stir[s].", false, MSG_GENERIC},
    {"look[s] around.", false, MSG_GENERIC},
    {"become[s] unwary.", false, MSG_GENERIC},
    {"cringe[s] from the light!", false, MSG_GENERIC},
    {"shrivel[s] away in the light!", false, MSG_KILL},
    {"partly shatter[s]!", false, MSG_GENERIC},
    {"shatter[s]!", false, MSG_KILL},
    {"catch[es] fire!", false, MSG_GENERIC},
    {"[is|are] badly frozen.", false, MSG_GENERIC},
    {"shudder[s].", false, MSG_GENERIC},
    {"change[s]!", false, MSG_GENERIC},
    {"disappear[s]!", false, MSG_GENERIC},
    {"[is|are] even more stunned.", false, MSG_GENERIC},
    {"[is|are] stunned.", false, MSG_GENERIC},
    {"[is|are] no longer stunned.", false, MSG_GENERIC},
    {"look[s] more confused.", false, MSG_GENERIC},
    {"look[s] confused.", false, MSG_GENERIC},
    {"[is|are] no longer confused.", false, MSG_GENERIC},
    {"look[s] more slowed.", false, MSG_GENERIC},
    {"look[s] slowed.", false, MSG_GENERIC},
    {"speed[s] up.", false, MSG_GENERIC},
    {"look[s] even faster!", false, MSG_GENERIC},
    {"start[s] moving faster.", false, MSG_GENERIC},
    {"slow[s] down.", false, MSG_GENERIC},
    {"look[s] more terrified!", false, MSG_GENERIC},
    {"flee[s] in terror!", false, MSG_FLEE},
    {"[is|are] no longer afraid.", false, MSG_GENERIC},
    {"turn[s] to fight!", false, MSG_GENERIC},
    {"recover[s] [its|their] composure.", false, MSG_GENERIC},
    {"panics.", false, MSG_GENERIC},
    {"staggers into a door.", false, MSG_GENERIC},
    {"staggers into some rubble.", false, MSG_GENERIC},
    {"bashes into a wall.", false, MSG_GENERIC},
    {"[is|are] frozen to the spot!", false, MSG_GENERIC},
    {"can move again.", false, MSG_GENERIC},
    {"[is|are] blown backwards by the force.", false, MSG_GENERIC},
    {"holds firm against the force of the blast.", false, MSG_GENERIC},
    {"falls under your spell!", false, MSG_GENERIC},
    {"is no longer under your control.", false, MSG_GENERIC},
    {"shimmers for a moment.", false, MSG_GENERIC},
    {"You hear [a|several] scream[|s] of agony!", true, MSG_KILL},
    {"disintegrate[s]!", false, MSG_KILL},
    {"freeze[s] and shatter[s]!", false, MSG_KILL},
    {"lose[s] some mana!", false, MSG_GENERIC},
    {"look[s] briefly puzzled.", false, MSG_GENERIC},
    {"maintain[s] the same shape.", false, MSG_GENERIC},
    {"[is|are] unharmed.", false, MSG_GENERIC},
    {"appear[s]!", false, MSG_GENERIC},
    {"There is a puff of smoke!", true, MSG_GENERIC},
    {"[goes|go] up the stairs.", false, MSG_GENERIC},
    {"[goes|go] down the stairs.", false, MSG_GENERIC},
    {"flee[s] up the stairs.", false, MSG_GENERIC},
    {"flee[s] down the stairs.", false, MSG_GENERIC},
    {"exchanges places with you.", false, MSG_GENERIC},
    {"attacks you as it moves by.", false, MSG_GENERIC},
    {"passes under the door.", false, MSG_GENERIC},
    {"ends his song.", false, MSG_GENERIC},
    {"", true, MSG_GENERIC},
    {"", true, MSG_GENERIC},
    {"", true, MSG_GENERIC},
    {"", false, MSG_GENERIC},
    {"", true, MSG_GENERIC},
    {"", true, MSG_GENERIC},
    {"", false, MSG_GENERIC},
    {"", true, MSG_GENERIC},
    {"", false, MSG_GENERIC},
    {"", true, MSG_GENERIC},
    {"", false, MSG_GENERIC},
};
typedef enum {
  SPELL_TAG_NONE,
  SPELL_TAG_NAME,
  SPELL_TAG_PRONOUN,
} spell_tag_t;
static const struct mon_spell_info {
  uint16_t index;
  int type;
} mon_spell_types[] = {
    {RSF_NONE, 0},
    {RSF_ARROW1, RST_INNATE | RST_ARCHERY | RST_DISTANT},
    {RSF_ARROW2, RST_INNATE | RST_ARCHERY | RST_DISTANT},
    {RSF_BOULDER, RST_INNATE | RST_ARCHERY | RST_DISTANT},
    {RSF_BR_FIRE, RST_BREATH},
    {RSF_BR_COLD, RST_BREATH},
    {RSF_BR_POIS, RST_BREATH},
    {RSF_BR_DARK, RST_BREATH},
    {RSF_EARTHQUAKE, RST_SPELL | RST_DISTANT},
    {RSF_SHRIEK, RST_SPELL},
    {RSF_SCREECH, RST_SPELL},
    {RSF_DARKNESS, RST_SPELL},
    {RSF_FORGET, RST_SPELL},
    {RSF_SCARE, RST_SPELL},
    {RSF_CONF, RST_SPELL},
    {RSF_HOLD, RST_SPELL},
    {RSF_SLOW, RST_SPELL},
    {RSF_SNG_BIND, RST_SONG},
    {RSF_SNG_PIERCE, RST_SONG},
    {RSF_SNG_OATHS, RST_SONG},
    {RSF_MAX, 0},
};
enum stack_type { STACK_NO, STACK_INCR, STACK_MAX };
static struct mon_timed_effect {
  const char* name;
  bool gets_save;
  enum stack_type stacking;
  int flag_resist;
  int max_timer;
  int message_begin;
  int message_end;
  int message_increase;
} teffects[] = {
    {"STUN", false, STACK_MAX, RF_NO_STUN, 200, MON_MSG_DAZED,
     MON_MSG_NOT_DAZED, MON_MSG_MORE_DAZED},
    {"CONF", true, STACK_MAX, RF_NO_CONF, 200, MON_MSG_CONFUSED,
     MON_MSG_NOT_CONFUSED, MON_MSG_MORE_CONFUSED},
    {"SLOW", true, STACK_INCR, RF_NO_SLOW, 5000, MON_MSG_SLOWED,
     MON_MSG_NOT_SLOWED, MON_MSG_MORE_SLOWED},
    {"FAST", false, STACK_INCR, 0, 5000, MON_MSG_HASTED, MON_MSG_NOT_HASTED,
     MON_MSG_MORE_HASTED},
    {"MAX", true, STACK_INCR, 0, 0, 0, 0, 0},
};
static const struct slot_info {
  int index;
  bool acid_vuln;
  bool name_in_desc;
  const char* mention;
  const char* describe;
} slot_table[] = {
    {EQUIP_NONE, false, false, "", ""},
    {EQUIP_WEAPON, false, false, "Wielding", "attacking monsters with"},
    {EQUIP_BOW, false, false, "Shooting", "shooting missiles with"},
    {EQUIP_RING, false, true, "On %s", "wearing on your %s"},
    {EQUIP_AMULET, false, true, "Around %s", "wearing around your %s"},
    {EQUIP_LIGHT, false, false, "Light source", "using to light your way"},
    {EQUIP_BODY_ARMOR, true, true, "On %s", "wearing on your %s"},
    {EQUIP_CLOAK, true, true, "On %s", "wearing on your %s"},
    {EQUIP_SHIELD, true, true, "On %s", "wearing on your %s"},
    {EQUIP_HAT, true, true, "On %s", "wearing on your %s"},
    {EQUIP_GLOVES, true, true, "On %s", "wearing on your %s"},
    {EQUIP_BOOTS, true, true, "On %s", "wearing on your %s"},
    {EQUIP_QUIVER, true, true, "In quiver", "carrying in your %s"},
    {EQUIP_MAX, false, false, NULL, NULL}};
typedef struct {
  ignore_type_t ignore_type;
  int tval;
  const char* identifier;
} quality_ignore_struct;
struct blow_info {
  int str_plus;
  int dex_plus;
  int centiblows;
};
static const struct origin_type {
  int type;
  int args;
  const char* desc;
} origins[] = {
    {ORIGIN_NONE, -1, ""},
    {ORIGIN_FLOOR, 1, "Found lying on the floor %s"},
    {ORIGIN_CHEST, 1, "Taken from a chest found %s"},
    {ORIGIN_SPECIAL, 1, "Found lying on the floor of a special room %s"},
    {ORIGIN_PIT, 1, "Found lying on the floor in a pit %s"},
    {ORIGIN_VAULT, 1, "Found lying on the floor in a vault %s"},
    {ORIGIN_LABYRINTH, 1, "Found lying on the floor of a labyrinth %s"},
    {ORIGIN_CAVERN, 1, "Found lying on the floor of a cavern %s"},
    {ORIGIN_RUBBLE, 1, "Found under some rubble %s"},
    {ORIGIN_MIXED, -1, ""},
    {ORIGIN_DROP, 2, "Dropped by %s %s"},
    {ORIGIN_DROP_SPECIAL, 2, "Dropped by %s %s"},
    {ORIGIN_DROP_PIT, 2, "Dropped by %s %s"},
    {ORIGIN_DROP_VAULT, 2, "Dropped by %s %s"},
    {ORIGIN_STATS, -1, ""},
    {ORIGIN_ACQUIRE, 1, "Conjured forth by magic %s"},
    {ORIGIN_STORE, 0, "Bought from a store"},
    {ORIGIN_STOLEN, -1, ""},
    {ORIGIN_BIRTH, 0, "An inheritance from your family"},
    {ORIGIN_CHEAT, 0, "Created by debug option"},
    {ORIGIN_DROP_BREED, 2, "Dropped by %s %s"},
    {ORIGIN_DROP_SUMMON, 2, "Dropped by %s %s"},
    {ORIGIN_DROP_UNKNOWN, 1, "Dropped by an unknown monster %s"},
    {ORIGIN_DROP_POLY, 2, "Dropped by %s %s"},
    {ORIGIN_DROP_MIMIC, 2, "Dropped by %s %s"},
    {ORIGIN_DROP_WIZARD, 2, "Dropped by %s %s"},
};
struct kb_parsedata {
  struct object_base defaults;
  struct object_base* kb;
};
typedef enum {
  MSG_TAG_NONE,
  MSG_TAG_NAME,
  MSG_TAG_KIND,
  MSG_TAG_VERB,
  MSG_TAG_VERB_IS
} msg_tag_t;
static struct option_entry {
  const char* name;
  const char* description;
  int type;
  bool normal;
} options[OPT_MAX] = {
    {"none", "", OP_SPECIAL, false},
    {"hjkl_movement", "Move with hjkl etc. (^ for underlying keys)",
     OP_INTERFACE, false},
    {"use_sound", "Use sound", OP_INTERFACE, false},
    {"quick_messages", "Dismiss '-more-', 'y/n' prompts with any key",
     OP_INTERFACE, true},
    {"angband_keyset", "Use a keyset more closely based on Angband",
     OP_INTERFACE, false},
    {"stop_singing_on_rest", "Stop singing when you use the rest command",
     OP_INTERFACE, true},
    {"forgo_attacking_unwary", "Forgo bonus attacks on non-alert enemies",
     OP_INTERFACE, true},
    {"beep", "Audible beep (on errors/warnings)", OP_INTERFACE, false},
    {"highlight_player", "Highlight the player with the cursor", OP_INTERFACE,
     false},
    {"highlight_target", "Highlight the target with the cursor", OP_INTERFACE,
     true},
    {"highlight_unwary", "Highlight sleeping and unwary creatures",
     OP_INTERFACE, true},
    {"solid_walls", "Show walls as solid blocks", OP_INTERFACE, true},
    {"hybrid_walls", "Show walls with shaded background", OP_INTERFACE, false},
    {"animate_flicker", "Color: Shimmer multi-colored things", OP_INTERFACE,
     false},
    {"center_player", "Center map continuously", OP_INTERFACE, false},
    {"run_avoid_center", "Avoid centering while running", OP_INTERFACE, false},
    {"auto_more", "Automatically clear '-more-' prompts", OP_INTERFACE, false},
    {"mouse_movement", "Allow mouse clicks to move the player", OP_INTERFACE,
     true},
    {"display_hits", "Display a mark when something gets hit", OP_INTERFACE,
     true},
    {"pickup_always", "Always pickup items", OP_INTERFACE, false},
    {"pickup_inven", "Always pickup items matching inventory", OP_INTERFACE,
     false},
    {"show_flavors", "Show flavors in object descriptions", OP_INTERFACE,
     false},
    {"cheat_peek", "Debug: Peek into object creation", OP_CHEAT, false},
    {"score_peek", "Score: Peek into object creation", OP_SCORE, false},
    {"cheat_hear", "Debug: Peek into monster creation", OP_CHEAT, false},
    {"score_hear", "Score: Peek into monster creation", OP_SCORE, false},
    {"cheat_room", "Debug: Peek into dungeon creation", OP_CHEAT, false},
    {"score_room", "Score: Peek into dungeon creation", OP_SCORE, false},
    {"cheat_xtra", "Debug: Peek into something else", OP_CHEAT, false},
    {"score_xtra", "Score: Peek into something else", OP_SCORE, false},
    {"cheat_know", "Debug: Know complete monster info", OP_CHEAT, false},
    {"score_know", "Score: Know complete monster info", OP_SCORE, false},
    {"cheat_live", "Debug: Allow player to avoid death", OP_CHEAT, false},
    {"score_live", "Score: Allow player to avoid death", OP_SCORE, false},
    {"cheat_monsters", "Debug: Continually display all monsters", OP_CHEAT,
     false},
    {"score_monsters", "Score: Continually display all monsters", OP_SCORE,
     false},
    {"cheat_noise", "Debug: Continually display noise levels", OP_CHEAT, false},
    {"score_noise", "Score: Continually display noise levels", OP_SCORE, false},
    {"cheat_scent", "Debug: Continually display scent levels", OP_CHEAT, false},
    {"score_scent", "Score: Continually display scent levels", OP_SCORE, false},
    {"cheat_light", "Debug: Continually display light levels", OP_CHEAT, false},
    {"score_light", "Score: Continually display light levels", OP_SCORE, false},
    {"cheat_skill_rolls", "Debug: Show all skill rolls", OP_CHEAT, false},
    {"score_skill_rolls", "Score: Show all skill rolls", OP_SCORE, false},
    {"cheat_timestop", "Debug: Don't allow monsters to move", OP_CHEAT, false},
    {"score_timestop", "Score: Don't allow monsters to move", OP_SCORE, false},
    {"birth_discon_stairs", "Disconnected stairs", OP_BIRTH, false},
    {"birth_force_descend", "Force player descent (never make up stairs)",
     OP_BIRTH, false},
    {"birth_no_artifacts", "Restrict creation of artifacts", OP_BIRTH, false},
};
enum {
  PARSE_T_NONE = 0,
  PARSE_T_INT = 2,
  PARSE_T_SYM = 4,
  PARSE_T_STR = 6,
  PARSE_T_RAND = 8,
  PARSE_T_UINT = 10,
  PARSE_T_CHAR = 12,
  PARSE_T_OPT = 0x00000001
};
struct parser_spec {
  struct parser_spec* next;
  int type;
  const char* name;
};
struct parser_value {
  struct parser_spec spec;
  union {
    wchar_t cval;
    int ival;
    unsigned int uval;
    char* sval;
    random_value rval;
  } u;
};
struct parser_hook {
  struct parser_hook* next;
  enum parser_error (*func)(struct parser* p);
  char* dir;
  struct parser_spec* fhead;
  struct parser_spec* ftail;
};
struct parser {
  enum parser_error error;
  unsigned int lineno;
  unsigned int colno;
  char errmsg[1024];
  struct parser_hook* hooks;
  struct parser_value* fhead;
  struct parser_value* ftail;
  void* priv;
};
static struct {
  uint8_t skill;
  const char* name;
} prereq_list[100];
static int roman_to_int(const char* roman);
static int int_to_roman(int n, char* roman, size_t bufsize);
typedef struct birther birther;
struct birther {
  const struct player_race* race;
  const struct player_house* house;
  const struct player_sex* sex;
  int16_t age;
  int16_t wt;
  int16_t ht;
  int16_t stat[STAT_MAX];
  char* history;
  char name[PLAYER_NAME_LEN];
};
struct flag_event_trigger {
  uint32_t flag;
  game_event_type event;
};
typedef struct project_feature_handler_context_s {
  const struct source origin;
  const struct loc grid;
  const int dif;
  const int type;
  bool obvious;
} project_feature_handler_context_t;
typedef void (*project_feature_handler_f)(project_feature_handler_context_t*);
typedef struct project_monster_handler_context_s {
  const struct source origin;
  const int r;
  const struct loc grid;
  int dam;
  int dif;
  const int type;
  bool seen;
  const bool id;
  struct monster* mon;
  struct monster_lore* lore;
  bool obvious;
  bool skipped;
  bool alert;
  uint16_t flag;
  enum mon_messages hurt_msg;
  enum mon_messages die_msg;
  int mon_timed[MON_TMD_MAX];
} project_monster_handler_context_t;
typedef struct project_object_handler_context_s {
  const struct loc grid;
  const int type;
  const struct object* obj;
  bool obvious;
  bool do_kill;
  bool ignore;
  const char* note_kill;
} project_object_handler_context_t;
typedef struct project_player_handler_context_s {
  const struct source origin;
  const struct loc grid;
  struct monster* mon;
  int dd;
  int ds;
  int dam;
  const int type;
} project_player_handler_context_t;
typedef int (*loader_t)(void);
struct blockheader {
  char name[16];
  uint32_t version;
  uint32_t size;
};
struct blockinfo {
  char name[16];
  loader_t loader;
  uint32_t version;
};
struct sound_module {
  const char* name;
  const char* help;
  errr (*init)(struct sound_hooks* hooks, int argc, char** argv);
};
struct msg_snd_data {
  uint16_t num_sounds;
  uint16_t sound_ids[16];
};
static struct bane_type {
  int kills;
  const char* name;
} bane_types[] = {
    {0, "Nothing"}, {0, "Orc"},   {0, "Wolf"},    {0, "Spider"}, {0, "Troll"},
    {0, "Wraith"},  {0, "Rauko"}, {0, "Serpent"}, {0, "Dragon"},
};
enum birth_stage {
  BIRTH_BACK = -1,
  BIRTH_RESET = 0,
  BIRTH_QUICKSTART,
  BIRTH_RACE_CHOICE,
  BIRTH_HOUSE_CHOICE,
  BIRTH_SEX_CHOICE,
  BIRTH_STAT_POINTS,
  BIRTH_SKILL_POINTS,
  BIRTH_NAME_CHOICE,
  BIRTH_AHW_CHOICE,
  BIRTH_HISTORY_CHOICE,
  BIRTH_FINAL_CONFIRM,
  BIRTH_COMPLETE
};
enum birth_questions { BQ_METHOD = 0, BQ_RACE, BQ_HOUSE, MAX_BIRTH_QUESTIONS };
typedef void (*browse_f)(int oid, void* db, const region* l);
struct birthmenu_data {
  const char** items;
  const char* hint;
  bool allow_random;
  enum birth_stage stage_inout;
};
enum context_menu_value_e {
  MENU_VALUE_INSPECT = CMD_REPEAT + 1000,
  MENU_VALUE_DROP_ALL,
  MENU_VALUE_LOOK,
  MENU_VALUE_RECALL,
  MENU_VALUE_REST,
  MENU_VALUE_INVENTORY,
  MENU_VALUE_CENTER_MAP,
  MENU_VALUE_FLOOR,
  MENU_VALUE_CHARACTER,
  MENU_VALUE_OTHER,
  MENU_VALUE_KNOWLEDGE,
  MENU_VALUE_MAP,
  MENU_VALUE_MESSAGES,
  MENU_VALUE_OBJECTS,
  MENU_VALUE_MONSTERS,
  MENU_VALUE_TOGGLE_IGNORED,
  MENU_VALUE_OPTIONS,
  MENU_VALUE_HELP,
};
struct state_info {
  int value;
  const char* str;
  size_t len;
  uint8_t attr;
};
static struct minimap_flags {
  int win_idx;
  bool needs_redraw;
} minimap_data[ANGBAND_TERM_MAX];
static const struct {
  keycode_t code;
  const char* desc;
} mappings[] = {
    {ESCAPE, "Escape"},
    {KC_ENTER, "Enter"},
    {KC_TAB, "Tab"},
    {KC_DELETE, "Delete"},
    {KC_BACKSPACE, "Backspace"},
    {ARROW_DOWN, "Down"},
    {ARROW_LEFT, "Left"},
    {ARROW_RIGHT, "Right"},
    {ARROW_UP, "Up"},
    {KC_F1, "F1"},
    {KC_F2, "F2"},
    {KC_F3, "F3"},
    {KC_F4, "F4"},
    {KC_F5, "F5"},
    {KC_F6, "F6"},
    {KC_F7, "F7"},
    {KC_F8, "F8"},
    {KC_F9, "F9"},
    {KC_F10, "F10"},
    {KC_F11, "F11"},
    {KC_F12, "F12"},
    {KC_F13, "F13"},
    {KC_F14, "F14"},
    {KC_F15, "F15"},
    {KC_HELP, "Help"},
    {KC_HOME, "Home"},
    {KC_PGUP, "PageUp"},
    {KC_END, "End"},
    {KC_PGDOWN, "PageDown"},
    {KC_INSERT, "Insert"},
    {KC_PAUSE, "Pause"},
    {KC_BREAK, "Break"},
    {KC_BEGIN, "Begin"},
};
struct savefile_getter_impl {
  ang_dir* d;
  struct savefile_details details;
  bool have_details;
  bool have_savedir;
};
struct keymap {
  struct keypress key;
  struct keypress* actions;
  bool user;
  struct keymap* next;
};
typedef struct {
  const char* (*name)(int gid);
  int (*gcomp)(const void*, const void*);
  int (*group)(int oid);
  void (*summary)(int gid, const int* item_list, int n, int top, int row,
                  int col);
  int maxnum;
  bool easy_know;
} group_funcs;
typedef struct {
  void (*display_member)(int col, int row, bool cursor, int oid);
  void (*lore)(int oid);
  wchar_t* (*xchar)(int oid);
  uint8_t* (*xattr)(int oid);
  const char* (*xtra_prompt)(int oid);
  void (*xtra_act)(struct keypress ch, int oid);
  bool is_visual;
} member_funcs;
typedef struct join {
  int oid;
  int gid;
} join_t;
struct menu_entry {
  char* text;
  int value;
  menu_row_validity_t valid;
  struct menu_entry* next;
};
struct object_menu_data {
  char label[80];
  char equip_label[80];
  struct object* object;
  char o_name[80];
  char key;
};
enum {
  IGNORE_THIS_ITEM,
  UNIGNORE_THIS_ITEM,
  IGNORE_THIS_FLAVOR,
  UNIGNORE_THIS_FLAVOR,
  IGNORE_THIS_EGO,
  UNIGNORE_THIS_EGO,
  IGNORE_THIS_QUALITY
};
typedef struct {
  struct object_kind* kind;
  bool aware;
} ignore_choice;
typedef struct {
  int tval;
  const char* desc;
} tval_desc;
struct panel_line {
  uint8_t attr;
  const char* label;
  char value[20];
};
struct panel {
  size_t len;
  size_t max;
  struct panel_line* lines;
};
struct smithing_menu_data {
  struct object* obj;
};
struct property_info {
  struct obj_property* prop;
  bool negative;
};
struct numbers_menu_entry {
  enum smithing_numbers_mod_index index;
  const char* name;
};
struct song_menu_info {
  struct song* song;
  bool swap;
};
struct target_aux_state {
  char coord_desc[20];
  const char* phrase1;
  const char* phrase2;
  struct loc grid;
  ui_event press;
  int mode;
  bool boring;
};
struct visuals_color_cycle {
  uint8_t* steps;
  size_t max_steps;
  char* cycle_name;
  uint8_t invalid_color;
};
struct visuals_cycle_group {
  struct visuals_color_cycle** cycles;
  size_t max_cycles;
  char* group_name;
};
struct visuals_cycler {
  struct visuals_cycle_group** groups;
  size_t max_groups;
};
DATA struct {
  struct visuals_color_cycle** race;
  size_t max_entries;
  size_t alloc_size;
}* visuals_color_cycles_by_race = NULL;
struct visuals_flicker {
  uint8_t* cycles;
  size_t max_cycles;
  size_t colors_per_cycle;
};
struct visuals_parse_context {
  size_t flicker_cycle_index;
  size_t flicker_color_index;
  struct visuals_color_cycle** cycles;
  size_t max_cycles;
  size_t cycles_index;
  size_t cycle_step_index;
  char** group_names;
  size_t max_groups;
  struct visuals_color_cycle** group_cycles;
  size_t max_group_cycles;
};
typedef struct dice_expression_entry_s {
  const char* name;
  const expression_t* expression;
} dice_expression_entry_t;
struct dice_s {
  int b, x, y, m;
  bool ex_b, ex_x, ex_y, ex_m;
  dice_expression_entry_t* expressions;
};
typedef enum dice_state_e {
  DICE_STATE_START,
  DICE_STATE_BASE_DIGIT,
  DICE_STATE_FLUSH_BASE,
  DICE_STATE_DICE_DIGIT,
  DICE_STATE_FLUSH_DICE,
  DICE_STATE_SIDE_DIGIT,
  DICE_STATE_FLUSH_SIDE,
  DICE_STATE_BONUS,
  DICE_STATE_BONUS_DIGIT,
  DICE_STATE_FLUSH_BONUS,
  DICE_STATE_VAR,
  DICE_STATE_VAR_CHAR,
  DICE_STATE_FLUSH_ALL,
  DICE_STATE_MAX,
} dice_state_t;
typedef enum dice_input_e {
  DICE_INPUT_AMP,
  DICE_INPUT_MINUS,
  DICE_INPUT_BASE,
  DICE_INPUT_DICE,
  DICE_INPUT_BONUS,
  DICE_INPUT_VAR,
  DICE_INPUT_DIGIT,
  DICE_INPUT_UPPER,
  DICE_INPUT_NULL,
  DICE_INPUT_MAX,
} dice_input_t;
struct dict_list_entry {
  void* key;
  void* value;
  struct dict_list_entry* next;
};
struct dict_impl {
  uint32_t (*key_hasher)(const void* key);
  int (*key_comparer)(const void* a, const void* b);
  void (*key_freer)(void* key);
  void (*value_freer)(void* value);
  struct dict_list_entry* lists[512];
};
struct expression_operation_s {
  uint8_t operator;
  int16_t operand;
};
struct expression_s {
  expression_base_value_f base_value;
  size_t operation_count;
  size_t operations_size;
  expression_operation_t* operations;
  int32_t fixed_base;
};
typedef enum expression_operator_e {
  OPERATOR_NONE,
  OPERATOR_ADD,
  OPERATOR_SUB,
  OPERATOR_MUL,
  OPERATOR_DIV,
  OPERATOR_NEG,
} expression_operator_t;
typedef enum expression_state_e {
  EXPRESSION_STATE_START,
  EXPRESSION_STATE_OPERATOR,
  EXPRESSION_STATE_OPERAND,
  EXPRESSION_STATE_MAX,
} expression_state_t;
typedef enum expression_input_e {
  EXPRESSION_INPUT_INVALID,
  EXPRESSION_INPUT_NEEDS_OPERANDS,
  EXPRESSION_INPUT_UNARY_OPERATOR,
  EXPRESSION_INPUT_VALUE,
  EXPRESSION_INPUT_MAX,
} expression_input_t;
struct ang_file {
  FILE* fh;
  char* fname;
  file_mode mode;
};
struct ang_dir {
  DIR* d;
  char* dirname;
  bool only_files;
};
struct textblock {
  wchar_t* text;
  int* attrs;
  size_t strlen;
  size_t size;
};
struct rect_s {
  int x, y;
  int cx, cy;
};
typedef struct rect_s rect_t, *rect_ptr;
typedef void debug_hook(const char*);
typedef unsigned short name_probs[26 + 1][26 + 1][27 + 1];
typedef size_t status_f(int row, int col);
typedef void (*place_thing_func)(struct chunk* c, struct loc grid,
                                 struct tutorial_section_sym_val* val);
typedef void (*Signal_Handler_t)(int);

typedef void (*project_monster_handler_f)(project_monster_handler_context_t*);
typedef void (*project_object_handler_f)(project_object_handler_context_t*);
typedef void (*project_player_handler_f)(project_player_handler_context_t*);
typedef void (*dump_func)(ang_file*);
typedef bool (*target_aux_handler)(struct chunk* c, struct player* p,
                                   struct target_aux_state* auxst);
