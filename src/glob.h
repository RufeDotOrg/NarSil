struct alloc_entry {
  int index;
  int level;
  int prob1;
  int prob2;
  int prob3;
};
typedef int errr;
typedef uint8_t bitflag;
typedef struct color_type color_type;
struct color_type {
  char index_char;
  char name[32];
  uint8_t color_translate[9];
};
typedef struct random {
  int base;
  int dice;
  int sides;
  int m_bonus;
} random_value;
typedef struct random_chance_s {
  int32_t numerator;
  int32_t denominator;
} random_chance;
typedef enum { MINIMISE, AVERAGE, MAXIMISE, EXTREMIFY, RANDOMISE } aspect;
struct loc {
  int x;
  int y;
};
typedef struct grouper grouper;
struct grouper {
  int tval;
  const char* name;
};
struct point_set {
  int n;
  int allocated;
  struct loc* pts;
};
struct source {
  enum {
    SRC_NONE,
    SRC_TRAP,
    SRC_PLAYER,
    SRC_MONSTER,
    SRC_OBJECT,
    SRC_CHEST_TRAP,
    SRC_GRID
  } what;
  union {
    struct trap* trap;
    int monster;
    struct object* object;
    struct chest_trap* chest_trap;
    struct loc grid;
  } which;
};
typedef enum game_event_type {
  EVENT_MAP = 0,
  EVENT_NAME,
  EVENT_STATS,
  EVENT_SKILLS,
  EVENT_HP,
  EVENT_MANA,
  EVENT_MELEE,
  EVENT_ARCHERY,
  EVENT_ARMOR,
  EVENT_EXPERIENCE,
  EVENT_EXP_CHANGE,
  EVENT_SONG,
  EVENT_MONSTERHEALTH,
  EVENT_DUNGEONLEVEL,
  EVENT_PLAYERSPEED,
  EVENT_RACE_CLASS,
  EVENT_STATUS,
  EVENT_LIGHT,
  EVENT_STATE,
  EVENT_PLAYERMOVED,
  EVENT_SEEFLOOR,
  EVENT_EXPLOSION,
  EVENT_BOLT,
  EVENT_MISSILE,
  EVENT_HIT,
  EVENT_INVENTORY,
  EVENT_EQUIPMENT,
  EVENT_ITEMLIST,
  EVENT_MONSTERLIST,
  EVENT_MONSTERTARGET,
  EVENT_OBJECTTARGET,
  EVENT_MESSAGE,
  EVENT_COMBAT_RESET,
  EVENT_COMBAT_ATTACK,
  EVENT_COMBAT_DAMAGE,
  EVENT_COMBAT_DISPLAY,
  EVENT_SOUND,
  EVENT_BELL,
  EVENT_USE_STORE,
  EVENT_STORECHANGED,
  EVENT_INPUT_FLUSH,
  EVENT_MESSAGE_FLUSH,
  EVENT_CHECK_INTERRUPT,
  EVENT_REFRESH,
  EVENT_NEW_LEVEL_DISPLAY,
  EVENT_COMMAND_REPEAT,
  EVENT_ANIMATE,
  EVENT_CHEAT_DEATH,
  EVENT_POEM,
  EVENT_DEATH,
  EVENT_INITSTATUS,
  EVENT_STATPOINTS,
  EVENT_SKILLPOINTS,
  EVENT_ENTER_INIT,
  EVENT_LEAVE_INIT,
  EVENT_ENTER_BIRTH,
  EVENT_LEAVE_BIRTH,
  EVENT_ENTER_GAME,
  EVENT_LEAVE_GAME,
  EVENT_ENTER_WORLD,
  EVENT_LEAVE_WORLD,
  EVENT_ENTER_STORE,
  EVENT_LEAVE_STORE,
  EVENT_ENTER_DEATH,
  EVENT_LEAVE_DEATH,
  EVENT_GEN_LEVEL_START,
  EVENT_GEN_LEVEL_END,
  EVENT_GEN_ROOM_START,
  EVENT_GEN_ROOM_CHOOSE_SIZE,
  EVENT_GEN_ROOM_CHOOSE_SUBTYPE,
  EVENT_GEN_ROOM_END,
  EVENT_GEN_TUNNEL_FINISHED,
  EVENT_END
} game_event_type;
typedef enum tunnel_direction_type {
  TUNNEL_HOR,
  TUNNEL_VER,
  TUNNEL_BENT
} tunnel_direction_type;
typedef enum tunnel_type {
  TUNNEL_ROOM_TO_ROOM,
  TUNNEL_ROOM_TO_CORRIDOR,
  TUNNEL_DESPERATE
} tunnel_type;
typedef union {
  struct loc point;
  const char* string;
  bool flag;
  struct {
    const char* msg;
    int type;
  } message;
  struct {
    bool reset;
    const char* hint;
    int n_choices;
    int initial_choice;
    const char** choices;
    const char** helptexts;
    void* xtra;
  } birthstage;
  struct {
    const int* points;
    const int* inc_points;
    int remaining;
  } points;
  struct {
    const int* exp;
    const int* inc_exp;
    int remaining;
  } exp;
  struct {
    int proj_type;
    int num_grids;
    int* distance_to_grid;
    bool drawing;
    bool* player_sees_grid;
    struct loc* blast_grid;
    struct loc centre;
  } explosion;
  struct {
    int proj_type;
    bool drawing;
    bool seen;
    bool beam;
    int oy;
    int ox;
    int y;
    int x;
  } bolt;
  struct {
    struct object* obj;
    bool seen;
    int y;
    int x;
  } missile;
  struct {
    int dam;
    int dam_type;
    bool fatal;
    struct loc grid;
  } hit;
  struct {
    int h, w;
  } size;
  struct {
    tunnel_type t;
    tunnel_direction_type dir;
    int vlength, hlength;
  } tunnel;
  struct {
    struct source attacker;
    struct source defender;
    bool vis;
    int att;
    int att_roll;
    int evn;
    int evn_roll;
    bool melee;
  } combat_attack;
  struct {
    int dd;
    int ds;
    int dam;
    int pd;
    int ps;
    int prot;
    int prt_percent;
    int dam_type;
    bool melee;
  } combat_damage;
  struct {
    const char* filename;
    struct textblock* text;
    int row, col;
  } verse;
} game_event_data;
typedef void game_event_handler(game_event_type type, game_event_data* data,
                                void* user);
