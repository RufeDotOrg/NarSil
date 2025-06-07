DATA struct feature* f_info;
DATA struct chunk* cave = NULL;
DATA const int16_t ddd[9] = {2, 8, 6, 4, 3, 1, 9, 7, 5};
DATA const uint8_t cycle[] = {1, 2, 3, 6, 9, 8, 7, 4, 1,
                              2, 3, 6, 9, 8, 7, 4, 1};
DATA const uint8_t chome[] = {0, 8, 9, 10, 7, 0, 11, 6, 5, 4};
DATA const int16_t ddx[10] = {0, -1, 0, 1, -1, 0, 1, -1, 0, 1};
DATA const int16_t ddy[10] = {0, 1, 1, 1, 0, 0, 0, -1, -1, -1};
DATA const struct loc ddgrid[10] = {{0, 0},  {-1, 1}, {0, 1}, {1, 1},
                                    {-1, 0}, {0, 0},  {1, 0}, {-1, -1},
                                    {0, -1}, {1, -1}};
DATA const int16_t ddx_ddd[9] = {0, 0, 1, -1, 1, -1, 1, -1, 0};
DATA const int16_t ddy_ddd[9] = {1, -1, 0, 0, 1, 1, -1, -1, 0};
DATA const struct loc ddgrid_ddd[9] = {{0, 1},  {0, -1},  {1, 0},
                                       {-1, 0}, {1, 1},   {-1, 1},
                                       {1, -1}, {-1, -1}, {0, 0}};
DATA const int16_t clockwise_ddd[9] = {8, 9, 6, 3, 2, 1, 4, 7, 5};
DATA const struct loc clockwise_grid[9] = {{0, -1}, {1, -1},  {1, 0},
                                           {1, 1},  {0, 1},   {-1, 1},
                                           {-1, 0}, {-1, -1}, {0, 0}};
DATA const int d_off_y_0[] = {0};
DATA const int d_off_x_0[] = {0};
DATA const int d_off_y_1[] = {-1, -1, -1, 0, 0, 1, 1, 1, 0};
DATA const int d_off_x_1[] = {-1, 0, 1, -1, 1, -1, 0, 1, 0};
DATA const int d_off_y_2[] = {-1, -1, -2, -2, -2, 0, 0, 1, 1, 2, 2, 2, 0};
DATA const int d_off_x_2[] = {-2, 2, -1, 0, 1, -2, 2, -2, 2, -1, 0, 1, 0};
DATA const int d_off_y_3[] = {-1, -1, -2, -2, -3, -3, -3, 0, 0,
                              1,  1,  2,  2,  3,  3,  3,  0};
DATA const int d_off_x_3[] = {-3, 3, -2, 2, -1, 0, 1, -3, 3,
                              -3, 3, -2, 2, -1, 0, 1, 0};
DATA const int d_off_y_4[] = {-1, -1, -2, -2, -3, -3, -3, -3, -4, -4, -4, 0, 0,
                              1,  1,  2,  2,  3,  3,  3,  3,  4,  4,  4,  0};
DATA const int d_off_x_4[] = {-4, 4, -3, 3, -2, -3, 2, 3, -1, 0, 1, -4, 4,
                              -4, 4, -3, 3, -2, -3, 2, 3, -1, 0, 1, 0};
DATA const int d_off_y_5[] = {-1, -1, -2, -2, -3, -3, -4, -4, -4, -4,
                              -5, -5, -5, 0,  0,  1,  1,  2,  2,  3,
                              3,  4,  4,  4,  4,  5,  5,  5,  0};
DATA const int d_off_x_5[] = {-5, 5,  -4, 4,  -4, 4,  -2, -3, 2, 3,
                              -1, 0,  1,  -5, 5,  -5, 5,  -4, 4, -4,
                              4,  -2, -3, 2,  3,  -1, 0,  1,  0};
DATA const int d_off_y_6[] = {-1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -5,
                              -5, -6, -6, -6, 0,  0,  1,  1,  2,  2,  3,
                              3,  4,  4,  5,  5,  5,  5,  6,  6,  6,  0};
DATA const int d_off_x_6[] = {-6, 6,  -5, 5,  -5, 5, -4, 4,  -2, -3, 2,
                              3,  -1, 0,  1,  -6, 6, -6, 6,  -5, 5,  -5,
                              5,  -4, 4,  -2, -3, 2, 3,  -1, 0,  1,  0};
DATA const int d_off_y_7[] = {-1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -5,
                              -5, -6, -6, -6, -6, -7, -7, -7, 0,  0,  1,
                              1,  2,  2,  3,  3,  4,  4,  5,  5,  5,  5,
                              6,  6,  6,  6,  7,  7,  7,  0};
DATA const int d_off_x_7[] = {
    -7, 7, -6, 6, -6, 6, -5, 5, -4, -5, 4, 5, -2, -3, 2, 3, -1, 0, 1, -7, 7,
    -7, 7, -6, 6, -6, 6, -5, 5, -4, -5, 4, 5, -2, -3, 2, 3, -1, 0, 1, 0};
DATA const int d_off_y_8[] = {-1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -6, -6,
                              -6, -6, -7, -7, -7, -7, -8, -8, -8, 0,  0,  1,
                              1,  2,  2,  3,  3,  4,  4,  5,  5,  6,  6,  6,
                              6,  7,  7,  7,  7,  8,  8,  8,  0};
DATA const int d_off_x_8[] = {-8, 8,  -7, 7,  -7, 7,  -6, 6,  -6, 6,  -4, -5,
                              4,  5,  -2, -3, 2,  3,  -1, 0,  1,  -8, 8,  -8,
                              8,  -7, 7,  -7, 7,  -6, 6,  -6, 6,  -4, -5, 4,
                              5,  -2, -3, 2,  3,  -1, 0,  1,  0};
DATA const int d_off_y_9[] = {
    -1, -1, -2, -2, -3, -3, -4, -4, -5, -5, -6, -6, -7, -7, -7, -7, -8,
    -8, -8, -8, -9, -9, -9, 0,  0,  1,  1,  2,  2,  3,  3,  4,  4,  5,
    5,  6,  6,  7,  7,  7,  7,  8,  8,  8,  8,  9,  9,  9,  0};
DATA const int d_off_x_9[] = {
    -9, 9,  -8, 8,  -8, 8, -7, 7,  -7, 7, -6, 6,  -4, -5, 4,  5, -2,
    -3, 2,  3,  -1, 0,  1, -9, 9,  -9, 9, -8, 8,  -8, 8,  -7, 7, -7,
    7,  -6, 6,  -4, -5, 4, 5,  -2, -3, 2, 3,  -1, 0,  1,  0};
DATA const int* dist_offsets_y[10] = {
    d_off_y_0, d_off_y_1, d_off_y_2, d_off_y_3, d_off_y_4,
    d_off_y_5, d_off_y_6, d_off_y_7, d_off_y_8, d_off_y_9};
DATA const int* dist_offsets_x[10] = {
    d_off_x_0, d_off_x_1, d_off_x_2, d_off_x_3, d_off_x_4,
    d_off_x_5, d_off_x_6, d_off_x_7, d_off_x_8, d_off_x_9};
DATA const uint8_t side_dirs[20][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0}, {1, 4, 2, 7, 3, 8, 6, 9},
    {2, 1, 3, 4, 6, 7, 9, 8}, {3, 2, 6, 1, 9, 4, 8, 7},
    {4, 7, 1, 8, 2, 9, 3, 6}, {5, 5, 5, 5, 5, 5, 5, 5},
    {6, 3, 9, 2, 8, 1, 7, 4}, {7, 8, 4, 9, 1, 6, 2, 3},
    {8, 9, 7, 6, 4, 3, 1, 2}, {9, 6, 8, 3, 7, 2, 4, 1},
    {0, 0, 0, 0, 0, 0, 0, 0}, {1, 2, 4, 3, 7, 6, 8, 9},
    {2, 3, 1, 6, 4, 9, 7, 8}, {3, 6, 2, 9, 1, 8, 4, 7},
    {4, 1, 7, 2, 8, 3, 9, 6}, {5, 5, 5, 5, 5, 5, 5, 5},
    {6, 9, 3, 8, 2, 7, 1, 4}, {7, 4, 8, 1, 9, 2, 6, 3},
    {8, 7, 9, 4, 6, 1, 3, 2}, {9, 8, 6, 7, 3, 4, 2, 1}};
DATA const char* feat_code_list[] = {
    "NONE",   "FLOOR",      "CLOSED",     "OPEN",  "BROKEN",     "LESS",
    "MORE",   "LESS_SHAFT", "MORE_SHAFT", "CHASM", "SECRET",     "RUBBLE",
    "QUARTZ", "GRANITE",    "PERM",       "FORGE", "FORGE_GOOD", "FORGE_UNIQUE",
    "PIT",    "SPIKED_PIT", NULL};
DATA struct vinfo_type vinfo[161];
typedef struct vinfo_hack vinfo_hack;
DATA uint16_t fire_g[1536];
DATA int fire_n = 0;
DATA bool fire_info[256 * 55];
DATA const struct command_info game_cmds[] = {
    {CMD_LOADFILE, "load a savefile", NULL, false, 0},
    {CMD_NEWGAME, "start a new game", NULL, false, 0},
    {CMD_BIRTH_INIT, "start the character birth process",
     fptr(do_cmd_birth_init), false, 0},
    {CMD_BIRTH_RESET, "go back to the beginning", fptr(do_cmd_birth_reset),
     false, 0},
    {CMD_CHOOSE_RACE, "select race", fptr(do_cmd_choose_race), false, 0},
    {CMD_CHOOSE_HOUSE, "select house", fptr(do_cmd_choose_house), false, 0},
    {CMD_CHOOSE_SEX, "select sex", fptr(do_cmd_choose_sex), false, 0},
    {CMD_BUY_STAT, "buy points in a stat", fptr(do_cmd_buy_stat), false, 0},
    {CMD_SELL_STAT, "sell points in a stat", fptr(do_cmd_sell_stat), false, 0},
    {CMD_RESET_STATS, "reset stats", fptr(do_cmd_reset_stats), false, 0},
    {CMD_REFRESH_STATS, "refresh stats", fptr(do_cmd_refresh_stats), false, 0},
    {CMD_BUY_SKILL, "buy points in a skill", fptr(do_cmd_buy_skill), false, 0},
    {CMD_SELL_SKILL, "sell points in a skill", fptr(do_cmd_sell_skill), false,
     0},
    {CMD_RESET_SKILLS, "reset skills", fptr(do_cmd_reset_skills), false, 0},
    {CMD_REFRESH_SKILLS, "refresh skills", fptr(do_cmd_refresh_skills), false,
     0},
    {CMD_NAME_CHOICE, "choose name", fptr(do_cmd_choose_name), false, 0},
    {CMD_HISTORY_CHOICE, "write history", fptr(do_cmd_choose_history), false,
     0},
    {CMD_ACCEPT_CHARACTER, "accept character", fptr(do_cmd_accept_character),
     false, 0},
    {CMD_GO_UP, "go up stairs", fptr(do_cmd_go_up), false, 0},
    {CMD_GO_DOWN, "go down stairs", fptr(do_cmd_go_down), false, 0},
    {CMD_TOGGLE_STEALTH, "toggle stealth", fptr(do_cmd_toggle_stealth), false,
     0},
    {CMD_WALK, "walk", fptr(do_cmd_walk), true, 0},
    {CMD_RUN, "run", fptr(do_cmd_run), true, 0},
    {CMD_JUMP, "jump", fptr(do_cmd_jump), false, 0},
    {CMD_OPEN, "open", fptr(do_cmd_open), true, 99},
    {CMD_CLOSE, "close", fptr(do_cmd_close), true, 99},
    {CMD_BASH, "bash", fptr(do_cmd_bash), true, 99},
    {CMD_EXCHANGE, "exchange places", fptr(do_cmd_exchange), false, 0},
    {CMD_TUNNEL, "tunnel", fptr(do_cmd_tunnel), true, 99},
    {CMD_LEAP, "leap", fptr(do_cmd_leap), false, 0},
    {CMD_HOLD, "stay still", fptr(do_cmd_hold), true, 0},
    {CMD_DISARM, "disarm", fptr(do_cmd_disarm), true, 99},
    {CMD_ALTER, "alter", fptr(do_cmd_alter), true, 99},
    {CMD_REST, "rest", fptr(do_cmd_rest), false, 0},
    {CMD_SLEEP, "sleep", fptr(do_cmd_sleep), false, 0},
    {CMD_SKIP, "skip", fptr(do_cmd_skip), false, 0},
    {CMD_PATHFIND, "walk", fptr(do_cmd_pathfind), false, 0},
    {CMD_PICKUP, "pickup", fptr(do_cmd_pickup), false, 0},
    {CMD_AUTOPICKUP, "autopickup", fptr(do_cmd_autopickup), false, 0},
    {CMD_WIELD, "wear or wield", fptr(do_cmd_wield), false, 0},
    {CMD_TAKEOFF, "take off", fptr(do_cmd_takeoff), false, 0},
    {CMD_DROP, "drop", fptr(do_cmd_drop), false, 0},
    {CMD_DESTROY, "destroy", fptr(do_cmd_destroy), false, 0},
    {CMD_UNINSCRIBE, "un-inscribe", fptr(do_cmd_uninscribe), false, 0},
    {CMD_AUTOINSCRIBE, "autoinscribe", fptr(do_cmd_autoinscribe), false, 0},
    {CMD_EAT, "eat", fptr(do_cmd_eat_food), false, 0},
    {CMD_QUAFF, "quaff", fptr(do_cmd_quaff_potion), false, 0},
    {CMD_BLOW_HORN, "blow", fptr(do_cmd_blow_horn), false, 0},
    {CMD_USE_STAFF, "use", fptr(do_cmd_use_staff), false, 0},
    {CMD_REFUEL, "refuel with", fptr(do_cmd_refuel), false, 0},
    {CMD_FIRE, "fire", fptr(do_cmd_fire), false, 0},
    {CMD_THROW, "throw", fptr(do_cmd_throw), false, 0},
    {CMD_SMITH, "smith", fptr(do_cmd_smith), true, 0},
    {CMD_SING, "change song", fptr(do_cmd_change_song), false, 0},
    {CMD_INSCRIBE, "inscribe", fptr(do_cmd_inscribe), false, 0},
    {CMD_USE, "use", fptr(do_cmd_use), false, 0},
    {CMD_RETIRE, "retire character", fptr(do_cmd_retire), false, 0},
    {CMD_HELP, "help", NULL, false, 0},
    {CMD_REPEAT, "repeat", NULL, false, 0},
    {CMD_SPOIL_ARTIFACT, "generate spoiler file for artifacts",
     fptr(do_cmd_spoil_artifact), false, 0},
    {CMD_SPOIL_MON, "generate spoiler file for monsters",
     fptr(do_cmd_spoil_monster), false, 0},
    {CMD_SPOIL_MON_BRIEF, "generate brief spoiler file for monsters",
     fptr(do_cmd_spoil_monster_brief), false, 0},
    {CMD_SPOIL_OBJ, "generate spoiler file for objects", fptr(do_cmd_spoil_obj),
     false, 0},
    {CMD_WIZ_ACQUIRE, "acquire objects", fptr(do_cmd_wiz_acquire), false, 0},
    {CMD_WIZ_ADVANCE, "make character powerful", fptr(do_cmd_wiz_advance),
     false, 0},
    {CMD_WIZ_BANISH, "banish nearby monsters", fptr(do_cmd_wiz_banish), false,
     0},
    {CMD_WIZ_CHANGE_ITEM_QUANTITY, "change number of an item",
     fptr(do_cmd_wiz_change_item_quantity), false, 0},
    {CMD_WIZ_COLLECT_DISCONNECT_STATS,
     "collect statistics about disconnected levels",
     fptr(do_cmd_wiz_collect_disconnect_stats), false, 0},
    {CMD_WIZ_COLLECT_OBJ_MON_STATS, "collect object/monster statistics",
     fptr(do_cmd_wiz_collect_obj_mon_stats), false, 0},
    {CMD_WIZ_CREATE_ALL_ARTIFACT, "create all artifacts",
     fptr(do_cmd_wiz_create_all_artifact), false, 0},
    {CMD_WIZ_CREATE_ALL_ARTIFACT_FROM_TVAL, "create all artifacts of a tval",
     fptr(do_cmd_wiz_create_all_artifact_from_tval), false, 0},
    {CMD_WIZ_CREATE_ALL_OBJ, "create all objects",
     fptr(do_cmd_wiz_create_all_obj), false, 0},
    {CMD_WIZ_CREATE_ALL_OBJ_FROM_TVAL, "create all objects of a tval",
     fptr(do_cmd_wiz_create_all_obj_from_tval), false, 0},
    {CMD_WIZ_CREATE_ARTIFACT, "create artifact",
     fptr(do_cmd_wiz_create_artifact), false, 0},
    {CMD_WIZ_CREATE_OBJ, "create object", fptr(do_cmd_wiz_create_obj), false,
     0},
    {CMD_WIZ_CREATE_TRAP, "create trap", fptr(do_cmd_wiz_create_trap), false,
     0},
    {CMD_WIZ_CURE_ALL, "cure everything", fptr(do_cmd_wiz_cure_all), false, 0},
    {CMD_WIZ_DETECT_ALL_LOCAL, "detect everything nearby",
     fptr(do_cmd_wiz_detect_all_local), false, 0},
    {CMD_WIZ_DETECT_ALL_MONSTERS, "detect all monsters",
     fptr(do_cmd_wiz_detect_all_monsters), false, 0},
    {CMD_WIZ_DISPLAY_KEYLOG, "display keystroke log",
     fptr(do_cmd_wiz_display_keylog), false, 0},
    {CMD_WIZ_DUMP_LEVEL_MAP, "write map of level",
     fptr(do_cmd_wiz_dump_level_map), false, 0},
    {CMD_WIZ_EDIT_PLAYER_EXP, "change the player's experience",
     fptr(do_cmd_wiz_edit_player_exp), false, 0},
    {CMD_WIZ_EDIT_PLAYER_START, "start editing the player",
     fptr(do_cmd_wiz_edit_player_start), false, 0},
    {CMD_WIZ_EDIT_PLAYER_STAT, "edit one of the player's stats",
     fptr(do_cmd_wiz_edit_player_stat), false, 0},
    {CMD_WIZ_HIT_ALL_LOS, "hit all monsters in LOS",
     fptr(do_cmd_wiz_hit_all_los), false, 0},
    {CMD_WIZ_INCREASE_EXP, "increase experience", fptr(do_cmd_wiz_increase_exp),
     false, 0},
    {CMD_WIZ_JUMP_LEVEL, "jump to a level", fptr(do_cmd_wiz_jump_level), false,
     0},
    {CMD_WIZ_LEARN_OBJECT_KINDS, "learn about kinds of objects",
     fptr(do_cmd_wiz_learn_object_kinds), false, 0},
    {CMD_WIZ_MAGIC_MAP, "map local area", fptr(do_cmd_wiz_magic_map), false, 0},
    {CMD_WIZ_PEEK_NOISE_SCENT, "peek at noise and scent",
     fptr(do_cmd_wiz_peek_noise_scent), false, 0},
    {CMD_WIZ_PERFORM_EFFECT, "perform an effect",
     fptr(do_cmd_wiz_perform_effect), false, 0},
    {CMD_WIZ_PLAY_ITEM, "play with item", fptr(do_cmd_wiz_play_item), false, 0},
    {CMD_WIZ_PUSH_OBJECT, "push objects from fptr(square)",
     fptr(do_cmd_wiz_push_object), false, 0},
    {CMD_WIZ_QUERY_FEATURE, "highlight specific feature",
     fptr(do_cmd_wiz_query_feature), false, 0},
    {CMD_WIZ_QUERY_SQUARE_FLAG, "query fptr(square) flag",
     fptr(do_cmd_wiz_query_square_flag), false, 0},
    {CMD_WIZ_QUIT_NO_SAVE, "quit without saving", fptr(do_cmd_wiz_quit_no_save),
     false, 0},
    {CMD_WIZ_RECALL_MONSTER, "recall monster", fptr(do_cmd_wiz_recall_monster),
     false, 0},
    {CMD_WIZ_REROLL_ITEM, "reroll an item", fptr(do_cmd_wiz_reroll_item), false,
     0},
    {CMD_WIZ_STAT_ITEM, "get statistics for an item",
     fptr(do_cmd_wiz_stat_item), false, 0},
    {CMD_WIZ_SUMMON_NAMED, "summon specific monster",
     fptr(do_cmd_wiz_summon_named), false, 0},
    {CMD_WIZ_SUMMON_RANDOM, "summon random monsters",
     fptr(do_cmd_wiz_summon_random), false, 0},
    {CMD_WIZ_TELEPORT_TO, "teleport to location", fptr(do_cmd_wiz_teleport_to),
     false, 0},
    {CMD_WIZ_TWEAK_ITEM, "modify item attributes", fptr(do_cmd_wiz_tweak_item),
     false, 0},
    {CMD_WIZ_WIPE_RECALL, "erase monster recall", fptr(do_cmd_wiz_wipe_recall),
     false, 0},
    {CMD_WIZ_WIZARD_LIGHT, "wizard light the level",
     fptr(do_cmd_wiz_wizard_light), false, 0},
};
DATA int cmd_head = 0;
DATA int cmd_tail = 0;
DATA struct command cmd_queue[20];
DATA int last_command_idx = -1;
DATA struct command last_command = {.context = CTX_INIT,
                                    .code = CMD_NULL,
                                    .nrepeats = 0,
                                    .is_background_command = false,
                                    .arg = {{0}}};
