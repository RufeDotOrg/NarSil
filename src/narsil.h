#define A2I(X) ((X) - 'a')
#define ABS(a) (((a) < 0) ? (-(a)) : (a))
#define ANGBAND_TERM_MAX 8
#define ARROW_DOWN 0x80
#define ARROW_LEFT 0x81
#define ARROW_RIGHT 0x82
#define ARROW_UP 0x83
#define ATTRIBUTE __attribute__
#define ATTR_BLIND 3
#define ATTR_DARK 5
#define ATTR_FULL 0
#define ATTR_HIGH 6
#define ATTR_LIGHT 4
#define ATTR_METAL 7
#define ATTR_MISC 8
#define ATTR_MONO 1
#define ATTR_VGA 2
#define BASE_STAT_MAX 20
#define BASE_STAT_MIN -9
#define BASIC_COLORS 29
#define BG_BLACK 0
#define BG_DARK 2
#define BG_MAX 3
#define BG_SAME 1
#define BTH_PLUS_ADJ 3
#define BUILDID 
#define CAVE_H 
#define CMD_MAX_ARGS 4
#define CMP(a,b) ((a) < (b) ? -1 : ((b) < (a) ? 1 : 0))
#define COLOUR_BLUE 6
#define COLOUR_BLUE_SLATE 26
#define COLOUR_DARK 0
#define COLOUR_DEEP_L_BLUE 27
#define COLOUR_GREEN 5
#define COLOUR_L_BLUE 14
#define COLOUR_L_DARK 8
#define COLOUR_L_GREEN 13
#define COLOUR_L_PINK 24
#define COLOUR_L_PURPLE 10
#define COLOUR_L_RED 12
#define COLOUR_L_TEAL 22
#define COLOUR_L_UMBER 15
#define COLOUR_L_VIOLET 23
#define COLOUR_L_WHITE 9
#define COLOUR_L_YELLOW 20
#define COLOUR_MAGENTA 21
#define COLOUR_MUD 19
#define COLOUR_MUSTARD 25
#define COLOUR_ORANGE 3
#define COLOUR_PURPLE 16
#define COLOUR_RED 4
#define COLOUR_SHADE 28
#define COLOUR_SLATE 2
#define COLOUR_TEAL 18
#define COLOUR_UMBER 7
#define COLOUR_VIOLET 17
#define COLOUR_WHITE 1
#define COLOUR_YELLOW 11
#define COL_MAP (col_map[Term->sidebar_mode])
#define COMBAT_H 
#define CONF_ERRATIC_CHANCE 30
#define CONF_HIT_REDUCTION 20
#define CONF_RANDOM_CHANCE 40
#define D2I(X) ((X) - '0')
#define DATAFILE_H 
#define DEBUFF_CRITICAL_HIT 10
#define DEFAULT_CONFIG_PATH "lib/"
#define DEFAULT_DATA_PATH "lib/"
#define DEFAULT_LIB_PATH "lib/"
#define DHERE __FILE__ ":" DSTRING(__LINE__) ": "
#define DSTRING(x) DSTRINGIFY(x)
#define DSTRINGIFY(x) #x
#define EFFECTS_INFO_H 
#define EFFECT_SOURCE_H 
#define EGO_ART_KNOWN 0xffffffff
#define ELEM_BASE_MAX (ELEM_COLD + 1)
#define ELEM_BASE_MIN ELEM_ACID
#define ELEM_HIGH_MAX (ELEM_DISEN + 1)
#define ELEM_HIGH_MIN ELEM_POIS
#define ENCH_TOAC 0x04
#define ENCH_TOBOTH 0x03
#define ENCH_TODAM 0x02
#define ENCH_TOHIT 0x01
#define ENCODE_KTRL(v) ((((v) >= 0x40 && (v) <= 0x5F) || ((v) >= 0x61 && (v) <= 0x7A)) ? true : false)
#define ESCAPE 0xE000
#define EVENT_EMPTY { 0 }
#define FINISHED_CODE 255
#define FLAG_BINARY(id) (1 << ((id) - FLAG_START) % FLAG_WIDTH)
#define FLAG_END (FLAG_START - 1)
#define FLAG_MAX(n) (int)((n) * FLAG_WIDTH + FLAG_START)
#define FLAG_OFFSET(id) (((id) - FLAG_START) / FLAG_WIDTH)
#define FLAG_SIZE(n) (((n) + FLAG_WIDTH - 1) / FLAG_WIDTH)
#define FLAG_START 1
#define FLAG_WIDTH (sizeof(bitflag)*8)
#define GAME_WORLD_H 
#define GENERATE_H 
#define GRAPHICS_ALERT_MASK 0x100
#define GRAPHICS_GLOW_MASK 0x200
#define GRAPHICS_NONE 0
#define GUID_H 
#define HAVE_CAN_CHANGE_COLOR 1
#define HAVE_DIRENT_H 1
#define HAVE_FCNTL_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_MKDIR 1
#define HAVE_MVWADDNWSTR 0
#define HAVE_SETEGID 1
#define HAVE_SETRESGID 1
#define HAVE_STAT 1
#define HAVE_STDBOOL_H 1
#define HAVE_STDINT_H 1
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STDbool_H 
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define HAVE_USE_DEFAULT_COLORS 1
#define HAVE__BOOL 1
#define HELP_HEIGHT 3
#define HINT_H 
#define HISTORY_H 
#define HIST_SIZE FLAG_SIZE(HIST_MAX)
#define I2A(X) ((X) + 'a')
#define I2D(X) ((X) + '0')
#define IGNORE_IF_AWARE 0x01
#define IGNORE_IF_UNAWARE 0x02
#define INCLUDED_ALLOC_H 
#define INCLUDED_ANGBAND_H 
#define INCLUDED_CMDS_H 
#define INCLUDED_CMD_CORE_H 
#define INCLUDED_CONFIG_H 
#define INCLUDED_DEBUG_H 
#define INCLUDED_EFFECTS_H 
#define INCLUDED_EFFECT_HANDLER_H 
#define INCLUDED_GAME_EVENT_H 
#define INCLUDED_GAME_INPUT_H 
#define INCLUDED_GRAFMODE_H 
#define INCLUDED_H_BASIC_H 
#define INCLUDED_INIT_H 
#define INCLUDED_MAIN_H 
#define INCLUDED_OBJECT_H 
#define INCLUDED_OBJPROPERTIES_H 
#define INCLUDED_OBJSMITH_H 
#define INCLUDED_OPTIONS_H 
#define INCLUDED_PLAYER_ABILITIES_H 
#define INCLUDED_PLAYER_SKILLS_H 
#define INCLUDED_SAVEFILE_H 
#define INCLUDED_SAVE_CHAROUTPUT_H 
#define INCLUDED_SCORE_H 
#define INCLUDED_SONGS_H 
#define INCLUDED_SOUND_H 
#define INCLUDED_TUTORIAL_H 
#define INCLUDED_TUTORIAL_INIT_H 
#define INCLUDED_UI_ABILITIES_H 
#define INCLUDED_UI_BIRTH_H 
#define INCLUDED_UI_DISPLAY_H 
#define INCLUDED_UI_EFFECT_H 
#define INCLUDED_UI_EVENT_H 
#define INCLUDED_UI_GAME_H 
#define INCLUDED_UI_INPUT_H 
#define INCLUDED_UI_MENU_H 
#define INCLUDED_UI_OPTIONS_H 
#define INCLUDED_UI_OUTPUT_H 
#define INCLUDED_UI_SCORE_H 
#define INCLUDED_UI_SIGNALS_H 
#define INCLUDED_UI_SKILLS_H 
#define INCLUDED_UI_SONGS_H 
#define INCLUDED_UI_SPOIL_H 
#define INCLUDED_UI_TUTORIAL_H 
#define INCLUDED_UI_WIZARD_H 
#define INCLUDED_WIZARD_H 
#define INCLUDED_ZTYPE_H 
#define INCLUDED_Z_BITFLAG_H 
#define INCLUDED_Z_COLOR_H 
#define INCLUDED_Z_DICE_H 
#define INCLUDED_Z_DICT_H 
#define INCLUDED_Z_EXPRESSION_H 
#define INCLUDED_Z_FILE_H 
#define INCLUDED_Z_FORM_H 
#define INCLUDED_Z_MSG_H 
#define INCLUDED_Z_QUARK_H 
#define INCLUDED_Z_QUEUE_H 
#define INCLUDED_Z_RAND_H 
#define INCLUDED_Z_TERM_H 
#define INCLUDED_Z_TEXTBLOCK_H 
#define INCLUDED_Z_UTIL_H 
#define INCLUDED_Z_VIRT_H 
#define IS_HARMLESS 0x0010
#define ITEM_VERSION 5
#define ITYPE_SIZE FLAG_SIZE(ITYPE_MAX)
#define KC_BACKSPACE 0x9f
#define KC_BEGIN 0x9b
#define KC_BREAK 0x9a
#define KC_DELETE 0x9e
#define KC_END 0x96
#define KC_ENTER 0x9c
#define KC_F1 0x84
#define KC_F10 0x8D
#define KC_F11 0x8E
#define KC_F12 0x8F
#define KC_F13 0x90
#define KC_F14 0x91
#define KC_F15 0x92
#define KC_F2 0x85
#define KC_F3 0x86
#define KC_F4 0x87
#define KC_F5 0x88
#define KC_F6 0x89
#define KC_F7 0x8A
#define KC_F8 0x8B
#define KC_F9 0x8C
#define KC_HELP 0x93
#define KC_HOME 0x94
#define KC_INSERT 0x98
#define KC_MOD_ALT 0x04
#define KC_MOD_CONTROL 0x01
#define KC_MOD_KEYPAD 0x10
#define KC_MOD_META 0x08
#define KC_MOD_SHIFT 0x02
#define KC_PAUSE 0x99
#define KC_PGDOWN 0x97
#define KC_PGUP 0x95
#define KC_TAB 0x9d
#define KEYLOG_SIZE 8
#define KEYMAP_ACTION_MAX 20
#define KEY_GRID(K) (loc(KEY_GRID_X(K), KEY_GRID_Y(K)))
#define KEY_GRID_X(K) ((int) (((K.mouse.x - COL_MAP) / tile_width) + Term->offset_x))
#define KEY_GRID_Y(K) ((int) (((K.mouse.y - ROW_MAP) / tile_height) + Term->offset_y))
#define KF_SIZE FLAG_SIZE(KF_MAX)
#define KTRL(X) ((X) & 0x1F)
#define MAX(a,b) (((a) < (b)) ? (b) : (a))
#define MAX_ACTION 6
#define MAX_ATTR 9
#define MAX_COLORS 32
#define MAX_COMBAT_ROLLS 50
#define MAX_HISCORES 100
#define MAX_ITEMLIST 2560
#define MAX_PREREQS 10
#define MAX_PVAL 32767
#define MAX_RAND_DEPTH 128
#define MAX_SMITHING_TVALS 18
#define MAX_TITLES 50
#define MDESC_CAPITAL 0x100
#define MDESC_COMMA 0x200
#define MDESC_DEFAULT 0x00
#define MDESC_DIED_FROM (MDESC_SHOW | MDESC_IND_VIS)
#define MDESC_HIDE 0x40
#define MDESC_IND_HID 0x04
#define MDESC_IND_VIS 0x08
#define MDESC_OBJE 0x01
#define MDESC_POSS 0x02
#define MDESC_PRO_HID 0x10
#define MDESC_PRO_VIS 0x20
#define MDESC_SHOW 0x80
#define MDESC_STANDARD (MDESC_CAPITAL | MDESC_IND_HID | MDESC_PRO_HID | MDESC_COMMA)
#define MDESC_TARG (MDESC_OBJE | MDESC_IND_HID | MDESC_PRO_HID)
#define MFLAG_SIZE FLAG_SIZE(MFLAG_MAX)
#define MIN(a,b) (((a) > (b)) ? (b) : (a))
#define MN_ACT_GRAYED 0x0001
#define MN_ACT_HIDDEN 0x0002
#define MN_ACT_MAYBE 0x0004
#define MODS_INCLUDE_CONTROL(v) (((v) >= 0x01 && (v) <= 0x1F) ? false : true)
#define MODS_INCLUDE_SHIFT(v) ((((v) >= 0x21 && (v) <= 0x2F) || ((v) >= 0x3A && (v) <= 0x60) || ((v) >= 0x7B && (v) <= 0x7E)) ? false : true)
#define MONSTER_ATTACK_H 
#define MONSTER_DESC_H 
#define MONSTER_INIT_H_ 
#define MONSTER_LIST_H 
#define MONSTER_LORE_H 
#define MONSTER_MAKE_H 
#define MONSTER_MESSAGE_H 
#define MONSTER_MONSTER_H 
#define MONSTER_MOVE_H 
#define MONSTER_SPELL_H 
#define MONSTER_SUMMON_H 
#define MONSTER_TIMED_H 
#define MONSTER_UTILITIES_H 
#define MON_BLOWS_H 
#define MON_GROUP_H 
#define MON_PREDICATE_H 
#define MON_TMD_FLG_NOFAIL 0x08
#define MON_TMD_FLG_NOMESSAGE 0x04
#define MON_TMD_FLG_NOTIFY 0x01
#define MULT_BG 256
#define NOSCORE_DEBUG 0x0008
#define NOSCORE_JUMPING 0x0010
#define NOSCORE_WIZARD 0x0002
#define NO_MINIMUM 255
#define N_ELEMENTS(a) (sizeof(a) / sizeof((a)[0]))
#define N_GAME_EVENTS EVENT_END + 1
#define OBJECT_CHEST_H 
#define OBJECT_DESC_H 
#define OBJECT_GEAR_H 
#define OBJECT_INFO_H 
#define OBJECT_INIT_H_ 
#define OBJECT_LIST_H 
#define OBJECT_LIST_INCR 128
#define OBJECT_LIST_SIZE 128
#define OBJECT_MAKE_H 
#define OBJECT_SLAYS_H 
#define OBJECT_TVAL_H 
#define OBJECT_UI_H 
#define OBJECT_UTIL_H 
#define OBJ_IGNORE_H 
#define OBJ_MOD_MIN_STAT OBJ_MOD_STR
#define OF_SIZE FLAG_SIZE(OF_MAX)
#define OPT(p,opt_name) p->opts.opt[OPT_##opt_name]
#define OPT_PAGE_BIRTH 1
#define OPT_PAGE_MAX OP_SCORE
#define OPT_PAGE_PER 21
#define PACKAGE "narsil"
#define PACKAGE_BUGREPORT "nckmccnnll@gmail.com"
#define PACKAGE_NAME "NarSil"
#define PACKAGE_STRING "NarSil 1.4.0"
#define PACKAGE_TARNAME "narsil"
#define PACKAGE_URL ""
#define PACKAGE_VERSION "1.4.0"
#define PARSER_H 
#define PATH_SEP "/"
#define PATH_SEPC '/'
#define PF_SIZE FLAG_SIZE(PF_MAX)
#define PLAYER_ATTACK_H 
#define PLAYER_BIRTH_H 
#define PLAYER_CALCS_H 
#define PLAYER_H 
#define PLAYER_NAME_LEN 32
#define PLAYER_PATH_H 
#define PLAYER_TIMED_H 
#define PLAYER_UTIL_H 
#define PLURAL(n) ((n) == 1 ? "" : "s")
#define PN_COMBINE 0x00000001L
#define PN_IGNORE 0x00000002L
#define PN_MON_MESSAGE 0x00000004L
#define PRIVATE_USER_PATH "~/.angband"
#define PROJECT_H 
#define PR_ARC 0x00004000L
#define PR_ARMOR 0x00000020L
#define PR_BASIC (PR_MISC | PR_STATS | PR_TERRAIN | PR_EXP | PR_SONG | PR_ARMOR | PR_HP | PR_MELEE | PR_ARC | PR_MANA | PR_DEPTH | PR_HEALTH | PR_SPEED)
#define PR_COMBAT 0x04000000L
#define PR_DEPTH 0x00001000L
#define PR_EQUIP 0x00040000L
#define PR_EXP 0x00000008L
#define PR_EXTRA (PR_STATUS | PR_STATE | PR_TERRAIN)
#define PR_FEELING 0x01000000L
#define PR_HEALTH 0x00000200L
#define PR_HP 0x00000040L
#define PR_INVEN 0x00020000L
#define PR_ITEMLIST 0x00800000L
#define PR_LIGHT 0x02000000L
#define PR_MANA 0x00000080L
#define PR_MAP 0x00010000L
#define PR_MELEE 0x00000800L
#define PR_MESSAGE 0x00080000L
#define PR_MISC 0x00000001L
#define PR_MONLIST 0x00400000L
#define PR_MONSTER 0x00100000L
#define PR_OBJECT 0x00200000L
#define PR_SONG 0x00000100L
#define PR_SPEED 0x00000400L
#define PR_STATE 0x00008000L
#define PR_STATS 0x00000010L
#define PR_STATUS 0x00002000L
#define PR_SUBWINDOW (PR_MONSTER | PR_OBJECT | PR_MONLIST | PR_ITEMLIST)
#define PR_TERRAIN 0x00000004L
#define PR_TITLE 0x00000002L
#define PU_BONUS 0x00000001L
#define PU_DISTANCE 0x00000080L
#define PU_HP 0x00000004L
#define PU_INVEN 0x00000200L
#define PU_MANA 0x00000008L
#define PU_MONSTERS 0x00000040L
#define PU_PANEL 0x00000100L
#define PU_SPELLS 0x00000010L
#define PU_TORCH 0x00000002L
#define PU_UPDATE_VIEW 0x00000020L
#define PW_COMBAT_ROLLS 0x00004000L
#define PW_EQUIP 0x00000002L
#define PW_INVEN 0x00000001L
#define PW_ITEMLIST 0x00001000L
#define PW_MAP 0x00000020L
#define PW_MAPS (PW_MAP | PW_OVERHEAD)
#define PW_MAX_FLAGS 16
#define PW_MESSAGE 0x00000040L
#define PW_MONLIST 0x00000400L
#define PW_MONSTER 0x00000100L
#define PW_OBJECT 0x00000200L
#define PW_OVERHEAD 0x00000080L
#define PW_PLAYER_0 0x00000004L
#define PW_PLAYER_1 0x00000008L
#define PW_PLAYER_2 0x00000010L
#define PW_PLAYER_3 0x00002000L
#define PW_STATUS 0x00000800L
#define PY_KNOW_LEVEL 30
#define PY_MAX_EXP 99999999L
#define PY_MAX_LEVEL 50
#define PY_REGEN_FAINT 33
#define PY_REGEN_HPBASE 1442
#define PY_REGEN_MNBASE 524
#define PY_REGEN_NORMAL 197
#define PY_REGEN_WEAK 98
#define PY_SPELL_FORGOTTEN 0x04
#define PY_SPELL_LEARNED 0x01
#define PY_SPELL_WORKED 0x02
#define QUEST_H 
#define RANDNAME_H 
#define RAND_DEG 32
#define REST_REQUIRED_FOR_REGEN 5
#define RF_SIZE FLAG_SIZE(RF_MAX)
#define ROOMF_SIZE FLAG_SIZE(ROOMF_MAX)
#define ROOM_LOG(...) if (OPT(player, cheat_room)) msg(__VA_ARGS__);
#define ROW_BOTTOM_MAP (row_bottom_map[Term->sidebar_mode])
#define ROW_MAP (row_top_map[Term->sidebar_mode])
#define RSF_SIZE FLAG_SIZE(RSF_MAX)
#define SCAN_INSTANT ((uint32_t) -1)
#define SCAN_OFF 0
#define SCREEN_HGT ((int) (SCREEN_ROWS / tile_height))
#define SCREEN_ROWS (Term->hgt - ROW_MAP - ROW_BOTTOM_MAP)
#define SCREEN_WID ((int)((Term->wid - COL_MAP - 1) / tile_width))
#define SGN(a) (((a) < 0) ? (-1) : ((a) != 0))
#define SHOW_EMPTY 0x0040
#define SHOW_FAIL 0x0020
#define SHOW_THROWING 0x0080
#define SIDEBAR_LEFT 0
#define SIDEBAR_MAX (SIDEBAR_NONE+1)
#define SIDEBAR_MODE (angband_term[0]->sidebar_mode)
#define SIDEBAR_NONE 2
#define SIDEBAR_TOP 1
#define SMELL_STRENGTH 80
#define SOUND_PRF_FORMAT "sound sym type str sounds"
#define SPECIAL_VALUE 99
#define SQUARE_SIZE FLAG_SIZE(SQUARE_MAX)
#define STAT_RANGE 38
#define STDC_HEADERS 1
#define STUN_DAM_REDUCTION 25
#define STUN_HIT_REDUCTION 25
#define STUN_MISS_CHANCE 10
#define SV_UNKNOWN 0
#define SYMTR_FLAG_FORCE_REF (4)
#define SYMTR_FLAG_NONE (0)
#define SYMTR_FLAG_NO_REF (2)
#define SYMTR_FLAG_NO_ROT (1)
#define SYMTR_MAX_WEIGHT (32768)
#define TARGET_GRID 0x08
#define TARGET_H 
#define TARGET_KILL 0x01
#define TARGET_LOOK 0x02
#define TARGET_OUT_VAL_SIZE 256
#define TARGET_QUIET 0x10
#define TARGET_XTRA 0x04
#define TERM_XTRA_ALIVE 11
#define TERM_XTRA_BORED 9
#define TERM_XTRA_CLEAR 3
#define TERM_XTRA_DELAY 13
#define TERM_XTRA_EVENT 1
#define TERM_XTRA_FLUSH 2
#define TERM_XTRA_FRESH 6
#define TERM_XTRA_FROSH 5
#define TERM_XTRA_LEVEL 12
#define TERM_XTRA_NOISE 7
#define TERM_XTRA_REACT 10
#define TERM_XTRA_SHAPE 4
#define TF_SIZE FLAG_SIZE(TF_MAX)
#define TRAP_H 
#define TRF_SIZE FLAG_SIZE(TRF_MAX)
#define UI_COMBAT_H 
#define UI_COMMAND_H 
#define UI_CONTEXT_H 
#define UI_DEATH_H 
#define UI_HELP_H 
#define UI_HISTORY_H 
#define UI_INIT_H 
#define UI_KEYMAP_H 
#define UI_KNOWLEDGE_H 
#define UI_MONSTER_LIST_H 
#define UI_MONSTER_LORE_H 
#define UI_OBJECT_LIST_H 
#define UI_PLAYER_H 
#define UI_PREFS_H 
#define UI_TARGET_H 
#define UI_VISUALS_H 
#define UNIX 
#define UN_KTRL(X) (((X) < 0x01 || (X) > 0x1B) ? (X) + 64 : (X) + 96)
#define UN_KTRL_CAP(X) ((X) + 64)
#define USE_EQUIP 0x0001
#define USE_FLOOR 0x0004
#define USE_GCU 1
#define USE_INVEN 0x0002
#define USE_NCURSES 1
#define USE_PRIVATE_PATHS 1
#define USE_QUIVER 0x0008
#define USE_SPOIL 1
#define VERB_AGREEMENT(count,singular,plural) (((count) == 1) ? (singular) : (plural))
#define VERSION ""
#define VERSION_NAME "NarSil"
#define _GNU_SOURCE 
#define hist_copy(f1,f2) flag_copy(f1, f2, HIST_SIZE)
#define hist_has(f,flag) flag_has_dbg(f, HIST_SIZE, flag, #f, #flag)
#define hist_off(f,flag) flag_off(f, HIST_SIZE, flag)
#define hist_on(f,flag) flag_on_dbg(f, HIST_SIZE, flag, #f, #flag)
#define hist_wipe(f) flag_wipe(f, HIST_SIZE)
#define isarrow(c) ((c >= ARROW_DOWN) && (c <= ARROW_UP))
#define itype_has(f,flag) flag_has_dbg(f, ITYPE_SIZE, flag, #f, #flag)
#define itype_on(f,flag) flag_on_dbg(f, ITYPE_SIZE, flag, #f, #flag)
#define itype_wipe(f) flag_wipe(f, ITYPE_SIZE)
#define kf_copy(f1,f2) flag_copy(f1, f2, KF_SIZE)
#define kf_diff(f1,f2) flag_diff(f1, f2, KF_SIZE)
#define kf_has(f,flag) flag_has_dbg(f, KF_SIZE, flag, #f, #flag)
#define kf_inter(f1,f2) flag_inter(f1, f2, KF_SIZE)
#define kf_is_empty(f) flag_is_empty(f, KF_SIZE)
#define kf_is_equal(f1,f2) flag_is_equal(f1, f2, KF_SIZE)
#define kf_is_full(f) flag_is_full(f, KF_SIZE)
#define kf_is_inter(f1,f2) flag_is_inter(f1, f2, KF_SIZE)
#define kf_is_subset(f1,f2) flag_is_subset(f1, f2, KF_SIZE)
#define kf_negate(f) flag_negate(f, KF_SIZE)
#define kf_next(f,flag) flag_next(f, KF_SIZE, flag)
#define kf_off(f,flag) flag_off(f, KF_SIZE, flag)
#define kf_on(f,flag) flag_on_dbg(f, KF_SIZE, flag, #f, #flag)
#define kf_setall(f) flag_setall(f, KF_SIZE)
#define kf_union(f1,f2) flag_union(f1, f2, KF_SIZE)
#define kf_wipe(f) flag_wipe(f, KF_SIZE)
#define mem_alloc_alt mem_alloc
#define mem_free_alt mem_free
#define mem_is_alt_alloc(p) (false)
#define mem_realloc_alt mem_realloc
#define mem_zalloc_alt mem_zalloc
#define mflag_copy(f1,f2) flag_copy(f1, f2, MFLAG_SIZE)
#define mflag_diff(f1,f2) flag_diff(f1, f2, MFLAG_SIZE)
#define mflag_has(f,flag) flag_has_dbg(f, MFLAG_SIZE, flag, #f, #flag)
#define mflag_inter(f1,f2) flag_inter(f1, f2, MFLAG_SIZE)
#define mflag_is_empty(f) flag_is_empty(f, MFLAG_SIZE)
#define mflag_is_equal(f1,f2) flag_is_equal(f1, f2, MFLAG_SIZE)
#define mflag_is_full(f) flag_is_full(f, MFLAG_SIZE)
#define mflag_is_inter(f1,f2) flag_is_inter(f1, f2, MFLAG_SIZE)
#define mflag_is_subset(f1,f2) flag_is_subset(f1, f2, MFLAG_SIZE)
#define mflag_negate(f) flag_negate(f, MFLAG_SIZE)
#define mflag_next(f,flag) flag_next(f, MFLAG_SIZE, flag)
#define mflag_off(f,flag) flag_off(f, MFLAG_SIZE, flag)
#define mflag_on(f,flag) flag_on_dbg(f, MFLAG_SIZE, flag, #f, #flag)
#define mflag_setall(f) flag_setall(f, MFLAG_SIZE)
#define mflag_union(f1,f2) flag_union(f1, f2, MFLAG_SIZE)
#define mflag_wipe(f) flag_wipe(f, MFLAG_SIZE)
#define of_copy(f1,f2) flag_copy(f1, f2, OF_SIZE)
#define of_count(f) flag_count(f, OF_SIZE)
#define of_diff(f1,f2) flag_diff(f1, f2, OF_SIZE)
#define of_has(f,flag) flag_has_dbg(f, OF_SIZE, flag, #f, #flag)
#define of_inter(f1,f2) flag_inter(f1, f2, OF_SIZE)
#define of_is_empty(f) flag_is_empty(f, OF_SIZE)
#define of_is_equal(f1,f2) flag_is_equal(f1, f2, OF_SIZE)
#define of_is_full(f) flag_is_full(f, OF_SIZE)
#define of_is_inter(f1,f2) flag_is_inter(f1, f2, OF_SIZE)
#define of_is_subset(f1,f2) flag_is_subset(f1, f2, OF_SIZE)
#define of_negate(f) flag_negate(f, OF_SIZE)
#define of_next(f,flag) flag_next(f, OF_SIZE, flag)
#define of_off(f,flag) flag_off(f, OF_SIZE, flag)
#define of_on(f,flag) flag_on_dbg(f, OF_SIZE, flag, #f, #flag)
#define of_setall(f) flag_setall(f, OF_SIZE)
#define of_union(f1,f2) flag_union(f1, f2, OF_SIZE)
#define of_wipe(f) flag_wipe(f, OF_SIZE)
#define one_in_(x) (!randint0(x))
#define percent_chance(X) (randint0(100) < X)
#define pf_copy(f1,f2) flag_copy(f1, f2, PF_SIZE)
#define pf_diff(f1,f2) flag_diff(f1, f2, PF_SIZE)
#define pf_has(f,flag) flag_has_dbg(f, PF_SIZE, flag, #f, #flag)
#define pf_inter(f1,f2) flag_inter(f1, f2, PF_SIZE)
#define pf_is_empty(f) flag_is_empty(f, PF_SIZE)
#define pf_is_equal(f1,f2) flag_is_equal(f1, f2, PF_SIZE)
#define pf_is_full(f) flag_is_full(f, PF_SIZE)
#define pf_is_inter(f1,f2) flag_is_inter(f1, f2, PF_SIZE)
#define pf_is_subset(f1,f2) flag_is_subset(f1, f2, PF_SIZE)
#define pf_negate(f) flag_negate(f, PF_SIZE)
#define pf_next(f,flag) flag_next(f, PF_SIZE, flag)
#define pf_off(f,flag) flag_off(f, PF_SIZE, flag)
#define pf_on(f,flag) flag_on_dbg(f, PF_SIZE, flag, #f, #flag)
#define pf_setall(f) flag_setall(f, PF_SIZE)
#define pf_union(f1,f2) flag_union(f1, f2, PF_SIZE)
#define pf_wipe(f) flag_wipe(f, PF_SIZE)
#define player_has(p,flag) (pf_has(p->state.pflags, (flag)))
#define q_pop_int(q) ((int)(q_pop((q))))
#define q_pop_ptr(q) ((void *)(q_pop((q))))
#define q_push_int(q,i) q_push((q), (uintptr_t)(i))
#define q_push_ptr(q,ptr) q_push((q), (uintptr_t)(ptr))
#define rand_spread(A,D) ((A) + (randint0(1 + (D) + (D))) - (D))
#define randint0(M) ((int32_t) Rand_div(M))
#define randint1(M) ((int32_t) Rand_div(M) + 1)
#define rf_comp_union(f1,f2) flag_comp_union(f1, f2, RF_SIZE)
#define rf_copy(f1,f2) flag_copy(f1, f2, RF_SIZE)
#define rf_count(f) flag_count(f, RF_SIZE)
#define rf_diff(f1,f2) flag_diff(f1, f2, RF_SIZE)
#define rf_has(f,flag) flag_has_dbg(f, RF_SIZE, flag, #f, #flag)
#define rf_inter(f1,f2) flag_inter(f1, f2, RF_SIZE)
#define rf_is_empty(f) flag_is_empty(f, RF_SIZE)
#define rf_is_equal(f1,f2) flag_is_equal(f1, f2, RF_SIZE)
#define rf_is_full(f) flag_is_full(f, RF_SIZE)
#define rf_is_inter(f1,f2) flag_is_inter(f1, f2, RF_SIZE)
#define rf_is_subset(f1,f2) flag_is_subset(f1, f2, RF_SIZE)
#define rf_negate(f) flag_negate(f, RF_SIZE)
#define rf_next(f,flag) flag_next(f, RF_SIZE, flag)
#define rf_off(f,flag) flag_off(f, RF_SIZE, flag)
#define rf_on(f,flag) flag_on_dbg(f, RF_SIZE, flag, #f, #flag)
#define rf_setall(f) flag_setall(f, RF_SIZE)
#define rf_union(f1,f2) flag_union(f1, f2, RF_SIZE)
#define rf_wipe(f) flag_wipe(f, RF_SIZE)
#define roomf_copy(f1,f2) flag_copy(f1, f2, ROOMF_SIZE)
#define roomf_count(f) flag_count(f, ROOMF_SIZE)
#define roomf_diff(f1,f2) flag_diff(f1, f2, ROOMF_SIZE)
#define roomf_has(f,flag) flag_has_dbg(f, ROOMF_SIZE, flag, #f, #flag)
#define roomf_inter(f1,f2) flag_iter(f1, f2, ROOMF_SIZE)
#define roomf_is_empty(f) flag_is_empty(f, ROOMF_SIZE)
#define roomf_is_equal(f1,f2) flag_is_equal(f1, f2, ROOMF_SIZE)
#define roomf_is_full(f) flag_is_full(f, ROOMF_SIZE)
#define roomf_is_inter(f1,f2) flag_is_inter(f1, f2, ROOMF_SIZE)
#define roomf_is_subset(f1,f2) flag_is_subset(f1, f2, ROOMF_SIZE)
#define roomf_negate(f) flag_negate(f, ROOMF_SIZE)
#define roomf_next(f,flag) flag_next(f, ROOMF_SIZE, flag)
#define roomf_off(f,flag) flag_off(f, ROOMF_SIZE, flag)
#define roomf_on(f,flag) flag_on_dbg(f, ROOMF_SIZE, flag, #f, #flag)
#define roomf_setall(f) flag_setall(f, ROOMF_SIZE)
#define roomf_union(f1,f2) flag_union(f1, f2, ROOMF_SIZE)
#define roomf_wipe(f) flag_wipe(f, ROOMF_SIZE)
#define rsf_copy(f1,f2) flag_copy(f1, f2, RSF_SIZE)
#define rsf_count(f) flag_count(f, RSF_SIZE)
#define rsf_diff(f1,f2) flag_diff(f1, f2, RSF_SIZE)
#define rsf_has(f,flag) flag_has_dbg(f, RSF_SIZE, flag, #f, #flag)
#define rsf_inter(f1,f2) flag_inter(f1, f2, RSF_SIZE)
#define rsf_is_empty(f) flag_is_empty(f, RSF_SIZE)
#define rsf_is_equal(f1,f2) flag_is_equal(f1, f2, RSF_SIZE)
#define rsf_is_full(f) flag_is_full(f, RSF_SIZE)
#define rsf_is_inter(f1,f2) flag_is_inter(f1, f2, RSF_SIZE)
#define rsf_is_subset(f1,f2) flag_is_subset(f1, f2, RSF_SIZE)
#define rsf_negate(f) flag_negate(f, RSF_SIZE)
#define rsf_next(f,flag) flag_next(f, RSF_SIZE, flag)
#define rsf_off(f,flag) flag_off(f, RSF_SIZE, flag)
#define rsf_on(f,flag) flag_on_dbg(f, RSF_SIZE, flag, #f, #flag)
#define rsf_setall(f) flag_setall(f, RSF_SIZE)
#define rsf_union(f1,f2) flag_union(f1, f2, RSF_SIZE)
#define rsf_wipe(f) flag_wipe(f, RSF_SIZE)
#define sqinfo_copy(f1,f2) flag_copy(f1, f2, SQUARE_SIZE)
#define sqinfo_diff(f1,f2) flag_diff(f1, f2, SQUARE_SIZE)
#define sqinfo_has(f,flag) flag_has_dbg(f, SQUARE_SIZE, flag, #f, #flag)
#define sqinfo_inter(f1,f2) flag_inter(f1, f2, SQUARE_SIZE)
#define sqinfo_is_empty(f) flag_is_empty(f, SQUARE_SIZE)
#define sqinfo_is_equal(f1,f2) flag_is_equal(f1, f2, SQUARE_SIZE)
#define sqinfo_is_full(f) flag_is_full(f, SQUARE_SIZE)
#define sqinfo_is_inter(f1,f2) flag_is_inter(f1, f2, SQUARE_SIZE)
#define sqinfo_is_subset(f1,f2) flag_is_subset(f1, f2, SQUARE_SIZE)
#define sqinfo_negate(f) flag_negate(f, SQUARE_SIZE)
#define sqinfo_next(f,flag) flag_next(f, SQUARE_SIZE, flag)
#define sqinfo_off(f,flag) flag_off(f, SQUARE_SIZE, flag)
#define sqinfo_on(f,flag) flag_on_dbg(f, SQUARE_SIZE, flag, #f, #flag)
#define sqinfo_setall(f) flag_setall(f, SQUARE_SIZE)
#define sqinfo_union(f1,f2) flag_union(f1, f2, SQUARE_SIZE)
#define sqinfo_wipe(f) flag_wipe(f, SQUARE_SIZE)
#define term_screen (angband_term[0])
#define tf_has(f,flag) flag_has_dbg(f, TF_SIZE, flag, #f, #flag)
#define trf_copy(f1,f2) flag_copy(f1, f2, TRF_SIZE)
#define trf_diff(f1,f2) flag_diff(f1, f2, TRF_SIZE)
#define trf_has(f,flag) flag_has_dbg(f, TRF_SIZE, flag, #f, #flag)
#define trf_inter(f1,f2) flag_inter(f1, f2, TRF_SIZE)
#define trf_is_empty(f) flag_is_empty(f, TRF_SIZE)
#define trf_is_equal(f1,f2) flag_is_equal(f1, f2, TRF_SIZE)
#define trf_is_full(f) flag_is_full(f, TRF_SIZE)
#define trf_is_inter(f1,f2) flag_is_inter(f1, f2, TRF_SIZE)
#define trf_is_subset(f1,f2) flag_is_subset(f1, f2, TRF_SIZE)
#define trf_negate(f) flag_negate(f, TRF_SIZE)
#define trf_next(f,flag) flag_next(f, TRF_SIZE, flag)
#define trf_off(f,flag) flag_off(f, TRF_SIZE, flag)
#define trf_on(f,flag) flag_on_dbg(f, TRF_SIZE, flag, #f, #flag)
#define trf_setall(f) flag_setall(f, TRF_SIZE)
#define trf_union(f1,f2) flag_union(f1, f2, TRF_SIZE)
#define trf_wipe(f) flag_wipe(f, TRF_SIZE)
#define unix 1

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <errno.h>
#include <limits.h>
#include <assert.h>

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <time.h>

#include <wchar.h>
#include <wctype.h>