enum {
  MSG_GENERIC,
  MSG_BIRTH,
  MSG_HIT,
  MSG_MISS,
  MSG_FLEE,
  MSG_DROP,
  MSG_KILL,
  MSG_LEVEL,
  MSG_DEATH,
  MSG_STUDY,
  MSG_TELEPORT,
  MSG_SHOOT,
  MSG_QUAFF,
  MSG_ZAP_ROD,
  MSG_WALK,
  MSG_TPOTHER,
  MSG_HITWALL,
  MSG_EAT,
  MSG_STORE1,
  MSG_STORE2,
  MSG_STORE3,
  MSG_STORE4,
  MSG_DIG,
  MSG_OPENDOOR,
  MSG_SHUTDOOR,
  MSG_TPLEVEL,
  MSG_BELL,
  MSG_NOTHING_TO_OPEN,
  MSG_LOCKPICK_FAIL,
  MSG_STAIRS_DOWN,
  MSG_HITPOINT_WARN,
  MSG_ACT_ARTIFACT,
  MSG_USE_STAFF,
  MSG_DESTROY,
  MSG_MON_HIT,
  MSG_MON_TOUCH,
  MSG_MON_PUNCH,
  MSG_MON_KICK,
  MSG_MON_CLAW,
  MSG_MON_BITE,
  MSG_MON_STING,
  MSG_MON_BUTT,
  MSG_MON_CRUSH,
  MSG_MON_ENGULF,
  MSG_MON_CRAWL,
  MSG_MON_DROOL,
  MSG_MON_SPIT,
  MSG_MON_GAZE,
  MSG_MON_WAIL,
  MSG_MON_SPORE,
  MSG_MON_BEG,
  MSG_MON_INSULT,
  MSG_MON_MOAN,
  MSG_RECOVER,
  MSG_BLIND,
  MSG_CONFUSED,
  MSG_POISONED,
  MSG_AFRAID,
  MSG_PARALYZED,
  MSG_DRUGGED,
  MSG_SPEED,
  MSG_SLOW,
  MSG_SHIELD,
  MSG_BLESSED,
  MSG_HERO,
  MSG_BERSERK,
  MSG_BOLD,
  MSG_PROT_EVIL,
  MSG_INVULN,
  MSG_SEE_INVIS,
  MSG_INFRARED,
  MSG_RES_ACID,
  MSG_RES_ELEC,
  MSG_RES_FIRE,
  MSG_RES_COLD,
  MSG_RES_POIS,
  MSG_STUN,
  MSG_CUT,
  MSG_STAIRS_UP,
  MSG_STORE_ENTER,
  MSG_STORE_LEAVE,
  MSG_STORE_HOME,
  MSG_MONEY1,
  MSG_MONEY2,
  MSG_MONEY3,
  MSG_SHOOT_HIT,
  MSG_STORE5,
  MSG_LOCKPICK,
  MSG_DISARM,
  MSG_IDENT_BAD,
  MSG_IDENT_EGO,
  MSG_IDENT_ART,
  MSG_BR_ELEMENTS,
  MSG_BR_FROST,
  MSG_BR_ELEC,
  MSG_BR_ACID,
  MSG_BR_GAS,
  MSG_BR_FIRE,
  MSG_BR_DISEN,
  MSG_BR_CHAOS,
  MSG_BR_SHARDS,
  MSG_BR_SOUND,
  MSG_BR_LIGHT,
  MSG_BR_DARK,
  MSG_BR_NETHER,
  MSG_BR_NEXUS,
  MSG_BR_TIME,
  MSG_BR_INERTIA,
  MSG_BR_GRAVITY,
  MSG_BR_PLASMA,
  MSG_BR_FORCE,
  MSG_SUM_MONSTER,
  MSG_SUM_AINU,
  MSG_SUM_UNDEAD,
  MSG_SUM_ANIMAL,
  MSG_SUM_SPIDER,
  MSG_SUM_HOUND,
  MSG_SUM_HYDRA,
  MSG_SUM_DEMON,
  MSG_SUM_DRAGON,
  MSG_SUM_HI_UNDEAD,
  MSG_SUM_HI_DRAGON,
  MSG_SUM_HI_DEMON,
  MSG_SUM_WRAITH,
  MSG_SUM_UNIQUE,
  MSG_WIELD,
  MSG_QUIVER,
  MSG_CURSED,
  MSG_RUNE,
  MSG_HUNGRY,
  MSG_NOTICE,
  MSG_AMBIENT_DAY,
  MSG_AMBIENT_NITE,
  MSG_AMBIENT_DNG1,
  MSG_AMBIENT_DNG2,
  MSG_AMBIENT_DNG3,
  MSG_AMBIENT_DNG4,
  MSG_AMBIENT_DNG5,
  MSG_CREATE_TRAP,
  MSG_SHRIEK,
  MSG_CAST_FEAR,
  MSG_HIT_GOOD,
  MSG_HIT_GREAT,
  MSG_HIT_SUPERB,
  MSG_HIT_HI_GREAT,
  MSG_HIT_HI_SUPERB,
  MSG_SPELL,
  MSG_PRAYER,
  MSG_KILL_UNIQUE,
  MSG_KILL_KING,
  MSG_DRAIN_STAT,
  MSG_MULTIPLY,
  MSG_SCRAMBLE,
  MSG_MAX,
  SOUND_MAX = MSG_MAX,
};
typedef unsigned int guid;
typedef struct ang_file ang_file;
typedef enum { MODE_WRITE, MODE_READ, MODE_APPEND } file_mode;
typedef enum { FTYPE_TEXT = 1, FTYPE_SAVE, FTYPE_RAW, FTYPE_HTML } file_type;
typedef struct ang_dir ang_dir;
enum {
  TV_NULL,
  TV_NOTE,
  TV_USELESS,
  TV_METAL,
  TV_CHEST,
  TV_ARROW,
  TV_BOW,
  TV_DIGGING,
  TV_HAFTED,
  TV_POLEARM,
  TV_SWORD,
  TV_BOOTS,
  TV_GLOVES,
  TV_HELM,
  TV_CROWN,
  TV_SHIELD,
  TV_CLOAK,
  TV_SOFT_ARMOR,
  TV_MAIL,
  TV_LIGHT,
  TV_AMULET,
  TV_RING,
  TV_STAFF,
  TV_HORN,
  TV_POTION,
  TV_FLASK,
  TV_FOOD,
  TV_HERB,
  TV_EASTER,
  TV_MAX
};
enum {
  OF_NONE,
  OF_SUST_STR,
  OF_SUST_DEX,
  OF_SUST_CON,
  OF_SUST_GRA,
  OF_PROT_FEAR,
  OF_PROT_BLIND,
  OF_PROT_CONF,
  OF_PROT_STUN,
  OF_PROT_HALLU,
  OF_SLOW_DIGEST,
  OF_REGEN,
  OF_SEE_INVIS,
  OF_FREE_ACT,
  OF_RADIANCE,
  OF_LIGHT,
  OF_SPEED,
  OF_SHARPNESS,
  OF_SHARPNESS2,
  OF_VAMPIRIC,
  OF_BURNS_OUT,
  OF_TAKES_FUEL,
  OF_NO_FUEL,
  OF_COWARDICE,
  OF_HUNGER,
  OF_DARKNESS,
  OF_DANGER,
  OF_HAUNTED,
  OF_AGGRAVATE,
  OF_CURSED,
  OF_DIG_1,
  OF_DIG_2,
  OF_THROWING,
  OF_INDESTRUCTIBLE,
  OF_NO_SMITHING,
  OF_NO_RANDOM,
  OF_MITHRIL,
  OF_AXE,
  OF_POLEARM,
  OF_ENCHANTABLE,
  OF_HAND_AND_A_HALF,
  OF_TWO_HANDED,
  OF_MAX,
};
enum {
  KF_NONE,
  KF_INSTA_ART,
  KF_QUEST_ART,
  KF_SMITH_ART,
  KF_GOOD,
  KF_SHOW_DICE,
  KF_EASY_KNOW,
  KF_MAX,
};
enum {
  OBJ_MOD_STR,
  OBJ_MOD_DEX,
  OBJ_MOD_CON,
  OBJ_MOD_GRA,
  OBJ_MOD_MELEE,
  OBJ_MOD_ARCHERY,
  OBJ_MOD_EVASION,
  OBJ_MOD_STEALTH,
  OBJ_MOD_PERCEPTION,
  OBJ_MOD_WILL,
  OBJ_MOD_SMITHING,
  OBJ_MOD_SONG,
  OBJ_MOD_DAMAGE_SIDES,
  OBJ_MOD_TUNNEL,
  OBJ_MOD_MAX
};
enum object_flag_type {
  OFT_NONE = 0,
  OFT_SUST,
  OFT_PROT,
  OFT_MISC,
  OFT_BASIC,
  OFT_MELEE,
  OFT_BAD,
  OFT_MAX
};
enum object_flag_id { OFID_NONE = 0, OFID_NORMAL, OFID_TIMED, OFID_WIELD };
enum obj_property_type {
  OBJ_PROPERTY_NONE = 0,
  OBJ_PROPERTY_STAT,
  OBJ_PROPERTY_SKILL,
  OBJ_PROPERTY_MOD,
  OBJ_PROPERTY_FLAG,
  OBJ_PROPERTY_SLAY,
  OBJ_PROPERTY_BRAND,
  OBJ_PROPERTY_IGNORE,
  OBJ_PROPERTY_RESIST,
  OBJ_PROPERTY_VULN,
  OBJ_PROPERTY_MAX
};
struct obj_property {
  struct obj_property* next;
  int type;
  int subtype;
  int id_type;
  int index;
  int smith_cat;
  int smith_diff;
  int smith_cost_type;
  int smith_cost;
  bool smith_exclude_base;
  char* name;
  char* adjective;
  char* neg_adj;
  char* msg;
  char* slay_msg;
  char* desc;
};
typedef size_t quark_t;
enum expression_err_e {
  EXPRESSION_ERR_GENERIC = -1,
  EXPRESSION_ERR_INVALID_OPERATOR = -2,
  EXPRESSION_ERR_EXPECTED_OPERATOR = -3,
  EXPRESSION_ERR_EXPECTED_OPERAND = -4,
  EXPRESSION_ERR_DIVIDE_BY_ZERO = -5,
  EXPRESSION_ERR_OPERAND_OUT_OF_BOUNDS = -6
};
typedef struct expression_operation_s expression_operation_t;
typedef struct expression_s expression_t;
typedef int32_t (*expression_base_value_f)(void);
typedef struct dice_s dice_t;
enum { ELEM_ACID, ELEM_FIRE, ELEM_COLD, ELEM_POIS, ELEM_DARK, ELEM_MAX };
enum {
  ORIGIN_NONE,
  ORIGIN_FLOOR,
  ORIGIN_CHEST,
  ORIGIN_SPECIAL,
  ORIGIN_PIT,
  ORIGIN_VAULT,
  ORIGIN_LABYRINTH,
  ORIGIN_CAVERN,
  ORIGIN_RUBBLE,
  ORIGIN_MIXED,
  ORIGIN_DROP,
  ORIGIN_DROP_SPECIAL,
  ORIGIN_DROP_PIT,
  ORIGIN_DROP_VAULT,
  ORIGIN_STATS,
  ORIGIN_ACQUIRE,
  ORIGIN_STORE,
  ORIGIN_STOLEN,
  ORIGIN_BIRTH,
  ORIGIN_CHEAT,
  ORIGIN_DROP_BREED,
  ORIGIN_DROP_SUMMON,
  ORIGIN_DROP_UNKNOWN,
  ORIGIN_DROP_POLY,
  ORIGIN_DROP_MIMIC,
  ORIGIN_DROP_WIZARD,
  ORIGIN_MAX
};
struct poss_item {
  uint32_t kidx;
  struct poss_item* next;
};
struct effect {
  struct effect* next;
  uint16_t index;
  dice_t* dice;
  int subtype;
  int radius;
  int other;
  char* msg;
};
struct chest_trap {
  struct chest_trap* next;
  char* name;
  char* code;
  uint8_t flag;
  struct effect* effect;
  bool destroy;
  char* msg;
  char* msg_save;
  char* msg_bad;
  char* msg_death;
};
struct brand {
  char* code;
  char* name;
  char* desc;
  int resist_flag;
  int vuln_flag;
  int dice;
  int vuln_dice;
  struct brand* next;
};
struct slay {
  char* code;
  char* name;
  int race_flag;
  int dice;
  struct slay* next;
};
enum {
  EL_INFO_HATES = 0x01,
  EL_INFO_IGNORE = 0x02,
  EL_INFO_RANDOM = 0x04,
};
struct element_info {
  int16_t res_level;
  bitflag flags;
};
struct allocation {
  struct allocation* next;
  uint8_t locale;
  uint8_t chance;
};
struct object_base {
  char* name;
  int tval;
  struct object_base* next;
  int attr;
  bitflag
      flags[(((OF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  bitflag kind_flags[(((KF_MAX) + (sizeof(bitflag) * 8) - 1) /
                      (sizeof(bitflag) * 8))];
  struct element_info el_info[ELEM_MAX];
  bool smith_attack_valid;
  int smith_attack_artistry;
  int smith_attack_artefact;
  bitflag smith_flags[(((OF_MAX) + (sizeof(bitflag) * 8) - 1) /
                       (sizeof(bitflag) * 8))];
  struct element_info smith_el_info[ELEM_MAX];
  int smith_modifiers[OBJ_MOD_MAX];
  bool* smith_slays;
  bool* smith_brands;
  int break_perc;
  int max_stack;
  int num_svals;
};
struct object_kind {
  char* name;
  char* text;
  struct object_base* base;
  struct object_kind* next;
  uint32_t kidx;
  int tval;
  int sval;
  int pval;
  random_value special1;
  int special2;
  int att;
  int evn;
  int dd;
  int ds;
  int pd;
  int ps;
  int weight;
  int cost;
  bitflag
      flags[(((OF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  bitflag kind_flags[(((KF_MAX) + (sizeof(bitflag) * 8) - 1) /
                      (sizeof(bitflag) * 8))];
  random_value modifiers[OBJ_MOD_MAX];
  struct element_info el_info[ELEM_MAX];
  bool* brands;
  bool* slays;
  uint8_t d_attr;
  wchar_t d_char;
  struct allocation* alloc;
  struct effect* effect;
  char* effect_msg;
  struct effect* thrown_effect;
  struct ability* abilities;
  int level;
  random_value charge;
  int gen_mult_prob;
  random_value stack_size;
  struct flavor* flavor;
  quark_t note_aware;
  quark_t note_unaware;
  bool aware;
  bool tried;
  uint8_t ignore;
  bool everseen;
};
enum artifact_category {
  ARTIFACT_NORMAL,
  ARTIFACT_SELF_MADE,
  ARTIFACT_ULTIMATE,
  ARTIFACT_CATEGORY_MAX
};
struct artifact {
  char* name;
  char* text;
  uint32_t aidx;
  enum artifact_category category;
  struct artifact* next;
  int tval;
  int sval;
  int pval;
  int16_t att;
  int16_t evn;
  uint8_t dd;
  uint8_t ds;
  uint8_t pd;
  uint8_t ps;
  int weight;
  int cost;
  bitflag
      flags[(((OF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  int modifiers[OBJ_MOD_MAX];
  struct element_info el_info[ELEM_MAX];
  bool* brands;
  bool* slays;
  struct ability* abilities;
  uint8_t level;
  uint8_t rarity;
  uint8_t d_attr;
};
struct artifact_upkeep {
  uint32_t aidx;
  bool created;
  bool seen;
  bool everseen;
};
struct ego_item {
  struct ego_item* next;
  char* name;
  char* text;
  uint32_t eidx;
  int cost;
  bitflag
      flags[(((OF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  bitflag kind_flags[(((KF_MAX) + (sizeof(bitflag) * 8) - 1) /
                      (sizeof(bitflag) * 8))];
  int modifiers[OBJ_MOD_MAX];
  int min_modifiers[OBJ_MOD_MAX];
  struct element_info el_info[ELEM_MAX];
  bool* brands;
  bool* slays;
  int rarity;
  int level;
  int alloc_max;
  struct poss_item* poss_items;
  struct ability* abilities;
  uint8_t att;
  uint8_t dd;
  uint8_t ds;
  uint8_t evn;
  uint8_t pd;
  uint8_t ps;
  uint8_t pval;
  bool aware;
  bool everseen;
};
struct drop {
  struct drop* next;
  char* name;
  int idx;
  bool chest;
  struct poss_item* poss;
  struct poss_item* imposs;
};
enum {
  OBJ_NOTICE_WORN = 0x01,
  OBJ_NOTICE_ASSESSED = 0x02,
  OBJ_NOTICE_IGNORE = 0x04,
  OBJ_NOTICE_IMAGINED = 0x08,
  OBJ_NOTICE_PICKUP = 0x10,
  OBJ_NOTICE_EMPTY = 0x20,
};
enum {
  OBJ_PSEUDO_NONE = 0,
  OBJ_PSEUDO_AVERAGE,
  OBJ_PSEUDO_CURSED_ART,
  OBJ_PSEUDO_CURSED_SPEC,
  OBJ_PSEUDO_CURSED,
  OBJ_PSEUDO_SPECIAL,
  OBJ_PSEUDO_ARTEFACT,
  OBJ_PSEUDO_UNCURSED,
  OBJ_PSEUDO_MAX,
};
struct object {
  struct object_kind* kind;
  struct object_kind* image_kind;
  struct ego_item* ego;
  const struct artifact* artifact;
  struct object* prev;
  struct object* next;
  struct object* known;
  uint16_t oidx;
  struct loc grid;
  uint8_t tval;
  uint8_t sval;
  int16_t pval;
  int16_t weight;
  int16_t att;
  int16_t evn;
  uint8_t dd;
  uint8_t ds;
  uint8_t pd;
  uint8_t ps;
  bitflag
      flags[(((OF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  int16_t modifiers[OBJ_MOD_MAX];
  struct element_info el_info[ELEM_MAX];
  bool* brands;
  bool* slays;
  int16_t timeout;
  uint8_t used;
  uint8_t number;
  bitflag notice;
  uint8_t pseudo;
  int16_t held_m_idx;
  uint8_t origin;
  uint8_t origin_depth;
  struct monster_race* origin_race;
  quark_t note;
  struct ability* abilities;
};
static struct object const OBJECT_NULL = {
    .kind = NULL,
    .image_kind = NULL,
    .ego = NULL,
    .artifact = NULL,
    .prev = NULL,
    .next = NULL,
    .known = NULL,
    .oidx = 0,
    .grid = {0, 0},
    .tval = 0,
    .sval = 0,
    .pval = 0,
    .weight = 0,
    .att = 0,
    .evn = 0,
    .dd = 0,
    .ds = 0,
    .pd = 0,
    .ps = 0,
    .flags = {0},
    .modifiers = {0},
    .el_info = {{0, 0}},
    .brands = NULL,
    .slays = NULL,
    .timeout = 0,
    .used = 0,
    .number = 0,
    .notice = 0,
    .pseudo = 0,
    .held_m_idx = 0,
    .origin = 0,
    .origin_depth = 0,
    .origin_race = NULL,
    .note = 0,
    .abilities = NULL,
};
struct flavor {
  char* text;
  struct flavor* next;
  unsigned int fidx;
  uint8_t tval;
  uint8_t sval;
  uint8_t d_attr;
  wchar_t d_char;
};
typedef bool (*item_tester)(const struct object*);
enum { OP_INTERFACE = 0, OP_BIRTH, OP_CHEAT, OP_SCORE, OP_SPECIAL, OP_MAX };
enum {
  OPT_none,
  OPT_hjkl_movement,
  OPT_use_sound,
  OPT_quick_messages,
  OPT_angband_keyset,
  OPT_stop_singing_on_rest,
  OPT_forgo_attacking_unwary,
  OPT_beep,
  OPT_highlight_player,
  OPT_highlight_target,
  OPT_highlight_unwary,
  OPT_solid_walls,
  OPT_hybrid_walls,
  OPT_animate_flicker,
  OPT_center_player,
  OPT_run_avoid_center,
  OPT_auto_more,
  OPT_mouse_movement,
  OPT_display_hits,
  OPT_pickup_always,
  OPT_pickup_inven,
  OPT_show_flavors,
  OPT_cheat_peek,
  OPT_score_peek,
  OPT_cheat_hear,
  OPT_score_hear,
  OPT_cheat_room,
  OPT_score_room,
  OPT_cheat_xtra,
  OPT_score_xtra,
  OPT_cheat_know,
  OPT_score_know,
  OPT_cheat_live,
  OPT_score_live,
  OPT_cheat_monsters,
  OPT_score_monsters,
  OPT_cheat_noise,
  OPT_score_noise,
  OPT_cheat_scent,
  OPT_score_scent,
  OPT_cheat_light,
  OPT_score_light,
  OPT_cheat_skill_rolls,
  OPT_score_skill_rolls,
  OPT_cheat_timestop,
  OPT_score_timestop,
  OPT_birth_discon_stairs,
  OPT_birth_force_descend,
  OPT_birth_no_artifacts,
  OPT_MAX
};
struct player_options {
  bool opt[OPT_MAX];
  uint8_t hitpoint_warn;
  uint8_t lazymove_delay;
  uint8_t delay_factor;
  uint8_t name_suffix;
};
enum { STAT_STR, STAT_DEX, STAT_CON, STAT_GRA, STAT_MAX };
enum { PF_NONE, PF_BLADE_PROFICIENCY, PF_AXE_PROFICIENCY, PF_MAX };
enum {
  ACTION_NOTHING = 0,
  ACTION_NW = 7,
  ACTION_N = 8,
  ACTION_NE = 9,
  ACTION_W = 4,
  ACTION_STAND = 5,
  ACTION_E = 6,
  ACTION_SW = 1,
  ACTION_S = 2,
  ACTION_SE = 3,
  ACTION_MISC = 10
};
enum {
  DIGGING_RUBBLE = 0,
  DIGGING_MAGMA,
  DIGGING_QUARTZ,
  DIGGING_GRANITE,
  DIGGING_DOORS,
  DIGGING_MAX
};
enum {
  SKILL_MELEE,
  SKILL_ARCHERY,
  SKILL_EVASION,
  SKILL_STEALTH,
  SKILL_PERCEPTION,
  SKILL_WILL,
  SKILL_SMITHING,
  SKILL_SONG,
  SKILL_MAX
};
struct quest {
  struct quest* next;
  uint8_t index;
  char* name;
  uint8_t level;
  struct monster_race* race;
  int cur_num;
  int max_num;
};
struct song {
  struct song* next;
  char* name;
  char* verb;
  char* desc;
  char* msg;
  struct alt_song_desc* alt_desc;
  int index;
  int bonus_mult;
  int bonus_div;
  int bonus_min;
  int noise;
  bool extend;
  struct effect* effect;
};
enum song_index { SONG_MAIN, SONG_MINOR, SONG_MAX };
struct equip_slot {
  struct equip_slot* next;
  uint16_t type;
  char* name;
  struct object* obj;
};
struct player_body {
  struct player_body* next;
  char* name;
  uint16_t count;
  struct equip_slot* slots;
};
struct start_item {
  int tval;
  int sval;
  int min;
  int max;
  struct start_item* next;
};
struct player_sex {
  struct player_sex* next;
  const char* name;
  const char* possessive;
  const char* poetry_name;
  unsigned int sidx;
};
struct player_race {
  struct player_race* next;
  const char* name;
  const char* desc;
  unsigned int ridx;
  int b_age;
  int m_age;
  int base_hgt;
  int mod_hgt;
  int base_wgt;
  int mod_wgt;
  struct start_item* start_items;
  int body;
  int stat_adj[STAT_MAX];
  int skill_adj[SKILL_MAX];
  bitflag
      pflags[(((PF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  struct history_chart* history;
};
struct player_house {
  struct player_house* next;
  struct player_race* race;
  const char* name;
  const char* alt_name;
  const char* short_name;
  const char* desc;
  unsigned int hidx;
  int stat_adj[STAT_MAX];
  int skill_adj[SKILL_MAX];
  bitflag
      pflags[(((PF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
};
struct player_ability {
  struct player_ability* next;
  uint16_t index;
  char* type;
  char* name;
  char* desc;
  int group;
  int value;
};
struct ability_info {
  bool innate;
  bool active;
};
struct history_entry {
  struct history_entry* next;
  struct history_chart* succ;
  int isucc;
  int roll;
  char* text;
};
struct history_chart {
  struct history_chart* next;
  struct history_entry* entries;
  unsigned int idx;
};
struct player_history {
  struct history_info* entries;
  size_t next;
  size_t length;
};
struct player_state {
  int stat_equip_mod[STAT_MAX];
  int stat_misc_mod[STAT_MAX];
  int stat_use[STAT_MAX];
  int skill_stat_mod[SKILL_MAX];
  int skill_equip_mod[SKILL_MAX];
  int skill_misc_mod[SKILL_MAX];
  int skill_use[SKILL_MAX];
  int speed;
  int hunger;
  int ammo_tval;
  int to_mdd;
  int mdd;
  int to_mds;
  int mds;
  int offhand_mel_mod;
  int mdd2;
  int to_ads;
  int mds2;
  int add;
  int ads;
  int p_min;
  int p_max;
  int dig;
  int16_t flags[OF_MAX];
  bitflag
      pflags[(((PF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  struct element_info el_info[ELEM_MAX];
};
struct player_upkeep {
  bool leaping;
  bool riposte;
  bool was_entranced;
  bool knocked_back;
  bool playing;
  bool autosave;
  bool generate_level;
  bool dropping;
  int energy_use;
  int cur_light;
  struct monster* health_who;
  struct monster_race* monster_race;
  struct object* object;
  struct object_kind* object_kind;
  uint32_t notice;
  uint32_t update;
  uint32_t redraw;
  int command_wrk;
  int create_stair;
  bool create_rubble;
  bool force_forge;
  int smithing;
  int resting;
  int running;
  bool running_withpathfind;
  bool running_firststep;
  struct object** inven;
  int total_weight;
  int inven_cnt;
  int equip_cnt;
  int recharge_pow;
};
struct player {
  const struct player_sex* sex;
  const struct player_race* race;
  const struct player_house* house;
  struct loc grid;
  int16_t game_type;
  int16_t age;
  int16_t ht;
  int16_t wt;
  int16_t sc;
  int16_t max_depth;
  int16_t depth;
  int32_t new_exp;
  int32_t exp;
  int32_t turn;
  int32_t encounter_exp;
  int32_t kill_exp;
  int32_t descent_exp;
  int32_t ident_exp;
  int16_t mhp;
  int16_t chp;
  uint16_t chp_frac;
  int16_t msp;
  int16_t csp;
  uint16_t csp_frac;
  int16_t stat_base[STAT_MAX];
  int16_t stat_drain[STAT_MAX];
  int16_t skill_base[SKILL_MAX];
  struct ability* abilities;
  struct ability* item_abilities;
  int16_t last_attack_m_idx;
  int16_t consecutive_attacks;
  int16_t bane_type;
  uint8_t previous_action[6];
  bool attacked;
  bool been_attacked;
  bool focused;
  int16_t* timed;
  int16_t energy;
  uint32_t total_energy;
  uint32_t resting_turn;
  int16_t food;
  uint16_t stairs_taken;
  uint16_t staircasiness;
  uint16_t forge_drought;
  uint16_t forge_count;
  uint8_t stealth_mode;
  uint8_t self_made_arts;
  struct song* song[SONG_MAX];
  int16_t wrath;
  int16_t song_duration;
  int16_t stealth_score;
  int16_t smithing_leftover;
  bool unique_forge_made;
  bool unique_forge_seen;
  bool* vaults;
  uint8_t num_artefacts;
  uint8_t unignoring;
  char full_name[32];
  char died_from[80];
  char* history;
  bool truce;
  bool crown_hint;
  bool crown_shatter;
  bool cursed;
  bool on_the_run;
  bool morgoth_slain;
  uint8_t morgoth_hits;
  bool escaped;
  uint16_t noscore;
  bool is_dead;
  bool wizard;
  bool automaton;
  int16_t player_hp[50];
  int32_t au_birth;
  int16_t stat_birth[STAT_MAX];
  int16_t ht_birth;
  int16_t wt_birth;
  struct player_options opts;
  struct player_history hist;
  struct player_body body;
  struct object* gear;
  struct object* gear_k;
  struct object* obj_k;
  struct chunk* cave;
  struct player_state state;
  struct player_state known_state;
  struct player_upkeep* upkeep;
};
enum {
  DIR_UNKNOWN = 0,
  DIR_NW = 7,
  DIR_N = 8,
  DIR_NE = 9,
  DIR_W = 4,
  DIR_TARGET = 5,
  DIR_NONE = 5,
  DIR_E = 6,
  DIR_SW = 1,
  DIR_S = 2,
  DIR_SE = 3,
  DIR_UP = 10,
  DIR_DOWN = 11
};
enum {
  SQUARE_NONE,
  SQUARE_MARK,
  SQUARE_GLOW,
  SQUARE_VAULT,
  SQUARE_G_VAULT,
  SQUARE_ROOM,
  SQUARE_SEEN,
  SQUARE_VIEW,
  SQUARE_WASSEEN,
  SQUARE_FEEL,
  SQUARE_TRAP,
  SQUARE_INVIS,
  SQUARE_WALL_INNER,
  SQUARE_WALL_OUTER,
  SQUARE_WALL_SOLID,
  SQUARE_CHASM,
  SQUARE_PROJECT,
  SQUARE_HIDDEN,
  SQUARE_TEMP,
  SQUARE_WALL,
  SQUARE_FIRE,
  SQUARE_CLOSE_PLAYER,
  SQUARE_OLD_VIEW,
  SQUARE_OLD_LIT,
  SQUARE_OLD_TORCH,
  SQUARE_MAX
};
enum {
  TF_NONE,
  TF_LOS,
  TF_PROJECT,
  TF_PASSABLE,
  TF_INTERESTING,
  TF_PERMANENT,
  TF_EASY,
  TF_TRAP,
  TF_NO_SCENT,
  TF_NO_FLOW,
  TF_OBJECT,
  TF_TORCH,
  TF_HIDDEN,
  TF_GOLD,
  TF_CLOSABLE,
  TF_FLOOR,
  TF_WALL,
  TF_ROCK,
  TF_GRANITE,
  TF_DOOR_ANY,
  TF_DOOR_CLOSED,
  TF_FORGE,
  TF_DOOR_JAMMED,
  TF_DOOR_LOCKED,
  TF_MAGMA,
  TF_QUARTZ,
  TF_STAIR,
  TF_SHAFT,
  TF_UPSTAIR,
  TF_DOWNSTAIR,
  TF_PIT,
  TF_CHASM,
  TF_MAX
};
struct feature {
  char* name;
  char* desc;
  int fidx;
  struct feature* mimic;
  uint8_t priority;
  uint8_t forge_bonus;
  uint8_t dig;
  uint8_t pit_difficulty;
  bitflag
      flags[(((TF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  uint8_t d_attr;
  wchar_t d_char;
  char* walk_msg;
  char* run_msg;
  char* hurt_msg;
  char* die_msg;
  char* dig_msg;
  char* fail_msg;
  char* str_msg;
  char* confused_msg;
  char* look_prefix;
  char* look_in_preposition;
};
enum grid_light_level {
  LIGHTING_LOS = 0,
  LIGHTING_TORCH,
  LIGHTING_LIT,
  LIGHTING_DARK,
  LIGHTING_MAX
};
struct grid_data {
  uint32_t m_idx;
  uint32_t f_idx;
  struct object_kind* first_kind;
  const struct artifact* first_art;
  struct trap* trap;
  bool multiple_objects;
  enum grid_light_level lighting;
  bool in_view;
  bool is_player;
  bool hallucinate;
  bool rage;
  bool glow;
};
struct square {
  uint8_t feat;
  bitflag* info;
  int light;
  int16_t mon;
  struct object* obj;
  struct trap* trap;
};
struct flow {
  struct loc centre;
  uint16_t** grids;
};
struct connector {
  struct loc grid;
  uint8_t feat;
  bitflag* info;
  struct connector* next;
};
struct chunk {
  char* name;
  int32_t turn;
  int depth;
  int height;
  int width;
  int* feat_count;
  struct loc project_path_ignore;
  struct square** squares;
  struct flow player_noise;
  struct flow monster_noise;
  struct flow scent;
  int scent_age;
  struct object** objects;
  uint16_t obj_max;
  struct monster* monsters;
  uint16_t mon_max;
  uint16_t mon_cnt;
  int mon_current;
  struct monster_group** monster_groups;
  char* vault_name;
};
enum {
  FEAT_NONE,
  FEAT_FLOOR,
  FEAT_CLOSED,
  FEAT_OPEN,
  FEAT_BROKEN,
  FEAT_LESS,
  FEAT_MORE,
  FEAT_LESS_SHAFT,
  FEAT_MORE_SHAFT,
  FEAT_CHASM,
  FEAT_SECRET,
  FEAT_RUBBLE,
  FEAT_QUARTZ,
  FEAT_GRANITE,
  FEAT_PERM,
  FEAT_FORGE,
  FEAT_FORGE_GOOD,
  FEAT_FORGE_UNIQUE,
  FEAT_PIT,
  FEAT_SPIKED_PIT,
  FEAT_MAX
};
typedef bool (*square_predicate)(struct chunk* c, struct loc grid);
typedef enum cmd_code {
  CMD_NULL = 0,
  CMD_LOADFILE,
  CMD_NEWGAME,
  CMD_BIRTH_INIT,
  CMD_BIRTH_RESET,
  CMD_CHOOSE_RACE,
  CMD_CHOOSE_HOUSE,
  CMD_CHOOSE_SEX,
  CMD_BUY_STAT,
  CMD_SELL_STAT,
  CMD_RESET_STATS,
  CMD_REFRESH_STATS,
  CMD_BUY_SKILL,
  CMD_SELL_SKILL,
  CMD_RESET_SKILLS,
  CMD_REFRESH_SKILLS,
  CMD_NAME_CHOICE,
  CMD_HISTORY_CHOICE,
  CMD_ACCEPT_CHARACTER,
  CMD_GO_UP,
  CMD_GO_DOWN,
  CMD_TOGGLE_STEALTH,
  CMD_WALK,
  CMD_JUMP,
  CMD_PATHFIND,
  CMD_INSCRIBE,
  CMD_UNINSCRIBE,
  CMD_AUTOINSCRIBE,
  CMD_TAKEOFF,
  CMD_WIELD,
  CMD_DROP,
  CMD_DESTROY,
  CMD_USE_STAFF,
  CMD_BLOW_HORN,
  CMD_EAT,
  CMD_QUAFF,
  CMD_REFUEL,
  CMD_USE,
  CMD_FIRE,
  CMD_THROW,
  CMD_SMITH,
  CMD_PICKUP,
  CMD_AUTOPICKUP,
  CMD_IGNORE,
  CMD_DISARM,
  CMD_REST,
  CMD_TUNNEL,
  CMD_OPEN,
  CMD_CLOSE,
  CMD_BASH,
  CMD_SING,
  CMD_EXCHANGE,
  CMD_RUN,
  CMD_LEAP,
  CMD_HOLD,
  CMD_ALTER,
  CMD_SLEEP,
  CMD_SKIP,
  CMD_SPOIL_ARTIFACT,
  CMD_SPOIL_MON,
  CMD_SPOIL_MON_BRIEF,
  CMD_SPOIL_OBJ,
  CMD_WIZ_ACQUIRE,
  CMD_WIZ_ADVANCE,
  CMD_WIZ_BANISH,
  CMD_WIZ_CHANGE_ITEM_QUANTITY,
  CMD_WIZ_COLLECT_DISCONNECT_STATS,
  CMD_WIZ_COLLECT_OBJ_MON_STATS,
  CMD_WIZ_COLLECT_PIT_STATS,
  CMD_WIZ_CREATE_ALL_ARTIFACT,
  CMD_WIZ_CREATE_ALL_ARTIFACT_FROM_TVAL,
  CMD_WIZ_CREATE_ALL_OBJ,
  CMD_WIZ_CREATE_ALL_OBJ_FROM_TVAL,
  CMD_WIZ_CREATE_ARTIFACT,
  CMD_WIZ_CREATE_OBJ,
  CMD_WIZ_CREATE_TRAP,
  CMD_WIZ_CURE_ALL,
  CMD_WIZ_DETECT_ALL_LOCAL,
  CMD_WIZ_DETECT_ALL_MONSTERS,
  CMD_WIZ_DISPLAY_KEYLOG,
  CMD_WIZ_DUMP_LEVEL_MAP,
  CMD_WIZ_EDIT_PLAYER_EXP,
  CMD_WIZ_EDIT_PLAYER_START,
  CMD_WIZ_EDIT_PLAYER_STAT,
  CMD_WIZ_HIT_ALL_LOS,
  CMD_WIZ_INCREASE_EXP,
  CMD_WIZ_JUMP_LEVEL,
  CMD_WIZ_LEARN_OBJECT_KINDS,
  CMD_WIZ_MAGIC_MAP,
  CMD_WIZ_PEEK_NOISE_SCENT,
  CMD_WIZ_PERFORM_EFFECT,
  CMD_WIZ_PLAY_ITEM,
  CMD_WIZ_PUSH_OBJECT,
  CMD_WIZ_QUERY_FEATURE,
  CMD_WIZ_QUERY_SQUARE_FLAG,
  CMD_WIZ_QUIT_NO_SAVE,
  CMD_WIZ_RECALL_MONSTER,
  CMD_WIZ_RERATE,
  CMD_WIZ_REROLL_ITEM,
  CMD_WIZ_STAT_ITEM,
  CMD_WIZ_SUMMON_NAMED,
  CMD_WIZ_SUMMON_RANDOM,
  CMD_WIZ_TELEPORT_TO,
  CMD_WIZ_TWEAK_ITEM,
  CMD_WIZ_WIPE_RECALL,
  CMD_WIZ_WIZARD_LIGHT,
  CMD_RETIRE,
  CMD_HELP,
  CMD_REPEAT,
  CMD_COMMAND_MONSTER
} cmd_code;
typedef enum cmd_context {
  CTX_INIT,
  CTX_BIRTH,
  CTX_GAME,
  CTX_DEATH
} cmd_context;
union cmd_arg_data {
  const char* string;
  int choice;
  struct object* obj;
  int number;
  int direction;
  struct loc point;
};
enum cmd_arg_type {
  arg_NONE = 0,
  arg_STRING = 1,
  arg_CHOICE,
  arg_ITEM,
  arg_NUMBER,
  arg_DIRECTION,
  arg_TARGET,
  arg_POINT
};
struct cmd_arg {
  enum cmd_arg_type type;
  union cmd_arg_data data;
  char name[20];
};
struct command {
  cmd_context context;
  cmd_code code;
  int nrepeats;
  bool is_background_command;
  struct cmd_arg arg[4];
};
enum cmd_return_codes {
  CMD_OK = 0,
  CMD_ARG_NOT_PRESENT = -1,
  CMD_ARG_WRONG_TYPE = -2,
  CMD_ARG_ABORTED = -3
};
typedef void (*cmd_handler_fn)(struct command* cmd);
enum parser_error {
  PARSE_ERROR_NONE,
  PARSE_ERROR_BAD_EXPRESSION_STRING,
  PARSE_ERROR_DUPLICATED_NAME,
  PARSE_ERROR_DUPLICATED_SYMBOL,
  PARSE_ERROR_ELEMENT_NAME_MISMATCH,
  PARSE_ERROR_FIELD_TOO_LONG,
  PARSE_ERROR_GENERIC,
  PARSE_ERROR_INTERNAL,
  PARSE_ERROR_INVALID_ABILITY,
  PARSE_ERROR_INVALID_ALLOCATION,
  PARSE_ERROR_INVALID_COLOR,
  PARSE_ERROR_INVALID_DICE,
  PARSE_ERROR_INVALID_EFFECT,
  PARSE_ERROR_INVALID_EXPRESSION,
  PARSE_ERROR_INVALID_FLAG,
  PARSE_ERROR_INVALID_ID_TYPE,
  PARSE_ERROR_INVALID_ITEM_NUMBER,
  PARSE_ERROR_INVALID_ITERATE,
  PARSE_ERROR_INVALID_LIGHTING,
  PARSE_ERROR_INVALID_MESSAGE,
  PARSE_ERROR_INVALID_MONSTER_BASE,
  PARSE_ERROR_INVALID_MONSTER,
  PARSE_ERROR_INVALID_MONSTER_ROLE,
  PARSE_ERROR_INVALID_OBJ_PROP_CODE,
  PARSE_ERROR_INVALID_OPTION,
  PARSE_ERROR_INVALID_OPERATION,
  PARSE_ERROR_INVALID_PLAY_PROP_CODE,
  PARSE_ERROR_INVALID_PLAYER_RACE,
  PARSE_ERROR_INVALID_PROPERTY,
  PARSE_ERROR_INVALID_SKILL,
  PARSE_ERROR_INVALID_SLAY,
  PARSE_ERROR_INVALID_SMITHING_CATEGORY,
  PARSE_ERROR_INVALID_SMITHING_COST_TYPE,
  PARSE_ERROR_INVALID_SPELL_FREQ,
  PARSE_ERROR_INVALID_SPELL_NAME,
  PARSE_ERROR_INVALID_SPELL_STAT,
  PARSE_ERROR_INVALID_SUBTYPE,
  PARSE_ERROR_INVALID_TERRAIN,
  PARSE_ERROR_INVALID_UTF8_CODE_POINT,
  PARSE_ERROR_INVALID_VALUE,
  PARSE_ERROR_MALFORMED_COORDINATE,
  PARSE_ERROR_MISSING_BLOW_EFF_TYPE,
  PARSE_ERROR_MISSING_FIELD,
  PARSE_ERROR_MISSING_OBJ_PROP_TYPE,
  PARSE_ERROR_MISSING_PLAY_PROP_TYPE,
  PARSE_ERROR_MISSING_RECORD_HEADER,
  PARSE_ERROR_NO_ARTIFACT_NAME,
  PARSE_ERROR_NO_BUILDER_FOUND,
  PARSE_ERROR_NO_FILE_FOUND,
  PARSE_ERROR_NO_KIND_FOR_ABILITY,
  PARSE_ERROR_NO_KIND_FOR_DROP_TYPE,
  PARSE_ERROR_NO_KIND_FOR_EGO_TYPE,
  PARSE_ERROR_NO_KIND_FOUND,
  PARSE_ERROR_NO_ROOM_FOUND,
  PARSE_ERROR_NON_SEQUENTIAL_RECORDS,
  PARSE_ERROR_NOT_NUMBER,
  PARSE_ERROR_NOT_RANDOM,
  PARSE_ERROR_NOT_SPECIAL_ARTIFACT,
  PARSE_ERROR_OBSOLETE_FILE,
  PARSE_ERROR_OUT_OF_BOUNDS,
  PARSE_ERROR_OUT_OF_MEMORY,
  PARSE_ERROR_REPEATED_DIRECTIVE,
  PARSE_ERROR_TOO_FEW_ENTRIES,
  PARSE_ERROR_TOO_MANY_ENTRIES,
  PARSE_ERROR_TOO_MANY_ABILITY_PREREQS,
  PARSE_ERROR_UNBOUND_EXPRESSION,
  PARSE_ERROR_UNDEFINED_DIRECTIVE,
  PARSE_ERROR_UNRECOGNISED_BLOW,
  PARSE_ERROR_UNRECOGNISED_BRAND,
  PARSE_ERROR_UNRECOGNISED_SLAY,
  PARSE_ERROR_UNRECOGNISED_CURSE,
  PARSE_ERROR_UNRECOGNISED_TRAP,
  PARSE_ERROR_UNRECOGNISED_TVAL,
  PARSE_ERROR_UNRECOGNISED_SVAL,
  PARSE_ERROR_UNRECOGNISED_SKILL,
  PARSE_ERROR_UNRECOGNISED_PARAMETER,
  PARSE_ERROR_VAULT_TOO_BIG,
  PARSE_ERROR_VAULT_DESC_WRONG_LENGTH,
  PARSE_ERROR_MAX
};
struct parser_state {
  enum parser_error error;
  unsigned int line;
  unsigned int col;
  char* msg;
};
struct file_parser {
  const char* name;
  struct parser* (*init)(void);
  errr (*run)(struct parser* p);
  errr (*finish)(struct parser* p);
  void (*cleanup)(void);
};
struct attack_result {
  int hit;
  int dmg;
  int crit_dice;
  bool pierce;
};
struct hit_types {
  uint32_t msg_type;
  const char* text;
};
enum attack_type {
  ATT_MAIN,
  ATT_FLANKING,
  ATT_CONTROLLED_RETREAT,
  ATT_ZONE_OF_CONTROL,
  ATT_OPPORTUNIST,
  ATT_POLEARM,
  ATT_FOLLOW_THROUGH,
  ATT_RIPOSTE,
  ATT_WHIRLWIND,
  ATT_RAGE,
  ATT_OPPORTUNITY
};
typedef struct attack_result (*ranged_attack)(
    struct player* p, struct object* obj, struct monster* mon, bool undo_rapid,
    bool attack_penalty, bool one_shot);
typedef enum {
  EF_NONE,
  EF_HEAL_HP,
  EF_DAMAGE,
  EF_DART,
  EF_PIT,
  EF_PROJECT_LOS,
  EF_PROJECT_LOS_GRIDS,
  EF_DEADFALL,
  EF_EARTHQUAKE,
  EF_SPOT,
  EF_SPHERE,
  EF_EXPLOSION,
  EF_BREATH,
  EF_BOLT,
  EF_BEAM,
  EF_TERRAIN_BEAM,
  EF_NOURISH,
  EF_CURE,
  EF_TIMED_SET,
  EF_TIMED_INC,
  EF_TIMED_INC_CHECK,
  EF_TIMED_INC_NO_RES,
  EF_TERROR,
  EF_GLYPH,
  EF_RESTORE_STAT,
  EF_DRAIN_STAT,
  EF_RESTORE_MANA,
  EF_REMOVE_CURSE,
  EF_MAP_AREA,
  EF_DETECT_TRAPS,
  EF_DETECT_DOORS,
  EF_DETECT_OBJECTS,
  EF_DETECT_MONSTERS,
  EF_REVEAL_MONSTER,
  EF_CLOSE_CHASMS,
  EF_IDENTIFY,
  EF_RECHARGE,
  EF_SUMMON,
  EF_TELEPORT_TO,
  EF_DARKEN_LEVEL,
  EF_LIGHT_AREA,
  EF_DARKEN_AREA,
  EF_SONG_OF_ELBERETH,
  EF_SONG_OF_LORIEN,
  EF_SONG_OF_FREEDOM,
  EF_SONG_OF_BINDING,
  EF_SONG_OF_PIERCING,
  EF_SONG_OF_OATHS,
  EF_AGGRAVATE,
  EF_NOISE,
  EF_CREATE_TRAPS,
  EF_MAX
} effect_index;
typedef struct effect_handler_context_s {
  const effect_index effect;
  const struct source origin;
  const struct object* obj;
  const bool aware;
  const int dir;
  const random_value value;
  const int subtype, radius, other;
  const char* msg;
  bool ident;
  struct command* cmd;
} effect_handler_context_t;
typedef bool (*effect_handler_f)(effect_handler_context_t*);
struct effect_kind {
  uint16_t index;
  bool aim;
  const char* info;
  effect_handler_f handler;
  const char* desc;
  const char* menu_name;
};
typedef struct textblock textblock;
typedef void (*text_writer)(ang_file* f);
enum {
  EFINFO_NONE,
  EFINFO_DICE,
  EFINFO_HEAL,
  EFINFO_FOOD,
  EFINFO_CURE,
  EFINFO_TIMED,
  EFINFO_TERROR,
  EFINFO_STAT,
  EFINFO_PROJ,
  EFINFO_SUMM,
  EFINFO_QUAKE,
  EFINFO_SPOT,
  EFINFO_BREATH,
  EFINFO_BOLT,
};
enum effect_object_property_kind {
  EFPROP_OBJECT_FLAG_EXACT,
  EFPROP_OBJECT_FLAG,
  EFPROP_RESIST,
  EFPROP_CURE_FLAG,
  EFPROP_CURE_RESIST,
  EFPROP_CONFLICT_FLAG,
  EFPROP_CONFLICT_RESIST,
  EFPROP_CONFLICT_VULN,
  EFPROP_BRAND,
  EFPROP_SLAY,
};
struct effect_object_property {
  struct effect_object_property* next;
  int idx;
  int reslevel_min, reslevel_max;
  enum effect_object_property_kind kind;
};
enum smithing_type { SMITH_TYPE_WEAPON, SMITH_TYPE_ARMOUR, SMITH_TYPE_JEWELRY };
enum smithing_category {
  SMITH_CAT_STAT,
  SMITH_CAT_SUSTAIN,
  SMITH_CAT_SKILL,
  SMITH_CAT_MELEE,
  SMITH_CAT_SLAY,
  SMITH_CAT_RESIST,
  SMITH_CAT_CURSE,
  SMITH_CAT_MISC,
  SMITH_CAT_MAX
};
enum smithing_cost_xtra {
  SMITH_COST_STR,
  SMITH_COST_DEX,
  SMITH_COST_CON,
  SMITH_COST_GRA,
  SMITH_COST_EXP,
};
enum smithing_numbers_mod_index {
  SMITH_NUM_INC_ATT,
  SMITH_NUM_DEC_ATT,
  SMITH_NUM_INC_DS,
  SMITH_NUM_DEC_DS,
  SMITH_NUM_INC_EVN,
  SMITH_NUM_DEC_EVN,
  SMITH_NUM_INC_PS,
  SMITH_NUM_DEC_PS,
  SMITH_NUM_INC_PVAL,
  SMITH_NUM_DEC_PVAL,
  SMITH_NUM_INC_WGT,
  SMITH_NUM_DEC_WGT,
  SMITH_NUM_MAX
};
struct smithing_cost {
  int stat[STAT_MAX];
  int exp;
  int mithril;
  int uses;
  int drain;
  int difficulty;
  bool weaponsmith;
  bool armoursmith;
  bool jeweller;
  bool enchantment;
  bool artistry;
  bool artifice;
};
struct smithing_tval_desc {
  int category;
  int tval;
  const char* desc;
};
enum {
  HEALTH_DEAD,
  HEALTH_ALMOST_DEAD,
  HEALTH_BADLY_WOUNDED,
  HEALTH_WOUNDED,
  HEALTH_SOMEWHAT_WOUNDED,
  HEALTH_UNHURT
};
struct level {
  int depth;
  char* name;
  char* up;
  char* down;
  struct level* next;
};
typedef bool (*monster_predicate)(const struct monster* mon);
struct target {
  struct loc grid;
  int midx;
};
enum {
  MON_TMD_STUN,
  MON_TMD_CONF,
  MON_TMD_SLOW,
  MON_TMD_FAST,
  MON_TMD_MAX,
};
struct blow_message {
  char* act_msg;
  struct blow_message* next;
};
struct blow_method {
  char* name;
  bool cut;
  bool stun;
  bool miss;
  bool prt;
  int msgt;
  struct blow_message* messages;
  int num_messages;
  char* desc;
  struct blow_method* next;
};
typedef struct melee_effect_handler_context_s {
  struct player* const p;
  struct monster* const mon;
  const int rlev;
  const struct blow_method* method;
  const char* ddesc;
  bool obvious;
  bool stun;
  bool cut;
  int damage;
  int net_dam;
} melee_effect_handler_context_t;
typedef void (*melee_effect_handler_f)(melee_effect_handler_context_t*);
struct blow_effect {
  char* name;
  int power;
  int eval;
  char* desc;
  char* effect_type;
  int resist;
  int dam_type;
  struct blow_effect* next;
};
enum {
  MFLAG_NONE,
  MFLAG_VIEW,
  MFLAG_ACTIVE,
  MFLAG_SHOW,
  MFLAG_MARK,
  MFLAG_VISIBLE,
  MFLAG_LISTENED,
  MFLAG_HANDLED,
  MFLAG_SUMMONED,
  MFLAG_PUSHED,
  MFLAG_ALWAYS_CAST,
  MFLAG_CHARGED,
  MFLAG_AGGRESSIVE,
  MFLAG_HIT_BY_RANGED,
  MFLAG_HIT_BY_MELEE,
  MFLAG_MAX
};
enum {
  RF_NONE,
  RF_UNIQUE,
  RF_QUESTOR,
  RF_MALE,
  RF_FEMALE,
  RF_NAME_COMMA,
  RF_SPECIAL_GEN,
  RF_CHAR_CLEAR,
  RF_ATTR_MULTI,
  RF_ATTR_FLICKER,
  RF_FORCE_DEPTH,
  RF_INVISIBLE,
  RF_MULTIPLY,
  RF_REGENERATE,
  RF_NO_CRIT,
  RF_RES_CRIT,
  RF_FRIEND,
  RF_FRIENDS,
  RF_ESCORT,
  RF_ESCORTS,
  RF_UNIQUE_FRIEND,
  RF_NEVER_MOVE,
  RF_HIDDEN_MOVE,
  RF_RAND_25,
  RF_RAND_50,
  RF_GLOW,
  RF_TERRITORIAL,
  RF_SHORT_SIGHTED,
  RF_MINDLESS,
  RF_SMART,
  RF_CRUEL_BLOW,
  RF_EXCHANGE,
  RF_RIPOSTE,
  RF_FLANKING,
  RF_CHARGE,
  RF_ELFBANE,
  RF_KNOCK_BACK,
  RF_CRIPPLING,
  RF_OPPORTUNIST,
  RF_ZONE,
  RF_DROP_33,
  RF_DROP_100,
  RF_DROP_1D2,
  RF_DROP_2D2,
  RF_DROP_3D2,
  RF_DROP_4D2,
  RF_DROP_GOOD,
  RF_DROP_GREAT,
  RF_FLYING,
  RF_PASS_DOOR,
  RF_UNLOCK_DOOR,
  RF_OPEN_DOOR,
  RF_BASH_DOOR,
  RF_PASS_WALL,
  RF_KILL_WALL,
  RF_TUNNEL_WALL,
  RF_TAKE_ITEM,
  RF_KILL_ITEM,
  RF_ORC,
  RF_TROLL,
  RF_SERPENT,
  RF_DRAGON,
  RF_RAUKO,
  RF_SPIDER,
  RF_WOLF,
  RF_UNDEAD,
  RF_HURT_LIGHT,
  RF_STONE,
  RF_HURT_FIRE,
  RF_HURT_COLD,
  RF_RES_FIRE,
  RF_RES_COLD,
  RF_RES_POIS,
  RF_NO_FEAR,
  RF_NO_STUN,
  RF_NO_CONF,
  RF_NO_SLEEP,
  RF_NO_SLOW,
  RF_MAX
};
enum monster_flag_type {
  RFT_NONE = 0,
  RFT_OBV,
  RFT_DISP,
  RFT_GEN,
  RFT_NOTE,
  RFT_BEHAV,
  RFT_GROUP,
  RFT_DROP,
  RFT_MIND,
  RFT_ABIL,
  RFT_ABIL_OBV,
  RFT_MOVE,
  RFT_RACE_N,
  RFT_RACE_A,
  RFT_VULN,
  RFT_VULN_I,
  RFT_RES,
  RFT_PROT,
  RFT_MAX
};
enum {
  RSF_NONE,
  RSF_ARROW1,
  RSF_ARROW2,
  RSF_BOULDER,
  RSF_BR_FIRE,
  RSF_BR_COLD,
  RSF_BR_POIS,
  RSF_BR_DARK,
  RSF_EARTHQUAKE,
  RSF_SHRIEK,
  RSF_SCREECH,
  RSF_DARKNESS,
  RSF_FORGET,
  RSF_SCARE,
  RSF_CONF,
  RSF_HOLD,
  RSF_SLOW,
  RSF_SNG_BIND,
  RSF_SNG_PIERCE,
  RSF_SNG_OATHS,
  RSF_MAX,
};
struct monster_flag {
  uint16_t index;
  uint16_t type;
  const char* desc;
};
struct monster_blow {
  struct monster_blow* next;
  struct blow_method* method;
  struct blow_effect* effect;
  random_value dice;
  int times_seen;
};
struct monster_pain {
  const char* messages[3];
  int pain_idx;
  struct monster_pain* next;
};
struct monster_pursuit {
  int idx;
  const char* msg_vis;
  const char* msg_close;
  const char* msg_far;
  struct monster_pursuit* next;
};
struct monster_warning {
  int idx;
  const char* msg_vis;
  const char* msg_invis;
  const char* msg_vis_silence;
  const char* msg_invis_silence;
  struct monster_warning* next;
};
struct monster_spell_level {
  struct monster_spell_level* next;
  int power;
  char* lore_desc;
  char* message;
  char* blind_message;
  char* silence_message;
  char* blind_silence_message;
  char* smart_message;
  char* smart_blind_message;
  char* smart_silence_message;
  char* smart_blind_silence_message;
  char* save_message;
  char* no_save_message;
};
struct monster_spell {
  struct monster_spell* next;
  uint16_t index;
  int msgt;
  int hit;
  int mana;
  int best_range;
  int max_range;
  int desire;
  int use_past_range;
  bool disturb_stealth;
  struct effect* effect;
  struct effect* effect_xtra;
  struct monster_spell_level* level;
};
enum monster_altmsg_type {
  MON_ALTMSG_SEEN,
  MON_ALTMSG_UNSEEN,
  MON_ALTMSG_MISS
};
struct monster_altmsg {
  struct monster_altmsg* next;
  char* message;
  enum monster_altmsg_type msg_type;
  uint16_t index;
};
struct monster_base {
  struct monster_base* next;
  char* name;
  char* text;
  bitflag
      flags[(((RF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  wchar_t d_char;
  struct monster_pain* pain;
  struct monster_pursuit* pursuit;
  struct monster_warning* warning;
};
struct monster_drop {
  struct monster_drop* next;
  struct object_kind* kind;
  const struct artifact* art;
  unsigned int percent_chance;
  random_value dice;
};
enum monster_group_role {
  MON_GROUP_LEADER,
  MON_GROUP_SERVANT,
  MON_GROUP_BODYGUARD,
  MON_GROUP_MEMBER
};
struct monster_group_info {
  int index;
  enum monster_group_role role;
};
struct monster_mimic {
  struct monster_mimic* next;
  struct object_kind* kind;
};
struct monster_shape {
  struct monster_shape* next;
  char* name;
  struct monster_race* race;
  struct monster_base* base;
};
struct monster_race {
  struct monster_race* next;
  unsigned int ridx;
  char* name;
  char* text;
  char* plural;
  struct monster_base* base;
  uint8_t hdice;
  uint8_t hside;
  int evn;
  int pd;
  int ps;
  int sleep;
  int per;
  int stl;
  int wil;
  int song;
  int speed;
  int light;
  int freq_ranged;
  int spell_power;
  bitflag
      flags[(((RF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  bitflag spell_flags[(((RSF_MAX) + (sizeof(bitflag) * 8) - 1) /
                       (sizeof(bitflag) * 8))];
  struct monster_blow* blow;
  int level;
  int rarity;
  uint8_t d_attr;
  wchar_t d_char;
  uint8_t max_num;
  int cur_num;
  struct monster_altmsg* spell_msgs;
  struct monster_drop* drops;
};
struct monster {
  struct monster_race* race;
  struct monster_race* image_race;
  int midx;
  struct loc grid;
  int16_t hp;
  int16_t maxhp;
  int16_t alertness;
  uint8_t skip_next_turn;
  uint8_t skip_this_turn;
  int16_t m_timed[MON_TMD_MAX];
  uint8_t mspeed;
  uint8_t energy;
  uint8_t stance;
  int16_t morale;
  int16_t tmp_morale;
  uint8_t cdis;
  bitflag mflag[(((MFLAG_MAX) + (sizeof(bitflag) * 8) - 1) /
                 (sizeof(bitflag) * 8))];
  uint8_t noise;
  uint8_t encountered;
  struct object* held_obj;
  uint8_t origin;
  uint8_t attr;
  struct player_state known_pstate;
  struct target target;
  struct monster_group_info group_info;
  struct flow flow;
  uint8_t wandering_dist;
  uint8_t min_range;
  uint8_t best_range;
  uint8_t mana;
  struct song* song;
  int16_t consecutive_attacks;
  int16_t turns_stationary;
  uint8_t previous_action[6];
};
enum { SET_CORR = 0x01, SET_ROOM = 0x02, SET_BOTH = 0x03 };
enum { TYP_RUBBLE, TYP_OBJECT };
enum {
  ROOMF_NONE,
  ROOMF_NO_ROTATION,
  ROOMF_TRAPS,
  ROOMF_WEBS,
  ROOMF_LIGHT,
  ROOMF_TEST,
  ROOMF_MAX,
};
struct rectangle {
  struct loc top_left;
  struct loc bottom_right;
};
struct dun_data {
  const struct cave_profile* profile;
  int cent_n;
  struct loc* cent;
  struct rectangle* corner;
  int* piece;
  bool** connection;
  int** tunn1;
  int** tunn2;
  bool quest;
};
struct streamer_profile {
  const char* name;
  int den;
  int rng;
  int qua;
};
typedef struct chunk* (*cave_builder)(struct player* p);
struct cave_profile {
  struct cave_profile* next;
  const char* name;
  cave_builder builder;
  int block_height;
  int block_width;
  int dun_rooms;
  struct streamer_profile str;
  struct room_profile* room_profiles;
  int n_room_profiles;
  int alloc;
};
typedef bool (*room_builder)(struct chunk* c, struct loc centre);
struct room_profile {
  struct room_profile* next;
  const char* name;
  room_builder builder;
  int hardness;
  int level;
  int random;
};
struct vault {
  struct vault* next;
  char* name;
  int16_t index;
  char* text;
  char* typ;
  bitflag flags[(((ROOMF_MAX) + (sizeof(bitflag) * 8) - 1) /
                 (sizeof(bitflag) * 8))];
  uint8_t hgt;
  uint8_t wid;
  uint8_t depth;
  uint32_t rarity;
  bool forge;
};
typedef struct _graphics_mode {
  struct _graphics_mode* pNext;
  uint8_t grafID;
  uint8_t alphablend;
  uint8_t overdrawRow;
  uint8_t overdrawMax;
  uint16_t cell_width;
  uint16_t cell_height;
  char path[256];
  char pref[32];
  char file[32];
  char menuname[32];
} graphics_mode;
struct hint {
  char* hint;
  struct hint* next;
};
struct angband_constants {
  uint16_t trap_max;
  uint16_t k_max;
  uint16_t drop_max;
  uint16_t a_max;
  uint16_t e_max;
  uint16_t r_max;
  uint16_t pain_max;
  uint16_t pursuit_max;
  uint16_t warning_max;
  uint16_t s_max;
  uint16_t v_max;
  uint16_t pit_max;
  uint16_t act_max;
  uint8_t curse_max;
  uint8_t slay_max;
  uint8_t brand_max;
  uint16_t mon_blows_max;
  uint16_t blow_methods_max;
  uint16_t blow_effects_max;
  uint16_t equip_slots_max;
  uint16_t profile_max;
  uint16_t quest_max;
  uint16_t projection_max;
  uint16_t calculation_max;
  uint16_t property_max;
  uint16_t ordinary_kind_max;
  uint16_t obj_alloc_max;
  uint16_t level_monster_max;
  uint16_t alloc_monster_chance;
  uint16_t monster_group_max;
  uint16_t repro_monster_rate;
  uint16_t mana_cost;
  uint8_t mana_max;
  uint8_t flee_range;
  uint16_t turn_range;
  uint16_t hide_range;
  uint8_t wander_range;
  uint16_t mon_regen_hp_period;
  uint16_t mon_regen_sp_period;
  uint16_t level_room_max;
  uint16_t level_room_min;
  uint16_t block_hgt;
  uint16_t block_wid;
  uint16_t dun_depth;
  uint16_t max_depth;
  uint16_t day_length;
  uint16_t dungeon_hgt;
  uint16_t dungeon_wid;
  uint16_t move_energy;
  uint16_t flow_max;
  uint16_t pack_size;
  uint16_t floor_size;
  uint16_t max_obj_depth;
  uint16_t great_obj;
  uint16_t great_ego;
  uint16_t default_torch;
  uint16_t fuel_torch;
  uint16_t default_lamp;
  uint16_t fuel_lamp;
  uint16_t self_arts_max;
  uint16_t max_sight;
  uint16_t max_range;
  uint16_t start_exp;
  uint16_t ability_cost;
  uint16_t stealth_bonus;
  uint16_t player_regen_period;
};
struct init_module {
  const char* name;
  void (*init)(void);
  void (*cleanup)(void);
};
typedef enum {
  EVT_NONE = 0x0000,
  EVT_KBRD = 0x0001,
  EVT_MOUSE = 0x0002,
  EVT_RESIZE = 0x0004,
  EVT_BUTTON = 0x0008,
  EVT_ESCAPE = 0x0010,
  EVT_MOVE = 0x0020,
  EVT_SELECT = 0x0040,
  EVT_SWITCH = 0x0080
} ui_event_type;
typedef uint32_t keycode_t;
struct keypress {
  ui_event_type type;
  keycode_t code;
  uint8_t mods;
};
static struct keypress const KEYPRESS_NULL = {
    .type = EVT_NONE, .code = 0, .mods = 0};
struct mouseclick {
  ui_event_type type;
  uint8_t x;
  uint8_t y;
  uint8_t button;
  uint8_t mods;
};
typedef union {
  ui_event_type type;
  struct mouseclick mouse;
  struct keypress key;
} ui_event;
typedef struct term_win term_win;
struct term_win {
  bool cu, cv;
  int cx, cy;
  int cnx, cny;
  int** a;
  wchar_t** c;
  int* va;
  wchar_t* vc;
  int** ta;
  wchar_t** tc;
  int* vta;
  wchar_t* vtc;
  term_win* next;
};
typedef struct term term;
struct term {
  void* user;
  void* data;
  bool user_flag;
  bool data_flag;
  bool active_flag;
  bool mapped_flag;
  bool total_erase;
  bool fixed_shape;
  bool icky_corner;
  bool soft_cursor;
  bool always_pict;
  bool higher_pict;
  bool always_text;
  bool unused_flag;
  bool never_bored;
  bool never_frosh;
  int sidebar_mode;
  bool complex_input;
  ui_event* key_queue;
  uint16_t key_head;
  uint16_t key_tail;
  uint16_t key_xtra;
  uint16_t key_size;
  int wid;
  int hgt;
  int y1;
  int y2;
  int* x1;
  int* x2;
  int offset_x;
  int offset_y;
  term_win* old;
  term_win* scr;
  term_win* tmp;
  term_win* mem;
  uint8_t saved;
  void (*init_hook)(term* t);
  void (*nuke_hook)(term* t);
  errr (*xtra_hook)(int n, int v);
  errr (*curs_hook)(int x, int y);
  errr (*bigcurs_hook)(int x, int y);
  errr (*wipe_hook)(int x, int y, int n);
  errr (*text_hook)(int x, int y, int n, int a, const wchar_t* s);
  errr (*pict_hook)(int x, int y, int n, const int* ap, const wchar_t* cp,
                    const int* tap, const wchar_t* tcp);
  void (*view_map_hook)(term* t);
  int (*dblh_hook)(int a, wchar_t c);
};
struct module {
  const char* name;
  const char* help;
  errr (*init)(int argc, char** argv);
};
struct mon_group_list_entry {
  int midx;
  struct mon_group_list_entry* next;
};
struct monster_group {
  int index;
  int leader;
  struct flow flow;
  int wandering_pause;
  int size;
  int dist;
  int furthest;
  struct mon_group_list_entry* member_list;
};
typedef enum monster_list_section_e {
  MONSTER_LIST_SECTION_LOS = 0,
  MONSTER_LIST_SECTION_ESP,
  MONSTER_LIST_SECTION_MAX,
} monster_list_section_t;
typedef struct monster_list_entry_s {
  struct monster_race* race;
  uint16_t count[MONSTER_LIST_SECTION_MAX];
  uint16_t alert[MONSTER_LIST_SECTION_MAX];
  int16_t dx[MONSTER_LIST_SECTION_MAX], dy[MONSTER_LIST_SECTION_MAX];
  uint8_t attr;
} monster_list_entry_t;
typedef struct monster_list_s {
  monster_list_entry_t* entries;
  size_t entries_size;
  uint16_t distinct_entries;
  int32_t creation_turn;
  bool sorted;
  uint16_t total_entries[MONSTER_LIST_SECTION_MAX];
  uint16_t total_monsters[MONSTER_LIST_SECTION_MAX];
} monster_list_t;
typedef struct monster_lore {
  int ridx;
  uint16_t deaths;
  uint16_t pkills;
  uint16_t psights;
  uint16_t tkills;
  uint16_t tsights;
  uint8_t notice;
  uint8_t ignore;
  uint8_t drop_item;
  uint8_t ranged;
  uint8_t mana;
  uint8_t spell_power;
  struct monster_blow* blows;
  bitflag
      flags[(((RF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  bitflag spell_flags[(((RSF_MAX) + (sizeof(bitflag) * 8) - 1) /
                       (sizeof(bitflag) * 8))];
  struct monster_drop* drops;
  bool all_known;
  bool* blow_known;
  bool armour_known;
  bool drop_known;
  bool sleep_known;
  bool ranged_freq_known;
} monster_lore;
enum monster_stagger {
  NO_STAGGER = 0,
  CONFUSED_STAGGER = 1,
  INNATE_STAGGER = 2
};
enum monster_alertness {
  ALERTNESS_MIN = -20,
  ALERTNESS_UNWARY = -10,
  ALERTNESS_ALERT = 0,
  ALERTNESS_QUITE_ALERT = 5,
  ALERTNESS_VERY_ALERT = 10,
  ALERTNESS_MAX = 20
};
enum monster_stance {
  STANCE_FLEEING = 1,
  STANCE_CONFIDENT = 2,
  STANCE_AGGRESSIVE = 3
};
enum mon_messages {
  MON_MSG_NONE,
  MON_MSG_DIE,
  MON_MSG_DESTROYED,
  MON_MSG_RESIST_A_LOT,
  MON_MSG_HIT_HARD,
  MON_MSG_RESIST,
  MON_MSG_IMMUNE,
  MON_MSG_RESIST_SOMEWHAT,
  MON_MSG_UNAFFECTED,
  MON_MSG_SPAWN,
  MON_MSG_HEALTHIER,
  MON_MSG_FALL_ASLEEP,
  MON_MSG_WAKES_UP,
  MON_MSG_NOTICE,
  MON_MSG_WAKE_AND_NOTICE,
  MON_MSG_STIR,
  MON_MSG_LOOK_AROUND,
  MON_MSG_BECOME_UNWARY,
  MON_MSG_CRINGE_LIGHT,
  MON_MSG_SHRIVEL_LIGHT,
  MON_MSG_LOSE_SKIN,
  MON_MSG_DISSOLVE,
  MON_MSG_CATCH_FIRE,
  MON_MSG_BADLY_FROZEN,
  MON_MSG_SHUDDER,
  MON_MSG_CHANGE,
  MON_MSG_DISAPPEAR,
  MON_MSG_MORE_DAZED,
  MON_MSG_DAZED,
  MON_MSG_NOT_DAZED,
  MON_MSG_MORE_CONFUSED,
  MON_MSG_CONFUSED,
  MON_MSG_NOT_CONFUSED,
  MON_MSG_MORE_SLOWED,
  MON_MSG_SLOWED,
  MON_MSG_NOT_SLOWED,
  MON_MSG_MORE_HASTED,
  MON_MSG_HASTED,
  MON_MSG_NOT_HASTED,
  MON_MSG_MORE_AFRAID,
  MON_MSG_FLEE_IN_TERROR,
  MON_MSG_NOT_AFRAID,
  MON_MSG_TURN_TO_FIGHT,
  MON_MSG_RECOVER_COMPOSURE,
  MON_MSG_PANIC,
  MON_MSG_STAGGER_DOOR,
  MON_MSG_STAGGER_RUBBLE,
  MON_MSG_STAGGER_WALL,
  MON_MSG_HELD,
  MON_MSG_NOT_HELD,
  MON_MSG_PUSHED,
  MON_MSG_NOT_PUSHED,
  MON_MSG_COMMAND,
  MON_MSG_NOT_COMMAND,
  MON_MSG_SHAPE_FAIL,
  MON_MSG_MORIA_DEATH,
  MON_MSG_DISINTEGRATES,
  MON_MSG_FREEZE_SHATTER,
  MON_MSG_MANA_DRAIN,
  MON_MSG_BRIEF_PUZZLE,
  MON_MSG_MAINTAIN_SHAPE,
  MON_MSG_UNHARMED,
  MON_MSG_APPEAR,
  MON_MSG_HIT_AND_RUN,
  MON_MSG_GO_UP_STAIRS,
  MON_MSG_GO_DOWN_STAIRS,
  MON_MSG_FLEE_UP_STAIRS,
  MON_MSG_FLEE_DOWN_STAIRS,
  MON_MSG_EXCHANGE,
  MON_MSG_FLANK,
  MON_MSG_PASS_DOOR,
  MON_MSG_END_SONG,
  MON_MSG_66,
  MON_MSG_33,
  MON_MSG_0,
  MON_MSG_PURSUE_VIS,
  MON_MSG_PURSUE_CLOSE,
  MON_MSG_PURSUE_FAR,
  MON_MSG_WARN_VIS,
  MON_MSG_WARN_INVIS,
  MON_MSG_WARN_VIS_SIL,
  MON_MSG_WARN_INVIS_SIL,
  MON_MSG_MAX,
};
enum mon_spell_type {
  RST_NONE = 0x0000,
  RST_INNATE = 0x0001,
  RST_ARCHERY = 0x0002,
  RST_BREATH = 0x0004,
  RST_SPELL = 0x0008,
  RST_DISTANT = 0x0010,
  RST_SONG = 0x0020
};
struct monster_base_list {
  struct monster_base* base;
  struct monster_base_list* next;
};
struct summon {
  struct summon* next;
  char* name;
  int message_type;
  bool unique_allowed;
  struct monster_base_list* bases;
  int race_flag;
  char* fallback_name;
  int fallback;
  char* desc;
};
enum chest_query { CHEST_ANY, CHEST_OPENABLE, CHEST_TRAPPED };
enum {
  CHEST_GAS_CONF = 0x01,
  CHEST_GAS_STUN = 0x02,
  CHEST_GAS_POISON = 0x04,
  CHEST_NEEDLE_HALLU = 0x08,
  CHEST_NEEDLE_ENTRANCE = 0x10,
  CHEST_NEEDLE_LOSE_STR = 0x20
};
enum {
  ODESC_BASE = 0x00,
  ODESC_COMBAT = 0x01,
  ODESC_EXTRA = 0x02,
  ODESC_FULL = ODESC_COMBAT | ODESC_EXTRA,
  ODESC_STORE = 0x04,
  ODESC_PLURAL = 0x08,
  ODESC_SINGULAR = 0x10,
  ODESC_SPOIL = 0x20,
  ODESC_PREFIX = 0x40,
  ODESC_CAPITAL = 0x80,
  ODESC_TERSE = 0x100,
  ODESC_NOEGO = 0x200,
  ODESC_ALTNUM = 0x400
};
enum {
  EQUIP_NONE,
  EQUIP_WEAPON,
  EQUIP_BOW,
  EQUIP_RING,
  EQUIP_AMULET,
  EQUIP_LIGHT,
  EQUIP_BODY_ARMOR,
  EQUIP_CLOAK,
  EQUIP_SHIELD,
  EQUIP_HAT,
  EQUIP_GLOVES,
  EQUIP_BOOTS,
  EQUIP_QUIVER,
  EQUIP_MAX
};
typedef struct {
  unsigned int enum_val;
  const char* name;
} quality_name_struct;
typedef enum {
  ITYPE_NONE,
  ITYPE_SHARP,
  ITYPE_BLUNT,
  ITYPE_BOW,
  ITYPE_ARROW,
  ITYPE_ROBE,
  ITYPE_BODY_ARMOR,
  ITYPE_CLOAK,
  ITYPE_SHIELD,
  ITYPE_HEADGEAR,
  ITYPE_HANDGEAR,
  ITYPE_FEET,
  ITYPE_DIGGER,
  ITYPE_RING,
  ITYPE_AMULET,
  ITYPE_LIGHT,
  ITYPE_MAX
} ignore_type_t;
enum {
  IGNORE_NONE,
  IGNORE_BAD,
  IGNORE_AVERAGE,
  IGNORE_GOOD,
  IGNORE_ALL,
  IGNORE_MAX
};
struct ego_desc {
  int16_t e_idx;
  uint16_t itype;
  const char* short_name;
};
typedef enum {
  OINFO_NONE = 0x00,
  OINFO_TERSE = 0x01,
  OINFO_SUBJ = 0x02,
  OINFO_EGO = 0x04,
  OINFO_FAKE = 0x08,
  OINFO_SPOIL = 0x10,
  OINFO_SMITH = 0x10,
} oinfo_detail_t;
enum rune_variety {
  RUNE_VAR_COMBAT,
  RUNE_VAR_MOD,
  RUNE_VAR_RESIST,
  RUNE_VAR_BRAND,
  RUNE_VAR_SLAY,
  RUNE_VAR_CURSE,
  RUNE_VAR_FLAG
};
struct rune {
  enum rune_variety variety;
  int index;
  quark_t note;
  const char* name;
};
typedef enum object_list_section_e {
  OBJECT_LIST_SECTION_LOS = 0,
  OBJECT_LIST_SECTION_NO_LOS,
  OBJECT_LIST_SECTION_MAX,
} object_list_section_t;
typedef struct object_list_entry_s {
  struct object* object;
  uint16_t count[OBJECT_LIST_SECTION_MAX];
  int16_t dx, dy;
} object_list_entry_t;
typedef struct object_list_s {
  object_list_entry_t* entries;
  size_t entries_size;
  uint16_t distinct_entries;
  int32_t creation_turn;
  uint16_t total_entries[OBJECT_LIST_SECTION_MAX];
  uint16_t total_objects[OBJECT_LIST_SECTION_MAX];
  bool sorted;
} object_list_t;
typedef enum {
  OSTACK_NONE = 0x00,
  OSTACK_STORE = 0x01,
  OSTACK_PACK = 0x02,
  OSTACK_LIST = 0x04,
  OSTACK_MONSTER = 0x08,
  OSTACK_FLOOR = 0x10,
  OSTACK_QUIVER = 0x20
} object_stack_t;
typedef enum {
  OFLOOR_NONE = 0x00,
  OFLOOR_TEST = 0x01,
  OFLOOR_SENSE = 0x02,
  OFLOOR_TOP = 0x04,
  OFLOOR_VISIBLE = 0x08,
} object_floor_t;
struct ability {
  struct ability* next;
  char* name;
  char* desc;
  uint8_t skill;
  uint8_t level;
  bool active;
  bool last;
  struct ability* prerequisites;
  int prereq_index[10];
  struct poss_item* poss_items;
};
typedef bool (*ability_predicate)(const struct ability* test);
enum {
  HIST_NONE,
  HIST_PLAYER_BIRTH,
  HIST_CHALLENGE_OPTS,
  HIST_ARTIFACT_UNKNOWN,
  HIST_ARTIFACT_KNOWN,
  HIST_ARTIFACT_LOST,
  HIST_VAULT_ENTERED,
  HIST_VAULT_LOST,
  HIST_FORGE_FOUND,
  HIST_OBJECT_SMITHED,
  HIST_FELL_DOWN_LEVEL,
  HIST_TRAPPED_STAIRS,
  HIST_FELL_IN_CHASM,
  HIST_PLAYER_DEATH,
  HIST_SLAY_UNIQUE,
  HIST_MEET_UNIQUE,
  HIST_USER_INPUT,
  HIST_SAVEFILE_IMPORT,
  HIST_GAIN_LEVEL,
  HIST_SILMARIL,
  HIST_ESCAPE,
  HIST_GENERIC,
  HIST_MAX
};
struct history_info {
  bitflag
      type[(((HIST_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  int16_t dlev;
  uint8_t a_idx;
  int32_t turn;
  char event[80];
};
enum {
  TMD_FAST,
  TMD_SLOW,
  TMD_BLIND,
  TMD_ENTRANCED,
  TMD_CONFUSED,
  TMD_AFRAID,
  TMD_IMAGE,
  TMD_POISONED,
  TMD_CUT,
  TMD_STUN,
  TMD_FOOD,
  TMD_DARKENED,
  TMD_RAGE,
  TMD_STR,
  TMD_DEX,
  TMD_CON,
  TMD_GRA,
  TMD_SINVIS,
  TMD_OPP_FIRE,
  TMD_OPP_COLD,
  TMD_OPP_POIS,
  TMD_MAX
};
struct timed_grade {
  int grade;
  uint8_t color;
  int max;
  char* name;
  char* up_msg;
  char* down_msg;
  struct timed_grade* next;
};
struct timed_change {
  struct timed_change* next;
  int max;
  char* msg;
  char* inc_msg;
};
struct timed_change_grade {
  int c_grade;
  uint8_t color;
  int max;
  int digits;
  char* name;
  struct timed_change_grade* next;
};
struct timed_effect_data {
  const char* name;
  uint32_t flag_redraw;
  uint32_t flag_update;
  int index;
  char* desc;
  char* on_end;
  char* on_increase;
  char* on_decrease;
  int msgt;
  int fail;
  struct timed_grade* grade;
  struct timed_change_grade* c_grade;
  struct timed_change* increase;
  struct timed_change decrease;
  int temp_resist;
  bool este;
  bool save;
};
enum {
  PY_EXERT_NONE = 0x00,
  PY_EXERT_CON = 0x01,
  PY_EXERT_FAINT = 0x02,
  PY_EXERT_SCRAMBLE = 0x04,
  PY_EXERT_CUT = 0x08,
  PY_EXERT_CONF = 0x10,
  PY_EXERT_HALLU = 0x20,
  PY_EXERT_SLOW = 0x40,
  PY_EXERT_HP = 0x80
};
enum { REST_COMPLETE = -2, REST_ALL_POINTS = -1, REST_SOME_POINTS = -3 };
enum { STEALTH_MODE_OFF = 0, STEALTH_MODE_STOPPING = 1, STEALTH_MODE_ON = 2 };
enum {
  PROJ_ACID,
  PROJ_FIRE,
  PROJ_COLD,
  PROJ_POIS,
  PROJ_DARK,
  PROJ_NOTHING,
  PROJ_HURT,
  PROJ_ARROW,
  PROJ_BOULDER,
  PROJ_SOUND,
  PROJ_FORCE,
  PROJ_LIGHT,
  PROJ_KILL_WALL,
  PROJ_SLEEP,
  PROJ_SPEED,
  PROJ_SLOW,
  PROJ_CONFUSION,
  PROJ_FEAR,
  PROJ_EARTHQUAKE,
  PROJ_DARK_WEAK,
  PROJ_KILL_DOOR,
  PROJ_LOCK_DOOR,
  PROJ_KILL_TRAP,
  PROJ_DISP_ALL,
  PROJ_MAX
};
struct projection {
  int index;
  char* name;
  char* type;
  char* desc;
  char* player_desc;
  char* blind_desc;
  int msgt;
  bool damaging;
  bool evade;
  bool obvious;
  bool wake;
  int color;
  struct projection* next;
};
enum { BOLT_NO_MOTION, BOLT_0, BOLT_45, BOLT_90, BOLT_135, BOLT_MAX };
enum { PROJECT_PATH_NO, PROJECT_PATH_NOT_CLEAR, PROJECT_PATH_CLEAR };
enum {
  PROJECT_NONE = 0x00000,
  PROJECT_JUMP = 0x00001,
  PROJECT_BEAM = 0x00002,
  PROJECT_THRU = 0x00004,
  PROJECT_STOP = 0x00008,
  PROJECT_GRID = 0x00010,
  PROJECT_ITEM = 0x00020,
  PROJECT_KILL = 0x00040,
  PROJECT_HIDE = 0x00080,
  PROJECT_ARC = 0x00100,
  PROJECT_PLAY = 0x00200,
  PROJECT_INFO = 0x00400,
  PROJECT_PASS = 0x00800,
  PROJECT_BOOM = 0x01000,
  PROJECT_INVIS = 0x02000,
  PROJECT_CHASM = 0x04000,
  PROJECT_CHCK = 0x08000,
  PROJECT_WALL = 0x10000,
  PROJECT_LEAVE = 0x20000,
  PROJECT_RANGE_DAM = 0x40000
};
typedef enum {
  RANDNAME_TOLKIEN = 1,
  RANDNAME_SCROLL,
  RANDNAME_NUM_TYPES
} randname_type;
struct high_score {
  char what[8];
  char pts[10];
  char turns[10];
  char day[10];
  char who[16];
  char uid[8];
  char p_s[3];
  char p_r[3];
  char p_h[3];
  char cur_dun[4];
  char max_dun[4];
  char how[50];
  char silmarils[2];
  char morgoth_slain[2];
  char escaped[2];
};
struct alt_song_desc {
  char* desc;
  struct alt_song_desc* next;
};
enum sound_status { SOUND_ST_UNKNOWN = 0, SOUND_ST_ERROR, SOUND_ST_LOADED };
struct sound_data {
  char* name;
  uint32_t hash;
  enum sound_status status;
  void* plat_data;
};
struct sound_file_type {
  const char* extension;
  int type;
};
struct sound_hooks {
  bool (*open_audio_hook)(void);
  bool (*close_audio_hook)(void);
  bool (*load_sound_hook)(const char* filename, int file_type,
                          struct sound_data* data);
  bool (*unload_sound_hook)(struct sound_data* data);
  bool (*play_sound_hook)(struct sound_data* data);
  const struct sound_file_type* (*supported_files_hook)(void);
};
enum {
  TRF_NONE,
  TRF_GLYPH,
  TRF_TRAP,
  TRF_VISIBLE,
  TRF_INVISIBLE,
  TRF_FLOOR,
  TRF_SURFACE,
  TRF_DOWN,
  TRF_PIT,
  TRF_ONETIME,
  TRF_SAVE_SKILL,
  TRF_LOCK,
  TRF_JAM,
  TRF_FORGE_USE,
  TRF_DELAY,
  TRF_MAX
};
enum { GLYPH_NONE, GLYPH_WARDING };
struct trap_kind {
  char* name;
  char* text;
  char* desc;
  char* msg;
  char* msg2;
  char* msg3;
  char* msg_vis;
  char* msg_silence;
  char* msg_good;
  char* msg_bad;
  char* msg_xtra;
  struct trap_kind* next;
  int tidx;
  uint8_t d_attr;
  wchar_t d_char;
  int rarity;
  int min_depth;
  int max_depth;
  int power;
  int stealth;
  bitflag
      flags[(((TRF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
  struct effect* effect;
  struct effect* effect_xtra;
};
struct trap {
  uint8_t t_idx;
  struct trap_kind* kind;
  struct trap* next;
  struct loc grid;
  uint8_t power;
  bitflag
      flags[(((TRF_MAX) + (sizeof(bitflag) * 8) - 1) / (sizeof(bitflag) * 8))];
};
typedef struct dict_impl* dict_type;
enum tutorial_component {
  TUTORIAL_ARCHETYPE,
  TUTORIAL_NOTE,
  TUTORIAL_TRIGGER,
  TUTORIAL_SECTION
};
enum tutorial_item_tweak_kind {
  TWEAK_FLAG,
  TWEAK_SLAY,
  TWEAK_BRAND,
  TWEAK_ELEM_IGNORE,
  TWEAK_ELEM_HATE,
  TWEAK_MODIFIER,
  TWEAK_ELEM_RESIST,
  TWEAK_PVAL
};
struct tutorial_item_tweak {
  char* dice;
  random_value value;
  enum tutorial_item_tweak_kind kind;
  int idx;
};
struct tutorial_item {
  union {
    const struct artifact* art;
    struct {
      struct ego_item* ego;
      struct tutorial_item_tweak* tweaks;
      random_value number;
      int tval, sval;
      int tweak_count;
    } details;
  } v;
  bool is_artifact;
};
struct tutorial_kit_item {
  struct tutorial_item item;
  bool equipped;
};
struct tutorial_area_flag {
  bitflag flags[(((SQUARE_MAX) + (sizeof(bitflag) * 8) - 1) /
                 (sizeof(bitflag) * 8))];
  struct loc ul, lr;
  bool clear;
};
enum tutorial_section_sym_kind {
  SECTION_SYM_DUMMY,
  SECTION_SYM_START,
  SECTION_SYM_FLOOR,
  SECTION_SYM_GRANITE0,
  SECTION_SYM_GRANITE1,
  SECTION_SYM_PERMROCK,
  SECTION_SYM_IMPASS_RUBBLE,
  SECTION_SYM_CLOSED_DOOR,
  SECTION_SYM_OPEN_DOOR,
  SECTION_SYM_SECRET_DOOR,
  SECTION_SYM_TRAP_RANDOM,
  SECTION_SYM_NOTE,
  SECTION_SYM_TRIGGER,
  SECTION_SYM_GATE,
  SECTION_SYM_FORGE,
  SECTION_SYM_ITEM,
  SECTION_SYM_MONSTER,
  SECTION_SYM_TRAP,
  SECTION_SYM_DOOR,
};
struct tutorial_section_sym_table {
  dict_type d;
};
struct tutorial_section_sym_key {
  char symbol[5];
  int x, y;
};
struct tutorial_section_sym_val {
  union {
    struct tutorial_item item;
    struct {
      struct monster_race* race;
      char* note;
      int sleepiness;
      bool sleepiness_fixed;
    } monster;
    struct {
      struct trap_kind* kind;
      bool vis;
    } trap;
    struct {
      int feat, power;
    } door;
    struct {
      int feat, uses;
    } forge;
    struct {
      char* dest;
      char* note;
      int feat;
    } gate;
    char* name;
    int feat;
  } v;
  bool is_predefined;
  enum tutorial_section_sym_kind kind;
};
enum trigger_op_kind {
  TRIGGER_OP_NONE,
  TRIGGER_OP_NOT,
  TRIGGER_OP_AND,
  TRIGGER_OP_OR,
  TRIGGER_OP_XOR,
  TRIGGER_OP_ABILITY,
  TRIGGER_OP_CARRIED,
  TRIGGER_OP_DRAINED,
  TRIGGER_OP_EQUIPPED,
  TRIGGER_OP_FALSE,
  TRIGGER_OP_TIMED,
  TRIGGER_OP_TIMED_ABOVE,
  TRIGGER_OP_TIMED_BELOW,
  TRIGGER_OP_TRUE,
};
struct trigger_compiled_op {
  enum trigger_op_kind kind;
  int tval, sval, idx;
  char* name;
};
struct trigger_compiled_expr {
  struct trigger_compiled_op* ops;
  int n_op, n_stack;
};
struct tutorial_dict_type {
  dict_type d;
};
struct tutorial_dict_key_type {
  char* name;
  enum tutorial_component comp;
};
struct tutorial_dict_val_type {
  struct tutorial_dict_key_type* key;
  union {
    struct {
      char* race_name;
      char* house_name;
      char* sex_name;
      char* character_name;
      char* history;
      struct ability** added_abilities;
      struct tutorial_kit_item* kit;
      int stat_adj[STAT_MAX];
      int skill_adj[SKILL_MAX];
      int ability_count;
      int ability_alloc;
      int kit_count;
      int kit_alloc;
      int32_t unspent_experience;
      bool purge_kit;
    } archetype;
    struct {
      char* text;
      int pval;
    } note;
    struct {
      char* text;
      char* death_note_name;
      struct trigger_compiled_expr expr;
      bool changes_death_note;
    } trigger;
    struct {
      char* start_note_name;
      char* death_note_name;
      char** lines;
      struct tutorial_area_flag* area_flags;
      struct tutorial_section_sym_table symt;
      int rows, columns;
      int area_flag_count, area_flag_alloc;
    } section;
  } v;
};
struct tutorial_parsed_result {
  struct tutorial_dict_type d;
  struct tutorial_dict_val_type* default_archetype;
  struct tutorial_dict_val_type* default_section;
  struct tutorial_dict_val_type** pval_to_note_table;
  struct tutorial_dict_val_type*** trigger_gate_map;
  struct object_kind* note_kind;
  char* curr_death_note;
  int note_table_n, note_table_a;
};
struct tutorial_parser_priv {
  struct tutorial_parsed_result* r;
  struct tutorial_dict_val_type* curr_value;
  int section_lines_parsed;
};
enum combat_roll_type {
  COMBAT_ROLL_NONE = 1,
  COMBAT_ROLL_ROLL = 2,
  COMBAT_ROLL_AUTO = 3
};
struct combat_roll {
  int att_type;
  int dam_type;
  wchar_t attacker_char;
  uint8_t attacker_attr;
  wchar_t defender_char;
  uint8_t defender_attr;
  int att;
  int att_roll;
  int evn;
  int evn_roll;
  int dd;
  int ds;
  int dam;
  int pd;
  int ps;
  int prot;
  int prt_percent;
  bool melee;
};
struct cmd_info {
  const char* desc;
  keycode_t key[4];
  cmd_code cmd;
  void (*hook)(void);
  bool (*prereq)(void);
  int nested_keymap;
  const char* nested_prompt;
  const char* nested_error;
  const char* nested_name;
  int nested_cached_idx;
};
struct command_list {
  const char* name;
  struct cmd_info* list;
  size_t len;
  int menu_level;
  int keymap;
};
enum game_mode_type { GAME_LOAD, GAME_NEW, GAME_SELECT, GAME_TUTORIAL };
typedef struct savefile_getter_impl* savefile_getter;
struct savefile_details {
  char* fnam;
  char* desc;
  size_t foff;
};
enum {
  KEYMAP_MODE_ORIG = 0x0,
  KEYMAP_MODE_ROGUE = 0x1,
  KEYMAP_MODE_ANGBAND = 0x2,
  KEYMAP_MODE_ANGROGUE = 0x3,
  KEYMAP_MODE_MAX
};
struct ui_monster_category {
  struct ui_monster_category* next;
  const char* name;
  const struct monster_base** inc_bases;
  wchar_t* inc_glyphs;
  bitflag inc_flags[(((RF_MAX) + (sizeof(bitflag) * 8) - 1) /
                     (sizeof(bitflag) * 8))];
  int n_inc_bases, max_inc_bases;
  int n_inc_glyphs, max_inc_glyphs;
};
struct ui_knowledge_parse_state {
  struct ui_monster_category* categories;
};
typedef struct region region;
struct region {
  int col;
  int row;
  int width;
  int page_rows;
};
static const region SCREEN_REGION = {0, 0, 0, 0};
enum { CURS_UNKNOWN = 0, CURS_KNOWN = 1, CURS_MAYBE = 2 };
typedef enum _menu_row_style_t {
  MN_ROW_STYLE_DISABLED = CURS_UNKNOWN,
  MN_ROW_STYLE_ENABLED = CURS_KNOWN,
  MN_ROW_STYLE_CONDITIONAL = CURS_MAYBE,
} menu_row_style_t;
typedef enum _menu_row_validity_t {
  MN_ROW_INVALID = 0,
  MN_ROW_VALID = 1,
  MN_ROW_HIDDEN = 2,
  MN_ROW_MAYBE = 3,
} menu_row_validity_t;
struct menu;
typedef enum { MN_ITER_ACTIONS = 1, MN_ITER_STRINGS = 2 } menu_iter_id;
typedef struct {
  int flags;
  char tag;
  const char* name;
  void (*action)(const char* title, int row);
} menu_action;
typedef struct {
  char (*get_tag)(struct menu* menu, int oid);
  int (*valid_row)(struct menu* menu, int oid);
  void (*display_row)(struct menu* menu, int oid, bool cursor, int row, int col,
                      int width);
  bool (*row_handler)(struct menu* menu, const ui_event* event, int oid);
  void (*resize)(struct menu* m);
} menu_iter;
typedef enum {
  MN_SKIN_SCROLL = 1,
  MN_SKIN_OBJECT = 2,
  MN_SKIN_COLUMNS = 3
} skin_id;
typedef struct {
  int (*get_cursor)(int row, int col, int n, int top, region* loc);
  void (*display_list)(struct menu* menu, int cursor, int* top, region*);
  char (*get_tag)(struct menu* menu, int pos);
  ui_event (*process_dir)(struct menu* menu, int dir);
} menu_skin;
enum {
  MN_REL_TAGS = 0x01,
  MN_NO_TAGS = 0x02,
  MN_PVT_TAGS = 0x04,
  MN_CASELESS_TAGS = 0x08,
  MN_DBL_TAP = 0x10,
  MN_NO_ACTION = 0x20,
  MN_INSCRIP_TAGS = 0x40
};
struct menu {
  const char* header;
  const char* title;
  const char* prompt;
  const char* selections;
  char* inscriptions;
  const char* cmd_keys;
  const char* switch_keys;
  void (*browse_hook)(int oid, void* db, const region* loc);
  bool (*keys_hook)(struct menu* m, const ui_event* ev, int oid);
  bool (*context_hook)(struct menu* m, const ui_event* in, ui_event* out);
  int flags;
  region boundary;
  int filter_count;
  const int* filter_list;
  int count;
  void* menu_data;
  const menu_skin* skin;
  const menu_iter* row_funcs;
  int cursor;
  int top;
  region active;
  int cursor_x_offset;
};
typedef enum {
  OLIST_NONE = 0x00,
  OLIST_WINDOW = 0x01,
  OLIST_WEIGHT = 0x02,
  OLIST_SEMPTY = 0x04,
  OLIST_DEATH = 0x08,
} olist_detail_t;
struct prefs_data {
  bool bypass;
  struct keypress keymap_buffer[20];
  bool user;
  bool loaded_window_flag[8];
  uint32_t window_flags[8];
};
struct grid_counter_pred {
  square_predicate pred;
  int in_vault_count;
  int in_room_count;
  int in_other_count;
};
struct neighbor_counter_pred {
  square_predicate pred;
  square_predicate neigh;
  int vault_histogram[9];
  int room_histogram[9];
  int other_histogram[9];
};
struct grid_counts {
  int floor;
  int upstair;
  int downstair;
  int trap;
  int forge;
  int rubble;
  int open_door;
  int closed_door;
  int broken_door;
  int secret_door;
  int traversable_neighbor_histogram[9];
};
struct queue {
  uintptr_t* data;
  size_t size;
  int head;
  int tail;
};