DATA bool repeat_prev_allowed = false;
DATA bool repeating = false;
DATA char* archive_user_pfx = NULL;
DATA const char* parser_error_str[PARSE_ERROR_MAX] = {
    "(none)",
    "bad expression string",
    "name is already in use",
    "symbol is already in use",
    "element name mismatch",
    "field too long",
    "generic error",
    "internal error",
    "invalid ability",
    "invalid allocation",
    "invalid colour",
    "invalid dice",
    "invalid effect",
    "invalid expression",
    "invalid flag",
    "invalid object property id type",
    "invalid item number",
    "invalid power calculation iterate",
    "invalid lighting",
    "invalid message",
    "invalid monster base",
    "invalid monster race",
    "invalid monster group role",
    "invalid object property code",
    "invalid option",
    "invalid power calculation operation",
    "invalid player property code",
    "invalid player race",
    "invalid object property type",
    "invalid skill",
    "invalid slay",
    "invalid smithing category",
    "invalid smithing cost type",
    "invalid spell frequency",
    "invalid spell name",
    "invalid spell stat",
    "invalid object property subtype",
    "invalid terrain",
    "invalid UTF-8 code point",
    "invalid value",
    "malformed coordinate",
    "missing blow effect type",
    "missing field",
    "missing object property type",
    "missing player property type",
    "missing record header",
    "artifact name not found",
    "no builder found",
    "no file found",
    "no kind for ability",
    "no kind for drop type",
    "no kind for ego type",
    "no kind found",
    "no room found",
    "non-sequential records",
    "not a number",
    "not random",
    "not a special artifact",
    "obsolete file",
    "out of bounds",
    "out of memory",
    "directive used more than once",
    "too few entries",
    "too many entries",
    "too many ability prerequisites",
    "unbound expression",
    "undefined directive",
    "unrecognized blow",
    "unrecognized brand",
    "unrecognized slay",
    "unrecognized curse",
    "unrecognized trap",
    "unrecognized tval",
    "unrecognized sval",
    "unrecognized skill",
    "unrecognized parameter",
    "vault too big",
    "bad vault description line length",
};
typedef void debug_hook(const char*);
DATA debug_hook* d_out = fptr(to_stderr);
DATA int set_value = 0;
DATA const struct effect_kind effects[] = {
    {EF_NONE, false, NULL, NULL, NULL, NULL},
    {EF_HEAL_HP, false, "heal", fptr(effect_handler_HEAL_HP),
     "heals %s hitpoints%s", "heal self"},
    {EF_DAMAGE, false, "hurt", fptr(effect_handler_DAMAGE),
     "does %s damage to the player", "%s damage"},
    {EF_DART, false, "hurt", fptr(effect_handler_DART),
     "does %s damage to the player", "dart"},
    {EF_PIT, false, "hurt", fptr(effect_handler_PIT), "player falls in a pit",
     "pitfall"},
    {EF_PROJECT_LOS, false, "power", fptr(effect_handler_PROJECT_LOS),
     "%s which are in line of sight", "%s in line of sight"},
    {EF_PROJECT_LOS_GRIDS, false, "power",
     fptr(effect_handler_PROJECT_LOS_GRIDS), "%s which are in line of sight",
     "%s in line of sight"},
    {EF_DEADFALL, false, "hurt", fptr(effect_handler_DEADFALL),
     "makes rocks fall on the player", "deadfall"},
    {EF_EARTHQUAKE, false, NULL, fptr(effect_handler_EARTHQUAKE),
     "causes an earthquake around you of radius %d", "cause earthquake"},
    {EF_SPOT, false, "dam", fptr(effect_handler_SPOT),
     "creates a ball of %s with radius %d, centred on and hitting the player, "
     "with full intensity to radius %d, dealing %s damage at the centre",
     "engulf with %s"},
    {EF_SPHERE, false, "dam", fptr(effect_handler_SPHERE),
     "creates a ball of %s with radius %d, centred on the player, with full "
     "intensity to radius %d, dealing %s damage at the centre",
     "fptr(project) %s"},
    {EF_EXPLOSION, false, "dam", fptr(effect_handler_EXPLOSION),
     "produces a blast of %s", "blast %s"},
    {EF_BREATH, true, NULL, fptr(effect_handler_BREATH),
     "breathes a cone of %s with width %d degrees, dealing %s damage at the "
     "source",
     "breathe a cone of %s"},
    {EF_BOLT, true, "dam", fptr(effect_handler_BOLT),
     "casts a bolt of %s dealing %s damage", "cast a bolt of %s"},
    {EF_BEAM, true, "dam", fptr(effect_handler_BEAM),
     "casts a beam of %s dealing %s damage", "cast a beam of %s"},
    {EF_TERRAIN_BEAM, true, NULL, fptr(effect_handler_TERRAIN_BEAM),
     "casts a beam of %s", "cast a beam of %s"},
    {EF_NOURISH, false, NULL, fptr(effect_handler_NOURISH),
     "%s for %s turns (%s percent)", "%s %s"},
    {EF_CURE, false, NULL, fptr(effect_handler_CURE), "cures %s", "cure %s"},
    {EF_TIMED_SET, false, NULL, fptr(effect_handler_TIMED_SET),
     "administers %s for %s turns", "administer %s"},
    {EF_TIMED_INC, false, "dur", fptr(effect_handler_TIMED_INC),
     "extends %s for %s turns", "extend %s"},
    {EF_TIMED_INC_CHECK, false, "dur", fptr(effect_handler_TIMED_INC_CHECK),
     "checks if %s can be extended", "checks %s extension"},
    {EF_TIMED_INC_NO_RES, false, "dur", fptr(effect_handler_TIMED_INC_NO_RES),
     "extends %s for %s turns (unresistable)", "extend %s"},
    {EF_TERROR, false, NULL, fptr(effect_handler_TERROR),
     "administers fear for %s turns, and haste for about half as long",
     "administer fear/haste"},
    {EF_GLYPH, false, NULL, fptr(effect_handler_GLYPH),
     "inscribes a glyph beneath you", "inscribe a glyph"},
    {EF_RESTORE_STAT, false, NULL, fptr(effect_handler_RESTORE_STAT),
     "restores your %s", "restore %s"},
    {EF_DRAIN_STAT, false, NULL, fptr(effect_handler_DRAIN_STAT),
     "reduces your %s", "drains %s"},
    {EF_RESTORE_MANA, false, NULL, fptr(effect_handler_RESTORE_MANA),
     "restores some mana", "restore some mana"},
    {EF_REMOVE_CURSE, false, NULL, fptr(effect_handler_REMOVE_CURSE),
     "attempts power %s removal of a single curse on an object",
     "remove curse"},
    {EF_MAP_AREA, false, NULL, fptr(effect_handler_MAP_AREA),
     "maps the current dungeon level", "map level"},
    {EF_DETECT_TRAPS, false, NULL, fptr(effect_handler_DETECT_TRAPS),
     "detects traps nearby", "detect traps"},
    {EF_DETECT_DOORS, false, NULL, fptr(effect_handler_DETECT_DOORS),
     "detects doors nearby", "detect doors"},
    {EF_DETECT_OBJECTS, false, NULL, fptr(effect_handler_DETECT_OBJECTS),
     "detects objects nearby", "detect objects"},
    {EF_DETECT_MONSTERS, false, NULL, fptr(effect_handler_DETECT_MONSTERS),
     "detects monsters on the level", "detect monsters"},
    {EF_REVEAL_MONSTER, false, NULL, fptr(effect_handler_REVEAL_MONSTER),
     "reveals a monster", "reveal monster"},
    {EF_CLOSE_CHASMS, false, NULL, fptr(effect_handler_CLOSE_CHASMS),
     "close nearby chasms", "close_chasms"},
    {EF_IDENTIFY, false, NULL, fptr(effect_handler_IDENTIFY),
     "identifie a selected item", "identify"},
    {EF_RECHARGE, false, "power", fptr(effect_handler_RECHARGE),
     "tries to recharge a wand or staff, destroying the wand or staff on "
     "failure",
     "recharge"},
    {EF_SUMMON, false, NULL, fptr(effect_handler_SUMMON),
     "summons %s at the current dungeon level", "summon %s"},
    {EF_TELEPORT_TO, false, NULL, fptr(effect_handler_TELEPORT_TO),
     "teleports toward a target", "teleport to target"},
    {EF_DARKEN_LEVEL, false, NULL, fptr(effect_handler_DARKEN_LEVEL),
     "completely darkens and forgets the level", "darken level"},
    {EF_LIGHT_AREA, false, NULL, fptr(effect_handler_LIGHT_AREA),
     "lights up the surrounding area", "light area"},
    {EF_DARKEN_AREA, false, NULL, fptr(effect_handler_DARKEN_AREA),
     "darkens the surrounding area", "darken area"},
    {EF_SONG_OF_ELBERETH, false, NULL, fptr(effect_handler_SONG_OF_ELBERETH),
     "sings a song of Elbereth", "song of Elbereth"},
    {EF_SONG_OF_LORIEN, false, NULL, fptr(effect_handler_SONG_OF_LORIEN),
     "sings a song of Lorien", "song of Lorien"},
    {EF_SONG_OF_FREEDOM, false, NULL, fptr(effect_handler_SONG_OF_FREEDOM),
     "sings a song of Freedom", "song of Freedom"},
    {EF_SONG_OF_BINDING, false, NULL, fptr(effect_handler_SONG_OF_BINDING),
     "sings a song of Binding", "song of Binding"},
    {EF_SONG_OF_PIERCING, false, NULL, fptr(effect_handler_SONG_OF_PIERCING),
     "sings a song of Piercing", "song of Piercing"},
    {EF_SONG_OF_OATHS, false, NULL, fptr(effect_handler_SONG_OF_OATHS),
     "sings a song of Oaths", "song of Oaths"},
    {EF_AGGRAVATE, false, NULL, fptr(effect_handler_AGGRAVATE),
     "makes nearby monsters aggressive", "make angry"},
    {EF_NOISE, false, NULL, fptr(effect_handler_NOISE),
     "makes a noise that monsters may hear", "make a noise"},
    {EF_CREATE_TRAPS, false, NULL, fptr(effect_handler_CREATE_TRAPS),
     "create traps on the level", "create traps"},
    {EF_MAX, false, NULL, NULL, NULL, NULL}};
DATA const char* effect_names[] = {
    NULL,
    "HEAL_HP",
    "DAMAGE",
    "DART",
    "PIT",
    "PROJECT_LOS",
    "PROJECT_LOS_GRIDS",
    "DEADFALL",
    "EARTHQUAKE",
    "SPOT",
    "SPHERE",
    "EXPLOSION",
    "BREATH",
    "BOLT",
    "BEAM",
    "TERRAIN_BEAM",
    "NOURISH",
    "CURE",
    "TIMED_SET",
    "TIMED_INC",
    "TIMED_INC_CHECK",
    "TIMED_INC_NO_RES",
    "TERROR",
    "GLYPH",
    "RESTORE_STAT",
    "DRAIN_STAT",
    "RESTORE_MANA",
    "REMOVE_CURSE",
    "MAP_AREA",
    "DETECT_TRAPS",
    "DETECT_DOORS",
    "DETECT_OBJECTS",
    "DETECT_MONSTERS",
    "REVEAL_MONSTER",
    "CLOSE_CHASMS",
    "IDENTIFY",
    "RECHARGE",
    "SUMMON",
    "TELEPORT_TO",
    "DARKEN_LEVEL",
    "LIGHT_AREA",
    "DARKEN_AREA",
    "SONG_OF_ELBERETH",
    "SONG_OF_LORIEN",
    "SONG_OF_FREEDOM",
    "SONG_OF_BINDING",
    "SONG_OF_PIERCING",
    "SONG_OF_OATHS",
    "AGGRAVATE",
    "NOISE",
    "CREATE_TRAPS",
};
DATA struct event_handler_entry* event_handlers[N_GAME_EVENTS];
DATA uint16_t daycount = 0;
DATA uint32_t seed_randart;
DATA uint32_t seed_flavor;
DATA int32_t turn;
DATA bool character_generated;
DATA bool character_dungeon;
DATA struct level* world;
DATA const uint8_t extract_energy[8] = {
    5, 5, 10, 15, 20, 25, 30, 35,
};
DATA struct vault* vaults;
DATA struct cave_profile* cave_profiles;
DATA struct dun_data* dun;
DATA struct room_template* room_templates;
DATA const char* room_flags[] = {"NONE",  "NO_ROTATION", "TRAPS", "WEBS",
                                 "LIGHT", "TEST",        "MAX",   NULL};
DATA struct file_parser profile_parser = {
    "dungeon_profile", fptr(init_parse_profile), fptr(run_parse_profile),
    fptr(finish_parse_profile), fptr(cleanup_profile)};
DATA struct file_parser vault_parser = {
    "vault", fptr(init_parse_vault), fptr(run_parse_vault),
    fptr(finish_parse_vault), fptr(cleanup_vault)};
DATA struct init_module generate_module = {
    .name = "generate",
    .init = fptr(run_template_parser),
    .cleanup = fptr(cleanup_template_parser)};
DATA uint8_t get_angle_to_grid[41][41] = {
    {68, 67, 66, 65, 64, 63, 62, 62, 60, 59, 58, 57, 56, 55,
     53, 52, 51, 49, 48, 46, 45, 44, 42, 41, 39, 38, 37, 35,
     34, 33, 32, 31, 30, 28, 28, 27, 26, 25, 24, 24, 23},
    {69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 56, 55,
     54, 52, 51, 49, 48, 47, 45, 43, 42, 41, 39, 38, 36, 35,
     34, 32, 31, 30, 29, 28, 27, 26, 25, 24, 24, 23, 22},
    {69, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 58, 57, 56,
     54, 53, 51, 50, 48, 47, 45, 43, 42, 40, 39, 37, 36, 34,
     33, 32, 30, 29, 28, 27, 26, 25, 24, 24, 23, 22, 21},
    {70, 69, 69, 68, 67, 66, 65, 64, 63, 61, 60, 59, 58, 56,
     55, 53, 52, 50, 48, 47, 45, 43, 42, 40, 38, 37, 35, 34,
     32, 31, 30, 29, 27, 26, 25, 24, 24, 23, 22, 21, 20},
    {71, 70, 69, 69, 68, 67, 66, 65, 63, 62, 61, 60, 58, 57,
     55, 54, 52, 50, 49, 47, 45, 43, 41, 40, 38, 36, 35, 33,
     32, 30, 29, 28, 27, 25, 24, 24, 23, 22, 21, 20, 19},
    {72, 71, 70, 69, 69, 68, 67, 65, 64, 63, 62, 60, 59, 58,
     56, 54, 52, 51, 49, 47, 45, 43, 41, 39, 38, 36, 34, 32,
     31, 30, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18},
    {73, 72, 71, 70, 69, 69, 68, 66, 65, 64, 63, 61, 60, 58,
     57, 55, 53, 51, 49, 47, 45, 43, 41, 39, 37, 35, 33, 32,
     30, 29, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17},
    {73, 73, 72, 71, 70, 70, 69, 68, 66, 65, 64, 62, 61, 59,
     57, 56, 54, 51, 49, 47, 45, 43, 41, 39, 36, 34, 33, 31,
     29, 28, 26, 25, 24, 23, 21, 20, 20, 19, 18, 17, 17},
    {75, 74, 73, 72, 72, 71, 70, 69, 68, 66, 65, 63, 62, 60,
     58, 56, 54, 52, 50, 47, 45, 43, 40, 38, 36, 34, 32, 30,
     28, 27, 25, 24, 23, 21, 20, 19, 18, 18, 17, 16, 15},
    {76, 75, 74, 74, 73, 72, 71, 70, 69, 68, 66, 65, 63, 61,
     59, 57, 55, 53, 50, 48, 45, 42, 40, 37, 35, 33, 31, 29,
     27, 25, 24, 23, 21, 20, 19, 18, 17, 16, 16, 15, 14},
    {77, 76, 75, 75, 74, 73, 72, 71, 70, 69, 68, 66, 64, 62,
     60, 58, 56, 53, 51, 48, 45, 42, 39, 37, 34, 32, 30, 28,
     26, 24, 23, 21, 20, 19, 18, 17, 16, 15, 15, 14, 13},
    {78, 77, 77, 76, 75, 75, 74, 73, 72, 70, 69, 68, 66, 64,
     62, 60, 57, 54, 51, 48, 45, 42, 39, 36, 33, 30, 28, 26,
     24, 23, 21, 20, 18, 17, 16, 15, 15, 14, 13, 13, 12},
    {79, 79, 78, 77, 77, 76, 75, 74, 73, 72, 71, 69, 68, 66,
     63, 61, 58, 55, 52, 49, 45, 41, 38, 35, 32, 29, 27, 24,
     23, 21, 19, 18, 17, 16, 15, 14, 13, 13, 12, 11, 11},
    {80, 80, 79, 79, 78, 77, 77, 76, 75, 74, 73, 71, 69, 68,
     65, 63, 60, 57, 53, 49, 45, 41, 37, 33, 30, 27, 25, 23,
     21, 19, 17, 16, 15, 14, 13, 13, 12, 11, 11, 10, 10},
    {82, 81, 81, 80, 80, 79, 78, 78, 77, 76, 75, 73, 72, 70,
     68, 65, 62, 58, 54, 50, 45, 40, 36, 32, 28, 25, 23, 20,
     18, 17, 15, 14, 13, 12, 12, 11, 10, 10, 9,  9,  8},
    {83, 83, 82, 82, 81, 81, 80, 79, 79, 78, 77, 75, 74, 72,
     70, 68, 64, 60, 56, 51, 45, 39, 34, 30, 26, 23, 20, 18,
     16, 15, 13, 12, 11, 11, 10, 9,  9,  8,  8,  7,  7},
    {84, 84, 84, 83, 83, 83, 82, 81, 81, 80, 79, 78, 77, 75,
     73, 71, 68, 63, 58, 52, 45, 38, 32, 27, 23, 19, 17, 15,
     13, 12, 11, 10, 9,  9,  8,  7,  7,  7,  6,  6,  6},
    {86, 86, 85, 85, 85, 84, 84, 84, 83, 82, 82, 81, 80, 78,
     77, 75, 72, 68, 62, 54, 45, 36, 28, 23, 18, 15, 13, 12,
     10, 9,  8,  8,  7,  6,  6,  6,  5,  5,  5,  4,  4},
    {87, 87, 87, 87, 86, 86, 86, 86, 85, 85, 84, 84, 83, 82,
     81, 79, 77, 73, 68, 58, 45, 32, 23, 17, 13, 11, 9,  8,
     7,  6,  6,  5,  5,  4,  4,  4,  4,  3,  3,  3,  3},
    {89, 88, 88, 88, 88, 88, 88, 88, 88, 87, 87, 87, 86, 86,
     85, 84, 83, 81, 77, 68, 45, 23, 13, 9,  7,  6,  5,  4,
     4,  3,  3,  3,  2,  2,  2,  2,  2,  2,  2,  2,  1},
    {90, 90, 90, 90, 90, 90, 90,  90, 90, 90, 90, 90, 90, 90,
     90, 90, 90, 90, 90, 90, 255, 0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,   0,  0,  0,  0,  0,  0},
    {91,  92,  92,  92,  92,  92,  92,  92,  92,  93,  93,  93,  94,  94,
     95,  96,  97,  99,  103, 113, 135, 158, 167, 171, 173, 174, 175, 176,
     176, 177, 177, 177, 178, 178, 178, 178, 178, 178, 178, 178, 179},
    {93,  93,  93,  93,  94,  94,  94,  94,  95,  95,  96,  96,  97,  98,
     99,  101, 103, 107, 113, 122, 135, 148, 158, 163, 167, 169, 171, 172,
     173, 174, 174, 175, 175, 176, 176, 176, 176, 177, 177, 177, 177},
    {94,  94,  95,  95,  95,  96,  96,  96,  97,  98,  98,  99,  100, 102,
     103, 105, 108, 113, 118, 126, 135, 144, 152, 158, 162, 165, 167, 168,
     170, 171, 172, 172, 173, 174, 174, 174, 175, 175, 175, 176, 176},
    {96,  96,  96,  97,  97,  97,  98,  99,  99,  100, 101, 102, 103, 105,
     107, 109, 113, 117, 122, 128, 135, 142, 148, 153, 158, 161, 163, 165,
     167, 168, 169, 170, 171, 171, 172, 173, 173, 173, 174, 174, 174},
    {97,  97,  98,  98,  99,  99,  100, 101, 101, 102, 103, 105, 106, 108,
     110, 113, 116, 120, 124, 129, 135, 141, 146, 150, 154, 158, 160, 162,
     164, 165, 167, 168, 169, 169, 170, 171, 171, 172, 172, 173, 173},
    {98,  99,  99,  100, 100, 101, 102, 102, 103, 104, 105, 107, 108, 110,
     113, 115, 118, 122, 126, 130, 135, 140, 144, 148, 152, 155, 158, 160,
     162, 163, 165, 166, 167, 168, 168, 169, 170, 170, 171, 171, 172},
    {100, 100, 101, 101, 102, 103, 103, 104, 105, 106, 107, 109, 111, 113,
     115, 117, 120, 123, 127, 131, 135, 139, 143, 147, 150, 153, 155, 158,
     159, 161, 163, 164, 165, 166, 167, 167, 168, 169, 169, 170, 170},
    {101, 101, 102, 103, 103, 104, 105, 106, 107, 108, 109, 111, 113, 114,
     117, 119, 122, 125, 128, 131, 135, 139, 142, 145, 148, 151, 153, 156,
     158, 159, 161, 162, 163, 164, 165, 166, 167, 167, 168, 169, 169},
    {102, 103, 103, 104, 105, 105, 106, 107, 108, 110, 111, 113, 114, 116,
     118, 120, 123, 126, 129, 132, 135, 138, 141, 144, 147, 150, 152, 154,
     156, 158, 159, 160, 162, 163, 164, 165, 165, 166, 167, 167, 168},
    {103, 104, 105, 105, 106, 107, 108, 109, 110, 111, 113, 114, 116, 118,
     120, 122, 124, 127, 129, 132, 135, 138, 141, 143, 146, 148, 150, 152,
     154, 156, 158, 159, 160, 161, 162, 163, 164, 165, 165, 166, 167},
    {104, 105, 106, 106, 107, 108, 109, 110, 111, 113, 114, 115, 117, 119,
     121, 123, 125, 127, 130, 132, 135, 138, 140, 143, 145, 147, 149, 151,
     153, 155, 156, 158, 159, 160, 161, 162, 163, 164, 164, 165, 166},
    {105, 106, 107, 108, 108, 109, 110, 111, 113, 114, 115, 117, 118, 120,
     122, 124, 126, 128, 130, 133, 135, 137, 140, 142, 144, 146, 148, 150,
     152, 153, 155, 156, 158, 159, 160, 161, 162, 162, 163, 164, 165},
    {107, 107, 108, 109, 110, 110, 111, 113, 114, 115, 116, 118, 119, 121,
     123, 124, 126, 129, 131, 133, 135, 137, 139, 141, 144, 146, 147, 149,
     151, 152, 154, 155, 156, 158, 159, 160, 160, 161, 162, 163, 163},
    {107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 119, 120, 122,
     123, 125, 127, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 148,
     150, 151, 153, 154, 155, 156, 158, 159, 159, 160, 161, 162, 163},
    {108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 120, 121, 122,
     124, 126, 128, 129, 131, 133, 135, 137, 139, 141, 142, 144, 146, 148,
     149, 150, 152, 153, 154, 155, 157, 158, 159, 159, 160, 161, 162},
    {109, 110, 111, 112, 113, 114, 114, 115, 117, 118, 119, 120, 122, 123,
     125, 126, 128, 130, 131, 133, 135, 137, 139, 140, 142, 144, 145, 147,
     148, 150, 151, 152, 153, 155, 156, 157, 158, 159, 159, 160, 161},
    {110, 111, 112, 113, 114, 114, 115, 116, 117, 119, 120, 121, 122, 124,
     125, 127, 128, 130, 132, 133, 135, 137, 138, 140, 142, 143, 145, 146,
     148, 149, 150, 151, 153, 154, 155, 156, 157, 158, 159, 159, 160},
    {111, 112, 113, 114, 114, 115, 116, 117, 118, 119, 120, 122, 123, 124,
     126, 127, 129, 130, 132, 133, 135, 137, 138, 140, 141, 143, 144, 146,
     147, 148, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 159},
    {112, 113, 114, 114, 115, 116, 117, 118, 119, 120, 121, 122, 124, 125,
     126, 128, 129, 131, 132, 133, 135, 137, 138, 139, 141, 142, 144, 145,
     146, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159},
    {113, 114, 114, 115, 116, 117, 118, 118, 120, 121, 122, 123, 124, 125,
     127, 128, 129, 131, 132, 134, 135, 136, 138, 139, 141, 142, 143, 145,
     146, 147, 148, 149, 150, 152, 152, 153, 154, 155, 156, 157, 158}};
DATA graphics_mode* graphics_modes;
DATA graphics_mode* current_graphics_mode = NULL;
DATA int graphics_mode_high_id;
DATA bool play_again = false;
DATA struct angband_constants* z_info;
DATA const char* ANGBAND_SYS = "xxx";
DATA char* ANGBAND_DIR_GAMEDATA;
DATA char* ANGBAND_DIR_CUSTOMIZE;
DATA char* ANGBAND_DIR_HELP;
DATA char* ANGBAND_DIR_SCREENS;
DATA char* ANGBAND_DIR_FONTS;
DATA char* ANGBAND_DIR_TILES;
DATA char* ANGBAND_DIR_SOUNDS;
DATA char* ANGBAND_DIR_ICONS;
DATA char* ANGBAND_DIR_USER;
DATA char* ANGBAND_DIR_SAVE;
DATA char* ANGBAND_DIR_PANIC;
DATA char* ANGBAND_DIR_SCORES;
DATA char* ANGBAND_DIR_ARCHIVE;
DATA const char* slots[] = {
    "NONE",  "WEAPON", "BOW", "RING",   "AMULET", "LIGHT",  "BODY_ARMOR",
    "CLOAK", "SHIELD", "HAT", "GLOVES", "BOOTS",  "QUIVER", NULL};
DATA const char* list_obj_flag_names[] = {"NONE",
                                          "SUST_STR",
                                          "SUST_DEX",
                                          "SUST_CON",
                                          "SUST_GRA",
                                          "PROT_FEAR",
                                          "PROT_BLIND",
                                          "PROT_CONF",
                                          "PROT_STUN",
                                          "PROT_HALLU",
                                          "SLOW_DIGEST",
                                          "REGEN",
                                          "SEE_INVIS",
                                          "FREE_ACT",
                                          "RADIANCE",
                                          "LIGHT",
                                          "SPEED",
                                          "SHARPNESS",
                                          "SHARPNESS2",
                                          "VAMPIRIC",
                                          "BURNS_OUT",
                                          "TAKES_FUEL",
                                          "NO_FUEL",
                                          "COWARDICE",
                                          "HUNGER",
                                          "DARKNESS",
                                          "DANGER",
                                          "HAUNTED",
                                          "AGGRAVATE",
                                          "CURSED",
                                          "DIG_1",
                                          "DIG_2",
                                          "THROWING",
                                          "INDESTRUCTIBLE",
                                          "NO_SMITHING",
                                          "NO_RANDOM",
                                          "MITHRIL",
                                          "AXE",
                                          "POLEARM",
                                          "ENCHANTABLE",
                                          "HAND_AND_A_HALF",
                                          "TWO_HANDED",
                                          "MAX",
                                          NULL};
DATA const char* list_element_names[] = {"ACID", "FIRE", "COLD",
                                         "POIS", "DARK", NULL};
DATA const char* effect_list[] = {"NONE",
                                  "HEAL_HP",
                                  "DAMAGE",
                                  "DART",
                                  "PIT",
                                  "PROJECT_LOS",
                                  "PROJECT_LOS_GRIDS",
                                  "DEADFALL",
                                  "EARTHQUAKE",
                                  "SPOT",
                                  "SPHERE",
                                  "EXPLOSION",
                                  "BREATH",
                                  "BOLT",
                                  "BEAM",
                                  "TERRAIN_BEAM",
                                  "NOURISH",
                                  "CURE",
                                  "TIMED_SET",
                                  "TIMED_INC",
                                  "TIMED_INC_CHECK",
                                  "TIMED_INC_NO_RES",
                                  "TERROR",
                                  "GLYPH",
                                  "RESTORE_STAT",
                                  "DRAIN_STAT",
                                  "RESTORE_MANA",
                                  "REMOVE_CURSE",
                                  "MAP_AREA",
                                  "DETECT_TRAPS",
                                  "DETECT_DOORS",
                                  "DETECT_OBJECTS",
                                  "DETECT_MONSTERS",
                                  "REVEAL_MONSTER",
                                  "CLOSE_CHASMS",
                                  "IDENTIFY",
                                  "RECHARGE",
                                  "SUMMON",
                                  "TELEPORT_TO",
                                  "DARKEN_LEVEL",
                                  "LIGHT_AREA",
                                  "DARKEN_AREA",
                                  "SONG_OF_ELBERETH",
                                  "SONG_OF_LORIEN",
                                  "SONG_OF_FREEDOM",
                                  "SONG_OF_BINDING",
                                  "SONG_OF_PIERCING",
                                  "SONG_OF_OATHS",
                                  "AGGRAVATE",
                                  "NOISE",
                                  "CREATE_TRAPS",
                                  "MAX"};
DATA const char* terrain_flags[] = {
    "NONE",        "LOS",   "PROJECT",     "PASSABLE",    "INTERESTING",
    "PERMANENT",   "EASY",  "TRAP",        "NO_SCENT",    "NO_FLOW",
    "OBJECT",      "TORCH", "HIDDEN",      "GOLD",        "CLOSABLE",
    "FLOOR",       "WALL",  "ROCK",        "GRANITE",     "DOOR_ANY",
    "DOOR_CLOSED", "FORGE", "DOOR_JAMMED", "DOOR_LOCKED", "MAGMA",
    "QUARTZ",      "STAIR", "SHAFT",       "UPSTAIR",     "DOWNSTAIR",
    "PIT",         "CHASM", NULL};
DATA const char* player_info_flags[] = {"NONE", "BLADE_PROFICIENCY",
                                        "AXE_PROFICIENCY", NULL};
DATA struct file_parser constants_parser = {
    "constants", fptr(init_parse_constants), fptr(run_parse_constants),
    fptr(finish_parse_constants), fptr(cleanup_constants)};
DATA struct file_parser world_parser = {
    "world", fptr(init_parse_world), fptr(run_parse_world),
    fptr(finish_parse_world), fptr(cleanup_world)};
DATA struct file_parser feat_parser = {
    "terrain", fptr(init_parse_feat), fptr(run_parse_feat),
    fptr(finish_parse_feat), fptr(cleanup_feat)};
DATA struct file_parser body_parser = {
    "body", fptr(init_parse_body), fptr(run_parse_body),
    fptr(finish_parse_body), fptr(cleanup_body)};
DATA struct history_chart* histories;
DATA struct file_parser history_parser = {
    "history", fptr(init_parse_history), fptr(run_parse_history),
    fptr(finish_parse_history), fptr(cleanup_history)};
DATA struct file_parser sex_parser = {
    "sex", fptr(init_parse_sex), fptr(run_parse_sex), fptr(finish_parse_sex),
    fptr(cleanup_sex)};
DATA struct file_parser race_parser = {
    "race", fptr(init_parse_race), fptr(run_parse_race),
    fptr(finish_parse_race), fptr(cleanup_race)};
DATA struct file_parser house_parser = {
    "house", fptr(init_parse_house), fptr(run_parse_house),
    fptr(finish_parse_house), fptr(cleanup_house)};
DATA struct file_parser names_parser = {
    "names", fptr(init_parse_names), fptr(run_parse_names),
    fptr(finish_parse_names), fptr(cleanup_names)};
DATA wchar_t flavor_glyph;
DATA unsigned int flavor_tval;
DATA struct file_parser flavor_parser = {
    "flavor", fptr(init_parse_flavor), fptr(run_parse_flavor),
    fptr(finish_parse_flavor), fptr(cleanup_flavor)};
DATA struct init_module arrays_module = {.name = "arrays",
                                         .init = fptr(init_arrays),
                                         .cleanup = fptr(cleanup_arrays)};
DATA uint8_t square_size = 0;
DATA uint8_t hist_size = 0;
DATA uint8_t obj_mod_max = 0;
DATA uint8_t of_size = 0;
DATA uint8_t elem_max = 0;
DATA uint8_t brand_max;
DATA uint8_t slay_max;
DATA uint8_t mflag_size = 0;
DATA uint8_t trf_size = 0;
DATA msgqueue_t* messages = NULL;
DATA struct init_module messages_module = {.name = "messages",
                                           .init = fptr(messages_init),
                                           .cleanup = fptr(messages_free)};
DATA struct blow_method* blow_methods;
DATA struct blow_effect* blow_effects;
DATA struct monster_pain* pain_messages;
DATA struct monster_pursuit* pursuit_messages;
DATA struct monster_warning* warning_messages;
DATA struct monster_spell* monster_spells;
DATA struct monster_base* rb_info;
DATA struct monster_race* r_info;
DATA const struct monster_race* ref_race = NULL;
DATA struct monster_lore* l_list;
DATA const char* r_info_flags[] = {
    "NONE",          "UNIQUE",       "QUESTOR",     "MALE",
    "FEMALE",        "NAME_COMMA",   "SPECIAL_GEN", "CHAR_CLEAR",
    "ATTR_MULTI",    "ATTR_FLICKER", "FORCE_DEPTH", "INVISIBLE",
    "MULTIPLY",      "REGENERATE",   "NO_CRIT",     "RES_CRIT",
    "FRIEND",        "FRIENDS",      "ESCORT",      "ESCORTS",
    "UNIQUE_FRIEND", "NEVER_MOVE",   "HIDDEN_MOVE", "RAND_25",
    "RAND_50",       "GLOW",         "TERRITORIAL", "SHORT_SIGHTED",
    "MINDLESS",      "SMART",        "CRUEL_BLOW",  "EXCHANGE",
    "RIPOSTE",       "FLANKING",     "CHARGE",      "ELFBANE",
    "KNOCK_BACK",    "CRIPPLING",    "OPPORTUNIST", "ZONE",
    "DROP_33",       "DROP_100",     "DROP_1D2",    "DROP_2D2",
    "DROP_3D2",      "DROP_4D2",     "DROP_GOOD",   "DROP_GREAT",
    "FLYING",        "PASS_DOOR",    "UNLOCK_DOOR", "OPEN_DOOR",
    "BASH_DOOR",     "PASS_WALL",    "KILL_WALL",   "TUNNEL_WALL",
    "TAKE_ITEM",     "KILL_ITEM",    "ORC",         "TROLL",
    "SERPENT",       "DRAGON",       "RAUKO",       "SPIDER",
    "WOLF",          "UNDEAD",       "HURT_LIGHT",  "STONE",
    "HURT_FIRE",     "HURT_COLD",    "RES_FIRE",    "RES_COLD",
    "RES_POIS",      "NO_FEAR",      "NO_STUN",     "NO_CONF",
    "NO_SLEEP",      "NO_SLOW",      NULL};
DATA const char* r_info_spell_flags[] = {
    "NONE",       "ARROW1",    "ARROW2",     "BOULDER", "BR_FIRE", "BR_COLD",
    "BR_POIS",    "BR_DARK",   "EARTHQUAKE", "SHRIEK",  "SCREECH", "DARKNESS",
    "FORGET",     "SCARE",     "CONF",       "HOLD",    "SLOW",    "SNG_BIND",
    "SNG_PIERCE", "SNG_OATHS", "MAX",        NULL};
DATA const char* obj_flags[] = {"NONE",
                                "SUST_STR",
                                "SUST_DEX",
                                "SUST_CON",
                                "SUST_GRA",
                                "PROT_FEAR",
                                "PROT_BLIND",
                                "PROT_CONF",
                                "PROT_STUN",
                                "PROT_HALLU",
                                "SLOW_DIGEST",
                                "REGEN",
                                "SEE_INVIS",
                                "FREE_ACT",
                                "RADIANCE",
                                "LIGHT",
                                "SPEED",
                                "SHARPNESS",
                                "SHARPNESS2",
                                "VAMPIRIC",
                                "BURNS_OUT",
                                "TAKES_FUEL",
                                "NO_FUEL",
                                "COWARDICE",
                                "HUNGER",
                                "DARKNESS",
                                "DANGER",
                                "HAUNTED",
                                "AGGRAVATE",
                                "CURSED",
                                "DIG_1",
                                "DIG_2",
                                "THROWING",
                                "INDESTRUCTIBLE",
                                "NO_SMITHING",
                                "NO_RANDOM",
                                "MITHRIL",
                                "AXE",
                                "POLEARM",
                                "ENCHANTABLE",
                                "HAND_AND_A_HALF",
                                "TWO_HANDED",
                                "MAX",
                                NULL};
DATA struct file_parser meth_parser = {
    "blow_methods", fptr(init_parse_meth), fptr(run_parse_meth),
    fptr(finish_parse_meth), fptr(cleanup_meth)};
DATA struct file_parser eff_parser = {
    "blow_effects", fptr(init_parse_eff), fptr(run_parse_eff),
    fptr(finish_parse_eff), fptr(cleanup_eff)};
DATA struct file_parser pain_parser = {
    "pain messages", fptr(init_parse_pain), fptr(run_parse_pain),
    fptr(finish_parse_pain), fptr(cleanup_pain)};
DATA struct file_parser pursuit_parser = {
    "pursuit messages", fptr(init_parse_pursuit), fptr(run_parse_pursuit),
    fptr(finish_parse_pursuit), fptr(cleanup_pursuit)};
DATA struct file_parser warning_parser = {
    "warning messages", fptr(init_parse_warning), fptr(run_parse_warning),
    fptr(finish_parse_warning), fptr(cleanup_warning)};
DATA struct file_parser mon_spell_parser = {
    "monster_spell", fptr(init_parse_mon_spell), fptr(run_parse_mon_spell),
    fptr(finish_parse_mon_spell), fptr(cleanup_mon_spell)};
DATA struct file_parser mon_base_parser = {
    "monster_base", fptr(init_parse_mon_base), fptr(run_parse_mon_base),
    fptr(finish_parse_mon_base), fptr(cleanup_mon_base)};
DATA struct file_parser monster_parser = {
    "monster", fptr(init_parse_monster), fptr(run_parse_monster),
    fptr(finish_parse_monster), fptr(cleanup_monster)};
DATA struct file_parser lore_parser = {
    "lore", fptr(init_parse_lore), fptr(run_parse_lore),
    fptr(finish_parse_lore), fptr(cleanup_lore)};
DATA monster_list_t* monster_list_subwindow = NULL;
typedef enum monster_sex monster_sex_t;
DATA int16_t alloc_race_size;
DATA struct alloc_entry* alloc_race_table;
DATA struct monster_race* place_escort_race = NULL;
DATA struct init_module mon_make_module = {
    .name = "monster/mon-make",
    .init = fptr(init_race_allocs),
    .cleanup = fptr(cleanup_race_allocs)};
DATA int size_mon_hist = 0;
DATA int size_mon_msg = 0;
DATA struct monster_race_message mon_msg[200];
DATA struct monster_message_history mon_message_hist[400];
DATA int summon_specific_type = 0;
DATA int summon_max = 0;
DATA struct monster_base* kin_base;
DATA struct summon* summons;
DATA const char* mon_race_flags[] = {
    "NONE",          "UNIQUE",       "QUESTOR",     "MALE",
    "FEMALE",        "NAME_COMMA",   "SPECIAL_GEN", "CHAR_CLEAR",
    "ATTR_MULTI",    "ATTR_FLICKER", "FORCE_DEPTH", "INVISIBLE",
    "MULTIPLY",      "REGENERATE",   "NO_CRIT",     "RES_CRIT",
    "FRIEND",        "FRIENDS",      "ESCORT",      "ESCORTS",
    "UNIQUE_FRIEND", "NEVER_MOVE",   "HIDDEN_MOVE", "RAND_25",
    "RAND_50",       "GLOW",         "TERRITORIAL", "SHORT_SIGHTED",
    "MINDLESS",      "SMART",        "CRUEL_BLOW",  "EXCHANGE",
    "RIPOSTE",       "FLANKING",     "CHARGE",      "ELFBANE",
    "KNOCK_BACK",    "CRIPPLING",    "OPPORTUNIST", "ZONE",
    "DROP_33",       "DROP_100",     "DROP_1D2",    "DROP_2D2",
    "DROP_3D2",      "DROP_4D2",     "DROP_GOOD",   "DROP_GREAT",
    "FLYING",        "PASS_DOOR",    "UNLOCK_DOOR", "OPEN_DOOR",
    "BASH_DOOR",     "PASS_WALL",    "KILL_WALL",   "TUNNEL_WALL",
    "TAKE_ITEM",     "KILL_ITEM",    "ORC",         "TROLL",
    "SERPENT",       "DRAGON",       "RAUKO",       "SPIDER",
    "WOLF",          "UNDEAD",       "HURT_LIGHT",  "STONE",
    "HURT_FIRE",     "HURT_COLD",    "RES_FIRE",    "RES_COLD",
    "RES_POIS",      "NO_FEAR",      "NO_STUN",     "NO_CONF",
    "NO_SLEEP",      "NO_SLOW",      NULL};
DATA struct file_parser summon_parser = {
    "summon", fptr(init_parse_summon), fptr(run_parse_summon),
    fptr(finish_parse_summon), fptr(cleanup_summon)};
DATA const struct monster_flag monster_flag_table[] = {
    {RF_NONE, RFT_NONE, ""},
    {RF_UNIQUE, RFT_OBV, ""},
    {RF_QUESTOR, RFT_OBV, ""},
    {RF_MALE, RFT_OBV, ""},
    {RF_FEMALE, RFT_OBV, ""},
    {RF_NAME_COMMA, RFT_OBV, ""},
    {RF_SPECIAL_GEN, RFT_OBV, ""},
    {RF_CHAR_CLEAR, RFT_DISP, ""},
    {RF_ATTR_MULTI, RFT_DISP, ""},
    {RF_ATTR_FLICKER, RFT_DISP, ""},
    {RF_FORCE_DEPTH, RFT_GEN, ""},
    {RF_INVISIBLE, RFT_NOTE, "is very difficult to see"},
    {RF_MULTIPLY, RFT_NOTE, "breeds explosively"},
    {RF_REGENERATE, RFT_NOTE, "regenerates quickly"},
    {RF_NO_CRIT, RFT_NOTE, "cannot be critically hit"},
    {RF_RES_CRIT, RFT_NOTE, "is resistant to critical hits"},
    {RF_FRIEND, RFT_GROUP, "sometimes appears in groups"},
    {RF_FRIENDS, RFT_GROUP, "usually appears in groups"},
    {RF_ESCORT, RFT_GROUP, "usually appears with escorts"},
    {RF_ESCORTS, RFT_GROUP, "usually appears with many escorts"},
    {RF_UNIQUE_FRIEND, RFT_BEHAV, ""},
    {RF_NEVER_MOVE, RFT_BEHAV, ""},
    {RF_HIDDEN_MOVE, RFT_BEHAV, ""},
    {RF_RAND_25, RFT_BEHAV, ""},
    {RF_RAND_50, RFT_BEHAV, ""},
    {RF_GLOW, RFT_BEHAV, ""},
    {RF_TERRITORIAL, RFT_BEHAV, ""},
    {RF_SHORT_SIGHTED, RFT_BEHAV, ""},
    {RF_MINDLESS, RFT_MIND, "mindless"},
    {RF_SMART, RFT_MIND, "intelligent"},
    {RF_CRUEL_BLOW, RFT_ABIL, "cruel blow"},
    {RF_EXCHANGE, RFT_ABIL, "exchange places"},
    {RF_RIPOSTE, RFT_ABIL, "riposte"},
    {RF_FLANKING, RFT_ABIL, "flanking"},
    {RF_CHARGE, RFT_ABIL, "charge"},
    {RF_ELFBANE, RFT_ABIL_OBV, "elf-bane"},
    {RF_KNOCK_BACK, RFT_ABIL, "knock back"},
    {RF_CRIPPLING, RFT_ABIL, "crippling shot"},
    {RF_OPPORTUNIST, RFT_ABIL, "opportunist"},
    {RF_ZONE, RFT_ABIL, "zone of control"},
    {RF_DROP_33, RFT_DROP, ""},
    {RF_DROP_100, RFT_DROP, ""},
    {RF_DROP_1D2, RFT_DROP, ""},
    {RF_DROP_2D2, RFT_DROP, ""},
    {RF_DROP_3D2, RFT_DROP, ""},
    {RF_DROP_4D2, RFT_DROP, ""},
    {RF_DROP_GOOD, RFT_DROP, ""},
    {RF_DROP_GREAT, RFT_DROP, ""},
    {RF_FLYING, RFT_MOVE, "fly"},
    {RF_PASS_DOOR, RFT_MOVE, "pass through doors"},
    {RF_UNLOCK_DOOR, RFT_MOVE, "unlock doors"},
    {RF_OPEN_DOOR, RFT_MOVE, "open doors"},
    {RF_BASH_DOOR, RFT_MOVE, "bash down doors"},
    {RF_PASS_WALL, RFT_MOVE, "pass through walls"},
    {RF_KILL_WALL, RFT_MOVE, "bore through walls"},
    {RF_TUNNEL_WALL, RFT_MOVE, "tunnel through walls"},
    {RF_TAKE_ITEM, RFT_MOVE, "pick up objects"},
    {RF_KILL_ITEM, RFT_MOVE, "destroy objects"},
    {RF_ORC, RFT_RACE_N, "orc"},
    {RF_TROLL, RFT_RACE_N, "troll"},
    {RF_SERPENT, RFT_RACE_N, "serpent"},
    {RF_DRAGON, RFT_RACE_N, "dragon"},
    {RF_RAUKO, RFT_RACE_N, "rauko"},
    {RF_SPIDER, RFT_RACE_N, "spider"},
    {RF_WOLF, RFT_RACE_N, "wolf"},
    {RF_UNDEAD, RFT_RACE_A, "undead"},
    {RF_HURT_LIGHT, RFT_VULN, "bright light"},
    {RF_STONE, RFT_VULN, "shattering"},
    {RF_HURT_FIRE, RFT_VULN_I, "fire"},
    {RF_HURT_COLD, RFT_VULN_I, "cold"},
    {RF_RES_FIRE, RFT_RES, "fire"},
    {RF_RES_COLD, RFT_RES, "cold"},
    {RF_RES_POIS, RFT_RES, "poison"},
    {RF_NO_FEAR, RFT_PROT, "frightened"},
    {RF_NO_STUN, RFT_PROT, "stunned"},
    {RF_NO_CONF, RFT_PROT, "confused"},
    {RF_NO_SLEEP, RFT_PROT, "put to sleep"},
    {RF_NO_SLOW, RFT_PROT, "slowed"},
    {RF_MAX, 0, NULL}};
DATA struct chest_trap* chest_traps;
DATA const uint8_t chest_trap_list[] = {
    0,
    (CHEST_GAS_CONF),
    (CHEST_GAS_CONF),
    (CHEST_GAS_STUN),
    0,
    (CHEST_GAS_STUN),
    (CHEST_GAS_POISON),
    (CHEST_GAS_POISON),
    0,
    (CHEST_NEEDLE_ENTRANCE),
    (CHEST_NEEDLE_ENTRANCE),
    (CHEST_NEEDLE_HALLU),
    0,
    (CHEST_NEEDLE_HALLU),
    (CHEST_NEEDLE_LOSE_STR),
    (CHEST_NEEDLE_LOSE_STR),
    0,
    (CHEST_GAS_CONF | CHEST_NEEDLE_HALLU),
    (CHEST_GAS_CONF | CHEST_NEEDLE_HALLU),
    (CHEST_GAS_STUN | CHEST_NEEDLE_LOSE_STR),
    0,
    (CHEST_GAS_STUN | CHEST_NEEDLE_LOSE_STR),
    (CHEST_GAS_POISON | CHEST_NEEDLE_ENTRANCE),
    (CHEST_GAS_POISON | CHEST_NEEDLE_ENTRANCE),
    0,
    (CHEST_GAS_POISON | CHEST_NEEDLE_ENTRANCE),
};
DATA struct file_parser chest_trap_parser = {
    "chest_trap", fptr(init_parse_chest_trap), fptr(run_parse_chest_trap),
    fptr(finish_parse_chest_trap), fptr(cleanup_chest_trap)};
DATA const char* inscrip_text[OBJ_PSEUDO_MAX] = {
    NULL,     "average", "artefact, cursed", "special, cursed",
    "cursed", "special", "artefact",         "uncursed",
};
DATA quality_ignore_struct quality_mapping[] = {
    {ITYPE_SHARP, TV_SWORD, ""},     {ITYPE_SHARP, TV_POLEARM, ""},
    {ITYPE_BLUNT, TV_HAFTED, ""},    {ITYPE_BOW, TV_BOW, "Bow"},
    {ITYPE_ARROW, TV_ARROW, ""},     {ITYPE_ROBE, TV_SOFT_ARMOR, "Robe"},
    {ITYPE_BODY_ARMOR, TV_MAIL, ""}, {ITYPE_BODY_ARMOR, TV_SOFT_ARMOR, ""},
    {ITYPE_CLOAK, TV_CLOAK, ""},     {ITYPE_SHIELD, TV_SHIELD, ""},
    {ITYPE_HEADGEAR, TV_HELM, ""},   {ITYPE_HEADGEAR, TV_CROWN, ""},
    {ITYPE_HANDGEAR, TV_GLOVES, ""}, {ITYPE_FEET, TV_BOOTS, ""},
    {ITYPE_DIGGER, TV_DIGGING, ""},  {ITYPE_RING, TV_RING, ""},
    {ITYPE_AMULET, TV_AMULET, ""},   {ITYPE_LIGHT, TV_LIGHT, ""},
};
DATA quality_name_struct quality_choices[] = {
    {ITYPE_NONE, ""},
    {ITYPE_SHARP, "Sharp Melee Weapons"},
    {ITYPE_BLUNT, "Blunt Melee Weapons"},
    {ITYPE_BOW, "Bows"},
    {ITYPE_ARROW, "Arrows"},
    {ITYPE_ROBE, "Robes"},
    {ITYPE_BODY_ARMOR, "Body Armor"},
    {ITYPE_CLOAK, "Cloaks"},
    {ITYPE_SHIELD, "Shields"},
    {ITYPE_HEADGEAR, "Headgear"},
    {ITYPE_HANDGEAR, "Handgear"},
    {ITYPE_FEET, "Footgear"},
    {ITYPE_DIGGER, "Diggers"},
    {ITYPE_RING, "Rings"},
    {ITYPE_AMULET, "Amulets"},
    {ITYPE_LIGHT, "Lights"},
};
DATA quality_name_struct quality_values[IGNORE_MAX] = {
    {IGNORE_NONE, "no ignore"},   {IGNORE_BAD, "bad"},
    {IGNORE_AVERAGE, "average"},  {IGNORE_GOOD, "good"},
    {IGNORE_ALL, "non-artifact"},
};
DATA uint8_t ignore_level[ITYPE_MAX];
DATA const size_t ignore_size = ITYPE_MAX;
DATA bool** ego_ignore_types;
DATA int num_ego_types;
DATA struct init_module ignore_module = {.name = "ignore",
                                         .init = fptr(init_ignore),
                                         .cleanup = fptr(cleanup_ignore)};
DATA const char* obj_mods[] = {"STR",          "DEX",     "CON",      "GRA",
                               "MELEE",        "ARCHERY", "EVASION",  "STEALTH",
                               "PERCEPTION",   "WILL",    "SMITHING", "SONG",
                               "DAMAGE_SIDES", "TUNNEL",  NULL};
DATA const char* kind_flags[] = {"NONE",      "INSTA_ART", "QUEST_ART",
                                 "SMITH_ART", "GOOD",      "SHOW_DICE",
                                 "EASY_KNOW", "MAX",       NULL};
DATA const char* element_names[] = {"ACID", "FIRE", "COLD",
                                    "POIS", "DARK", NULL};
DATA struct file_parser projection_parser = {
    "projection", fptr(init_parse_projection), fptr(run_parse_projection),
    fptr(finish_parse_projection), fptr(cleanup_projection)};
DATA struct file_parser object_base_parser = {
    "object_base", fptr(init_parse_object_base), fptr(run_parse_object_base),
    fptr(finish_parse_object_base), fptr(cleanup_object_base)};
DATA struct file_parser slay_parser = {
    "slay", fptr(init_parse_slay), fptr(run_parse_slay),
    fptr(finish_parse_slay), fptr(cleanup_slay)};
DATA struct file_parser brand_parser = {
    "brand", fptr(init_parse_brand), fptr(run_parse_brand),
    fptr(finish_parse_brand), fptr(cleanup_brand)};
DATA struct object_kind* unknown_item_kind;
DATA struct object_kind* pile_kind;
DATA struct file_parser object_parser = {
    "object", fptr(init_parse_object), fptr(run_parse_object),
    fptr(finish_parse_object), fptr(cleanup_object)};
DATA struct file_parser drop_parser = {
    "drop", fptr(init_parse_drop), fptr(run_parse_drop),
    fptr(finish_parse_drop), fptr(cleanup_drop)};
DATA struct file_parser ego_parser = {
    "ego_item", fptr(init_parse_ego), fptr(run_parse_ego),
    fptr(finish_parse_ego), fptr(cleanup_ego)};
DATA struct file_parser artifact_parser = {
    "artefact", fptr(init_parse_artifact), fptr(run_parse_artifact),
    fptr(finish_parse_artifact), fptr(cleanup_artifact)};
DATA struct file_parser randart_parser = {
    "randart", fptr(init_parse_artifact), fptr(run_parse_randart),
    fptr(finish_parse_randart), fptr(cleanup_artifact)};
DATA struct file_parser object_property_parser = {
    "object_property", fptr(init_parse_object_property),
    fptr(run_parse_object_property), fptr(finish_parse_object_property),
    fptr(cleanup_object_property)};
DATA size_t rune_max;
DATA struct rune* rune_list;
DATA struct init_module rune_module = {
    .name = "rune", .init = fptr(init_rune), .cleanup = fptr(cleanup_rune)};
DATA object_list_t* object_list_subwindow = NULL;
DATA int16_t alloc_kind_size = 0;
DATA struct alloc_entry* alloc_kind_table;
DATA int16_t alloc_ego_size = 0;
DATA struct alloc_entry* alloc_ego_table;
DATA struct drop* drops;
DATA struct init_module obj_make_module = {.name = "object/obj-make",
                                           .init = fptr(init_obj_make),
                                           .cleanup = fptr(cleanup_obj_make)};
DATA struct object* fail_pile;
DATA struct object* fail_object;
DATA bool fail_prev;
DATA bool fail_next;
DATA const char* fail_file;
DATA int fail_line;
DATA struct obj_property* obj_properties;
DATA struct slay* slays;
DATA struct brand* brands;
DATA const struct smithing_tval_desc smithing_tvals[MAX_SMITHING_TVALS] = {
    {SMITH_TYPE_WEAPON, TV_ARROW, "Arrows"},
    {SMITH_TYPE_WEAPON, TV_BOW, "Bow"},
    {SMITH_TYPE_WEAPON, TV_DIGGING, "Digger"},
    {SMITH_TYPE_WEAPON, TV_HAFTED, "Blunt Weapon"},
    {SMITH_TYPE_WEAPON, TV_POLEARM, "Axe or Polearm"},
    {SMITH_TYPE_WEAPON, TV_SWORD, "Sword"},
    {SMITH_TYPE_ARMOUR, TV_BOOTS, "Boots"},
    {SMITH_TYPE_ARMOUR, TV_GLOVES, "Gloves"},
    {SMITH_TYPE_ARMOUR, TV_HELM, "Helm"},
    {SMITH_TYPE_ARMOUR, TV_CROWN, "Crown"},
    {SMITH_TYPE_ARMOUR, TV_SHIELD, "Shield"},
    {SMITH_TYPE_ARMOUR, TV_CLOAK, "Cloak"},
    {SMITH_TYPE_ARMOUR, TV_SOFT_ARMOR, "Soft Armour"},
    {SMITH_TYPE_ARMOUR, TV_MAIL, "Mail"},
    {SMITH_TYPE_JEWELRY, TV_LIGHT, "Light"},
    {SMITH_TYPE_JEWELRY, TV_AMULET, "Amulet"},
    {SMITH_TYPE_JEWELRY, TV_RING, "Ring"},
    {SMITH_TYPE_JEWELRY, TV_HORN, "Horn"},
};
DATA const grouper tval_names[] = {
    {TV_NULL, "none"},        {TV_NOTE, "note"},
    {TV_USELESS, "skeleton"}, {TV_METAL, "metal"},
    {TV_CHEST, "chest"},      {TV_ARROW, "arrow"},
    {TV_BOW, "bow"},          {TV_DIGGING, "digger"},
    {TV_HAFTED, "hafted"},    {TV_POLEARM, "polearm"},
    {TV_SWORD, "sword"},      {TV_BOOTS, "boots"},
    {TV_GLOVES, "gloves"},    {TV_HELM, "helm"},
    {TV_CROWN, "crown"},      {TV_SHIELD, "shield"},
    {TV_CLOAK, "cloak"},      {TV_SOFT_ARMOR, "soft armor"},
    {TV_MAIL, "mail"},        {TV_LIGHT, "light"},
    {TV_AMULET, "amulet"},    {TV_RING, "ring"},
    {TV_STAFF, "staff"},      {TV_HORN, "horn"},
    {TV_POTION, "potion"},    {TV_FLASK, "flask"},
    {TV_FOOD, "food"},        {TV_HERB, "herb"},
    {TV_EASTER, "easter"},
};
DATA struct object_base* kb_info;
DATA struct object_kind* k_info;
DATA struct artifact* a_info;
DATA struct artifact_upkeep* aup_info;
DATA struct ego_item* e_info;
DATA struct flavor* flavors;
DATA int option_page[OPT_PAGE_MAX][OPT_PAGE_PER] = {{0}};
DATA struct init_module options_module = {
    .name = "options", .init = fptr(init_options), .cleanup = NULL};
DATA struct ability* abilities;
DATA unsigned int prereq_num = 1;
DATA unsigned int skill_index;
DATA struct file_parser ability_parser = {
    "ability", fptr(init_parse_ability), fptr(run_parse_ability),
    fptr(finish_parse_ability), fptr(cleanup_ability)};
DATA int stats[STAT_MAX];
DATA int points_spent[STAT_MAX];
DATA int points_inc[STAT_MAX];
DATA int points_left;
DATA bool quickstart_allowed;
DATA birther prev;
DATA birther quickstart_prev;
DATA const int birth_stat_costs[11] = {-4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
DATA const struct flag_event_trigger redraw_events[] = {
    {PR_MISC, EVENT_NAME},
    {PR_EXP, EVENT_EXPERIENCE},
    {PR_STATS, EVENT_STATS},
    {PR_ARMOR, EVENT_ARMOR},
    {PR_HP, EVENT_HP},
    {PR_MANA, EVENT_MANA},
    {PR_SONG, EVENT_SONG},
    {PR_MELEE, EVENT_MELEE},
    {PR_ARC, EVENT_ARCHERY},
    {PR_HEALTH, EVENT_MONSTERHEALTH},
    {PR_DEPTH, EVENT_DUNGEONLEVEL},
    {PR_SPEED, EVENT_PLAYERSPEED},
    {PR_STATE, EVENT_STATE},
    {PR_STATUS, EVENT_STATUS},
    {PR_LIGHT, EVENT_LIGHT},
    {PR_INVEN, EVENT_INVENTORY},
    {PR_EQUIP, EVENT_EQUIPMENT},
    {PR_MONLIST, EVENT_MONSTERLIST},
    {PR_ITEMLIST, EVENT_ITEMLIST},
    {PR_MONSTER, EVENT_MONSTERTARGET},
    {PR_OBJECT, EVENT_OBJECTTARGET},
    {PR_MESSAGE, EVENT_MESSAGE},
    {PR_COMBAT, EVENT_COMBAT_DISPLAY},
};
DATA struct loc top_left, bottom_right;
DATA int path_distance[100][100];
DATA int path_step_dir[500];
DATA int path_step_idx;
DATA int run_cur_dir;
DATA int run_old_dir;
DATA bool run_open_area;
DATA bool run_break_right;
DATA bool run_break_left;
DATA int skills[SKILL_MAX];
DATA int old_skills[SKILL_MAX];
DATA int exp_spent[SKILL_MAX];
DATA int exp_inc[SKILL_MAX];
DATA int exp_left;
DATA int old_exp_left;
DATA int PY_FOOD_MAX;
DATA int PY_FOOD_FULL;
DATA int PY_FOOD_ALERT;
DATA int PY_FOOD_WEAK;
DATA int PY_FOOD_STARVE;
DATA struct timed_effect_data timed_effects[TMD_MAX] = {
    {"FAST",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"SLOW",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"BLIND",
     PR_MAP,
     PU_UPDATE_VIEW | PU_MONSTERS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"ENTRANCED",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"CONFUSED",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"AFRAID",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"IMAGE",
     PR_MAP | PR_MONLIST | PR_ITEMLIST,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"POISONED",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"CUT",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"STUN",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"FOOD",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"DARKENED",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"RAGE",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"STR",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"DEX",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"CON",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"GRA",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"SINVIS",
     PR_STATUS,
     PU_BONUS | PU_MONSTERS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"OPP_FIRE",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"OPP_COLD",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
    {"OPP_POIS",
     PR_STATUS,
     PU_BONUS,
     0,
     NULL,
     NULL,
     NULL,
     NULL,
     0,
     0,
     NULL,
     NULL,
     NULL,
     {0},
     0,
     false,
     false},
};
DATA const char* list_timed_effect_names[] = {
    "FAST",     "SLOW",     "BLIND",    "ENTRANCED", "CONFUSED", "AFRAID",
    "IMAGE",    "POISONED", "CUT",      "STUN",      "FOOD",     "DARKENED",
    "RAGE",     "STR",      "DEX",      "CON",       "GRA",      "SINVIS",
    "OPP_FIRE", "OPP_COLD", "OPP_POIS", "MAX",
};
DATA struct file_parser player_timed_parser = {
    "player timed effects", fptr(init_parse_player_timed),
    fptr(run_parse_player_timed), fptr(finish_parse_player_timed),
    fptr(cleanup_player_timed)};
DATA const char* skill_names[] = {"Melee",    "Archery",    "Evasion",
                                  "Stealth",  "Perception", "Will",
                                  "Smithing", "Song",       ""};
DATA const int bane_flag[] = {
    RF_NONE,   RF_ORC,   RF_WOLF,    RF_SPIDER, RF_TROLL,
    RF_UNDEAD, RF_RAUKO, RF_SERPENT, RF_DRAGON,
};
DATA int player_turns_rested = 0;
DATA bool player_rest_disturb = false;
DATA int player_resting_repeat_count = 0;
DATA struct player* player = NULL;
DATA struct player_body* bodies;
DATA struct player_race* races;
DATA struct player_sex* sexes;
DATA struct player_house* houses;
DATA struct player_ability* player_abilities;
DATA const char* stat_name_list[] = {"STR", "DEX", "CON", "GRA", "MAX", NULL};
DATA struct init_module player_module = {.name = "player",
                                         .init = fptr(init_player),
                                         .cleanup = fptr(cleanup_player)};
DATA struct projection* projections;
DATA uint8_t proj_to_attr[PROJ_MAX][BOLT_MAX];
DATA wchar_t proj_to_char[PROJ_MAX][BOLT_MAX];
DATA const char* proj_name_list[] = {
    "ACID",      "FIRE",      "COLD",      "POIS",       "DARK",
    "NOTHING",   "HURT",      "ARROW",     "BOULDER",    "SOUND",
    "FORCE",     "LIGHT",     "KILL_WALL", "SLEEP",      "SPEED",
    "SLOW",      "CONFUSION", "FEAR",      "EARTHQUAKE", "DARK_WEAK",
    "KILL_DOOR", "LOCK_DOOR", "KILL_TRAP", "DISP_ALL",   "MAX",
    NULL};
DATA const project_feature_handler_f feature_handlers[] = {
    fptr(project_feature_handler_ACID),
    fptr(project_feature_handler_FIRE),
    fptr(project_feature_handler_COLD),
    fptr(project_feature_handler_POIS),
    fptr(project_feature_handler_DARK),
    fptr(project_feature_handler_NOTHING),
    fptr(project_feature_handler_HURT),
    fptr(project_feature_handler_ARROW),
    fptr(project_feature_handler_BOULDER),
    fptr(project_feature_handler_SOUND),
    fptr(project_feature_handler_FORCE),
    fptr(project_feature_handler_LIGHT),
    fptr(project_feature_handler_KILL_WALL),
    fptr(project_feature_handler_SLEEP),
    fptr(project_feature_handler_SPEED),
    fptr(project_feature_handler_SLOW),
    fptr(project_feature_handler_CONFUSION),
    fptr(project_feature_handler_FEAR),
    fptr(project_feature_handler_EARTHQUAKE),
    fptr(project_feature_handler_DARK_WEAK),
    fptr(project_feature_handler_KILL_DOOR),
    fptr(project_feature_handler_LOCK_DOOR),
    fptr(project_feature_handler_KILL_TRAP),
    fptr(project_feature_handler_DISP_ALL),
    NULL};
DATA const project_monster_handler_f monster_handlers[] = {
    fptr(project_monster_handler_ACID),
    fptr(project_monster_handler_FIRE),
    fptr(project_monster_handler_COLD),
    fptr(project_monster_handler_POIS),
    fptr(project_monster_handler_DARK),
    fptr(project_monster_handler_NOTHING),
    fptr(project_monster_handler_HURT),
    fptr(project_monster_handler_ARROW),
    fptr(project_monster_handler_BOULDER),
    fptr(project_monster_handler_SOUND),
    fptr(project_monster_handler_FORCE),
    fptr(project_monster_handler_LIGHT),
    fptr(project_monster_handler_KILL_WALL),
    fptr(project_monster_handler_SLEEP),
    fptr(project_monster_handler_SPEED),
    fptr(project_monster_handler_SLOW),
    fptr(project_monster_handler_CONFUSION),
    fptr(project_monster_handler_FEAR),
    fptr(project_monster_handler_EARTHQUAKE),
    fptr(project_monster_handler_DARK_WEAK),
    fptr(project_monster_handler_KILL_DOOR),
    fptr(project_monster_handler_LOCK_DOOR),
    fptr(project_monster_handler_KILL_TRAP),
    fptr(project_monster_handler_DISP_ALL),
    NULL};
DATA const project_object_handler_f object_handlers[] = {
    fptr(project_object_handler_ACID),
    fptr(project_object_handler_FIRE),
    fptr(project_object_handler_COLD),
    fptr(project_object_handler_POIS),
    fptr(project_object_handler_DARK),
    fptr(project_object_handler_NOTHING),
    fptr(project_object_handler_HURT),
    fptr(project_object_handler_ARROW),
    fptr(project_object_handler_BOULDER),
    fptr(project_object_handler_SOUND),
    fptr(project_object_handler_FORCE),
    fptr(project_object_handler_LIGHT),
    fptr(project_object_handler_KILL_WALL),
    fptr(project_object_handler_SLEEP),
    fptr(project_object_handler_SPEED),
    fptr(project_object_handler_SLOW),
    fptr(project_object_handler_CONFUSION),
    fptr(project_object_handler_FEAR),
    fptr(project_object_handler_EARTHQUAKE),
    fptr(project_object_handler_DARK_WEAK),
    fptr(project_object_handler_KILL_DOOR),
    fptr(project_object_handler_LOCK_DOOR),
    fptr(project_object_handler_KILL_TRAP),
    fptr(project_object_handler_DISP_ALL),
    NULL};
DATA const project_player_handler_f player_handlers[] = {
    fptr(project_player_handler_ACID),
    fptr(project_player_handler_FIRE),
    fptr(project_player_handler_COLD),
    fptr(project_player_handler_POIS),
    fptr(project_player_handler_DARK),
    fptr(project_player_handler_NOTHING),
    fptr(project_player_handler_HURT),
    fptr(project_player_handler_ARROW),
    fptr(project_player_handler_BOULDER),
    fptr(project_player_handler_SOUND),
    fptr(project_player_handler_FORCE),
    fptr(project_player_handler_LIGHT),
    fptr(project_player_handler_KILL_WALL),
    fptr(project_player_handler_SLEEP),
    fptr(project_player_handler_SPEED),
    fptr(project_player_handler_SLOW),
    fptr(project_player_handler_CONFUSION),
    fptr(project_player_handler_FEAR),
    fptr(project_player_handler_EARTHQUAKE),
    fptr(project_player_handler_DARK_WEAK),
    fptr(project_player_handler_KILL_DOOR),
    fptr(project_player_handler_LOCK_DOOR),
    fptr(project_player_handler_KILL_TRAP),
    fptr(project_player_handler_DISP_ALL),
    NULL};
DATA const char*** name_sections;
typedef unsigned short name_probs[26 + 1][26 + 1][27 + 1];
DATA bool character_saved;
DATA const uint8_t savefile_magic[4] = {83, 97, 118, 101};
DATA const uint8_t savefile_name[4] = "USIL";
DATA const struct blockinfo loaders[] = {
    {"description", fptr(rd_null), 1},
    {"rng", fptr(rd_randomizer), 1},
    {"options", fptr(rd_options), 1},
    {"messages", fptr(rd_messages), 1},
    {"monster memory", fptr(rd_monster_memory), 1},
    {"object memory", fptr(rd_object_memory), 1},
    {"player", fptr(rd_player), 1},
    {"ignore", fptr(rd_ignore), 1},
    {"misc", fptr(rd_misc), 1},
    {"artifacts", fptr(rd_artifacts), 1},
    {"gear", fptr(rd_gear), 1},
    {"dungeon", fptr(rd_dungeon), 1},
    {"objects", fptr(rd_objects), 1},
    {"monsters", fptr(rd_monsters), 1},
    {"traps", fptr(rd_traps), 1},
    {"history", fptr(rd_history), 1},
    {"monster groups", fptr(rd_monster_groups), 1},
};
DATA uint8_t* buffer;
DATA uint32_t buffer_size;
DATA uint32_t buffer_pos;
DATA uint32_t buffer_check;
DATA char savefile_desc[120];
DATA struct song* songs;
DATA int song_index = 1;
DATA struct file_parser song_parser = {
    "song", fptr(init_parse_song), fptr(run_parse_song),
    fptr(finish_parse_song), fptr(cleanup_song)};
DATA struct msg_snd_data message_sounds[MSG_MAX];
DATA const struct sound_module sound_modules[] = {
    {"", "", NULL},
};
DATA uint16_t next_sound_id;
DATA struct sound_data* sounds;
DATA struct sound_hooks hooks;
DATA bool preload_sounds = false;
DATA bool target_set;
DATA bool target_fixed;
DATA struct target target;
DATA struct target old_target;
DATA const char* trap_flags[] = {
    "NONE",    "GLYPH",     "TRAP",  "VISIBLE", "INVISIBLE",  "FLOOR",
    "SURFACE", "DOWN",      "PIT",   "ONETIME", "SAVE_SKILL", "LOCK",
    "JAM",     "FORGE_USE", "DELAY", NULL};
DATA struct file_parser trap_parser = {
    "trap", fptr(init_parse_trap), fptr(run_parse_trap),
    fptr(finish_parse_trap), fptr(cleanup_trap)};
DATA struct trap_kind* trap_info;
DATA void (*tutorial_textblock_show_hook)(textblock* tb,
                                          const char* header) = NULL;
DATA void (*tutorial_textblock_append_command_phrase_hook)(
    textblock* tb, const char* command_name, bool capital, bool gerund) = NULL;
DATA void (*tutorial_textblock_append_direction_phrase_hook)(
    textblock* tb, int dirnum, bool capital, bool gerund) = NULL;
DATA void (*tutorial_textblock_append_direction_rose_hook)(textblock* tb);
DATA void (*tutorial_textblock_append_feature_symbol_hook)(textblock* tb,
                                                           int feat) = NULL;
DATA void (*tutorial_textblock_append_monster_symbol_hook)(
    textblock* tb, const struct monster_race* race) = NULL;
DATA void (*tutorial_textblock_append_object_symbol_hook)(
    textblock* tb, const struct object_kind* kind) = NULL;
DATA place_thing_func place_ftable[] = {
    NULL,
    fptr(tutorial_section_place_note),
    fptr(tutorial_section_place_feature),
    fptr(tutorial_section_place_feature),
    fptr(tutorial_section_place_feature),
    fptr(tutorial_section_place_feature),
    fptr(tutorial_section_place_feature),
    fptr(tutorial_section_place_feature),
    fptr(tutorial_section_place_feature),
    fptr(tutorial_section_place_feature),
    fptr(tutorial_section_place_trap),
    fptr(tutorial_section_place_note),
    fptr(tutorial_section_place_trigger),
    fptr(tutorial_section_place_gate),
    fptr(tutorial_section_place_forge),
    fptr(tutorial_section_place_object),
    fptr(tutorial_section_place_monster),
    fptr(tutorial_section_place_custom_trap),
    fptr(tutorial_section_place_custom_door),
};
DATA struct init_module tutorial_module = {"tutorial", NULL,
                                           fptr(tutorial_cleanup_parsed_data)};
DATA struct tutorial_parsed_result tutorial_parsed_data = {
    {NULL}, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0};
DATA struct file_parser tutorial_parser = {
    "tutorial", fptr(tutorial_init_parser), fptr(tutorial_run_parser),
    fptr(tutorial_finish_parser), fptr(tutorial_cleanup_parsed_data)};
DATA const char* square_flag_names[] = {
    "NONE",  "MARK",         "GLOW",       "VAULT",      "G_VAULT",
    "ROOM",  "SEEN",         "VIEW",       "WASSEEN",    "FEEL",
    "TRAP",  "INVIS",        "WALL_INNER", "WALL_OUTER", "WALL_SOLID",
    "CHASM", "PROJECT",      "HIDDEN",     "TEMP",       "WALL",
    "FIRE",  "CLOSE_PLAYER", "OLD_VIEW",   "OLD_LIT",    "OLD_TORCH",
    NULL};
DATA struct ability** skill_abilities;
DATA const char* list_player_flag_names[] = {"", "Blade proficiency",
                                             "Axe proficiency", NULL};
DATA bool quickstart_allowed = false;
DATA bool arg_force_name;
DATA struct menu race_menu, house_menu, sex_menu;
DATA int house_start = 0;
DATA region race_region = {2, 9, 17, 9 + 14};
DATA region house_region = {19, 9, 17, 9 + 14};
DATA region sex_region = {42, 9, 34, 9 + 14};
DATA const menu_iter birth_iter = {NULL, NULL, fptr(birthmenu_display), NULL,
                                   NULL};
DATA int buysell[STAT_MAX];
DATA int combat_number = 0;
DATA int combat_number_old = 0;
DATA int turns_since_combat = 0;
DATA struct combat_roll combat_rolls[2][MAX_COMBAT_ROLLS] = {{{0}, {0}}};
DATA struct menu* command_menu;
DATA menu_iter command_menu_iter = {NULL, NULL, fptr(cmd_list_entry),
                                    fptr(cmd_list_action), NULL};
DATA menu_action death_actions[] = {
    {0, 'v', "View scores", fptr(death_scores)},
    {0, 'x', "View inventory and equipment", fptr(death_examine)},
    {0, 'd', "View dungeon", fptr(death_dungeon)},
    {0, 'm', "View final messages", fptr(death_messages)},
    {0, 'c', "View character sheet", fptr(death_info)},
    {0, 'h', "View character history", fptr(death_history)},
    {0, 'a', "Add comment to history", fptr(death_note)},
    {0, 'f', "Save character sheet", fptr(death_file)},
    {0, 's', "Spoilers", fptr(death_spoilers)},
    {0, 'g', "Another game", fptr(death_new_game)},
    {0, 'q', "Quit", NULL},
};
DATA game_event_type player_events[] = {
    EVENT_NAME,  EVENT_EXPERIENCE,    EVENT_EQUIPMENT,    EVENT_STATS,
    EVENT_HP,    EVENT_MANA,          EVENT_MELEE,        EVENT_ARCHERY,
    EVENT_ARMOR, EVENT_MONSTERHEALTH, EVENT_DUNGEONLEVEL, EVENT_STATUS,
    EVENT_SONG};
DATA game_event_type statusline_events[] = {
    EVENT_STATUS,
    EVENT_STATE,
    EVENT_LIGHT,
    EVENT_PLAYERSPEED,
};
DATA const char* stat_names[STAT_MAX] = {"STR: ", "DEX: ", "CON: ", "GRA: "};
DATA const char* stat_names_reduced[STAT_MAX] = {
    "Str: ", "Dex: ", "Con: ", "Gra: "};
typedef size_t status_f(int row, int col);
DATA status_f* status_handlers[] = {fptr(prt_light),   fptr(prt_unignore),
                                    fptr(prt_state),   fptr(prt_tmd),
                                    fptr(prt_terrain), fptr(prt_depth)};
DATA bool animations_allowed = true;
DATA uint8_t flicker = 0;
DATA bool flip_inven;
DATA const char* window_flag_desc[32] = {"Display inven/equip",
                                         "Display equip/inven",
                                         "Display player (basic)",
                                         "Display player (extra)",
                                         "Display player (compact)",
                                         "Display map view",
                                         "Display messages",
                                         "Display overhead view",
                                         "Display monster recall",
                                         "Display object recall",
                                         "Display monster list",
                                         "Display status",
                                         "Display item list",
                                         "Display player (topbar)",
                                         "Display combat rolls",
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL,
                                         NULL};
DATA bool arg_wizard;
DATA char savefile[1024];
DATA char panicfile[1024];
DATA void (*reinit_hook)(void) = NULL;
DATA struct cmd_info cmd_item[] = {
    {"Inscribe an object",
     {'{'},
     CMD_INSCRIBE,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Uninscribe an object",
     {'}'},
     CMD_UNINSCRIBE,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Wear/wield an item",
     {'w'},
     CMD_WIELD,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Take off/unwield an item",
     {'r', 'r', 't', 't'},
     CMD_TAKEOFF,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Examine an item",
     {'x', 'x', 'I', 'I'},
     CMD_NULL,
     fptr(textui_obj_examine),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Drop an item", {'d'}, CMD_DROP, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Destroy an item",
     {'k', KTRL('K'), 'k', KTRL('K')},
     CMD_DESTROY,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Fire from quiver 1",
     {'f'},
     CMD_NULL,
     fptr(do_cmd_fire_quiver1),
     fptr(player_can_fire_quiver1_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Fire from quiver 2",
     {'F'},
     CMD_NULL,
     fptr(do_cmd_fire_quiver2),
     fptr(player_can_fire_quiver2_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Use a staff",
     {'a', 'a', 'u', 'u'},
     CMD_USE_STAFF,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Blow a horn", {'p'}, CMD_BLOW_HORN, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Eat some food", {'E'}, CMD_EAT, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Quaff a potion", {'q'}, CMD_QUAFF, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Fuel your light source",
     {KTRL('F')},
     CMD_REFUEL,
     NULL,
     fptr(player_can_refuel_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Use an item",
     {'u', KTRL('U'), 'U', KTRL('U')},
     CMD_USE,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Smith an item",
     {'0', '0', KTRL('D'), KTRL('D')},
     CMD_SMITH,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0}};
DATA struct cmd_info cmd_action[] = {
    {"Disarm a trap or chest",
     {'D'},
     CMD_DISARM,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Rest for a while",
     {'Z', 'Z', 'R', 'R'},
     CMD_NULL,
     fptr(textui_cmd_rest),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Look around",
     {'l', KTRL('L'), 'l', KTRL('L')},
     CMD_NULL,
     fptr(do_cmd_look),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Target monster or location",
     {'*'},
     CMD_NULL,
     fptr(textui_target),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Target closest monster",
     {'\''},
     CMD_NULL,
     fptr(textui_target_closest),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Dig a tunnel", {'T'}, CMD_TUNNEL, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Go up staircase", {'<'}, CMD_GO_UP, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Go down staircase",
     {'>'},
     CMD_GO_DOWN,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Open a door or a chest",
     {'o'},
     CMD_OPEN,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Close a door", {'c'}, CMD_CLOSE, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Bash a door",
     {'b', KTRL('B'), 'B', KTRL('B')},
     CMD_BASH,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Fire at nearest target",
     {'m'},
     CMD_NULL,
     fptr(do_cmd_fire_at_nearest),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Throw an item",
     {'t', 't', 'v', 'v'},
     CMD_THROW,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Throw automatically",
     {KTRL('T')},
     CMD_NULL,
     fptr(do_cmd_automatic_throw),
     fptr(player_has_throwable_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Change song",
     {'s', 's', 'a', 'a'},
     CMD_SING,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Toggle stealth mode",
     {'S'},
     CMD_TOGGLE_STEALTH,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Walk into a trap", {'_'}, CMD_JUMP, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Exchange places",
     {'X'},
     CMD_EXCHANGE,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_item_manage[] = {
    {"Display equipment listing",
     {'e'},
     CMD_NULL,
     fptr(do_cmd_equip),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Display inventory listing",
     {'i'},
     CMD_NULL,
     fptr(do_cmd_inven),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Pick up objects", {'g'}, CMD_PICKUP, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Ignore an item",
     {'G'},
     CMD_IGNORE,
     fptr(textui_cmd_ignore),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_info[] = {
    {"Full dungeon map",
     {'M'},
     CMD_NULL,
     fptr(do_cmd_view_map),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Toggle ignoring of items",
     {'P'},
     CMD_NULL,
     fptr(textui_cmd_toggle_ignore),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Display visible item list",
     {']'},
     CMD_NULL,
     fptr(do_cmd_itemlist),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Display visible monster list",
     {'['},
     CMD_NULL,
     fptr(do_cmd_monlist),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Locate player on map",
     {'L', 'W', 'L', 'W'},
     CMD_NULL,
     fptr(do_cmd_locate),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Help", {'?'}, CMD_NULL, fptr(do_cmd_help), NULL, 0, NULL, NULL, NULL, 0},
    {"Identify symbol",
     {
         '|',
         '|',
         '/',
         '/',
     },
     CMD_NULL,
     fptr(do_cmd_query_symbol),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Character description",
     {'@', '@', 'C', 'C'},
     CMD_NULL,
     fptr(do_cmd_change_name),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Abilities list",
     {KC_TAB, KC_TAB, KC_TAB, KC_TAB},
     CMD_NULL,
     fptr(do_cmd_abilities),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Check knowledge",
     {'~'},
     CMD_NULL,
     fptr(textui_browse_knowledge),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Show previous message",
     {KTRL('O')},
     CMD_NULL,
     fptr(do_cmd_message_one),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Show previous messages",
     {KTRL('P')},
     CMD_NULL,
     fptr(do_cmd_messages),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0}};
DATA struct cmd_info cmd_util[] = {{"Interact with options",
                                    {'O', 'O', '=', '='},
                                    CMD_NULL,
                                    fptr(do_cmd_xxx_options),
                                    NULL,
                                    0,
                                    NULL,
                                    NULL,
                                    NULL,
                                    0},
                                   {"Save and don't quit",
                                    {KTRL('S')},
                                    CMD_NULL,
                                    fptr(save_game),
                                    fptr(player_can_save_prereq),
                                    0,
                                    NULL,
                                    NULL,
                                    NULL,
                                    0},
                                   {"Save and quit",
                                    {KTRL('X')},
                                    CMD_NULL,
                                    fptr(textui_quit),
                                    NULL,
                                    0,
                                    NULL,
                                    NULL,
                                    NULL,
                                    0},
                                   {"Retire character and quit",
                                    {'Q'},
                                    CMD_NULL,
                                    fptr(textui_cmd_retire),
                                    NULL,
                                    0,
                                    NULL,
                                    NULL,
                                    NULL,
                                    0},
                                   {"Redraw the screen",
                                    {KTRL('R')},
                                    CMD_NULL,
                                    fptr(do_cmd_redraw),
                                    NULL,
                                    0,
                                    NULL,
                                    NULL,
                                    NULL,
                                    0},
                                   {"Save \"screen dump\"",
                                    {')'},
                                    CMD_NULL,
                                    fptr(do_cmd_save_screen),
                                    NULL,
                                    0,
                                    NULL,
                                    NULL,
                                    NULL,
                                    0}};
DATA struct cmd_info cmd_hidden[] = {
    {"Take notes",
     {':'},
     CMD_NULL,
     fptr(do_cmd_note),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Version info",
     {'V'},
     CMD_NULL,
     fptr(do_cmd_version),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Load a single pref line",
     {'"'},
     CMD_NULL,
     fptr(do_cmd_pref),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Toggle windows",
     {KTRL('E')},
     CMD_NULL,
     fptr(toggle_inven_equip),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Alter a grid",
     {'/', '/', '+', '+'},
     CMD_ALTER,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Walk", {';'}, CMD_WALK, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Start running", {'.'}, CMD_RUN, NULL, NULL, 0, NULL, NULL, NULL, 0},
    {"Stand still",
     {'z', 'z', 's', 's'},
     CMD_HOLD,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Center map",
     {'C', 'C', '@', '@'},
     CMD_NULL,
     fptr(do_cmd_center_map),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Toggle wizard mode",
     {KTRL('W')},
     CMD_NULL,
     fptr(do_cmd_wizard),
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Repeat previous command",
     {'n', KTRL('N'), 'n', KTRL('N')},
     CMD_REPEAT,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Do autopickup",
     {KTRL('G')},
     CMD_AUTOPICKUP,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Debug mode commands",
     {KTRL('A')},
     CMD_NULL,
     NULL,
     NULL,
     1,
     "Debug Command: ",
     "That is not a valid fptr(debug) command.",
     "Debug",
     -1},
};
DATA struct cmd_info cmd_debug[] = {
    {"Items", {'\0'}, CMD_NULL, NULL, NULL, 0, NULL, NULL, "DbgObj", -1},
    {"Player", {'\0'}, CMD_NULL, NULL, NULL, 0, NULL, NULL, "DbgPlayer", -1},
    {"Teleport", {'\0'}, CMD_NULL, NULL, NULL, 0, NULL, NULL, "DbgTele", -1},
    {"Effects", {'\0'}, CMD_NULL, NULL, NULL, 0, NULL, NULL, "DbgEffects", -1},
    {"Summon", {'\0'}, CMD_NULL, NULL, NULL, 0, NULL, NULL, "DbgSummon", -1},
    {"Files", {'\0'}, CMD_NULL, NULL, NULL, 0, NULL, NULL, "DbgFiles", -1},
    {"Statistics", {'\0'}, CMD_NULL, NULL, NULL, 0, NULL, NULL, "DbgStat", -1},
    {"Query", {'\0'}, CMD_NULL, NULL, NULL, 0, NULL, NULL, "DbgQuery", -1},
    {"Miscellaneous",
     {'\0'},
     CMD_NULL,
     NULL,
     NULL,
     0,
     NULL,
     NULL,
     "DbgMisc",
     -1},
};
DATA struct cmd_info cmd_debug_obj[] = {
    {"Create an object",
     {'c'},
     CMD_NULL,
     fptr(wiz_create_nonartifact),
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Create an artifact",
     {'C'},
     CMD_NULL,
     fptr(wiz_create_artifact),
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Create all from tval",
     {'V'},
     CMD_NULL,
     fptr(wiz_create_all_for_tval),
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Acquire good",
     {'g'},
     CMD_NULL,
     fptr(wiz_acquire_good),
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Acquire great",
     {'v'},
     CMD_NULL,
     fptr(wiz_acquire_great),
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Play with item",
     {'o'},
     CMD_WIZ_PLAY_ITEM,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_debug_player[] = {
    {"Cure everything",
     {'a'},
     CMD_WIZ_CURE_ALL,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Make powerful",
     {'A'},
     CMD_WIZ_ADVANCE,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Increase experience",
     {'x'},
     CMD_WIZ_INCREASE_EXP,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Rerate hitpoints",
     {'h'},
     CMD_WIZ_RERATE,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Edit player",
     {'e'},
     CMD_WIZ_EDIT_PLAYER_START,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Learn object kinds",
     {'l'},
     CMD_NULL,
     fptr(wiz_learn_all_object_kinds),
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Recall monster",
     {'r'},
     CMD_WIZ_RECALL_MONSTER,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Erase monster recall",
     {'W'},
     CMD_WIZ_WIPE_RECALL,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_debug_tele[] = {
    {"To location",
     {'b'},
     CMD_WIZ_TELEPORT_TO,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Jump to a level",
     {'j'},
     CMD_WIZ_JUMP_LEVEL,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_debug_effects[] = {
    {"Detect all nearby",
     {'d'},
     CMD_WIZ_DETECT_ALL_LOCAL,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Detect all monsters",
     {'u'},
     CMD_WIZ_DETECT_ALL_MONSTERS,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Map local area",
     {'m'},
     CMD_WIZ_MAGIC_MAP,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Hit all in LOS",
     {'H'},
     CMD_WIZ_HIT_ALL_LOS,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Perform an effect",
     {'E'},
     CMD_WIZ_PERFORM_EFFECT,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Graphics demo",
     {'G'},
     CMD_NULL,
     fptr(wiz_proj_demo),
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_debug_summon[] = {
    {"Summon specific",
     {'n'},
     CMD_WIZ_SUMMON_NAMED,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Summon random",
     {'s'},
     CMD_WIZ_SUMMON_RANDOM,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_debug_files[] = {
    {"Create spoilers",
     {'"'},
     CMD_NULL,
     fptr(do_cmd_spoilers),
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Write map",
     {'M'},
     CMD_WIZ_DUMP_LEVEL_MAP,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_debug_stats[] = {
    {"Objects and monsters",
     {'S'},
     CMD_WIZ_COLLECT_OBJ_MON_STATS,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Pits",
     {'P'},
     CMD_WIZ_COLLECT_PIT_STATS,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Disconnected levels",
     {'D'},
     CMD_WIZ_COLLECT_DISCONNECT_STATS,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Obj/mon alternate key",
     {'f'},
     CMD_WIZ_COLLECT_OBJ_MON_STATS,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_debug_query[] = {
    {"Feature",
     {'F'},
     CMD_WIZ_QUERY_FEATURE,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Square flag",
     {'q'},
     CMD_WIZ_QUERY_SQUARE_FLAG,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Noise and scent",
     {'_'},
     CMD_WIZ_PEEK_NOISE_SCENT,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Keystroke log",
     {'L'},
     CMD_WIZ_DISPLAY_KEYLOG,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct cmd_info cmd_debug_misc[] = {
    {"Wizard light level",
     {'w'},
     CMD_WIZ_WIZARD_LIGHT,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Create a trap",
     {'T'},
     CMD_WIZ_CREATE_TRAP,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Banish nearby monsters",
     {'z'},
     CMD_WIZ_BANISH,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Push objects from fptr(square)",
     {'>'},
     CMD_WIZ_PUSH_OBJECT,
     NULL,
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
    {"Quit without saving",
     {'X'},
     CMD_NULL,
     fptr(wiz_confirm_quit_no_save),
     fptr(player_can_debug_prereq),
     0,
     NULL,
     NULL,
     NULL,
     0},
};
DATA struct command_list cmds_all[] = {
    {"Items", cmd_item, N_ELEMENTS(cmd_item), 0, 0},
    {"Action commands", cmd_action, N_ELEMENTS(cmd_action), 0, 0},
    {"Manage items", cmd_item_manage, N_ELEMENTS(cmd_item_manage), 0, 0},
    {"Information", cmd_info, N_ELEMENTS(cmd_info), 0, 0},
    {"Utility", cmd_util, N_ELEMENTS(cmd_util), 0, 0},
    {"Hidden", cmd_hidden, N_ELEMENTS(cmd_hidden), 0, 0},
    {"Debug", cmd_debug, N_ELEMENTS(cmd_debug), 1, -1},
    {"DbgObj", cmd_debug_obj, N_ELEMENTS(cmd_debug_obj), 2, 1},
    {"DbgPlayer", cmd_debug_player, N_ELEMENTS(cmd_debug_player), 2, 1},
    {"DbgTele", cmd_debug_tele, N_ELEMENTS(cmd_debug_tele), 2, 1},
    {"DbgEffects", cmd_debug_effects, N_ELEMENTS(cmd_debug_effects), 2, 1},
    {"DbgSummon", cmd_debug_summon, N_ELEMENTS(cmd_debug_summon), 2, 1},
    {"DbgFiles", cmd_debug_files, N_ELEMENTS(cmd_debug_files), 2, 1},
    {"DbgStat", cmd_debug_stats, N_ELEMENTS(cmd_debug_stats), 2, 1},
    {"DbgQuery", cmd_debug_query, N_ELEMENTS(cmd_debug_query), 2, 1},
    {"DbgMisc", cmd_debug_misc, N_ELEMENTS(cmd_debug_misc), 2, 1},
    {NULL, NULL, 0, 0, 0}};
DATA struct cmd_info* converted_list[4][UCHAR_MAX + 1];
DATA int n_nested = 0;
DATA struct cmd_info*** nested_lists = NULL;
DATA bool inkey_xtra;
DATA uint32_t inkey_scan;
DATA bool inkey_flag;
DATA struct keypress* inkey_next = NULL;
DATA bool keymap_auto_more;
DATA int message_column = 0;
DATA bool msg_flag;
DATA bool (*get_file)(const char* suggested_name, char* path,
                      size_t len) = fptr(get_file_text);
DATA int dir_transitions[10][10] = {
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 2, 0, 1, 0, 3, 0, 5, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 4, 0, 5, 0, 7, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 3, 0, 5, 0, 6, 0, 9, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 5, 0, 7, 0, 9, 0, 8, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};
DATA struct keypress request_command_buffer[256];
DATA struct keymap* keymaps[KEYMAP_MODE_MAX];
DATA struct file_parser ui_knowledge_parser = {
    "ui_knowledge", fptr(init_ui_knowledge_parser),
    fptr(run_ui_knowledge_parser), fptr(finish_ui_knowledge_parser),
    fptr(cleanup_ui_knowledge_parsed_data)};
DATA join_t* default_join;
DATA uint8_t attr_idx = 0;
DATA wchar_t char_idx = 0;
DATA struct ui_monster_category* monster_group = NULL;
DATA int n_monster_group = 0;
DATA const grouper object_text_order[] = {{TV_RING, "Ring"},
                                          {TV_AMULET, "Amulet"},
                                          {TV_POTION, "Potion"},
                                          {TV_STAFF, "Staff"},
                                          {TV_HORN, "Horn"},
                                          {TV_FOOD, "Food"},
                                          {TV_HERB, "Herb"},
                                          {TV_LIGHT, "Light"},
                                          {TV_FLASK, "Flask"},
                                          {TV_SWORD, "Sword"},
                                          {TV_POLEARM, "Polearm"},
                                          {TV_HAFTED, "Hafted Weapon"},
                                          {TV_BOW, "Bow"},
                                          {TV_ARROW, "Ammunition"},
                                          {TV_SHIELD, "Shield"},
                                          {TV_CROWN, "Crown"},
                                          {TV_HELM, "Helm"},
                                          {TV_GLOVES, "Gloves"},
                                          {TV_BOOTS, "Boots"},
                                          {TV_CLOAK, "Cloak"},
                                          {TV_MAIL, "Hard Armor"},
                                          {TV_SOFT_ARMOR, "Soft Armor"},
                                          {TV_DIGGING, "Digger"},
                                          {TV_METAL, "Metal"},
                                          {0, NULL}};
DATA int* obj_group_order = NULL;
DATA const char* rune_group_text[] = {"Combat", "Modifiers", "Resists",
                                      "Brands", "Slays",     "Curses",
                                      "Other",  NULL};
DATA const char* feature_group_text[] = {"Floors", "Doors",        "Stairs",
                                         "Walls",  "Obstructions", "Forges",
                                         "Pits",   "Other",        NULL};
DATA enum grid_light_level f_uik_lighting = LIGHTING_LIT;
DATA const char* trap_group_text[] = {"Runes", "Locks", "Traps", "Other", NULL};
DATA enum grid_light_level t_uik_lighting = LIGHTING_LIT;
DATA menu_action knowledge_actions[] = {
    {0, 0, "Display object knowledge", fptr(textui_browse_object_knowledge)},
    {0, 0, "Display rune knowledge", fptr(do_cmd_knowledge_runes)},
    {0, 0, "Display artifact knowledge", fptr(do_cmd_knowledge_artifacts)},
    {0, 0, "Display special item knowledge", fptr(do_cmd_knowledge_ego_items)},
    {0, 0, "Display monster knowledge", fptr(do_cmd_knowledge_monsters)},
    {0, 0, "Display feature knowledge", fptr(do_cmd_knowledge_features)},
    {0, 0, "Display trap knowledge", fptr(do_cmd_knowledge_traps)},
    {0, 0, "Display hall of fame", fptr(do_cmd_knowledge_scores)},
    {0, 0, "Display character history", fptr(do_cmd_knowledge_history)},
};
DATA struct menu knowledge_menu;
DATA wchar_t mini_screenshot_char[7][7];
DATA uint8_t mini_screenshot_attr[7][7];
const uint8_t curs_attrs[3][2] = {{COLOUR_SLATE, COLOUR_BLUE},
                                  {COLOUR_WHITE, COLOUR_L_BLUE},
                                  {COLOUR_RED, COLOUR_L_RED}};
const char lower_case[] = "abcdefghijklmnopqrstuvwxyz";
const char upper_case[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char all_letters[] =
    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char all_letters_nohjkl[] =
    "abcdefgimnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
DATA const menu_iter menu_iter_actions = {
    fptr(menu_action_tag), fptr(menu_action_valid), fptr(menu_action_display),
    fptr(menu_action_handle), NULL};
DATA const menu_iter menu_iter_strings = {NULL, NULL, fptr(display_string),
                                          fptr(handle_string), NULL};
DATA const menu_skin menu_skin_scroll = {
    fptr(scrolling_get_cursor), fptr(display_scrolling), fptr(scroll_get_tag),
    fptr(scroll_process_direction)};
DATA const menu_skin menu_skin_object = {
    fptr(object_skin_get_cursor), fptr(object_skin_display),
    fptr(object_skin_get_tag), fptr(object_skin_process_direction)};
DATA const menu_skin menu_skin_column = {
    fptr(columns_get_cursor), fptr(display_columns), fptr(column_get_tag),
    fptr(column_process_direction)};
DATA const menu_iter dynamic_iter = {NULL, fptr(dynamic_valid),
                                     fptr(dynamic_display), NULL, NULL};
DATA struct object_menu_data items[50];
DATA int num_obj;
DATA int num_head;
DATA size_t max_len;
DATA int ex_width;
DATA int ex_offset;
DATA item_tester tester_m;
DATA region area = {20, 1, -1, -2};
DATA struct object* selection;
DATA const char* prompt;
DATA char header[80];
DATA int i1, i2;
DATA int e1, e2;
DATA int f1, f2;
DATA int throwing_num;
DATA struct object** floor_list;
DATA struct object** throwing_list;
DATA olist_detail_t olist_mode = 0;
DATA int item_mode;
DATA cmd_code item_cmd;
DATA bool newmenu = false;
DATA bool allow_all = false;
DATA const menu_iter option_toggle_iter = {
    NULL, NULL, fptr(option_toggle_display), fptr(option_toggle_handle), NULL};
DATA struct keypress keymap_buffer[KEYMAP_ACTION_MAX + 1];
DATA struct menu* keymap_menu;
DATA menu_action keymap_actions[] = {
    {0, 0, "Load a user pref file", fptr(ui_keymap_pref_load)},
    {0, 0, "Save keymaps to file", fptr(ui_keymap_pref_append)},
    {0, 0, "Query a keymap", fptr(ui_keymap_query)},
    {0, 0, "Create a keymap", fptr(ui_keymap_create)},
    {0, 0, "Remove a keymap", fptr(ui_keymap_remove)},
};
DATA struct menu* visual_menu;
DATA menu_action visual_menu_items[] = {
    {0, 0, "Load a user pref file", fptr(visuals_pref_load)},
    {0, 0, "Save monster attr/chars", fptr(visuals_dump_monsters)},
    {0, 0, "Save object attr/chars", fptr(visuals_dump_objects)},
    {0, 0, "Save feature attr/chars", fptr(visuals_dump_features)},
    {0, 0, "Save flavor attr/chars", fptr(visuals_dump_flavors)},
    {0, 0, "Reset visuals", fptr(visuals_reset)},
};
DATA struct menu* color_menu;
DATA menu_action color_events[] = {
    {0, 0, "Load a user pref file", fptr(colors_pref_load)},
    {0, 0, "Dump colors", fptr(colors_pref_dump)},
    {0, 0, "Modify colors", fptr(colors_modify)}};
DATA tval_desc sval_dependent[] = {
    {TV_STAFF, "Staffs"}, {TV_HORN, "Horns"},     {TV_POTION, "Potions"},
    {TV_RING, "Rings"},   {TV_AMULET, "Amulets"}, {TV_FOOD, "Food"},
    {TV_HERB, "Herbs"},   {TV_LIGHT, "Lights"},   {TV_FLASK, "Flasks of oil"},
};
DATA const menu_iter ignore_sval_menu = {
    NULL, NULL, fptr(ignore_sval_menu_display), fptr(ignore_sval_menu_action),
    NULL,
};
DATA const menu_iter options_item_iter = {
    fptr(tag_options_item), fptr(valid_options_item),
    fptr(display_options_item), fptr(handle_options_item), NULL};
DATA struct menu* option_menu;
DATA menu_action option_actions[] = {
    {0, 'a', "User interface options", fptr(option_toggle_menu)},
    {0, 'b', "Birth (difficulty) options", fptr(option_toggle_menu)},
    {0, 'x', "Cheat options", fptr(option_toggle_menu)},
    {0, 'w', "Subwindow setup", fptr(do_cmd_options_win)},
    {0, 'i', "Item ignoring setup", fptr(do_cmd_options_item)},
    {0, '{', "Auto-inscription setup", fptr(textui_browse_object_knowledge)},
    {0, 0, NULL, NULL},
    {0, 'd', "Set base delay factor", fptr(do_cmd_delay)},
    {0, 'h', "Set hitpoint warning", fptr(do_cmd_hp_warn)},
    {0, 'm', "Set movement delay", fptr(do_cmd_lazymove_delay)},
    {0, 'o', "Set sidebar mode", fptr(do_cmd_sidebar_mode)},
    {0, 0, NULL, NULL},
    {0, 's', "Save subwindow setup to pref file", fptr(do_dump_options)},
    {0, 't', "Save autoinscriptions to pref file", fptr(do_dump_autoinsc)},
    {0, 0, NULL, NULL},
    {0, 'p', "Load a user pref file", fptr(options_load_pref_file)},
    {0, 'e', "Edit keymaps (advanced)", fptr(do_cmd_keymaps)},
    {0, 'c', "Edit colours (advanced)", fptr(do_cmd_colors)},
    {0, 'v', "Save visuals (advanced)", fptr(do_cmd_visuals)},
};
DATA int16_t screen_save_depth;
DATA char arg_name[PLAYER_NAME_LEN];
DATA int arg_graphics;
DATA bool arg_graphics_nice;
DATA int use_graphics;
DATA uint8_t* monster_x_attr;
DATA wchar_t* monster_x_char;
DATA uint8_t* kind_x_attr;
DATA wchar_t* kind_x_char;
DATA uint8_t* feat_x_attr[LIGHTING_MAX];
DATA wchar_t* feat_x_char[LIGHTING_MAX];
DATA uint8_t* trap_x_attr[LIGHTING_MAX];
DATA wchar_t* trap_x_char[LIGHTING_MAX];
DATA uint8_t* flavor_x_attr;
DATA wchar_t* flavor_x_char;
DATA uint8_t alert_x_attr = 0;
DATA wchar_t alert_x_char = 0;
DATA uint8_t glow_x_attr = 0;
DATA wchar_t glow_x_char = 0;
DATA uint8_t damage_x_attr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
DATA wchar_t damage_x_char[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
DATA size_t flavor_max = 0;
DATA const char* dump_separator = "#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#=#";
DATA int16_t signal_count;
DATA Signal_Handler_t (*signal_aux)(int, Signal_Handler_t) = fptr(wrap_signal);
DATA int skill_idx = 0;
DATA int skbuysell[SKILL_MAX];
DATA struct object smith_obj_body;
DATA struct object* smith_obj = &smith_obj_body;
DATA struct object smith_obj_known_body;
DATA struct object* smith_obj_known = &smith_obj_known_body;
DATA struct object smith_obj_body_backup;
DATA struct object* smith_obj_backup = &smith_obj_body_backup;
DATA struct artifact smith_art_body;
DATA struct artifact* smith_art = &smith_art_body;
DATA char smith_art_name[50];
DATA struct smithing_cost current_cost;
DATA struct menu* smithing_menu;
DATA bool no_forge;
DATA bool exhausted;
DATA bool create_smithed_item;
DATA bool numbers_changed;
DATA int pval = 0;
DATA bool pval_included = false;
DATA struct object_kind* smithing_svals[20];
DATA struct ego_item** smithing_specials;
DATA bool* affordable_specials;
DATA const char* smithing_art_cats[] = {
    "Stat bonuses", "Sustains",     "Skill bonuses", "Melee powers", "Slays",
    "Resistances",  "Curses",       "Misc",          "Melee",        "Archery",
    "Evasion",      "Stealth",      "Perception",    "Will",         "Smithing",
    "Song",         "Name Artefact"};
DATA int* smithing_art_cat_counts = NULL;
DATA struct property_info* smith_art_properties;
DATA struct ability** smith_art_abilities;
DATA bool negative;
DATA struct numbers_menu_entry numbers_menu_info[SMITH_NUM_MAX] = {
    {SMITH_NUM_INC_ATT, "increase attack bonus"},
    {SMITH_NUM_DEC_ATT, "decrease attack bonus"},
    {SMITH_NUM_INC_DS, "increase damage sides"},
    {SMITH_NUM_DEC_DS, "decrease damage sides"},
    {SMITH_NUM_INC_EVN, "increase evasion bonus"},
    {SMITH_NUM_DEC_EVN, "decrease evasion bonus"},
    {SMITH_NUM_INC_PS, "increase protection sides"},
    {SMITH_NUM_DEC_PS, "decrease protection sides"},
    {SMITH_NUM_INC_PVAL, "increase special bonus"},
    {SMITH_NUM_DEC_PVAL, "decrease special bonus"},
    {SMITH_NUM_INC_WGT, "increase weight"},
    {SMITH_NUM_DEC_WGT, "decrease weight"}};
DATA bool numbers_valid[SMITH_NUM_MAX];
DATA bool numbers_can_afford[SMITH_NUM_MAX] = {false};
DATA bool numbers_needs_artistry[SMITH_NUM_MAX] = {false};
DATA menu_action smithing_actions[] = {
    {0, 'a', "Base Item", fptr(tval_menu)},
    {0, 'b', "Enchant", fptr(special_menu)},
    {0, 'c', "Artifice", fptr(artefact_menu)},
    {0, 'd', "Numbers", fptr(numbers_menu)},
    {0, 'e', "Melt", fptr(melt_menu)},
    {0, 'f', "Accept", fptr(accept_item)},
};
DATA struct song_menu_info* songlist;
DATA char labels[25];
DATA struct menu* spoil_menu = NULL;
DATA menu_action spoil_actions[] = {
    {0, 0, "Brief Object Info (obj-desc.spo)", fptr(spoiler_menu_act)},
    {0, 0, "Brief Artifact Info (artifact.spo)", fptr(spoiler_menu_act)},
    {0, 0, "Brief Monster Info (mon-desc.spo)", fptr(spoiler_menu_act)},
    {0, 0, "Full Monster Info (mon-info.spo)", fptr(spoiler_menu_act)},
};
DATA term* angband_term[ANGBAND_TERM_MAX];
DATA char angband_term_name[ANGBAND_TERM_MAX][16] = {
    VERSION_NAME, "Term-1", "Term-2", "Term-3",
    "Term-4",     "Term-5", "Term-6", "Term-7"};
DATA uint32_t window_flag[ANGBAND_TERM_MAX];
DATA int row_top_map[SIDEBAR_MAX] = {1, 4, 1};
DATA int row_bottom_map[SIDEBAR_MAX] = {1, 0, 0};
DATA int col_map[SIDEBAR_MAX] = {13, 0, 0};
DATA term* Term = NULL;
DATA int log_i = 0;
DATA int log_size = 0;
DATA struct keypress keylog[KEYLOG_SIZE];
DATA uint8_t tile_width = 1;
DATA uint8_t tile_height = 1;
DATA bool bigcurs = false;
DATA bool smlcurs = true;
DATA size_t const VISUALS_GROUPS_MAX = 8;
DATA size_t const VISUALS_CYCLES_MAX = 64;
DATA size_t const VISUALS_STEPS_MAX = 32;
DATA uint8_t const VISUALS_INVALID_COLOR = 0xFF;
DATA struct visuals_cycler* visuals_cycler_table = NULL;
DATA struct visuals_flicker* visuals_flicker_table = NULL;
DATA struct file_parser visuals_file_parser = {
    .name = "visuals",
    .init = fptr(visuals_file_parser_init),
    .run = fptr(visuals_file_parser_run),
    .finish = fptr(visuals_file_parser_finish),
    .cleanup = fptr(visuals_file_parser_cleanup)};
DATA struct init_module ui_visuals_module = {
    .name = "ui-visuals",
    .init = fptr(ui_visuals_module_init),
    .cleanup = fptr(ui_visuals_module_cleanup)};
DATA const menu_iter proj_iter = {NULL, NULL, fptr(proj_display), NULL, NULL};
DATA bool choose_artifact = false;
DATA const region wiz_create_item_area = {0, 0, 0, 0};
DATA menu_iter wiz_create_item_submenu = {
    NULL, NULL, fptr(wiz_create_item_subdisplay),
    fptr(wiz_create_item_subaction), NULL};
DATA const menu_iter wiz_create_item_menu = {
    NULL, NULL, fptr(wiz_create_item_display), fptr(wiz_create_item_action),
    NULL};
DATA ang_file* fh = NULL;
DATA const grouper group_item[] = {{TV_ARROW, "Ammo"},
                                   {TV_BOW, "Bows"},
                                   {TV_SWORD, "Weapons"},
                                   {TV_POLEARM, NULL},
                                   {TV_HAFTED, NULL},
                                   {TV_DIGGING, NULL},
                                   {TV_SOFT_ARMOR, "Armour (Body)"},
                                   {TV_MAIL, NULL},
                                   {TV_CLOAK, "Armour (Misc)"},
                                   {TV_SHIELD, NULL},
                                   {TV_HELM, NULL},
                                   {TV_CROWN, NULL},
                                   {TV_GLOVES, NULL},
                                   {TV_BOOTS, NULL},
                                   {TV_AMULET, "Amulets"},
                                   {TV_RING, "Rings"},
                                   {TV_POTION, "Potions"},
                                   {TV_FOOD, "Food"},
                                   {TV_HERB, "Herbs"},
                                   {TV_HORN, "Horns"},
                                   {TV_CHEST, "Chests"},
                                   {TV_LIGHT, "Lights and fuel"},
                                   {TV_FLASK, NULL},
                                   {0, ""}};
DATA const grouper group_artifact[] = {{TV_SWORD, "Edged Weapons"},
                                       {TV_POLEARM, "Polearms"},
                                       {TV_HAFTED, "Hafted Weapons"},
                                       {TV_BOW, "Bows"},
                                       {TV_DIGGING, "Diggers"},
                                       {TV_SOFT_ARMOR, "Body Armor"},
                                       {TV_MAIL, NULL},
                                       {TV_CLOAK, "Cloaks"},
                                       {TV_SHIELD, "Shields"},
                                       {TV_HELM, "Helms/Crowns"},
                                       {TV_CROWN, NULL},
                                       {TV_GLOVES, "Gloves"},
                                       {TV_BOOTS, "Boots"},
                                       {TV_LIGHT, "Light Sources"},
                                       {TV_AMULET, "Amulets"},
                                       {TV_RING, "Rings"},
                                       {0, NULL}};
DATA const char* buildid = VERSION_NAME
    " "
    "1.4.0";
DATA const char* buildver = "1.4.0";
DATA const char* copyright =
    "Copyright (c) 1987-2024 Angband contributors.\n"
    "\n"
    "This work is free software; you can redistribute it and/or modify it\n"
    "under the terms of either:\n"
    "\n"
    "a) the GNU General Public License as published by the Free Software\n"
    "   Foundation, version 2, or\n"
    "\n"
    "b) the Angband licence:\n"
    "   This software may be copied and distributed for educational, "
    "research,\n"
    "   and not for profit purposes provided that this copyright and "
    "statement\n"
    "   are included in all such copies.  Other copyrights may also apply.\n";
DATA uint8_t angband_color_table[MAX_COLORS][4] = {
    {0x00, 0x00, 0x00, 0x00}, {0x00, 0xff, 0xff, 0xff},
    {0x00, 0x80, 0x80, 0x80}, {0x00, 0xff, 0x80, 0x00},
    {0x00, 0xc0, 0x00, 0x00}, {0x00, 0x00, 0x80, 0x40},
    {0x00, 0x00, 0x40, 0xff}, {0x00, 0x80, 0x40, 0x00},
    {0x00, 0x60, 0x60, 0x60}, {0x00, 0xc0, 0xc0, 0xc0},
    {0x00, 0xff, 0x00, 0xff}, {0x00, 0xff, 0xff, 0x00},
    {0x00, 0xff, 0x40, 0x40}, {0x00, 0x00, 0xff, 0x00},
    {0x00, 0x00, 0xff, 0xff}, {0x00, 0xc0, 0x80, 0x40},
    {0x00, 0x90, 0x00, 0x90}, {0x00, 0x90, 0x20, 0xff},
    {0x00, 0x00, 0xa0, 0xa0}, {0x00, 0x6c, 0x6c, 0x30},
    {0x00, 0xff, 0xff, 0x90}, {0x00, 0xff, 0x00, 0xa0},
    {0x00, 0x20, 0xff, 0xdc}, {0x00, 0xb8, 0xa8, 0xff},
    {0x00, 0xff, 0x80, 0x80}, {0x00, 0xb4, 0xb4, 0x00},
    {0x00, 0xa0, 0xc0, 0xd0}, {0x00, 0x00, 0xb0, 0xff},
    {0x00, 0x28, 0x28, 0x28},
};
DATA color_type color_table[MAX_COLORS] = {
    {'d',
     "Dark",
     {0, 0, 0, COLOUR_DARK, COLOUR_L_DARK, COLOUR_DARK, COLOUR_L_DARK,
      COLOUR_L_DARK, COLOUR_DARK}},
    {'w',
     "White",
     {1, 1, 1, COLOUR_WHITE, COLOUR_YELLOW, COLOUR_L_WHITE, COLOUR_L_BLUE,
      COLOUR_YELLOW, COLOUR_WHITE}},
    {'s',
     "Slate",
     {2, 1, 2, COLOUR_SLATE, COLOUR_L_WHITE, COLOUR_L_DARK, COLOUR_L_WHITE,
      COLOUR_L_WHITE, COLOUR_SLATE}},
    {'o',
     "Orange",
     {3, 1, 3, COLOUR_L_WHITE, COLOUR_YELLOW, COLOUR_SLATE, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_ORANGE}},
    {'r',
     "Red",
     {4, 1, 4, COLOUR_SLATE, COLOUR_L_RED, COLOUR_SLATE, COLOUR_L_RED,
      COLOUR_L_RED, COLOUR_RED}},
    {'g',
     "Green",
     {5, 1, 5, COLOUR_SLATE, COLOUR_L_GREEN, COLOUR_SLATE, COLOUR_L_GREEN,
      COLOUR_L_GREEN, COLOUR_GREEN}},
    {'b',
     "Blue",
     {6, 1, 6, COLOUR_SLATE, COLOUR_L_BLUE, COLOUR_SLATE, COLOUR_L_BLUE,
      COLOUR_L_BLUE, COLOUR_BLUE}},
    {'u',
     "Umber",
     {7, 1, 7, COLOUR_L_DARK, COLOUR_L_UMBER, COLOUR_L_DARK, COLOUR_L_UMBER,
      COLOUR_L_UMBER, COLOUR_UMBER}},
    {'D',
     "Light Dark",
     {8, 1, 8, COLOUR_L_DARK, COLOUR_SLATE, COLOUR_L_DARK, COLOUR_SLATE,
      COLOUR_SLATE, COLOUR_L_DARK}},
    {'W',
     "Light Slate",
     {9, 1, 9, COLOUR_L_WHITE, COLOUR_WHITE, COLOUR_SLATE, COLOUR_WHITE,
      COLOUR_WHITE, COLOUR_SLATE}},
    {'P',
     "Light Purple",
     {10, 1, 10, COLOUR_SLATE, COLOUR_YELLOW, COLOUR_SLATE, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_L_PURPLE}},
    {'y',
     "Yellow",
     {11, 1, 11, COLOUR_L_WHITE, COLOUR_L_YELLOW, COLOUR_L_WHITE, COLOUR_WHITE,
      COLOUR_WHITE, COLOUR_YELLOW}},
    {'R',
     "Light Red",
     {12, 1, 12, COLOUR_L_WHITE, COLOUR_YELLOW, COLOUR_RED, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_L_RED}},
    {'G',
     "Light Green",
     {13, 1, 13, COLOUR_L_WHITE, COLOUR_YELLOW, COLOUR_GREEN, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_L_GREEN}},
    {'B',
     "Light Blue",
     {14, 1, 14, COLOUR_L_WHITE, COLOUR_YELLOW, COLOUR_BLUE, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_L_BLUE}},
    {'U',
     "Light Umber",
     {15, 1, 15, COLOUR_L_WHITE, COLOUR_YELLOW, COLOUR_UMBER, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_L_UMBER}},
    {'p',
     "Purple",
     {16, 1, 10, COLOUR_SLATE, COLOUR_L_PURPLE, COLOUR_SLATE, COLOUR_L_PURPLE,
      COLOUR_L_PURPLE, COLOUR_L_PURPLE}},
    {'v',
     "Violet",
     {17, 1, 10, COLOUR_SLATE, COLOUR_L_PURPLE, COLOUR_SLATE, COLOUR_L_PURPLE,
      COLOUR_L_PURPLE, COLOUR_L_PURPLE}},
    {'t',
     "Teal",
     {18, 1, 6, COLOUR_SLATE, COLOUR_L_TEAL, COLOUR_SLATE, COLOUR_L_TEAL,
      COLOUR_L_TEAL, COLOUR_L_BLUE}},
    {'m',
     "Mud",
     {19, 1, 5, COLOUR_SLATE, COLOUR_MUSTARD, COLOUR_SLATE, COLOUR_MUSTARD,
      COLOUR_MUSTARD, COLOUR_UMBER}},
    {'Y',
     "Light Yellow",
     {20, 1, 11, COLOUR_WHITE, COLOUR_WHITE, COLOUR_YELLOW, COLOUR_WHITE,
      COLOUR_WHITE, COLOUR_L_YELLOW}},
    {'i',
     "Magenta-Pink",
     {21, 1, 12, COLOUR_SLATE, COLOUR_L_PINK, COLOUR_RED, COLOUR_L_PINK,
      COLOUR_L_PINK, COLOUR_L_PURPLE}},
    {'T',
     "Light Teal",
     {22, 1, 14, COLOUR_L_WHITE, COLOUR_YELLOW, COLOUR_TEAL, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_L_BLUE}},
    {'V',
     "Light Violet",
     {23, 1, 10, COLOUR_L_WHITE, COLOUR_YELLOW, COLOUR_VIOLET, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_L_PURPLE}},
    {'I',
     "Light Pink",
     {24, 1, 12, COLOUR_L_WHITE, COLOUR_YELLOW, COLOUR_MAGENTA, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_L_PURPLE}},
    {'M',
     "Mustard",
     {25, 1, 11, COLOUR_SLATE, COLOUR_YELLOW, COLOUR_SLATE, COLOUR_YELLOW,
      COLOUR_YELLOW, COLOUR_YELLOW}},
    {'z',
     "Blue Slate",
     {26, 1, 9, COLOUR_SLATE, COLOUR_DEEP_L_BLUE, COLOUR_SLATE,
      COLOUR_DEEP_L_BLUE, COLOUR_DEEP_L_BLUE, COLOUR_L_WHITE}},
    {'Z',
     "Deep Light Blue",
     {27, 1, 14, COLOUR_L_WHITE, COLOUR_L_BLUE, COLOUR_BLUE_SLATE,
      COLOUR_L_BLUE, COLOUR_L_BLUE, COLOUR_L_BLUE}},
};
DATA uint8_t gamma_table[256];
DATA const int16_t gamma_helper[256] = {
    0,    -1420, -1242, -1138, -1065, -1007, -961, -921, -887, -857, -830, -806,
    -783, -762,  -744,  -726,  -710,  -694,  -679, -666, -652, -640, -628, -617,
    -606, -596,  -586,  -576,  -567,  -577,  -549, -541, -532, -525, -517, -509,
    -502, -495,  -488,  -482,  -475,  -469,  -463, -457, -451, -455, -439, -434,
    -429, -423,  -418,  -413,  -408,  -403,  -398, -394, -389, -385, -380, -376,
    -371, -367,  -363,  -359,  -355,  -351,  -347, -343, -339, -336, -332, -328,
    -325, -321,  -318,  -314,  -311,  -308,  -304, -301, -298, -295, -291, -288,
    -285, -282,  -279,  -276,  -273,  -271,  -268, -265, -262, -259, -257, -254,
    -251, -248,  -246,  -243,  -241,  -238,  -236, -233, -231, -228, -226, -223,
    -221, -219,  -216,  -214,  -212,  -209,  -207, -205, -203, -200, -198, -196,
    -194, -192,  -190,  -188,  -186,  -184,  -182, -180, -178, -176, -174, -172,
    -170, -168,  -166,  -164,  -162,  -160,  -158, -156, -155, -153, -151, -149,
    -147, -146,  -144,  -142,  -140,  -139,  -137, -135, -134, -132, -130, -128,
    -127, -125,  -124,  -122,  -120,  -119,  -117, -116, -114, -112, -111, -109,
    -108, -106,  -105,  -103,  -102,  -100,  -99,  -97,  -96,  -95,  -93,  -92,
    -90,  -89,   -87,   -86,   -85,   -83,   -82,  -80,  -79,  -78,  -76,  -75,
    -74,  -72,   -71,   -70,   -68,   -67,   -66,  -65,  -63,  -62,  -61,  -59,
    -58,  -57,   -56,   -54,   -53,   -52,   -51,  -50,  -48,  -47,  -46,  -45,
    -44,  -42,   -41,   -40,   -39,   -38,   -37,  -35,  -34,  -33,  -32,  -31,
    -30,  -29,   -27,   -26,   -25,   -24,   -23,  -22,  -21,  -20,  -19,  -18,
    -17,  -16,   -14,   -13,   -12,   -11,   -10,  -9,   -8,   -7,   -6,   -5,
    -4,   -3,    -2,    -1};
DATA int player_uid;
DATA int player_egid;
DATA char* format_buf = NULL;
DATA size_t format_len = 0;
DATA char** quarks;
DATA size_t nr_quarks = 1;
DATA size_t alloc_quarks = 0;
DATA struct init_module z_quark_module = {
    .name = "z-quark", .init = fptr(quarks_init), .cleanup = fptr(quarks_free)};
DATA uint32_t state_i = 0;
DATA uint32_t STATE[RAND_DEG] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
DATA uint32_t z0, z1, z2;
DATA bool Rand_quick = true;
DATA uint32_t Rand_value;
DATA bool rand_fixed = false;
DATA uint32_t rand_fixval = 0;
DATA int16_t Rand_normal_table[256] = {
    206,   613,   1022,  1430,  1838,  2245,  2652,  3058,  3463,  3867,  4271,
    4673,  5075,  5475,  5874,  6271,  6667,  7061,  7454,  7845,  8234,  8621,
    9006,  9389,  9770,  10148, 10524, 10898, 11269, 11638, 12004, 12367, 12727,
    13085, 13440, 13792, 14140, 14486, 14828, 15168, 15504, 15836, 16166, 16492,
    16814, 17133, 17449, 17761, 18069, 18374, 18675, 18972, 19266, 19556, 19842,
    20124, 20403, 20678, 20949, 21216, 21479, 21738, 21994, 22245, 22493, 22737,
    22977, 23213, 23446, 23674, 23899, 24120, 24336, 24550, 24759, 24965, 25166,
    25365, 25559, 25750, 25937, 26120, 26300, 26476, 26649, 26818, 26983, 27146,
    27304, 27460, 27612, 27760, 27906, 28048, 28187, 28323, 28455, 28585, 28711,
    28835, 28955, 29073, 29188, 29299, 29409, 29515, 29619, 29720, 29818, 29914,
    30007, 30098, 30186, 30272, 30356, 30437, 30516, 30593, 30668, 30740, 30810,
    30879, 30945, 31010, 31072, 31133, 31192, 31249, 31304, 31358, 31410, 31460,
    31509, 31556, 31601, 31646, 31688, 31730, 31770, 31808, 31846, 31882, 31917,
    31950, 31983, 32014, 32044, 32074, 32102, 32129, 32155, 32180, 32205, 32228,
    32251, 32273, 32294, 32314, 32333, 32352, 32370, 32387, 32404, 32420, 32435,
    32450, 32464, 32477, 32490, 32503, 32515, 32526, 32537, 32548, 32558, 32568,
    32577, 32586, 32595, 32603, 32611, 32618, 32625, 32632, 32639, 32645, 32651,
    32657, 32662, 32667, 32672, 32677, 32682, 32686, 32690, 32694, 32698, 32702,
    32705, 32708, 32711, 32714, 32717, 32720, 32722, 32725, 32727, 32729, 32731,
    32733, 32735, 32737, 32739, 32740, 32742, 32743, 32745, 32746, 32747, 32748,
    32749, 32750, 32751, 32752, 32753, 32754, 32755, 32756, 32757, 32757, 32758,
    32758, 32759, 32760, 32760, 32761, 32761, 32761, 32762, 32762, 32763, 32763,
    32763, 32764, 32764, 32764, 32764, 32765, 32765, 32765, 32765, 32766, 32766,
    32766, 32766, 32767,
};
DATA void (*text_out_hook)(int a, const char* str);
DATA int text_out_wrap = 0;
DATA int text_out_indent = 0;
DATA int text_out_pad = 0;
DATA ang_file* text_out_file = NULL;
DATA char* argv0 = NULL;
DATA size_t (*text_mbcs_hook)(wchar_t* dest, const char* src, int n) = NULL;
DATA int (*text_wctomb_hook)(char* s, wchar_t wchar) = NULL;
DATA int (*text_wcsz_hook)(void) = NULL;
DATA int (*text_iswprint_hook)(wint_t wc) = NULL;
DATA void (*plog_aux)(const char*) = NULL;
DATA void (*quit_aux)(const char*) = NULL;
DATA struct termios norm_termios;
DATA struct termios game_termios;
DATA char* termtype;
DATA bool loaded_terminfo;
typedef struct rect_s rect_t, *rect_ptr;
DATA int active = 0;
DATA int can_use_color = false;
DATA int colortable[BASIC_COLORS];
DATA int same_colortable[BASIC_COLORS];
DATA bool bold_extended = false;
DATA bool use_default_background = false;
DATA bool keep_terminal_colors = false;
DATA int term_count = 1;
DATA const char help_gcu[] =
    "Text mode, subopts\n"
    "              -B     Use brighter bold characters\n"
    "              -D     Use terminal default background color\n"
    "              -K     Keep terminal's color table when changing colors\n"
    "              -nN    Use N terminals (up to 6)";
DATA const char help_spoil[] =
    "Spoiler generation mode, subopts\n"
    "              -a fname    Write artifact spoilers to fname;\n"
    "                          if neither -p, -r, nor -s are used, uses\n"
    "                          the standard artifacts\n"
    "              -m fname    Write brief monster spoilers to fname\n"
    "              -M fname    Write extended monster spoilers to fname\n"
    "              -o fname    Write object spoilers to fname\n";
DATA const struct module mmodules[] = {
    {"gcu", help_gcu, fptr(init_gcu)},
    {"spoil", help_spoil, fptr(init_spoil)},
};

DATA const struct side_handler_t {
  void (*hook)(int, int);
  int priority;
  game_event_type type;
} side_handlers[] = {
    {NULL, 21, 0},
    {fptr(prt_name), 13, EVENT_NAME},
    {NULL, 22, 0},
    {fptr(prt_str), 4, EVENT_STATS},
    {fptr(prt_dex), 3, EVENT_STATS},
    {fptr(prt_con), 2, EVENT_STATS},
    {fptr(prt_gra), 1, EVENT_STATS},
    {NULL, 23, 0},
    {fptr(prt_exp), 5, EVENT_EXPERIENCE},
    {NULL, 24, 0},
    {fptr(prt_hp), 6, EVENT_HP},
    {fptr(prt_sp), 7, EVENT_MANA},
    {NULL, 17, 0},
    {fptr(prt_mel), 8, EVENT_MELEE},
    {fptr(prt_arc), 9, EVENT_ARCHERY},
    {fptr(prt_evn), 10, EVENT_ARMOR},
    {NULL, 25, 0},
    {fptr(prt_health), 11, EVENT_MONSTERHEALTH},
    {NULL, 14, 0},
    {NULL, 20, 0},
    {fptr(prt_cut), 15, EVENT_STATUS},
    {fptr(prt_poisoned), 16, EVENT_STATUS},
    {fptr(prt_song), 12, EVENT_SONG},
    {NULL, 18, 0},
    {fptr(prt_speed), 19, EVENT_STATUS},
};
DATA struct {
  char tag;
  const char* name;
  void (*action)(const char*, int);
} extra_item_options[] = {
    {'Q', "Quality ignoring options", fptr(quality_menu)},
    {'E', "Ego ignoring options", fptr(ego_menu)},
    {'{', "Autoinscription setup", fptr(textui_browse_object_knowledge)},
};
DATA const struct {
  region bounds;
  bool align_left;
  struct panel* (*panel)(void);
} panels[] = {
    {{1, 1, 18, 4}, true, fptr(get_panel_topleft)},
    {{22, 1, 12, 3}, false, fptr(get_panel_misc)},
    {{1, 6, 18, 9}, false, fptr(get_panel_midleft)},
    {{22, 6, 16, 9}, false, fptr(get_panel_combat)},
};
DATA const struct {
  const char* name;
  cave_builder builder;
} cave_builders[] = {
    {"cave", fptr(cave_gen)},
    {"throne", fptr(throne_gen)},
    {"gates", fptr(gates_gen)},
};
DATA const struct {
  const char* name;
  int max_height;
  int max_width;
  room_builder builder;
} room_builders[] = {
    {"simple room", 0, 0, fptr(build_simple)},
    {"crossed room", 0, 0, fptr(build_crossed)},
    {"Interesting room", 22, 33, fptr(build_interesting)},
    {"Lesser vault", 22, 33, fptr(build_lesser_vault)},
    {"Greater vault", 44, 66, fptr(build_greater_vault)},
    {"Throne room", 30, 35, fptr(build_throne)},
    {"Gates of Angband", 32, 64, fptr(build_gates)},
};
DATA const struct {
  char name[16];
  void (*save)(void);
  uint32_t version;
} savers[] = {
    {"description", fptr(wr_description), 1},
    {"rng", fptr(wr_randomizer), 1},
    {"options", fptr(wr_options), 1},
    {"messages", fptr(wr_messages), 1},
    {"monster memory", fptr(wr_monster_memory), 1},
    {"object memory", fptr(wr_object_memory), 1},
    {"player", fptr(wr_player), 1},
    {"ignore", fptr(wr_ignore), 1},
    {"misc", fptr(wr_misc), 1},
    {"artifacts", fptr(wr_artifacts), 1},
    {"gear", fptr(wr_gear), 1},
    {"dungeon", fptr(wr_dungeon), 1},
    {"objects", fptr(wr_objects), 1},
    {"monsters", fptr(wr_monsters), 1},
    {"traps", fptr(wr_traps), 1},
    {"history", fptr(wr_history), 1},
    {"monster groups", fptr(wr_monster_groups), 1},
};
DATA struct {
  char letter;
  void (*func)(const char*);
  bool enabled;
  const char* path;
} opts[] = {
    {'a', fptr(spoil_artifact), false, NULL},
    {'m', fptr(spoil_mon_desc), false, NULL},
    {'M', fptr(spoil_mon_info), false, NULL},
    {'o', fptr(spoil_obj_desc), false, NULL},
};
DATA struct {
  const char* name;
  struct file_parser* parser;
} pl[] = {{"world", &world_parser},
          {"projections", &projection_parser},
          {"features", &feat_parser},
          {"slays", &slay_parser},
          {"brands", &brand_parser},
          {"object bases", &object_base_parser},
          {"monster pain messages", &pain_parser},
          {"monster pursuit messages", &pursuit_parser},
          {"monster warning messages", &warning_parser},
          {"monster bases", &mon_base_parser},
          {"summons", &summon_parser},
          {"objects", &object_parser},
          {"abilities", &ability_parser},
          {"ego-items", &ego_parser},
          {"history charts", &history_parser},
          {"bodies", &body_parser},
          {"player races", &race_parser},
          {"player houses", &house_parser},
          {"player sexes", &sex_parser},
          {"artifacts", &artifact_parser},
          {"drops", &drop_parser},
          {"object properties", &object_property_parser},
          {"timed effects", &player_timed_parser},
          {"blow methods", &meth_parser},
          {"blow effects", &eff_parser},
          {"monster spells", &mon_spell_parser},
          {"monsters", &monster_parser},
          {"monster lore", &lore_parser},
          {"traps", &trap_parser},
          {"songs", &song_parser},
          {"chest_traps", &chest_trap_parser},
          {"flavours", &flavor_parser},
          {"random names", &names_parser}};
DATA const struct {
  const char* name;
  char** path;
  bool setgid_ok;
} change_path_values[] = {
    {"scores", &ANGBAND_DIR_SCORES, false},
    {"gamedata", &ANGBAND_DIR_GAMEDATA, true},
    {"screens", &ANGBAND_DIR_SCREENS, true},
    {"help", &ANGBAND_DIR_HELP, true},
    {"pref", &ANGBAND_DIR_CUSTOMIZE, true},
    {"fonts", &ANGBAND_DIR_FONTS, true},
    {"tiles", &ANGBAND_DIR_TILES, true},
    {"sounds", &ANGBAND_DIR_SOUNDS, true},
    {"icons", &ANGBAND_DIR_ICONS, true},
    {"user", &ANGBAND_DIR_USER, true},
    {"save", &ANGBAND_DIR_SAVE, false},
    {"panic", &ANGBAND_DIR_PANIC, false},
    {"archive", &ANGBAND_DIR_ARCHIVE, false},
};
DATA struct init_module* modules[] = {
    &z_quark_module,  &messages_module, &arrays_module,   &generate_module,
    &player_module,   &rune_module,     &obj_make_module, &ignore_module,
    &mon_make_module, &options_module,  &tutorial_module, NULL};
DATA void (*file_open_hook)(const char* path, file_type ftype);
DATA errr (*cmd_get_hook)(cmd_context c);
