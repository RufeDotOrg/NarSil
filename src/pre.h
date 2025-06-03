STATIC_OVL int FDECL(motion_dir, (struct loc start, struct loc finish));
STATIC_OVL struct loc FDECL(next_grid, (struct loc grid, int dir));
STATIC_OVL int FDECL(dir_from_delta, (int delta_y, int delta_x));
STATIC_OVL int FDECL(rough_direction, (struct loc grid1, struct loc grid2));
STATIC_OVL int FDECL(lookup_feat, (const char* name));
STATIC_OVL int FDECL(lookup_feat_code, (const char* code));
STATIC_OVL const char* FDECL(get_feat_code_name, (int idx));
STATIC_OVL void FDECL(flow_new, (struct chunk * c, struct flow* flow));
STATIC_OVL void FDECL(flow_free, (struct chunk * c, struct flow* flow));
STATIC_OVL struct chunk* FDECL(cave_new, (int height, int width));
STATIC_OVL void FDECL(cave_free, (struct chunk * c));
STATIC_OVL void FDECL(list_object, (struct chunk * c, struct object* obj));
STATIC_OVL void FDECL(delist_object, (struct chunk * c, struct object* obj));
STATIC_OVL void FDECL(object_lists_check_integrity,
                      (struct chunk * c, struct chunk* c_k));
STATIC_OVL void FDECL(scatter, (struct chunk * c, struct loc* place,
                                struct loc grid, int d, bool need_los));
STATIC_OVL int FDECL(scatter_ext, (struct chunk * c, struct loc* places, int n,
                                   struct loc grid, int d, bool need_los,
                                   bool (*pred)(struct chunk*, struct loc)));
STATIC_OVL struct monster* FDECL(cave_monster, (struct chunk * c, int idx));
STATIC_OVL int FDECL(cave_monster_max, (struct chunk * c));
STATIC_OVL int FDECL(cave_monster_count, (struct chunk * c));
STATIC_OVL int FDECL(count_feats,
                     (struct loc * grid,
                      bool (*test)(struct chunk* c, struct loc grid),
                      bool under));
STATIC_OVL int FDECL(count_neighbors,
                     (struct loc * match, struct chunk* c, struct loc grid,
                      bool (*test)(struct chunk* c, struct loc grid),
                      bool under));
STATIC_OVL void FDECL(ang_sort_swap_hook_longs,
                      (void* u, void* v, int a, int b));
STATIC_OVL void FDECL(ang_sort_aux, (void* u, void* v, int p, int q));
STATIC_OVL void FDECL(ang_sort, (void* u, void* v, int n));
STATIC_OVL void FDECL(vinfo_init_aux,
                      (struct vinfo_hack * hack, int y, int x, long m));
STATIC_OVL errr FDECL(vinfo_init, (void));
STATIC_OVL int FDECL(loc_to_grid, (struct loc grid));
STATIC_OVL struct loc FDECL(grid_to_loc, (int grid));
STATIC_OVL void FDECL(forget_fire, (struct chunk * c));
STATIC_OVL void FDECL(update_fire, (struct chunk * c, struct player* p));
STATIC_OVL int FDECL(project_path,
                     (struct chunk * c, struct loc* gp, int range,
                      struct loc grid1, struct loc* grid2, int flg));
STATIC_OVL void FDECL(map_info, (struct loc grid, struct grid_data* g));
STATIC_OVL void FDECL(square_note_spot, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_light_spot, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(cave_unlight, (struct point_set * ps));
STATIC_OVL void FDECL(cave_room_aux,
                      (struct point_set * seen, struct loc grid));
STATIC_OVL void FDECL(light_room, (struct loc grid, bool light));
STATIC_OVL void FDECL(wiz_light, (struct chunk * c, struct player* p));
STATIC_OVL void FDECL(wiz_dark, (struct chunk * c, struct player* p));
STATIC_OVL bool FDECL(feat_is_rock, (int feat));
STATIC_OVL bool FDECL(feat_is_quartz, (int feat));
STATIC_OVL bool FDECL(feat_is_granite, (int feat));
STATIC_OVL bool FDECL(feat_is_wall, (int feat));
STATIC_OVL bool FDECL(feat_is_floor, (int feat));
STATIC_OVL bool FDECL(feat_is_trap_holding, (int feat));
STATIC_OVL bool FDECL(feat_is_object_holding, (int feat));
STATIC_OVL bool FDECL(feat_is_monster_walkable, (int feat));
STATIC_OVL bool FDECL(feat_is_forge, (int feat));
STATIC_OVL bool FDECL(feat_is_los, (int feat));
STATIC_OVL bool FDECL(feat_is_passable, (int feat));
STATIC_OVL bool FDECL(feat_is_projectable, (int feat));
STATIC_OVL bool FDECL(feat_is_torch, (int feat));
STATIC_OVL bool FDECL(feat_is_pit, (int feat));
STATIC_OVL bool FDECL(feat_is_no_flow, (int feat));
STATIC_OVL bool FDECL(feat_is_no_scent, (int feat));
STATIC_OVL bool FDECL(feat_is_chasm, (int feat));
STATIC_OVL bool FDECL(square_isfloor, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_istrappable, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isobjectholding,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isgranitewall,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isgranite, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isperm, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isrock, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isquartz, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_ismineral, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isrubble, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_issecretdoor, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isopendoor, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_iscloseddoor, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isbrokendoor, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isdoor, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_iswall, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isstairs, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isupstairs, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isdownstairs, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isshaft, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isforge, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isplayer, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isoccupied, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isimpassable, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isknown, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_ismemorybad, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_ischasm, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_ismark, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isglow, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isvault, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isgreatervault,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isroom, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isseen, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isview, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isfire, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_wasseen, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_istrap, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isinvis, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_iswall_inner, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_iswall_outer, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_iswall_solid, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_tobechasm, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isproject, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isopen, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isempty, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isunseen, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isarrivable, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_canputitem, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isdiggable, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_iswebbable, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isleapable, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_is_monster_walkable,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_ispassable, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isprojectable,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_allowslos, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isstrongwall, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_ispit, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_islit, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isnoflow, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isnoscent, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_iswarded, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_iswebbed, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_seemslikewall,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isinteresting,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_islockeddoor, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isjammeddoor, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isplayertrap, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isvisibletrap,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_issecrettrap, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isdisarmabletrap,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_changeable, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_in_bounds, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_in_bounds_fully,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_isbelievedwall,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_suits_start, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_suits_stairs, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_allows_summon,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_seen_by_keen_senses,
                      (struct chunk * c, struct loc grid));
STATIC_OVL const struct square* FDECL(square,
                                      (struct chunk * c, struct loc grid));
STATIC_OVL struct feature* FDECL(square_feat,
                                 (struct chunk * c, struct loc grid));
STATIC_OVL int FDECL(square_light, (struct chunk * c, struct loc grid));
STATIC_OVL struct monster* FDECL(square_monster,
                                 (struct chunk * c, struct loc grid));
STATIC_OVL struct object* FDECL(square_object,
                                (struct chunk * c, struct loc grid));
STATIC_OVL struct trap* FDECL(square_trap, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_holds_object,
                      (struct chunk * c, struct loc grid, struct object* obj));
STATIC_OVL void FDECL(square_excise_object,
                      (struct chunk * c, struct loc grid, struct object* obj));
STATIC_OVL void FDECL(square_excise_pile, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_excise_all_imagined,
                      (struct chunk * p_c, struct chunk* c, struct loc grid));
STATIC_OVL void FDECL(square_delete_object,
                      (struct chunk * c, struct loc grid, struct object* obj,
                       bool do_note, bool do_light));
STATIC_OVL void FDECL(forget_remembered_objects,
                      (struct chunk * c, struct chunk* knownc,
                       struct loc grid));
STATIC_OVL void FDECL(square_know_pile, (struct chunk * c, struct loc grid));
STATIC_OVL int FDECL(square_num_doors_adjacent,
                     (struct chunk * c, struct loc grid));
STATIC_OVL int FDECL(square_num_walls_diagonal,
                     (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_set_feat,
                      (struct chunk * c, struct loc grid, int feat));
STATIC_OVL void FDECL(square_set_known_feat,
                      (struct chunk * c, struct loc grid, int feat));
STATIC_OVL void FDECL(square_set_mon,
                      (struct chunk * c, struct loc grid, int midx));
STATIC_OVL void FDECL(square_set_obj,
                      (struct chunk * c, struct loc grid, struct object* obj));
STATIC_OVL void FDECL(square_set_trap,
                      (struct chunk * c, struct loc grid, struct trap* trap));
STATIC_OVL void FDECL(square_add_trap, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_add_glyph,
                      (struct chunk * c, struct loc grid, int type));
STATIC_OVL void FDECL(square_add_web, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_add_stairs,
                      (struct chunk * c, struct loc grid, int depth));
STATIC_OVL void FDECL(square_add_door,
                      (struct chunk * c, struct loc grid, bool closed));
STATIC_OVL void FDECL(square_open_door, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_close_door, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_smash_door, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_unlock_door, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_destroy_door, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_destroy_trap, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_tunnel_wall, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_destroy_wall, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_smash_wall, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_destroy_rubble,
                      (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_force_floor, (struct chunk * c, struct loc grid));
STATIC_OVL int FDECL(square_forge_bonus, (struct chunk * c, struct loc grid));
STATIC_OVL int FDECL(square_digging, (struct chunk * c, struct loc grid));
STATIC_OVL int FDECL(square_pit_difficulty,
                     (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_apparent_name, (struct chunk * c, struct loc grid,
                                             char* name, int size));
STATIC_OVL const char* FDECL(square_apparent_look_prefix,
                             (struct chunk * c, struct loc grid));
STATIC_OVL const char* FDECL(square_apparent_look_in_preposition,
                             (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_memorize, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_forget, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_mark, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_unmark, (struct chunk * c, struct loc grid));
STATIC_OVL int FDECL(distance, (struct loc grid1, struct loc grid2));
STATIC_OVL bool FDECL(los,
                      (struct chunk * c, struct loc grid1, struct loc grid2));
STATIC_OVL void FDECL(mark_wasseen, (struct chunk * c));
STATIC_OVL bool FDECL(source_can_light_wall,
                      (struct chunk * c, struct player* p, struct loc sgrid,
                       struct loc wgrid));
STATIC_OVL bool FDECL(glow_can_light_wall,
                      (struct chunk * c, struct player* p, struct loc wgrid));
STATIC_OVL void FDECL(add_light, (struct chunk * c, struct player* p,
                                  struct loc sgrid, int radius, int inten));
STATIC_OVL void FDECL(calc_lighting, (struct chunk * c, struct player* p));
STATIC_OVL void FDECL(become_viewable, (struct chunk * c, struct loc grid,
                                        struct player* p, bool close));
STATIC_OVL void FDECL(update_view_one,
                      (struct chunk * c, struct loc grid, struct player* p));
STATIC_OVL void FDECL(update_one,
                      (struct chunk * c, struct loc grid, struct player* p));
STATIC_OVL void FDECL(update_view, (struct chunk * c, struct player* p));
STATIC_OVL bool FDECL(no_light, (const struct player* p));
STATIC_OVL bool FDECL(trapped_stairs, (void));
STATIC_OVL void FDECL(do_cmd_go_up_aux, (void));
STATIC_OVL void FDECL(do_cmd_go_up, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_go_down_aux, (void));
STATIC_OVL void FDECL(do_cmd_go_down, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_toggle_stealth, (struct command * cmd));
STATIC_OVL bool FDECL(do_cmd_open_test, (struct player * p, struct loc grid));
STATIC_OVL bool FDECL(do_cmd_open_aux, (struct loc grid));
STATIC_OVL void FDECL(do_cmd_open, (struct command * cmd));
STATIC_OVL bool FDECL(do_cmd_close_test, (struct player * p, struct loc grid));
STATIC_OVL bool FDECL(do_cmd_close_aux, (struct loc grid));
STATIC_OVL void FDECL(do_cmd_close, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_exchange, (struct command * cmd));
STATIC_OVL bool FDECL(do_cmd_tunnel_test, (struct player * p, struct loc grid));
STATIC_OVL bool FDECL(twall, (struct loc grid));
STATIC_OVL void FDECL(fail_message, (struct feature * terrain, char* name));
STATIC_OVL bool FDECL(do_cmd_tunnel_aux, (struct loc grid));
STATIC_OVL void FDECL(do_cmd_tunnel, (struct command * cmd));
STATIC_OVL bool FDECL(do_cmd_disarm_test, (struct player * p, struct loc grid));
STATIC_OVL bool FDECL(do_cmd_disarm_aux, (struct loc grid));
STATIC_OVL void FDECL(do_cmd_disarm, (struct command * cmd));
STATIC_OVL bool FDECL(do_cmd_bash_test, (struct player * p, struct loc grid));
STATIC_OVL bool FDECL(do_cmd_bash_aux, (struct loc grid));
STATIC_OVL void FDECL(do_cmd_bash, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_alter_aux, (int dir));
STATIC_OVL void FDECL(do_cmd_alter, (struct command * cmd));
STATIC_OVL bool FDECL(confirm_leap, (struct loc grid, int dir));
STATIC_OVL void FDECL(player_land, (struct player * p));
STATIC_OVL void FDECL(do_cmd_leap, (struct command * cmd));
STATIC_OVL void FDECL(move_player, (int dir, bool disarm));
STATIC_OVL void FDECL(do_cmd_hold_aux, (void));
STATIC_OVL void FDECL(do_cmd_hold, (struct command * cmd));
STATIC_OVL bool FDECL(do_cmd_walk_test, (struct player * p, struct loc grid));
STATIC_OVL void FDECL(do_cmd_walk, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_jump, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_run, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_pathfind, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_change_song, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_rest, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_sleep, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_skip, (struct command * cmd));
STATIC_OVL void FDECL(cmd_copy,
                      (struct command * dest, const struct command* src));
STATIC_OVL void FDECL(cmd_release, (struct command * cmd));
STATIC_OVL const char* FDECL(cmd_verb, (cmd_code cmd));
STATIC_OVL int FDECL(cmd_idx, (cmd_code code));
STATIC_OVL struct command* FDECL(cmdq_peek, (void));
STATIC_OVL errr FDECL(cmdq_push_copy, (struct command * cmd));
STATIC_OVL void FDECL(process_command, (cmd_context ctx, struct command* cmd));
STATIC_OVL bool FDECL(cmdq_pop, (cmd_context c));
STATIC_OVL errr FDECL(cmdq_push_repeat, (cmd_code c, int nrepeats));
STATIC_OVL errr FDECL(cmdq_push, (cmd_code c));
STATIC_OVL void FDECL(cmdq_execute, (cmd_context ctx));
STATIC_OVL void FDECL(cmdq_flush, (void));
STATIC_OVL void FDECL(cmdq_release, (void));
STATIC_OVL void FDECL(cmd_cancel_repeat, (void));
STATIC_OVL void FDECL(cmd_set_repeat, (int nrepeats));
STATIC_OVL int FDECL(cmd_get_nrepeats, (void));
STATIC_OVL void FDECL(cmd_disable_repeat, (void));
STATIC_OVL void FDECL(cmd_disable_repeat_floor_item, (void));
STATIC_OVL void FDECL(cmd_set_arg,
                      (struct command * cmd, const char* name,
                       enum cmd_arg_type type, union cmd_arg_data data));
STATIC_OVL int FDECL(cmd_get_arg,
                     (struct command * cmd, const char* arg,
                      enum cmd_arg_type type, union cmd_arg_data* data));
STATIC_OVL void FDECL(cmd_set_arg_choice,
                      (struct command * cmd, const char* arg, int choice));
STATIC_OVL int FDECL(cmd_get_arg_choice,
                     (struct command * cmd, const char* arg, int* choice));
STATIC_OVL int FDECL(cmd_get_effect_from_list,
                     (struct command * cmd, const char* arg, int* choice,
                      const char* prompt, struct effect* effect, int count,
                      bool allow_random));
STATIC_OVL void FDECL(cmd_set_arg_string,
                      (struct command * cmd, const char* arg, const char* str));
STATIC_OVL int FDECL(cmd_get_arg_string,
                     (struct command * cmd, const char* arg, const char** str));
STATIC_OVL int FDECL(cmd_get_string, (struct command * cmd, const char* arg,
                                      const char** str, const char* initial,
                                      const char* title, const char* prompt));
STATIC_OVL void FDECL(cmd_set_arg_direction,
                      (struct command * cmd, const char* arg, int dir));
STATIC_OVL int FDECL(cmd_get_arg_direction,
                     (struct command * cmd, const char* arg, int* dir));
STATIC_OVL int FDECL(cmd_get_direction, (struct command * cmd, const char* arg,
                                         int* dir, bool allow_5));
STATIC_OVL void FDECL(cmd_set_arg_target,
                      (struct command * cmd, const char* arg, int target));
STATIC_OVL int FDECL(cmd_get_arg_target,
                     (struct command * cmd, const char* arg, int* target));
STATIC_OVL int FDECL(cmd_get_target,
                     (struct command * cmd, const char* arg, int* target,
                      int range, bool allow_vertical));
STATIC_OVL void FDECL(cmd_set_arg_point,
                      (struct command * cmd, const char* arg, struct loc grid));
STATIC_OVL int FDECL(cmd_get_arg_point,
                     (struct command * cmd, const char* arg, struct loc* grid));
STATIC_OVL void FDECL(cmd_set_arg_item, (struct command * cmd, const char* arg,
                                         struct object* obj));
STATIC_OVL int FDECL(cmd_get_arg_item, (struct command * cmd, const char* arg,
                                        struct object** obj));
STATIC_OVL int FDECL(cmd_get_item,
                     (struct command * cmd, const char* arg,
                      struct object** obj, const char* prompt,
                      const char* reject, item_tester filter, int mode));
STATIC_OVL void FDECL(cmd_set_arg_number,
                      (struct command * cmd, const char* arg, int amt));
STATIC_OVL int FDECL(cmd_get_arg_number,
                     (struct command * cmd, const char* arg, int* amt));
STATIC_OVL int FDECL(cmd_get_quantity, (struct command * cmd, const char* arg,
                                        int* amt, int max));
STATIC_OVL void FDECL(do_cmd_wizard, (void));
STATIC_OVL void FDECL(do_cmd_escape, (void));
STATIC_OVL void FDECL(do_cmd_retire, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_note, (void));
STATIC_OVL int FDECL(check_devices, (struct object * obj));
STATIC_OVL void FDECL(do_cmd_uninscribe, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_inscribe, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_autoinscribe, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_takeoff, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wield, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_drop, (struct command * cmd));
STATIC_OVL void FDECL(use_aux, (struct command * cmd, struct object* obj,
                                enum use use, int snd, bool allow_vertical));
STATIC_OVL void FDECL(do_cmd_use_staff, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_blow_horn, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_eat_food, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_quaff_potion, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_use, (struct command * cmd));
STATIC_OVL void FDECL(refill_lamp, (struct object * lamp, struct object* obj));
STATIC_OVL void FDECL(combine_torches,
                      (struct object * torch, struct object* obj));
STATIC_OVL void FDECL(do_cmd_refuel, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_destroy, (struct command * cmd));
STATIC_OVL const struct object* FDECL(find_stack_object_in_inventory,
                                      (const struct object* obj,
                                       const struct object* start));
STATIC_OVL int FDECL(auto_pickup_okay, (const struct object* obj));
STATIC_OVL void FDECL(player_pickup_aux, (struct player * p, struct object* obj,
                                          int auto_max, bool domsg));
STATIC_OVL void FDECL(player_pickup_item,
                      (struct player * p, struct object* obj, bool menu));
STATIC_OVL bool FDECL(do_autopickup, (struct player * p));
STATIC_OVL void FDECL(do_cmd_pickup, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_autopickup, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_spoil_artifact, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_spoil_monster, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_spoil_monster_brief, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_spoil_obj, (struct command * cmd));
STATIC_OVL bool FDECL(get_int_from_string, (const char* s, int* val));
STATIC_OVL bool FDECL(get_long_from_string, (const char* s, long* val));
STATIC_OVL void FDECL(prt_binary, (const bitflag* flags, int offset, int row,
                                   int col, wchar_t ch, int num));
STATIC_OVL struct object* FDECL(wiz_create_object_from_artifact,
                                (const struct artifact* art));
STATIC_OVL struct object* FDECL(wiz_create_object_from_kind,
                                (struct object_kind * kind));
STATIC_OVL void FDECL(wiz_display_item, (const struct object* obj, bool all,
                                         const struct player* p));
STATIC_OVL void FDECL(wiz_drop_object, (struct object * obj));
STATIC_OVL void FDECL(wiz_hack_map, (struct chunk * c, struct player* p,
                                     void (*func)(struct chunk*, void*,
                                                  struct loc, bool*, uint8_t*),
                                     void* closure));
STATIC_OVL void FDECL(wiz_play_item_notify_changed, (void));
STATIC_OVL void FDECL(wiz_play_item_standard_upkeep,
                      (struct player * p, struct object* obj));
STATIC_OVL void FDECL(do_cmd_wiz_acquire, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_advance, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_banish, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_change_item_quantity, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_collect_disconnect_stats,
                      (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_collect_obj_mon_stats, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_create_all_artifact, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_create_all_artifact_from_tval,
                      (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_create_all_obj, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_create_all_obj_from_tval,
                      (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_create_artifact, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_create_obj, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_create_trap, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_cure_all, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_detect_all_local, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_detect_all_monsters, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_display_keylog, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_dump_level_map, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_edit_player_exp, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_edit_player_start, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_edit_player_stat, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_hit_all_los, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_increase_exp, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_jump_level, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_learn_object_kinds, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_magic_map, (struct command * cmd));
STATIC_OVL void FDECL(wiz_hack_map_peek_noise,
                      (struct chunk * c, void* closure, struct loc grid,
                       bool* show, uint8_t* color));
STATIC_OVL void FDECL(wiz_hack_map_peek_scent,
                      (struct chunk * c, void* closure, struct loc grid,
                       bool* show, uint8_t* color));
STATIC_OVL void FDECL(do_cmd_wiz_peek_noise_scent, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_perform_effect, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_play_item, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_push_object, (struct command * cmd));
STATIC_OVL void FDECL(wiz_hack_map_query_feature,
                      (struct chunk * c, void* closure, struct loc grid,
                       bool* show, uint8_t* color));
STATIC_OVL void FDECL(do_cmd_wiz_query_feature, (struct command * cmd));
STATIC_OVL void FDECL(wiz_hack_map_query_square_flag,
                      (struct chunk * c, void* closure, struct loc grid,
                       bool* show, uint8_t* color));
STATIC_OVL void FDECL(do_cmd_wiz_query_square_flag, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_quit_no_save, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_recall_monster, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_reroll_item, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_stat_item, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_summon_named, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_summon_random, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_teleport_to, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_tweak_item, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_wipe_recall, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_wiz_wizard_light, (struct command * cmd));
STATIC_OVL bool FDECL(knock_back, (struct loc grid1, struct loc grid2));
STATIC_OVL int FDECL(skill_check, (struct source attacker, int skill,
                                   int difficulty, struct source defender));
STATIC_OVL int FDECL(hit_roll, (int att, int evn, struct source attacker,
                                struct source defender, bool display_roll));
STATIC_OVL int FDECL(concentration_bonus, (struct player * p, struct loc grid));
STATIC_OVL int FDECL(focused_attack_bonus, (struct player * p));
STATIC_OVL int FDECL(master_hunter_bonus,
                     (struct player * p, struct monster* mon));
STATIC_OVL int FDECL(total_player_attack,
                     (struct player * p, struct monster* mon, int base));
STATIC_OVL int FDECL(total_player_evasion,
                     (struct player * p, struct monster* mon, bool archery));
STATIC_OVL int FDECL(light_penalty, (const struct monster* mon));
STATIC_OVL int FDECL(total_monster_attack,
                     (struct player * p, struct monster* mon, int base));
STATIC_OVL int FDECL(total_monster_evasion,
                     (struct player * p, struct monster* mon, bool archery));
STATIC_OVL int FDECL(stealth_melee_bonus, (const struct monster* mon));
STATIC_OVL int FDECL(overwhelming_att_mod,
                     (struct player * p, struct monster* mon));
STATIC_OVL int FDECL(crit_bonus, (struct player * p, int hit_result, int weight,
                                  const struct monster_race* race,
                                  int skill_type, bool thrown));
STATIC_OVL int FDECL(protection_roll, (struct player * p, int typ, bool melee,
                                       aspect prot_aspect));
STATIC_OVL void FDECL(parse_error, (struct file_parser * fp, struct parser* p));
STATIC_OVL errr FDECL(run_parser, (struct file_parser * fp));
STATIC_OVL errr FDECL(parse_file_quit_not_found,
                      (struct parser * p, const char* filename));
STATIC_OVL errr FDECL(parse_file, (struct parser * p, const char* filename));
STATIC_OVL void FDECL(cleanup_parser, (struct file_parser * fp));
STATIC_OVL int FDECL(lookup_flag,
                     (const char** flag_table, const char* flag_name));
STATIC_OVL int FDECL(code_index_in_array,
                     (const char* code_name[], const char* code));
STATIC_OVL bool FDECL(find_value_arg, (char* value_name, char* string,
                                       size_t nstring, int* num));
STATIC_OVL errr FDECL(grab_rand_value,
                      (random_value * value, const char** value_type,
                       const char* name_and_value));
STATIC_OVL errr FDECL(grab_int_value, (int* value, const char** value_type,
                                       const char* name_and_value));
STATIC_OVL errr FDECL(grab_int_range,
                      (int* lo, int* hi, const char* range, const char* sep));
STATIC_OVL errr FDECL(grab_index_and_int,
                      (int* value, int* index, const char** value_type,
                       const char* prefix, const char* name_and_value));
STATIC_OVL errr FDECL(grab_base_and_int,
                      (int* value, char** base, const char* name_and_value));
STATIC_OVL errr FDECL(grab_name, (const char* from, const char* what,
                                  const char* list[], int max, int* num));
STATIC_OVL errr FDECL(grab_flag,
                      (bitflag * flags, const size_t size,
                       const char** flag_table, const char* flag_name));
STATIC_OVL errr FDECL(remove_flag,
                      (bitflag * flags, const size_t size,
                       const char** flag_table, const char* flag_name));
STATIC_OVL void FDECL(write_flags, (ang_file * fff, const char* intro_text,
                                    const bitflag* flags, int flag_size,
                                    const char* names[]));
STATIC_OVL void FDECL(write_mods, (ang_file * fff, const int values[]));
STATIC_OVL void FDECL(write_elements,
                      (ang_file * fff, const struct element_info* el_info));
STATIC_OVL void FDECL(set_archive_user_prefix, (const char* pfx));
STATIC_OVL void FDECL(file_archive, (const char* fname, const char* append));
STATIC_OVL bool FDECL(randart_file_exists, (void));
STATIC_OVL void FDECL(activate_randart_file, (void));
STATIC_OVL void FDECL(deactivate_randart_file, (void));
STATIC_OVL void FDECL(write_self_made_artefacts, (void));
STATIC_OVL void FDECL(to_stderr, (const char* out));
STATIC_OVL void FDECL(debug, (const char* fmt, ...));
STATIC_OVL void FDECL(get_target, (struct source origin, int dir,
                                   struct loc* grid, int* flags));
STATIC_OVL bool FDECL(project_aimed,
                      (struct source origin, int typ, int dir, int dd, int ds,
                       int dif, int flg, const struct object* obj));
STATIC_OVL bool FDECL(effect_handler_HEAL_HP,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_DAMAGE,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_DART,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_PIT, (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_PROJECT_LOS,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_PROJECT_LOS_GRIDS,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_DEADFALL,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_EARTHQUAKE,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_SPOT,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_SPHERE,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_EXPLOSION,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_BREATH,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_BOLT,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_BEAM,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_TERRAIN_BEAM,
                      (effect_handler_context_t * context));
STATIC_OVL int FDECL(effect_calculate_value,
                     (effect_handler_context_t * context));
STATIC_OVL const char* FDECL(desc_stat, (int stat, bool positive));
STATIC_OVL bool FDECL(close_chasm, (struct loc grid, int power));
STATIC_OVL void FDECL(close_marked_chasms, (void));
STATIC_OVL bool FDECL(item_tester_unknown, (const struct object* obj));
STATIC_OVL bool FDECL(effect_handler_NOURISH,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_CURE,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_TIMED_SET,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_TIMED_INC,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_TIMED_INC_CHECK,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_TIMED_INC_NO_RES,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_TERROR,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_GLYPH,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_RESTORE_STAT,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_DRAIN_STAT,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_RESTORE_MANA,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_REMOVE_CURSE,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_MAP_AREA,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_DETECT_TRAPS,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_DETECT_DOORS,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(detect_monsters, (monster_predicate pred));
STATIC_OVL bool FDECL(effect_handler_DETECT_OBJECTS,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_DETECT_MONSTERS,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_REVEAL_MONSTER,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_CLOSE_CHASMS,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_IDENTIFY,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_RECHARGE,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_SUMMON,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_TELEPORT_TO,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_DARKEN_LEVEL,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_LIGHT_AREA,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_DARKEN_AREA,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_SONG_OF_ELBERETH,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_SONG_OF_LORIEN,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_SONG_OF_FREEDOM,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_SONG_OF_BINDING,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_SONG_OF_PIERCING,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_SONG_OF_OATHS,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_AGGRAVATE,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_NOISE,
                      (effect_handler_context_t * context));
STATIC_OVL bool FDECL(effect_handler_CREATE_TRAPS,
                      (effect_handler_context_t * context));
STATIC_OVL void FDECL(free_effect, (struct effect * source));
STATIC_OVL bool FDECL(effect_valid, (const struct effect* effect));
STATIC_OVL bool FDECL(effect_aim, (const struct effect* effect));
STATIC_OVL const char* FDECL(effect_info, (const struct effect* effect));
STATIC_OVL const char* FDECL(effect_desc, (const struct effect* effect));
STATIC_OVL effect_index FDECL(effect_lookup, (const char* name));
STATIC_OVL int FDECL(effect_subtype, (int index, const char* type));
STATIC_OVL int32_t FDECL(effect_value_base_zero, (void));
STATIC_OVL int32_t FDECL(effect_value_base_spell_power, (void));
STATIC_OVL int32_t FDECL(effect_value_base_dungeon_level, (void));
STATIC_OVL int32_t FDECL(effect_value_base_max_sight, (void));
STATIC_OVL int32_t FDECL(effect_value_base_player_hp, (void));
STATIC_OVL int32_t FDECL(effect_value_base_player_max_hp, (void));
STATIC_OVL int32_t FDECL(effect_value_base_player_will, (void));
STATIC_OVL int32_t FDECL(effect_value_base_player_cut, (void));
STATIC_OVL int32_t FDECL(effect_value_base_player_pois, (void));
STATIC_OVL expression_base_value_f FDECL(effect_value_base_by_name,
                                         (const char* name));
STATIC_OVL bool FDECL(effect_do, (struct effect * effect, struct source origin,
                                  struct object* obj, bool* ident, bool aware,
                                  int dir, struct command* cmd));
STATIC_OVL void FDECL(effect_simple,
                      (int index, struct source origin, const char* dice_string,
                       int subtype, int radius, int other, bool* ident));
STATIC_OVL void FDECL(format_dice_string,
                      (const random_value* v, int multiplier, size_t len,
                       char* dice_string));
STATIC_OVL void FDECL(append_damage,
                      (char* buffer, size_t buffer_size, random_value value));
STATIC_OVL void FDECL(copy_to_textblock_with_coloring,
                      (textblock * tb, const char* s));
STATIC_OVL textblock* FDECL(effect_describe,
                            (const struct effect* e, const char* prefix));
STATIC_OVL size_t FDECL(effect_get_menu_name,
                        (char* buf, size_t max, const struct effect* e));
STATIC_OVL struct effect* FDECL(effect_next, (struct effect * effect));
STATIC_OVL bool FDECL(effect_damages, (const struct effect* effect));
STATIC_OVL int FDECL(effect_avg_damage, (const struct effect* effect));
STATIC_OVL const char* FDECL(effect_projection, (const struct effect* effect));
STATIC_OVL void FDECL(game_event_dispatch,
                      (game_event_type type, game_event_data* data));
STATIC_OVL void FDECL(event_add_handler, (game_event_type type,
                                          game_event_handler* fn, void* user));
STATIC_OVL void FDECL(event_remove_handler,
                      (game_event_type type, game_event_handler* fn,
                       void* user));
STATIC_OVL void FDECL(event_remove_handler_type, (game_event_type type));
STATIC_OVL void FDECL(event_remove_all_handlers, (void));
STATIC_OVL void FDECL(event_add_handler_set,
                      (game_event_type * type, size_t n_types,
                       game_event_handler* fn, void* user));
STATIC_OVL void FDECL(event_remove_handler_set,
                      (game_event_type * type, size_t n_types,
                       game_event_handler* fn, void* user));
STATIC_OVL void FDECL(event_signal, (game_event_type type));
STATIC_OVL void FDECL(event_signal_flag, (game_event_type type, bool flag));
STATIC_OVL void FDECL(event_signal_point, (game_event_type type, int x, int y));
STATIC_OVL void FDECL(event_signal_string,
                      (game_event_type type, const char* s));
STATIC_OVL void FDECL(event_signal_message,
                      (game_event_type type, int t, const char* s));
STATIC_OVL void FDECL(event_signal_birthpoints,
                      (const int* points, const int* inc_points,
                       int remaining));
STATIC_OVL void FDECL(event_signal_skillpoints,
                      (const int* exp, const int* inc_exp, int remaining));
STATIC_OVL void FDECL(event_signal_blast,
                      (game_event_type type, int proj_type, int num_grids,
                       int* distance_to_grid, bool drawing,
                       bool* player_sees_grid, struct loc* blast_grid,
                       struct loc centre));
STATIC_OVL void FDECL(event_signal_bolt,
                      (game_event_type type, int proj_type, bool drawing,
                       bool seen, bool beam, int oy, int ox, int y, int x));
STATIC_OVL void FDECL(event_signal_missile,
                      (game_event_type type, struct object* obj, bool seen,
                       int y, int x));
STATIC_OVL void FDECL(event_signal_hit,
                      (game_event_type type, int dam, int dam_type, bool fatal,
                       struct loc grid));
STATIC_OVL void FDECL(event_signal_size, (game_event_type type, int h, int w));
STATIC_OVL void FDECL(event_signal_tunnel,
                      (game_event_type type, tunnel_type t,
                       tunnel_direction_type dir, int vlength, int hlength));
STATIC_OVL void FDECL(event_signal_combat_attack,
                      (game_event_type type, struct source attacker,
                       struct source defender, bool vis, int att, int att_roll,
                       int evn, int evn_roll, bool melee));
STATIC_OVL void FDECL(event_signal_combat_damage,
                      (game_event_type type, int dd, int ds, int dam, int pd,
                       int ps, int prot, int prt_percent, int dam_type,
                       bool melee));
STATIC_OVL void FDECL(event_signal_poem, (game_event_type type,
                                          const char* name, int row, int col));
STATIC_OVL void FDECL(event_signal_poem_textblock,
                      (game_event_type type, struct textblock* tb, int row,
                       int col));
STATIC_OVL int FDECL(get_quantity, (const char* prompt, int max));
STATIC_OVL bool FDECL(get_check, (const char* prompt));
STATIC_OVL bool FDECL(get_com, (const char* prompt, char* command));
STATIC_OVL bool FDECL(get_rep_dir, (int* dir, bool allow_none));
STATIC_OVL bool FDECL(get_aim_dir, (int* dir, int range));
STATIC_OVL bool FDECL(get_item, (struct object * *choice, const char* pmt,
                                 const char* str, cmd_code cmd,
                                 item_tester tester, int mode));
STATIC_OVL int FDECL(get_effect_from_list,
                     (const char* prompt, struct effect* effect, int count,
                      bool allow_random));
STATIC_OVL bool FDECL(confirm_debug, (void));
STATIC_OVL void FDECL(get_panel,
                      (int* min_y, int* min_x, int* max_y, int* max_x));
STATIC_OVL bool FDECL(panel_contains, (unsigned int y, unsigned int x));
STATIC_OVL bool FDECL(map_is_visible, (void));
STATIC_OVL struct object* FDECL(smith_object, (struct smithing_cost * cost));
STATIC_OVL void FDECL(view_ability_menu, (struct player_ability * ability_list,
                                          int num_abilities));
STATIC_OVL void FDECL(change_song, (void));
STATIC_OVL struct level* FDECL(level_by_name, (const char* name));
STATIC_OVL struct level* FDECL(level_by_depth, (int depth));
STATIC_OVL bool FDECL(is_daytime, (void));
STATIC_OVL int FDECL(turn_energy, (int speed));
STATIC_OVL int FDECL(regen_amount, (int turn_number, int max, int period));
STATIC_OVL int FDECL(health_level, (int current, int max));
STATIC_OVL void FDECL(play_ambient_sound, (void));
STATIC_OVL void FDECL(decrease_timeouts, (void));
STATIC_OVL int FDECL(square_flow_cost,
                     (struct chunk * c, struct loc grid, struct monster* mon));
STATIC_OVL int FDECL(grid_to_i, (struct loc grid, int w));
STATIC_OVL void FDECL(i_to_grid, (int i, int w, struct loc* grid));
STATIC_OVL void FDECL(update_flow, (struct chunk * c, struct flow* flow,
                                    struct monster* mon));
STATIC_OVL int FDECL(flow_dist, (struct flow flow, struct loc grid));
STATIC_OVL void FDECL(update_scent, (void));
STATIC_OVL int FDECL(get_scent, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(process_world, (struct chunk * c));
STATIC_OVL void FDECL(pre_process_player, (void));
STATIC_OVL void FDECL(process_player_cleanup, (void));
STATIC_OVL void FDECL(process_player_post_energy_use_cleanup, (void));
STATIC_OVL void FDECL(process_player, (void));
STATIC_OVL void FDECL(on_new_level, (void));
STATIC_OVL void FDECL(on_leave_level, (void));
STATIC_OVL void FDECL(run_game_loop, (void));
STATIC_OVL enum parser_error FDECL(parse_profile_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_profile_rooms, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_profile_streamer, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_profile_alloc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_profile_room, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_profile, (void));
STATIC_OVL errr FDECL(run_parse_profile, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_profile, (struct parser * p));
STATIC_OVL void FDECL(cleanup_profile, (void));
STATIC_OVL enum parser_error FDECL(parse_vault_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_vault_type, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_vault_depth, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_vault_rarity, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_vault_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_vault_d, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_vault, (void));
STATIC_OVL errr FDECL(run_parse_vault, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_vault, (struct parser * p));
STATIC_OVL void FDECL(cleanup_vault, (void));
STATIC_OVL void FDECL(run_template_parser, (void));
STATIC_OVL void FDECL(cleanup_template_parser, (void));
STATIC_OVL const struct cave_profile* FDECL(find_cave_profile,
                                            (const char* name));
STATIC_OVL const struct cave_profile* FDECL(choose_profile,
                                            (struct player * p));
STATIC_OVL void FDECL(cave_clear, (struct chunk * c, struct player* p));
STATIC_OVL void FDECL(cleanup_dun_data, (struct dun_data * dd));
STATIC_OVL struct chunk* FDECL(cave_generate, (struct player * p));
STATIC_OVL void FDECL(prepare_next_level, (struct player * p));
STATIC_OVL int FDECL(get_room_builder_count, (void));
STATIC_OVL int FDECL(get_room_builder_index_from_name, (const char* name));
STATIC_OVL const char* FDECL(get_room_builder_name_from_index, (int i));
STATIC_OVL int FDECL(get_level_profile_index_from_name, (const char* name));
STATIC_OVL const char* FDECL(get_level_profile_name_from_index, (int i));
STATIC_OVL bool FDECL(player_pass,
                      (struct chunk * c, struct loc grid, bool ignore_rubble));
STATIC_OVL void FDECL(flood_access, (struct chunk * c, struct loc grid,
                                     bool** access, bool ignore_rubble));
STATIC_OVL bool FDECL(check_connectivity, (struct chunk * c));
STATIC_OVL void FDECL(flood_piece, (int n, int piece_num));
STATIC_OVL int FDECL(dungeon_pieces, (void));
STATIC_OVL bool FDECL(build_streamer, (struct chunk * c, int feat));
STATIC_OVL void FDECL(build_chasm, (struct chunk * c));
STATIC_OVL void FDECL(build_chasms, (struct chunk * c));
STATIC_OVL bool FDECL(tunnel_ok,
                      (struct chunk * c, struct loc grid1, struct loc grid2,
                       bool tentative, int desired_changes));
STATIC_OVL int FDECL(lay_tunnel, (struct chunk * c, struct loc grid1,
                                  struct loc grid2, int r1, int r2));
STATIC_OVL bool FDECL(build_tunnel,
                      (struct chunk * c, int r1, int r2, struct loc grid1,
                       struct loc grid2, bool tentative, enum tunnel_type t));
STATIC_OVL bool FDECL(connect_two_rooms, (struct chunk * c, int r1, int r2,
                                          bool tentative, bool desperate));
STATIC_OVL bool FDECL(connect_room_to_corridor, (struct chunk * c, int r));
STATIC_OVL bool FDECL(connect_rooms_stairs, (struct chunk * c));
STATIC_OVL struct chunk* FDECL(cave_gen, (struct player * p));
STATIC_OVL struct chunk* FDECL(throne_gen, (struct player * p));
STATIC_OVL struct chunk* FDECL(gates_gen, (struct player * p));
STATIC_OVL struct vault* FDECL(random_vault,
                               (int depth, const char* typ, bool forge));
STATIC_OVL bool FDECL(solid_rock,
                      (struct chunk * c, int y1, int x1, int y2, int x2));
STATIC_OVL bool FDECL(doubled_wall,
                      (struct chunk * c, int y1, int x1, int y2, int x2));
STATIC_OVL void FDECL(generate_room, (struct chunk * c, int y1, int x1, int y2,
                                      int x2, int light));
STATIC_OVL void FDECL(generate_mark, (struct chunk * c, int y1, int x1, int y2,
                                      int x2, int flag));
STATIC_OVL void FDECL(fill_rectangle, (struct chunk * c, int y1, int x1, int y2,
                                       int x2, int feat, int flag));
STATIC_OVL void FDECL(draw_rectangle,
                      (struct chunk * c, int y1, int x1, int y2, int x2,
                       int feat, int flag, bool overwrite_perm));
STATIC_OVL void FDECL(generate_plus, (struct chunk * c, int y1, int x1, int y2,
                                      int x2, int feat, int flag));
STATIC_OVL void FDECL(set_marked_granite,
                      (struct chunk * c, struct loc grid, int flag));
STATIC_OVL bool FDECL(build_vault, (struct chunk * c, struct loc centre,
                                    struct vault* v, bool flip));
STATIC_OVL bool FDECL(build_vault_type, (struct chunk * c, struct loc centre,
                                         const char* typ, bool forge));
STATIC_OVL bool FDECL(build_simple, (struct chunk * c, struct loc centre));
STATIC_OVL bool FDECL(build_crossed, (struct chunk * c, struct loc centre));
STATIC_OVL bool FDECL(build_interesting, (struct chunk * c, struct loc centre));
STATIC_OVL bool FDECL(build_lesser_vault,
                      (struct chunk * c, struct loc centre));
STATIC_OVL bool FDECL(build_greater_vault,
                      (struct chunk * c, struct loc centre));
STATIC_OVL bool FDECL(build_throne, (struct chunk * c, struct loc centre));
STATIC_OVL bool FDECL(build_gates, (struct chunk * c, struct loc centre));
STATIC_OVL bool FDECL(room_build,
                      (struct chunk * c, struct room_profile profile));
STATIC_OVL int* FDECL(cave_find_init,
                      (struct loc top_left, struct loc bottom_right));
STATIC_OVL void FDECL(cave_find_reset, (int* state));
STATIC_OVL bool FDECL(cave_find_get_grid, (struct loc * grid, int* state));
STATIC_OVL bool FDECL(cave_find_in_range,
                      (struct chunk * c, struct loc* grid, struct loc top_left,
                       struct loc bottom_right, square_predicate pred));
STATIC_OVL bool FDECL(cave_find, (struct chunk * c, struct loc* grid,
                                  square_predicate pred));
STATIC_OVL bool FDECL(find_empty, (struct chunk * c, struct loc* grid));
STATIC_OVL bool FDECL(find_empty_range,
                      (struct chunk * c, struct loc* grid, struct loc top_left,
                       struct loc bottom_right));
STATIC_OVL bool FDECL(find_nearby_grid, (struct chunk * c, struct loc* grid,
                                         struct loc centre, int yd, int xd));
STATIC_OVL void FDECL(place_rubble, (struct chunk * c, struct loc grid));
STATIC_OVL int FDECL(choose_up_stairs, (struct chunk * c));
STATIC_OVL int FDECL(choose_down_stairs, (struct chunk * c));
STATIC_OVL void FDECL(place_stairs, (struct chunk * c, struct loc grid,
                                     bool first, int feat));
STATIC_OVL void FDECL(place_item_near_player,
                      (struct chunk * c, struct player* p, int tval,
                       const char* name));
STATIC_OVL void FDECL(place_object,
                      (struct chunk * c, struct loc grid, int level, bool good,
                       bool great, uint8_t origin, struct drop* drop));
STATIC_OVL void FDECL(place_secret_door, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(place_closed_door, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(place_random_door, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(place_forge, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(alloc_stairs, (struct chunk * c, int feat, int num));
STATIC_OVL bool FDECL(stairs_within_los, (struct chunk * c, struct loc grid0));
STATIC_OVL bool FDECL(find_start, (struct chunk * c, struct loc* grid));
STATIC_OVL bool FDECL(new_player_spot, (struct chunk * c, struct player* p));
STATIC_OVL int FDECL(trap_placement_chance,
                     (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(place_traps, (struct chunk * c));
STATIC_OVL int FDECL(alloc_object, (struct chunk * c, int set, int typ, int num,
                                    int depth, uint8_t origin));
STATIC_OVL struct room_profile FDECL(lookup_room_profile, (const char* name));
STATIC_OVL void FDECL(uncreate_artifacts, (struct chunk * c));
STATIC_OVL void FDECL(uncreate_greater_vaults,
                      (struct chunk * c, struct player* p));
STATIC_OVL void FDECL(chunk_validate_objects, (struct chunk * c));
STATIC_OVL void FDECL(dump_level_simple, (const char* basefilename,
                                          const char* title, struct chunk* c));
STATIC_OVL void FDECL(dump_level, (ang_file * fo, const char* title,
                                   struct chunk* c, int** dist));
STATIC_OVL void FDECL(dump_level_escaped_string,
                      (ang_file * fo, const char* s));
STATIC_OVL void FDECL(dump_level_header, (ang_file * fo, const char* title));
STATIC_OVL void FDECL(dump_level_body, (ang_file * fo, const char* title,
                                        struct chunk* c, int** dist));
STATIC_OVL void FDECL(dump_level_footer, (ang_file * fo));
STATIC_OVL enum parser_error FDECL(parse_graf_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_graf_directory, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_graf_size, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_graf_pref, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_graf_extra, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_grafmode, (void));
STATIC_OVL errr FDECL(finish_parse_grafmode, (struct parser * p));
STATIC_OVL void FDECL(print_error, (const char* name, struct parser* p));
STATIC_OVL bool FDECL(init_graphics_modes, (void));
STATIC_OVL void FDECL(close_graphics_modes, (void));
STATIC_OVL graphics_mode* FDECL(get_graphics_mode, (uint8_t id));
STATIC_OVL int FDECL(is_dh_tile, (int a, wchar_t c));
STATIC_OVL int FDECL(guid_eq, (guid a, guid b));
STATIC_OVL errr FDECL(grab_effect_data,
                      (struct parser * p, struct effect* effect));
STATIC_OVL void FDECL(init_file_paths,
                      (const char* configpath, const char* libpath,
                       const char* datapath));
STATIC_OVL void FDECL(create_needed_dirs, (void));
STATIC_OVL enum parser_error FDECL(parse_constants_level_max,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_constants_mon_gen,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_constants_mon_play,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_constants_dun_gen,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_constants_world, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_constants_carry_cap,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_constants_obj_make,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_constants_player, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_constants, (void));
STATIC_OVL errr FDECL(run_parse_constants, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_constants, (struct parser * p));
STATIC_OVL void FDECL(cleanup_constants, (void));
STATIC_OVL void FDECL(init_game_constants, (void));
STATIC_OVL void FDECL(cleanup_game_constants, (void));
STATIC_OVL enum parser_error FDECL(parse_world_level, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_world, (void));
STATIC_OVL errr FDECL(run_parse_world, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_world, (struct parser * p));
STATIC_OVL void FDECL(cleanup_world, (void));
STATIC_OVL enum parser_error FDECL(parse_feat_code, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_graphics, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_mimic, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_priority, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_info, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_walk_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_run_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_hurt_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_dig_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_fail_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_str_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_die_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_confused_msg,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_look_prefix, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_feat_look_in_preposition,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_feat, (void));
STATIC_OVL errr FDECL(run_parse_feat, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_feat, (struct parser * p));
STATIC_OVL void FDECL(cleanup_feat, (void));
STATIC_OVL enum parser_error FDECL(parse_body_body, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_body_slot, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_body, (void));
STATIC_OVL errr FDECL(run_parse_body, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_body, (struct parser * p));
STATIC_OVL void FDECL(cleanup_body, (void));
STATIC_OVL struct history_chart* FDECL(findchart, (struct history_chart * hs,
                                                   unsigned int idx));
STATIC_OVL enum parser_error FDECL(parse_history_chart, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_history_phrase, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_history, (void));
STATIC_OVL errr FDECL(run_parse_history, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_history, (struct parser * p));
STATIC_OVL void FDECL(cleanup_history, (void));
STATIC_OVL enum parser_error FDECL(parse_sex_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_sex_possess, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_sex_poetry, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_sex, (void));
STATIC_OVL errr FDECL(run_parse_sex, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_sex, (struct parser * p));
STATIC_OVL void FDECL(cleanup_sex, (void));
STATIC_OVL enum parser_error FDECL(parse_race_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_race_stats, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_race_skills, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_race_history, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_race_age, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_race_height, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_race_weight, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_race_play_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_race_equip, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_race_desc, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_race, (void));
STATIC_OVL errr FDECL(run_parse_race, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_race, (struct parser * p));
STATIC_OVL void FDECL(cleanup_race, (void));
STATIC_OVL enum parser_error FDECL(parse_house_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_house_alt_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_house_short_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_house_race, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_house_stats, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_house_skills, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_house_play_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_house_desc, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_house, (void));
STATIC_OVL errr FDECL(run_parse_house, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_house, (struct parser * p));
STATIC_OVL void FDECL(cleanup_house, (void));
STATIC_OVL enum parser_error FDECL(parse_names_section, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_names_word, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_names, (void));
STATIC_OVL errr FDECL(run_parse_names, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_names, (struct parser * p));
STATIC_OVL void FDECL(cleanup_names, (void));
STATIC_OVL enum parser_error FDECL(parse_flavor_flavor, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_flavor_kind, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_flavor, (void));
STATIC_OVL errr FDECL(run_parse_flavor, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_flavor, (struct parser * p));
STATIC_OVL void FDECL(cleanup_flavor, (void));
STATIC_OVL void FDECL(init_arrays, (void));
STATIC_OVL void FDECL(cleanup_arrays, (void));
STATIC_OVL bool FDECL(init_angband, (void));
STATIC_OVL void FDECL(cleanup_angband, (void));
STATIC_OVL struct object* FDECL(rd_item, (void));
STATIC_OVL bool FDECL(rd_monster, (struct chunk * c, struct monster* mon));
STATIC_OVL void FDECL(rd_trap, (struct trap * trap));
STATIC_OVL int FDECL(rd_randomizer, (void));
STATIC_OVL int FDECL(rd_options, (void));
STATIC_OVL int FDECL(rd_messages, (void));
STATIC_OVL int FDECL(rd_monster_memory, (void));
STATIC_OVL int FDECL(rd_object_memory, (void));
STATIC_OVL int FDECL(rd_player, (void));
STATIC_OVL int FDECL(rd_ignore, (void));
STATIC_OVL int FDECL(rd_misc, (void));
STATIC_OVL int FDECL(rd_artifacts, (void));
STATIC_OVL int FDECL(rd_gear_aux, (struct object * *gear));
STATIC_OVL int FDECL(rd_gear, (void));
STATIC_OVL int FDECL(rd_dungeon_aux, (struct chunk * *c));
STATIC_OVL int FDECL(rd_objects_aux, (struct chunk * c));
STATIC_OVL int FDECL(rd_monsters_aux, (struct chunk * c));
STATIC_OVL int FDECL(rd_traps_aux, (struct chunk * c));
STATIC_OVL int FDECL(rd_dungeon, (void));
STATIC_OVL int FDECL(rd_objects, (void));
STATIC_OVL int FDECL(rd_monsters, (void));
STATIC_OVL int FDECL(rd_traps, (void));
STATIC_OVL int FDECL(rd_history, (void));
STATIC_OVL int FDECL(rd_null, (void));
STATIC_OVL int FDECL(rd_monster_groups, (void));
STATIC_OVL void FDECL(messages_init, (void));
STATIC_OVL void FDECL(messages_free, (void));
STATIC_OVL uint16_t FDECL(messages_num, (void));
STATIC_OVL void FDECL(message_add, (const char* str, uint16_t type));
STATIC_OVL message_t* FDECL(message_get, (uint16_t age));
STATIC_OVL const char* FDECL(message_str, (uint16_t age));
STATIC_OVL uint16_t FDECL(message_count, (uint16_t age));
STATIC_OVL uint16_t FDECL(message_type, (uint16_t age));
STATIC_OVL uint8_t FDECL(message_color, (uint16_t age));
STATIC_OVL void FDECL(message_color_define, (uint16_t type, uint8_t color));
STATIC_OVL uint8_t FDECL(message_type_color, (uint16_t type));
STATIC_OVL int FDECL(message_lookup_by_name, (const char* name));
STATIC_OVL int FDECL(message_lookup_by_sound_name, (const char* name));
STATIC_OVL const char* FDECL(message_sound_name, (int message));
STATIC_OVL void FDECL(sound, (int type));
STATIC_OVL void FDECL(bell, (void));
STATIC_OVL void FDECL(msg, (const char* fmt, ...));
STATIC_OVL void FDECL(msgt, (unsigned int type, const char* fmt, ...));
STATIC_OVL int FDECL(choose_attack_spell_fast,
                     (const bitflag f[RSF_SIZE], bool do_random));
STATIC_OVL int FDECL(choose_ranged_attack, (struct monster * mon));
STATIC_OVL bool FDECL(make_ranged_attack, (struct monster * mon));
STATIC_OVL bool FDECL(monster_charge, (struct monster * mon, struct player* p));
STATIC_OVL int FDECL(elem_bonus,
                     (struct player * p, struct blow_effect* effect));
STATIC_OVL bool FDECL(monster_cut_or_stun,
                      (int dice, int dam, struct blow_effect* effect));
STATIC_OVL void FDECL(cruel_blow,
                      (struct monster * mon, struct player* p, int dice));
STATIC_OVL bool FDECL(make_attack_normal,
                      (struct monster * mon, struct player* p));
STATIC_OVL blow_tag_t FDECL(blow_tag_lookup, (const char* tag));
STATIC_OVL char* FDECL(monster_blow_method_action,
                       (struct blow_method * method, int midx));
STATIC_OVL int FDECL(blow_index, (const char* name));
STATIC_OVL void FDECL(steal_player_item,
                      (melee_effect_handler_context_t * context));
STATIC_OVL bool FDECL(monster_damage_target,
                      (melee_effect_handler_context_t * context,
                       bool no_further_monster_effect));
STATIC_OVL void FDECL(melee_effect_elemental,
                      (melee_effect_handler_context_t * context, int type));
STATIC_OVL void FDECL(melee_effect_timed,
                      (melee_effect_handler_context_t * context, int type,
                       int amount, const char* save_msg));
STATIC_OVL void FDECL(melee_effect_stat,
                      (melee_effect_handler_context_t * context, int stat,
                       bool damage));
STATIC_OVL void FDECL(melee_effect_handler_NONE,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_HURT,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_WOUND,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_BATTER,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_SHATTER,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_EAT_ITEM,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_DARK,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_HUNGER,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_POISON,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_ACID,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_FIRE,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_COLD,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_BLIND,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_CONFUSE,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_ENTRANCE,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_HALLU,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_LOSE_STR,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_LOSE_DEX,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_LOSE_CON,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_LOSE_GRA,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_LOSE_STR_CON,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_LOSE_ALL,
                      (melee_effect_handler_context_t * context));
STATIC_OVL void FDECL(melee_effect_handler_DISARM,
                      (melee_effect_handler_context_t * context));
STATIC_OVL melee_effect_handler_f FDECL(melee_handler_for_blow_effect,
                                        (const char* name));
STATIC_OVL int FDECL(monster_elf_bane_bonus,
                     (struct monster * mon, struct player* p));
STATIC_OVL int FDECL(morale_from_friends, (struct monster * mon));
STATIC_OVL void FDECL(calc_morale, (struct monster * mon));
STATIC_OVL void FDECL(calc_stance, (struct monster * mon));
STATIC_OVL void FDECL(make_alert, (struct monster * mon, int dam));
STATIC_OVL void FDECL(set_alertness, (struct monster * mon, int alertness));
STATIC_OVL void FDECL(listen, (struct chunk * c, struct player* p,
                               struct monster* mon));
STATIC_OVL void FDECL(path_analyse, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(update_mon,
                      (struct monster * mon, struct chunk* c, bool full));
STATIC_OVL void FDECL(update_monsters, (bool full));
STATIC_OVL int FDECL(monster_skill, (struct monster * mon, int skill_type));
STATIC_OVL int FDECL(monster_stat, (struct monster * mon, int stat_type));
STATIC_OVL void FDECL(calc_monster_speed, (struct monster * mon));
STATIC_OVL void FDECL(plural_aux, (char* name, size_t max));
STATIC_OVL void FDECL(get_mon_name, (char* buf, size_t buflen,
                                     const struct monster_race* race, int num));
STATIC_OVL void FDECL(monster_desc, (char* desc, size_t max,
                                     const struct monster* mon, int mode));
STATIC_OVL struct monster_group* FDECL(monster_group_new, (struct chunk * c));
STATIC_OVL void FDECL(monster_group_free,
                      (struct chunk * c, struct monster_group* group));
STATIC_OVL void FDECL(monster_group_remove_leader,
                      (struct chunk * c, struct monster* leader,
                       struct monster_group* group));
STATIC_OVL void FDECL(monster_remove_from_group,
                      (struct chunk * c, struct monster* mon));
STATIC_OVL int FDECL(monster_group_index_new, (struct chunk * c));
STATIC_OVL void FDECL(monster_add_to_group,
                      (struct chunk * c, struct monster* mon,
                       struct monster_group* group));
STATIC_OVL void FDECL(monster_group_start,
                      (struct chunk * c, struct monster* mon));
STATIC_OVL void FDECL(monster_group_assign,
                      (struct chunk * c, struct monster* mon,
                       struct monster_group_info info, bool loading));
STATIC_OVL int FDECL(monster_group_index, (struct monster_group * group));
STATIC_OVL struct monster_group* FDECL(monster_group_by_index,
                                       (struct chunk * c, int index));
STATIC_OVL bool FDECL(monster_group_change_index,
                      (struct chunk * c, int new, int old));
STATIC_OVL int FDECL(monster_group_size,
                     (struct chunk * c, const struct monster* mon));
STATIC_OVL int FDECL(monster_group_leader_idx, (struct monster_group * group));
STATIC_OVL struct monster* FDECL(monster_group_leader,
                                 (struct chunk * c, struct monster* mon));
STATIC_OVL void FDECL(monster_group_new_wandering_flow,
                      (struct chunk * c, struct monster* mon,
                       struct loc tgrid));
STATIC_OVL void FDECL(monster_groups_verify, (struct chunk * c));
STATIC_OVL int FDECL(flag_index_by_name, (const char* name));
STATIC_OVL struct blow_method* FDECL(findmeth, (const char* meth_name));
STATIC_OVL enum parser_error FDECL(parse_meth_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_meth_cut, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_meth_stun, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_meth_miss, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_meth_prt, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_meth_message_type,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_meth_act_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_meth_desc, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_meth, (void));
STATIC_OVL errr FDECL(run_parse_meth, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_meth, (struct parser * p));
STATIC_OVL void FDECL(cleanup_meth, (void));
STATIC_OVL struct blow_effect* FDECL(findeff, (const char* eff_name));
STATIC_OVL enum parser_error FDECL(parse_eff_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_eff_power, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_eff_eval, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_eff_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_eff_effect_type, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_eff_resist, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_eff_dam_type, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_eff, (void));
STATIC_OVL errr FDECL(run_parse_eff, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_eff, (struct parser * p));
STATIC_OVL void FDECL(cleanup_eff, (void));
STATIC_OVL enum parser_error FDECL(parse_pain_type, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_pain_message, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_pain, (void));
STATIC_OVL errr FDECL(run_parse_pain, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_pain, (struct parser * p));
STATIC_OVL void FDECL(cleanup_pain, (void));
STATIC_OVL enum parser_error FDECL(parse_pursuit_type, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_pursuit_message_vis,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_pursuit_message_near,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_pursuit_message_far,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_pursuit, (void));
STATIC_OVL errr FDECL(run_parse_pursuit, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_pursuit, (struct parser * p));
STATIC_OVL void FDECL(cleanup_pursuit, (void));
STATIC_OVL enum parser_error FDECL(parse_warning_type, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_warning_message_vis,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_warning_message_invis,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_warning_message_vis_silence,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_warning_message_invis_silence,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_warning, (void));
STATIC_OVL errr FDECL(run_parse_warning, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_warning, (struct parser * p));
STATIC_OVL void FDECL(cleanup_warning, (void));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_message_type,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_mana, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_best_range,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_max_range,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_desire, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_disturb,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_use_past_range,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_effect, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_dice, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_expr, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_effect_xtra,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_dice_xtra,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_expr_xtra,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_power_cutoff,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_lore_desc,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_blind_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_silence_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_blind_silence_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_smart_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_smart_blind_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_smart_silence_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_smart_blind_silence_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_save_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_spell_no_save_message,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_mon_spell, (void));
STATIC_OVL errr FDECL(run_parse_mon_spell, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_mon_spell, (struct parser * p));
STATIC_OVL void FDECL(cleanup_mon_spell, (void));
STATIC_OVL enum parser_error FDECL(parse_mon_base_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_base_glyph, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_base_pain, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_base_pursuit, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_base_warning, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_base_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mon_base_desc, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_mon_base, (void));
STATIC_OVL errr FDECL(run_parse_mon_base, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_mon_base, (struct parser * p));
STATIC_OVL void FDECL(cleanup_mon_base, (void));
STATIC_OVL enum parser_error FDECL(parse_monster_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_base, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_depth, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_rarity, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_glyph, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_color, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_speed, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_health, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_light, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_sleep, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_percept, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_stealth, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_will, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_song, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_protection,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_blow, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_ranged_freq,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_spell_power,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_spells, (struct parser * p));
STATIC_OVL void FDECL(add_alternate_spell_message,
                      (struct monster_race * r, int s_idx,
                       enum monster_altmsg_type msg_type, const char* msg));
STATIC_OVL enum parser_error FDECL(parse_monster_msg_vis, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_msg_invis,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_drop, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_drop_artifact,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_plural, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_monster_color_cycle,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_monster, (void));
STATIC_OVL errr FDECL(run_parse_monster, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_monster, (struct parser * p));
STATIC_OVL void FDECL(cleanup_monster, (void));
STATIC_OVL enum parser_error FDECL(parse_lore_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_lore_base, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_lore_counts, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_lore_blow, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_lore_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_lore_spells, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_lore_drop, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_lore_drop_artifact,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_lore, (void));
STATIC_OVL errr FDECL(run_parse_lore, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_lore, (struct parser * p));
STATIC_OVL void FDECL(cleanup_lore, (void));
STATIC_OVL monster_list_t* FDECL(monster_list_new, (void));
STATIC_OVL void FDECL(monster_list_free, (monster_list_t * list));
STATIC_OVL void FDECL(monster_list_init, (void));
STATIC_OVL void FDECL(monster_list_finalize, (void));
STATIC_OVL monster_list_t* FDECL(monster_list_shared_instance, (void));
STATIC_OVL bool FDECL(monster_list_can_update, (const monster_list_t* list));
STATIC_OVL void FDECL(monster_list_reset, (monster_list_t * list));
STATIC_OVL void FDECL(monster_list_collect, (monster_list_t * list));
STATIC_OVL int FDECL(monster_list_standard_compare,
                     (const void* a, const void* b));
STATIC_OVL int FDECL(monster_list_compare_exp, (const void* a, const void* b));
STATIC_OVL void FDECL(monster_list_sort,
                      (monster_list_t * list,
                       int (*compare)(const void*, const void*)));
STATIC_OVL int FDECL(monster_list_entry_line_color,
                     (const monster_list_entry_t* entry));
STATIC_OVL void FDECL(lore_learn_flag_if_visible,
                      (struct monster_lore * lore, const struct monster* mon,
                       int flag));
STATIC_OVL void FDECL(lore_update, (const struct monster_race* race,
                                    struct monster_lore* lore));
STATIC_OVL void FDECL(cheat_monster_lore, (const struct monster_race* race,
                                           struct monster_lore* lore));
STATIC_OVL void FDECL(wipe_monster_lore, (const struct monster_race* race,
                                          struct monster_lore* lore));
STATIC_OVL void FDECL(lore_do_probe, (struct monster * mon));
STATIC_OVL bool FDECL(lore_is_fully_known, (const struct monster_race* race));
STATIC_OVL void FDECL(lore_treasure, (struct monster * mon, int num_item));
STATIC_OVL void FDECL(monster_flags_known, (const struct monster_race* race,
                                            const struct monster_lore* lore,
                                            bitflag flags[RF_SIZE]));
STATIC_OVL const char* FDECL(lore_describe_awareness, (int16_t awareness));
STATIC_OVL const char* FDECL(lore_describe_speed, (uint8_t speed));
STATIC_OVL void FDECL(lore_adjective_speed,
                      (textblock * tb, const struct monster_race* race));
STATIC_OVL monster_sex_t FDECL(lore_monster_sex,
                               (const struct monster_race* race));
STATIC_OVL const char* FDECL(lore_pronoun_nominative,
                             (monster_sex_t sex, bool title_case));
STATIC_OVL const char* FDECL(lore_pronoun_accusative,
                             (monster_sex_t sex, bool title_case));
STATIC_OVL const char* FDECL(lore_pronoun_possessive,
                             (monster_sex_t sex, bool title_case));
STATIC_OVL void FDECL(lore_append_clause,
                      (textblock * tb, bitflag* f, int attr, const char* start,
                       const char* conjunction, const char* end));
STATIC_OVL void FDECL(lore_append_spell_clause,
                      (textblock * tb, bitflag* f,
                       const struct monster_race* race, int attr,
                       int dam_attr));
STATIC_OVL void FDECL(lore_append_kills,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* lore,
                       const bitflag known_flags[RF_SIZE]));
STATIC_OVL void FDECL(lore_append_flavor,
                      (textblock * tb, const struct monster_race* race));
STATIC_OVL void FDECL(lore_append_movement,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* lore,
                       bitflag known_flags[RF_SIZE]));
STATIC_OVL void FDECL(lore_append_toughness,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* lore,
                       bitflag known_flags[RF_SIZE]));
STATIC_OVL void FDECL(lore_append_exp,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* lore,
                       bitflag known_flags[RF_SIZE]));
STATIC_OVL void FDECL(lore_append_drop,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* lore,
                       bitflag known_flags[RF_SIZE]));
STATIC_OVL void FDECL(lore_append_abilities,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* lore,
                       bitflag known_flags[RF_SIZE]));
STATIC_OVL void FDECL(lore_append_skills,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* lore,
                       bitflag known_flags[RF_SIZE]));
STATIC_OVL void FDECL(lore_append_spells,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* lore,
                       bitflag known_flags[RF_SIZE]));
STATIC_OVL void FDECL(lore_append_attack,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* lore,
                       bitflag known_flags[RF_SIZE]));
STATIC_OVL struct monster_lore* FDECL(get_lore,
                                      (const struct monster_race* race));
STATIC_OVL void FDECL(write_lore_entries, (ang_file * fff));
STATIC_OVL bool FDECL(lore_save, (const char* name));
STATIC_OVL void FDECL(init_race_allocs, (void));
STATIC_OVL void FDECL(cleanup_race_allocs, (void));
STATIC_OVL void FDECL(get_mon_num_prep,
                      (bool (*get_mon_num_hook)(struct monster_race* race)));
STATIC_OVL struct monster_race* FDECL(get_mon_race_aux,
                                      (long total,
                                       const struct alloc_entry* table));
STATIC_OVL struct monster_race* FDECL(get_mon_num,
                                      (int level, bool special,
                                       bool allow_non_smart, bool vault));
STATIC_OVL void FDECL(delete_monster_idx, (struct chunk * c, int m_idx));
STATIC_OVL void FDECL(delete_monster, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(monster_index_move, (int i1, int i2));
STATIC_OVL void FDECL(compact_monsters, (struct chunk * c, int num_to_compact));
STATIC_OVL void FDECL(wipe_mon_list, (struct chunk * c, struct player* p));
STATIC_OVL int16_t FDECL(mon_pop, (struct chunk * c));
STATIC_OVL void FDECL(set_hallucinatory_race, (struct monster * mon));
STATIC_OVL void FDECL(new_wandering_destination,
                      (struct chunk * c, struct monster* mon));
STATIC_OVL int16_t FDECL(place_monster, (struct chunk * c, struct loc grid,
                                         struct monster* mon, uint8_t origin));
STATIC_OVL bool FDECL(place_new_monster_one,
                      (struct chunk * c, struct loc grid,
                       struct monster_race* race, bool sleep, bool ignore_depth,
                       struct monster_group_info group_info, uint8_t origin));
STATIC_OVL bool FDECL(place_escort_okay, (struct monster_race * race));
STATIC_OVL void FDECL(place_monster_unique_friend,
                      (struct chunk * c, struct loc grid,
                       struct monster_race* race, bool sleep,
                       struct monster_group_info group_info, uint8_t origin));
STATIC_OVL bool FDECL(place_new_monster_group,
                      (struct chunk * c, struct loc grid,
                       struct monster_race* race, bool sleep,
                       struct monster_group_info group_info, int total,
                       uint8_t origin));
STATIC_OVL void FDECL(place_monster_escort,
                      (struct chunk * c, struct loc grid,
                       struct monster_race* race, bool sleep,
                       struct monster_group_info group_info, uint8_t origin));
STATIC_OVL bool FDECL(place_new_monster,
                      (struct chunk * c, struct loc grid,
                       struct monster_race* race, bool sleep, bool group_ok,
                       struct monster_group_info group_info, uint8_t origin));
STATIC_OVL bool FDECL(pick_and_place_monster,
                      (struct chunk * c, struct loc grid, int depth, bool sleep,
                       bool group_okay, uint8_t origin));
STATIC_OVL void FDECL(place_monster_by_flag,
                      (struct chunk * c, struct loc grid, int flg1, int flg2,
                       bool allow_unique, int max_depth, bool spell));
STATIC_OVL void FDECL(place_monster_by_letter,
                      (struct chunk * c, struct loc grid, char ch,
                       bool allow_unique, int max_depth));
STATIC_OVL bool FDECL(pick_and_place_monster_on_stairs,
                      (struct chunk * c, struct player* p, bool sleep,
                       int depth, bool force_undead));
STATIC_OVL bool FDECL(pick_and_place_distant_monster,
                      (struct chunk * c, struct player* p, bool sleep,
                       int depth));
STATIC_OVL bool FDECL(monster_can_smell, (struct monster * mon));
STATIC_OVL bool FDECL(monster_talks_to_friends, (struct monster * mon));
STATIC_OVL bool FDECL(monster_can_exist,
                      (struct chunk * c, struct monster* mon, struct loc grid,
                       bool occupied_ok, bool can_dig));
STATIC_OVL int FDECL(success_chance, (int sides, int skill, int difficulty));
STATIC_OVL int FDECL(monster_entry_chance,
                     (struct chunk * c, struct monster* mon, struct loc grid,
                      bool* bash));
STATIC_OVL int FDECL(adj_mon_count, (struct loc grid));
STATIC_OVL int FDECL(distance_squared, (struct loc grid1, struct loc grid2));
STATIC_OVL void FDECL(monster_find_range, (struct monster * mon));
STATIC_OVL bool FDECL(monster_check_active, (struct monster * mon));
STATIC_OVL bool FDECL(get_move_wander,
                      (struct monster * mon, struct loc* tgrid));
STATIC_OVL bool FDECL(get_move_find_safety,
                      (struct monster * mon, struct loc* tgrid));
STATIC_OVL bool FDECL(get_move_retreat,
                      (struct monster * mon, struct loc* tgrid));
STATIC_OVL void FDECL(get_move_advance,
                      (struct monster * mon, struct loc* tgrid));
STATIC_OVL int FDECL(get_move_calc_vulnerability, (struct loc mgrid));
STATIC_OVL int FDECL(get_move_calc_hesitance, (struct monster * mon));
STATIC_OVL bool FDECL(get_move, (struct monster * mon, struct loc* tgrid,
                                 bool* fear, bool must_use_target));
STATIC_OVL int FDECL(make_move_choose_direction, (struct loc offset));
STATIC_OVL bool FDECL(make_move_get_route_to_target,
                      (struct monster * mon, struct loc* tgrid));
STATIC_OVL void FDECL(make_confused_move,
                      (struct monster * mon, struct loc grid));
STATIC_OVL bool FDECL(make_move, (struct monster * mon, struct loc* tgrid,
                                  bool fear, bool* bash));
STATIC_OVL void FDECL(process_move_exchange_places, (struct monster * mon));
STATIC_OVL bool FDECL(process_move_push_aside,
                      (struct monster * mon, struct monster* mon1));
STATIC_OVL void FDECL(process_move_grab_objects,
                      (struct monster * mon, struct loc new));
STATIC_OVL void FDECL(process_move,
                      (struct monster * mon, struct loc tgrid, bool bash));
STATIC_OVL void FDECL(monster_turn_wander, (struct monster * mon));
STATIC_OVL bool FDECL(monster_has_sleeping_kin, (struct monster * mon));
STATIC_OVL void FDECL(tell_allies, (struct monster * mon, int flag));
STATIC_OVL void FDECL(monster_turn_hit_by_ranged, (struct monster * mon));
STATIC_OVL void FDECL(monster_turn_hit_by_melee, (struct monster * mon));
STATIC_OVL bool FDECL(multiply_monster, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_turn_multiply, (struct monster * mon));
STATIC_OVL bool FDECL(monster_turn_random_move, (struct monster * mon));
STATIC_OVL void FDECL(monster_turn, (struct monster * mon));
STATIC_OVL void FDECL(regen_monster, (struct monster * mon, int num));
STATIC_OVL void FDECL(process_monster_recover, (struct monster * mon));
STATIC_OVL void FDECL(process_monsters, (int minimum_energy));
STATIC_OVL void FDECL(reset_monsters, (void));
STATIC_OVL void FDECL(message_pain, (struct monster * mon, int dam));
STATIC_OVL void FDECL(message_pursuit, (struct monster * mon));
STATIC_OVL void FDECL(message_warning, (struct monster * mon));
STATIC_OVL bool FDECL(redundant_monster_message,
                      (struct monster * mon, int msg_code));
STATIC_OVL int FDECL(message_flags, (const struct monster* mon));
STATIC_OVL void FDECL(store_monster, (struct monster * mon, int msg_code));
STATIC_OVL bool FDECL(stack_message,
                      (struct monster * mon, int msg_code, int flags));
STATIC_OVL int FDECL(what_delay, (int msg_code, int delay));
STATIC_OVL bool FDECL(add_monster_message,
                      (struct monster * mon, int msg_code, bool delay));
STATIC_OVL void FDECL(get_subject,
                      (char* buf, size_t buflen, struct monster_race* race,
                       int count, bool invisible, bool offscreen));
STATIC_OVL void FDECL(get_message_text,
                      (char* buf, size_t buflen, int msg_code,
                       const struct monster_race* race, bool do_plural));
STATIC_OVL bool FDECL(skip_subject, (int msg_code));
STATIC_OVL int FDECL(get_message_type,
                     (int msg_code, const struct monster_race* race));
STATIC_OVL void FDECL(show_message, (struct monster_race_message * msg));
STATIC_OVL void FDECL(show_monster_messages, (void));
STATIC_OVL bool FDECL(monster_is_undead, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_is_nonliving, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_is_living, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_is_invisible, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_is_unique, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_is_smart, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_has_friends, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_breathes, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_is_in_view, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_is_visible, (const struct monster* mon));
STATIC_OVL bool FDECL(monster_is_listened, (const struct monster* mon));
STATIC_OVL spell_tag_t FDECL(spell_tag_lookup, (const char* tag));
STATIC_OVL const char* FDECL(find_alternate_spell_message,
                             (const struct monster_race* r, int s_idx,
                              enum monster_altmsg_type msg_type));
STATIC_OVL void FDECL(spell_message,
                      (struct monster * mon, const struct monster_spell* spell,
                       bool seen));
STATIC_OVL int FDECL(monster_cast_chance, (struct monster * mon));
STATIC_OVL const struct monster_spell* FDECL(monster_spell_by_index,
                                             (int index));
STATIC_OVL bool FDECL(spell_check_for_save,
                      (const struct monster_spell* spell));
STATIC_OVL void FDECL(do_mon_spell,
                      (int index, struct monster* mon, bool seen));
STATIC_OVL bool FDECL(mon_spell_is_valid, (int index));
STATIC_OVL bool FDECL(mon_spell_is_archery, (int index));
STATIC_OVL bool FDECL(mon_spell_is_breath, (int index));
STATIC_OVL bool FDECL(mon_spell_is_innate, (int index));
STATIC_OVL bool FDECL(mon_spell_is_distant, (int index));
STATIC_OVL bool FDECL(mon_spell_is_song, (int index));
STATIC_OVL void FDECL(monster_get_target_dist_grid,
                      (struct monster * mon, int* dist, struct loc* grid));
STATIC_OVL void FDECL(remove_bad_spells,
                      (struct monster * mon, bitflag f[RSF_SIZE]));
STATIC_OVL void FDECL(create_mon_spell_mask, (bitflag * f, ...));
STATIC_OVL const char* FDECL(mon_spell_lore_description,
                             (int index, const struct monster_race* race));
STATIC_OVL random_value FDECL(mon_spell_lore_damage, (int index));
STATIC_OVL int FDECL(mon_spell_lore_archery_bonus,
                     (int index, const struct monster_race* race));
STATIC_OVL enum parser_error FDECL(parse_summon_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_summon_message_type,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_summon_unique, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_summon_base, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_summon_race_flag, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_summon_fallback, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_summon_desc, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_summon, (void));
STATIC_OVL errr FDECL(run_parse_summon, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_summon, (struct parser * p));
STATIC_OVL void FDECL(cleanup_summon, (void));
STATIC_OVL int FDECL(summon_name_to_idx, (const char* name));
STATIC_OVL int FDECL(summon_message_type, (int summon_type));
STATIC_OVL int FDECL(summon_fallback_type, (int summon_type));
STATIC_OVL const char* FDECL(summon_desc, (int type));
STATIC_OVL bool FDECL(summon_specific_okay, (struct monster_race * race));
STATIC_OVL int FDECL(summon_specific, (struct loc grid, int lev, int type));
STATIC_OVL int FDECL(mon_timed_name_to_idx, (const char* name));
STATIC_OVL bool FDECL(mon_set_timed, (struct monster * mon, int effect_type,
                                      int timer, int flag));
STATIC_OVL bool FDECL(mon_inc_timed, (struct monster * mon, int effect_type,
                                      int timer, int flag));
STATIC_OVL bool FDECL(mon_dec_timed, (struct monster * mon, int effect_type,
                                      int timer, int flag));
STATIC_OVL bool FDECL(mon_clear_timed,
                      (struct monster * mon, int effect_type, int flag));
STATIC_OVL const char* FDECL(describe_race_flag, (int flag));
STATIC_OVL void FDECL(create_mon_flag_mask, (bitflag * f, ...));
STATIC_OVL struct monster_race* FDECL(lookup_monster, (const char* name));
STATIC_OVL struct monster_base* FDECL(lookup_monster_base, (const char* name));
STATIC_OVL bool FDECL(match_monster_bases,
                      (const struct monster_base* base, ...));
STATIC_OVL void FDECL(monster_fall_in_chasm, (struct loc grid));
STATIC_OVL void FDECL(monster_opportunist_or_zone,
                      (struct player * p, struct loc grid_to));
STATIC_OVL void FDECL(monster_swap, (struct loc grid1, struct loc grid2));
STATIC_OVL bool FDECL(monster_can_see,
                      (struct chunk * c, struct monster* mon, struct loc grid));
STATIC_OVL void FDECL(monsters_hear,
                      (bool player_centered, bool main_roll, int difficulty));
STATIC_OVL int32_t FDECL(adjusted_mon_exp,
                         (const struct monster_race* race, bool kill));
STATIC_OVL int FDECL(mon_create_drop_count,
                     (const struct monster_race* race, bool maximize));
STATIC_OVL int FDECL(mon_create_drop, (struct chunk * c, struct monster* mon,
                                       struct loc grid, bool stats));
STATIC_OVL void FDECL(drop_loot, (struct chunk * c, struct monster* mon,
                                  struct loc grid, bool stats));
STATIC_OVL void FDECL(monster_death,
                      (struct monster * mon, struct player* p, bool by_player,
                       const char* note, bool stats));
STATIC_OVL bool FDECL(mon_take_hit, (struct monster * mon, struct player* p,
                                     int dam, const char* note));
STATIC_OVL bool FDECL(similar_monsters,
                      (struct monster * mon1, struct monster* mon2));
STATIC_OVL void FDECL(scare_onlooking_friends,
                      (const struct monster* mon, int amount));
STATIC_OVL bool FDECL(monster_carry, (struct chunk * c, struct monster* mon,
                                      struct object* obj));
STATIC_OVL enum parser_error FDECL(parse_chest_trap_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_chest_trap_effect,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_chest_trap_dice, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_chest_trap_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_chest_trap_msg_save,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_chest_trap_msg_bad,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_chest_trap_msg_death,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_chest_trap, (void));
STATIC_OVL errr FDECL(run_parse_chest_trap, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_chest_trap, (struct parser * p));
STATIC_OVL void FDECL(cleanup_chest_trap, (void));
STATIC_OVL const char* FDECL(chest_trap_name, (const struct object* obj));
STATIC_OVL bool FDECL(is_trapped_chest, (const struct object* obj));
STATIC_OVL bool FDECL(is_locked_chest, (const struct object* obj));
STATIC_OVL void FDECL(unlock_chest, (struct object * obj));
STATIC_OVL struct object* FDECL(chest_check,
                                (const struct player* p, struct loc grid,
                                 enum chest_query check_type));
STATIC_OVL int FDECL(count_chests,
                     (struct loc * grid, enum chest_query check_type));
STATIC_OVL struct drop* FDECL(choose_chest_contents, (void));
STATIC_OVL void FDECL(chest_death, (struct loc grid, struct object* chest));
STATIC_OVL void FDECL(chest_trap, (struct object * obj));
STATIC_OVL bool FDECL(do_cmd_open_chest, (struct loc grid, struct object* obj));
STATIC_OVL bool FDECL(do_cmd_disarm_chest, (struct object * obj));
STATIC_OVL void FDECL(object_base_name,
                      (char* buf, size_t max, int tval, bool plural));
STATIC_OVL void FDECL(object_kind_name,
                      (char* buf, size_t max, const struct object_kind* kind,
                       bool easy_know));
STATIC_OVL const char* FDECL(obj_desc_get_modstr,
                             (const struct object_kind* kind));
STATIC_OVL const char* FDECL(obj_desc_get_basename,
                             (const struct object* obj, bool aware, bool terse,
                              uint32_t mode, const struct player* p));
STATIC_OVL size_t FDECL(obj_desc_name_prefix,
                        (char* buf, size_t max, size_t end,
                         const struct object* obj, const char* basename,
                         const char* modstr, bool terse, uint16_t number));
STATIC_OVL size_t FDECL(obj_desc_name_format,
                        (char* buf, size_t max, size_t end, const char* fmt,
                         const char* modstr, bool pluralise));
STATIC_OVL size_t FDECL(obj_desc_name,
                        (char* buf, size_t max, size_t end,
                         const struct object* obj, bool prefix, uint32_t mode,
                         bool terse, const struct player* p));
STATIC_OVL size_t FDECL(obj_desc_chest, (const struct object* obj, char* buf,
                                         size_t max, size_t end));
STATIC_OVL size_t FDECL(obj_desc_combat,
                        (const struct object* obj, char* buf, size_t max,
                         size_t end, uint32_t mode, const struct player* p));
STATIC_OVL size_t FDECL(obj_desc_light, (const struct object* obj, char* buf,
                                         size_t max, size_t end));
STATIC_OVL size_t FDECL(obj_desc_mods, (const struct object* obj, char* buf,
                                        size_t max, size_t end));
STATIC_OVL size_t FDECL(obj_desc_charges,
                        (const struct object* obj, char* buf, size_t max,
                         size_t end, uint32_t mode));
STATIC_OVL size_t FDECL(obj_desc_inscrip,
                        (const struct object* obj, char* buf, size_t max,
                         size_t end, const struct player* p));
STATIC_OVL size_t FDECL(object_desc,
                        (char* buf, size_t max, const struct object* obj,
                         uint32_t mode, const struct player* p));
STATIC_OVL int FDECL(slot_by_name, (struct player * p, const char* name));
STATIC_OVL int FDECL(slot_by_type, (struct player * p, int type, bool full));
STATIC_OVL bool FDECL(slot_type_is,
                      (const struct player* p, int slot, int type));
STATIC_OVL struct object* FDECL(slot_object, (struct player * p, int slot));
STATIC_OVL struct object* FDECL(equipped_item_by_slot_name,
                                (struct player * p, const char* name));
STATIC_OVL int FDECL(object_slot,
                     (struct player_body body, const struct object* obj));
STATIC_OVL bool FDECL(object_is_equipped,
                      (struct player_body body, const struct object* obj));
STATIC_OVL bool FDECL(object_is_carried,
                      (struct player * p, const struct object* obj));
STATIC_OVL bool FDECL(object_is_in_quiver,
                      (const struct player* p, const struct object* obj));
STATIC_OVL uint16_t FDECL(object_pack_total,
                          (struct player * p, const struct object* obj,
                           bool ignore_inscrip, struct object** first));
STATIC_OVL int FDECL(pack_slots_used, (const struct player* p));
STATIC_OVL const char* FDECL(equip_mention, (struct player * p, int slot));
STATIC_OVL const char* FDECL(equip_describe, (struct player * p, int slot));
STATIC_OVL int FDECL(wield_slot, (const struct object* obj));
STATIC_OVL bool FDECL(minus_ac, (struct player * p));
STATIC_OVL char FDECL(gear_to_label, (struct player * p, struct object* obj));
STATIC_OVL bool FDECL(gear_excise_object,
                      (struct player * p, struct object* obj));
STATIC_OVL struct object* FDECL(gear_last_item, (struct player * p));
STATIC_OVL void FDECL(gear_insert_end, (struct player * p, struct object* obj));
STATIC_OVL struct object* FDECL(gear_object_for_use,
                                (struct player * p, struct object* obj, int num,
                                 bool message, bool* none_left));
STATIC_OVL bool FDECL(handle_stickied_removal,
                      (struct player * p, struct object* obj));
STATIC_OVL int FDECL(inven_carry_num,
                     (const struct player* p, const struct object* obj));
STATIC_OVL bool FDECL(inven_carry_okay, (const struct object* obj));
STATIC_OVL void FDECL(inven_item_charges, (struct object * obj));
STATIC_OVL void FDECL(inven_carry, (struct player * p, struct object* obj,
                                    bool absorb, bool message));
STATIC_OVL void FDECL(inven_wield, (struct object * obj, int slot));
STATIC_OVL void FDECL(inven_takeoff, (struct object * obj));
STATIC_OVL void FDECL(inven_drop, (struct object * obj, int amt));
STATIC_OVL bool FDECL(inven_destroy, (struct object * obj, int amt));
STATIC_OVL bool FDECL(inven_can_stack_partial,
                      (const struct object* obj1, const struct object* obj2));
STATIC_OVL void FDECL(combine_pack, (struct player * p));
STATIC_OVL bool FDECL(pack_is_full, (void));
STATIC_OVL bool FDECL(pack_is_overfull, (void));
STATIC_OVL void FDECL(pack_overflow, (struct object * obj));
STATIC_OVL bool FDECL(player_has_throwable, (struct player * p, bool show_msg));
STATIC_OVL bool FDECL(player_has_throwable_prereq, (void));
STATIC_OVL void FDECL(init_ignore, (void));
STATIC_OVL void FDECL(cleanup_ignore, (void));
STATIC_OVL void FDECL(ignore_birth_init, (void));
STATIC_OVL void FDECL(rune_add_autoinscription, (struct object * obj, int i));
STATIC_OVL void FDECL(rune_autoinscribe, (struct player * p, int i));
STATIC_OVL void FDECL(runes_autoinscribe,
                      (struct player * p, struct object* obj));
STATIC_OVL const char* FDECL(get_autoinscription,
                             (struct object_kind * kind, bool aware));
STATIC_OVL int FDECL(apply_autoinscription,
                     (struct player * p, struct object* obj));
STATIC_OVL int FDECL(remove_autoinscription, (int16_t kind));
STATIC_OVL int FDECL(add_autoinscription,
                     (int16_t kind, const char* inscription, bool aware));
STATIC_OVL void FDECL(autoinscribe_ground, (struct player * p));
STATIC_OVL void FDECL(autoinscribe_pack, (struct player * p));
STATIC_OVL void FDECL(object_ignore_flavor_of, (const struct object* obj));
STATIC_OVL ignore_type_t FDECL(ignore_type_of, (const struct object* obj));
STATIC_OVL bool FDECL(ego_has_ignore_type,
                      (struct ego_item * ego, ignore_type_t itype));
STATIC_OVL int FDECL(cmp_object_trait, (int bonus, int base));
STATIC_OVL int FDECL(is_object_good, (const struct object* obj));
STATIC_OVL uint8_t FDECL(ignore_level_of, (const struct object* obj));
STATIC_OVL void FDECL(kind_ignore_clear, (struct object_kind * kind));
STATIC_OVL void FDECL(ego_ignore, (struct object * obj));
STATIC_OVL void FDECL(ego_ignore_clear, (struct object * obj));
STATIC_OVL void FDECL(ego_ignore_toggle, (int e_idx, int itype));
STATIC_OVL bool FDECL(ego_is_ignored, (int e_idx, int itype));
STATIC_OVL bool FDECL(kind_is_ignored_aware, (const struct object_kind* kind));
STATIC_OVL bool FDECL(kind_is_ignored_unaware,
                      (const struct object_kind* kind));
STATIC_OVL void FDECL(kind_ignore_when_aware, (struct object_kind * kind));
STATIC_OVL void FDECL(kind_ignore_when_unaware, (struct object_kind * kind));
STATIC_OVL bool FDECL(object_is_ignored, (const struct object* obj));
STATIC_OVL bool FDECL(ignore_item_ok,
                      (const struct player* p, const struct object* obj));
STATIC_OVL bool FDECL(ignore_known_item_ok,
                      (const struct player* p, const struct object* obj));
STATIC_OVL void FDECL(ignore_drop, (struct player * p));
STATIC_OVL const char* FDECL(ignore_name_for_type, (ignore_type_t type));
STATIC_OVL void FDECL(info_out_list,
                      (textblock * tb, const char* list[], size_t count));
STATIC_OVL size_t FDECL(element_info_collect,
                        (const bool list[], const char* recepticle[]));
STATIC_OVL bool FDECL(describe_stats, (textblock * tb, const struct object* obj,
                                       oinfo_detail_t mode));
STATIC_OVL bool FDECL(describe_elements,
                      (textblock * tb, const struct element_info el_info[]));
STATIC_OVL bool FDECL(describe_protects,
                      (textblock * tb, const bitflag flags[OF_SIZE]));
STATIC_OVL bool FDECL(describe_ignores,
                      (textblock * tb, const struct element_info el_info[]));
STATIC_OVL bool FDECL(describe_hates,
                      (textblock * tb, const struct element_info el_info[]));
STATIC_OVL bool FDECL(describe_sustains,
                      (textblock * tb, const bitflag flags[OF_SIZE]));
STATIC_OVL bool FDECL(describe_misc_magic,
                      (textblock * tb, const bitflag flags[OF_SIZE]));
STATIC_OVL bool FDECL(describe_abilities,
                      (textblock * tb, const struct object* obj,
                       oinfo_detail_t mode));
STATIC_OVL bool FDECL(describe_archery,
                      (textblock * tb, const struct object* obj));
STATIC_OVL bool FDECL(describe_throwing,
                      (textblock * tb, const struct object* obj));
STATIC_OVL bool FDECL(describe_slays, (textblock * tb, const struct object* obj,
                                       oinfo_detail_t mode));
STATIC_OVL bool FDECL(describe_brands,
                      (textblock * tb, const struct object* obj,
                       oinfo_detail_t mode));
STATIC_OVL void FDECL(get_known_flags,
                      (const struct object* obj, const oinfo_detail_t mode,
                       bitflag flags[OF_SIZE]));
STATIC_OVL void FDECL(get_known_elements,
                      (const struct object* obj, const oinfo_detail_t mode,
                       struct element_info el_info[]));
STATIC_OVL bool FDECL(obj_known_light,
                      (const struct object* obj, oinfo_detail_t mode,
                       const bitflag flags[OF_SIZE], int* intensity,
                       bool* uses_fuel, int* refuel_turns));
STATIC_OVL bool FDECL(describe_light,
                      (textblock * tb, const struct object* obj,
                       oinfo_detail_t mode, const bitflag flags[OF_SIZE]));
STATIC_OVL bool FDECL(describe_origin,
                      (textblock * tb, const struct object* obj, bool terse));
STATIC_OVL void FDECL(describe_flavor_text,
                      (textblock * tb, const struct object* obj, bool ego,
                       bool smith));
STATIC_OVL textblock* FDECL(object_info_out,
                            (const struct object* obj, int mode));
STATIC_OVL textblock* FDECL(object_info,
                            (const struct object* obj, oinfo_detail_t mode));
STATIC_OVL textblock* FDECL(object_info_ego, (struct ego_item * ego));
STATIC_OVL void FDECL(object_info_chardump,
                      (ang_file * f, const struct object* obj, int indent,
                       int wrap));
STATIC_OVL void FDECL(object_info_spoil,
                      (ang_file * f, const struct object* obj, int wrap));
STATIC_OVL bool FDECL(grab_element_flag,
                      (struct element_info * info, const char* flag_name));
STATIC_OVL enum parser_error FDECL(write_dummy_object_record,
                                   (struct artifact * art, const char* name));
STATIC_OVL enum parser_error FDECL(parse_projection_code, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_type, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_player_desc,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_blind_desc,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_message_type,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_damaging,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_evade, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_obvious,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_wake, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_projection_color, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_projection, (void));
STATIC_OVL errr FDECL(run_parse_projection, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_projection, (struct parser * p));
STATIC_OVL void FDECL(cleanup_projection, (void));
STATIC_OVL enum parser_error FDECL(parse_object_base_defaults,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_graphics,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_break,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_max_stack,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_smith_attack,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_flags,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_smith_values,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_smith_flags,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_smith_slay,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_base_smith_brand,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_object_base, (void));
STATIC_OVL errr FDECL(run_parse_object_base, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_object_base, (struct parser * p));
STATIC_OVL void FDECL(cleanup_object_base, (void));
STATIC_OVL enum parser_error FDECL(parse_slay_code, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_slay_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_slay_race_flag, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_slay_dice, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_slay, (void));
STATIC_OVL errr FDECL(run_parse_slay, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_slay, (struct parser * p));
STATIC_OVL void FDECL(cleanup_slay, (void));
STATIC_OVL enum parser_error FDECL(parse_brand_code, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_brand_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_brand_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_brand_dice, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_brand_vuln_dice, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_brand_resist_flag,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_brand_vuln_flag, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_brand, (void));
STATIC_OVL errr FDECL(run_parse_brand, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_brand, (struct parser * p));
STATIC_OVL void FDECL(cleanup_brand, (void));
STATIC_OVL enum parser_error FDECL(parse_object_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_graphics, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_type, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_pval, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_level, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_weight, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_cost, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_attack, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_defence, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_alloc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_charges, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_effect, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_dice, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_expr, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_thrown_effect,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_thrown_effect_dice,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_thrown_effect_expr,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_values, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_slay, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_brand, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_special, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_object, (void));
STATIC_OVL errr FDECL(run_parse_object, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_object, (struct parser * p));
STATIC_OVL void FDECL(cleanup_object, (void));
STATIC_OVL enum parser_error FDECL(parse_drop_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_drop_chest, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_drop_base, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_drop_not_base, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_drop_item, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_drop, (void));
STATIC_OVL errr FDECL(run_parse_drop, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_drop, (struct parser * p));
STATIC_OVL void FDECL(cleanup_drop, (void));
STATIC_OVL enum parser_error FDECL(parse_ego_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_alloc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_cost, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_max_attack, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_dam_dice, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_dam_sides, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_max_evasion, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_prot_dice, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_prot_sides, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_max_pval, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_type, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_item, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_values, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_slay, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_brand, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ego_ability, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_ego, (void));
STATIC_OVL errr FDECL(run_parse_ego, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_ego, (struct parser * p));
STATIC_OVL void FDECL(cleanup_ego, (void));
STATIC_OVL enum parser_error FDECL(parse_artifact_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_base_object,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_color, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_graphics,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_pval, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_level, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_rarity, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_weight, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_cost, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_attack, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_defence, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_values, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_slay, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_brand, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_artifact_ability, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_artifact, (void));
STATIC_OVL errr FDECL(run_parse_artifact, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_artifact, (struct parser * p));
STATIC_OVL void FDECL(cleanup_artifact, (void));
STATIC_OVL errr FDECL(run_parse_randart, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_randart, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_name,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_type,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_subtype,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_id_type,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_code,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_smith_cat,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_smith_diff,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_smith_cost,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_smith_exclude_base,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_adjective,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_neg_adj,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_msg,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_slay_msg,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_object_property_desc,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_object_property, (void));
STATIC_OVL errr FDECL(run_parse_object_property, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_object_property, (struct parser * p));
STATIC_OVL void FDECL(cleanup_object_property, (void));
STATIC_OVL void FDECL(init_rune, (void));
STATIC_OVL int FDECL(rune_index, (size_t variety, int index));
STATIC_OVL void FDECL(cleanup_rune, (void));
STATIC_OVL int FDECL(max_runes, (void));
STATIC_OVL enum rune_variety FDECL(rune_variety, (size_t i));
STATIC_OVL bool FDECL(player_knows_rune, (struct player * p, size_t i));
STATIC_OVL const char* FDECL(rune_name, (size_t i));
STATIC_OVL const char* FDECL(rune_desc, (size_t i));
STATIC_OVL quark_t FDECL(rune_note, (size_t i));
STATIC_OVL void FDECL(rune_set_note, (size_t i, const char* inscription));
STATIC_OVL bool FDECL(player_knows_flag, (struct player * p, int f));
STATIC_OVL bool FDECL(player_knows_brand, (struct player * p, int i));
STATIC_OVL bool FDECL(player_knows_slay, (struct player * p, int i));
STATIC_OVL bool FDECL(player_knows_ego,
                      (struct player * p, struct ego_item* ego));
STATIC_OVL bool FDECL(object_is_known_artifact, (const struct object* obj));
STATIC_OVL bool FDECL(object_has_rune, (const struct object* obj, int rune_no));
STATIC_OVL bool FDECL(object_runes_known, (const struct object* obj));
STATIC_OVL bool FDECL(object_flag_is_known,
                      (const struct player* p, const struct object* obj,
                       int flag));
STATIC_OVL bool FDECL(object_element_is_known,
                      (const struct player* p, const struct object* obj,
                       int element));
STATIC_OVL void FDECL(object_set_base_known,
                      (struct player * p, struct object* obj));
STATIC_OVL void FDECL(object_see, (struct player * p, struct object* obj));
STATIC_OVL void FDECL(object_touch, (struct player * p, struct object* obj));
STATIC_OVL void FDECL(player_know_object,
                      (struct player * p, struct object* obj));
STATIC_OVL void FDECL(update_player_object_knowledge, (struct player * p));
STATIC_OVL void FDECL(player_learn_rune,
                      (struct player * p, size_t i, bool message));
STATIC_OVL void FDECL(player_learn_flag, (struct player * p, int flag));
STATIC_OVL void FDECL(player_learn_slay, (struct player * p, int index));
STATIC_OVL void FDECL(player_learn_brand, (struct player * p, int index));
STATIC_OVL void FDECL(player_learn_all_runes, (struct player * p));
STATIC_OVL void FDECL(mod_message, (struct object * obj, int mod));
STATIC_OVL int FDECL(object_find_unknown_rune,
                     (struct player * p, struct object* obj));
STATIC_OVL void FDECL(object_learn_unknown_rune,
                      (struct player * p, struct object* obj));
STATIC_OVL void FDECL(object_learn_on_wield,
                      (struct player * p, struct object* obj));
STATIC_OVL void FDECL(equip_learn_flag, (struct player * p, int flag));
STATIC_OVL void FDECL(equip_learn_element, (struct player * p, int element));
STATIC_OVL void FDECL(equip_learn_after_time, (struct player * p));
STATIC_OVL bool FDECL(easy_know, (const struct object* obj));
STATIC_OVL bool FDECL(object_flavor_is_aware, (const struct object* obj));
STATIC_OVL bool FDECL(object_flavor_was_tried, (const struct object* obj));
STATIC_OVL void FDECL(object_flavor_aware,
                      (struct player * p, struct object* obj));
STATIC_OVL void FDECL(object_flavor_tried, (struct object * obj));
STATIC_OVL int FDECL(object_value_base, (const struct object* obj));
STATIC_OVL int FDECL(object_value_real, (const struct object* obj));
STATIC_OVL int FDECL(object_value, (const struct object* obj));
STATIC_OVL object_list_t* FDECL(object_list_new, (void));
STATIC_OVL void FDECL(object_list_free, (object_list_t * list));
STATIC_OVL void FDECL(object_list_init, (void));
STATIC_OVL void FDECL(object_list_finalize, (void));
STATIC_OVL object_list_t* FDECL(object_list_shared_instance, (void));
STATIC_OVL bool FDECL(object_list_needs_update, (const object_list_t* list));
STATIC_OVL void FDECL(object_list_reset, (object_list_t * list));
STATIC_OVL bool FDECL(object_list_should_ignore_object,
                      (const struct player* p, const struct object* obj));
STATIC_OVL void FDECL(object_list_collect, (object_list_t * list));
STATIC_OVL int FDECL(object_list_distance_compare,
                     (const void* a, const void* b));
STATIC_OVL int FDECL(object_list_standard_compare,
                     (const void* a, const void* b));
STATIC_OVL void FDECL(object_list_sort,
                      (object_list_t * list,
                       int (*compare)(const void*, const void*)));
STATIC_OVL int FDECL(object_list_entry_line_attribute,
                     (const object_list_entry_t* entry));
STATIC_OVL void FDECL(object_list_format_name,
                      (const object_list_entry_t* entry, char* line_buffer,
                       size_t size));
STATIC_OVL void FDECL(alloc_init_objects, (void));
STATIC_OVL void FDECL(alloc_init_egos, (void));
STATIC_OVL void FDECL(init_obj_make, (void));
STATIC_OVL void FDECL(cleanup_obj_make, (void));
STATIC_OVL struct ego_item* FDECL(ego_find_random, (struct object * obj,
                                                    int level, bool only_good));
STATIC_OVL void FDECL(ego_apply_magic, (struct object * obj, bool smithing));
STATIC_OVL bool FDECL(make_special_item,
                      (struct object * obj, int level, bool only_good));
STATIC_OVL void FDECL(copy_artifact_data,
                      (struct object * obj, const struct artifact* art));
STATIC_OVL bool FDECL(too_many_artefacts, (void));
STATIC_OVL struct object* FDECL(make_artifact_special, (int level));
STATIC_OVL bool FDECL(make_artifact, (struct object * obj, int lev));
STATIC_OVL bool FDECL(make_fake_artifact,
                      (struct object * obj, const struct artifact* artifact));
STATIC_OVL void FDECL(apply_magic_weapon, (struct object * obj, int level));
STATIC_OVL void FDECL(apply_magic_armour, (struct object * obj, int level));
STATIC_OVL void FDECL(apply_magic,
                      (struct object * obj, int lev, bool allow_artifacts,
                       bool good, bool great));
STATIC_OVL int FDECL(eval_special_value, (struct object_kind * kind, int lev));
STATIC_OVL void FDECL(object_prep, (struct object * obj, struct object_kind* k,
                                    int lev, aspect rand_aspect));
STATIC_OVL struct drop* FDECL(lookup_drop, (const char* name));
STATIC_OVL bool FDECL(drop_is, (struct drop * drop, const char* name));
STATIC_OVL void FDECL(get_obj_num_prep, (struct drop * drop));
STATIC_OVL struct object_kind* FDECL(get_obj_num, (int level));
STATIC_OVL struct object* FDECL(make_object,
                                (struct chunk * c, int lev, bool good,
                                 bool great, struct drop* drop));
STATIC_OVL int FDECL(extract_kind_pval,
                     (const struct object_kind* kind, aspect rand_aspect,
                      bool* flip_sign_out));
STATIC_OVL void FDECL(write_pile, (ang_file * fff));
STATIC_OVL void FDECL(pile_integrity_fail,
                      (struct object * pile, struct object* obj,
                       const char* file, int line));
STATIC_OVL void FDECL(pile_check_integrity,
                      (const char* op, struct object* pile,
                       struct object* hilight));
STATIC_OVL void FDECL(pile_insert, (struct object * *pile, struct object* obj));
STATIC_OVL void FDECL(pile_insert_end,
                      (struct object * *pile, struct object* obj));
STATIC_OVL void FDECL(pile_excise, (struct object * *pile, struct object* obj));
STATIC_OVL struct object* FDECL(pile_last_item, (struct object* const pile));
STATIC_OVL bool FDECL(pile_contains,
                      (const struct object* top, const struct object* obj));
STATIC_OVL struct object* FDECL(object_new, (void));
STATIC_OVL void FDECL(object_free, (struct object * obj));
STATIC_OVL void FDECL(object_delete, (struct chunk * c, struct chunk* p_c,
                                      struct object** obj_address));
STATIC_OVL void FDECL(object_pile_free, (struct chunk * c, struct chunk* p_c,
                                         struct object* obj));
STATIC_OVL bool FDECL(object_similar,
                      (const struct object* obj1, const struct object* obj2,
                       object_stack_t mode));
STATIC_OVL bool FDECL(object_stackable,
                      (const struct object* obj1, const struct object* obj2,
                       object_stack_t mode));
STATIC_OVL bool FDECL(object_mergeable,
                      (const struct object* obj1, const struct object* obj2,
                       object_stack_t mode));
STATIC_OVL void FDECL(object_origin_combine,
                      (struct object * obj1, const struct object* obj2));
STATIC_OVL void FDECL(object_absorb_merge,
                      (struct object * obj1, const struct object* obj2));
STATIC_OVL void FDECL(object_absorb_partial,
                      (struct object * obj1, struct object* obj2));
STATIC_OVL void FDECL(object_absorb,
                      (struct object * obj1, struct object* obj2));
STATIC_OVL void FDECL(object_wipe, (struct object * obj));
STATIC_OVL void FDECL(object_copy,
                      (struct object * dest, const struct object* src));
STATIC_OVL void FDECL(object_copy_amt,
                      (struct object * dest, struct object* src, int amt));
STATIC_OVL struct object* FDECL(object_split, (struct object * src, int amt));
STATIC_OVL struct object* FDECL(floor_object_for_use,
                                (struct player * p, struct object* obj, int num,
                                 bool message, bool* none_left));
STATIC_OVL bool FDECL(floor_destroy, (struct object * obj, int amt));
STATIC_OVL struct object* FDECL(floor_get_oldest_ignored,
                                (const struct player* p, struct chunk* c,
                                 struct loc grid));
STATIC_OVL bool FDECL(floor_carry, (struct chunk * c, struct loc grid,
                                    struct object* drop, bool* note));
STATIC_OVL void FDECL(floor_carry_fail,
                      (struct chunk * c, struct object* drop, bool broke));
STATIC_OVL void FDECL(drop_find_grid, (const struct player* p, struct chunk* c,
                                       struct object* drop, bool prefer_pile,
                                       struct loc* grid));
STATIC_OVL void FDECL(drop_near,
                      (struct chunk * c, struct object** dropped, int chance,
                       struct loc grid, bool verbose, bool prefer_pile));
STATIC_OVL void FDECL(push_object, (struct loc grid));
STATIC_OVL void FDECL(floor_item_charges, (struct object * obj));
STATIC_OVL int FDECL(scan_floor,
                     (struct object * *items, int max_size, struct player* p,
                      object_floor_t mode, item_tester tester));
STATIC_OVL int FDECL(scan_distant_floor, (struct object * *items, int max_size,
                                          struct player* p, struct loc grid));
STATIC_OVL int FDECL(scan_items,
                     (struct object * *item_list, size_t item_max,
                      struct player* p, int mode, item_tester tester));
STATIC_OVL bool FDECL(item_is_available, (struct object * obj));
STATIC_OVL struct obj_property* FDECL(lookup_obj_property,
                                      (int type, int index));
STATIC_OVL void FDECL(create_obj_flag_mask, (bitflag * f, int id, ...));
STATIC_OVL void FDECL(insert_name,
                      (char* buf, size_t size, char* msg, char* name));
STATIC_OVL void FDECL(flag_message, (int flag, char* name));
STATIC_OVL bool FDECL(flag_slay_message,
                      (int flag, char* name, char* message, int len));
STATIC_OVL void FDECL(element_message, (int elem, char* name, bool vuln));
STATIC_OVL int FDECL(sustain_flag, (int stat));
STATIC_OVL int FDECL(lookup_slay, (const char* code));
STATIC_OVL int FDECL(lookup_brand, (const char* code));
STATIC_OVL bool FDECL(same_monsters_slain, (int slay1, int slay2));
STATIC_OVL void FDECL(copy_slays, (bool** dest, bool* source));
STATIC_OVL void FDECL(copy_brands, (bool** dest, bool* source));
STATIC_OVL int FDECL(brand_count, (const bool* brands_on));
STATIC_OVL int FDECL(slay_count, (const bool* slays_on));
STATIC_OVL bool FDECL(react_to_slay,
                      (struct slay * slay, const struct monster* mon));
STATIC_OVL int FDECL(slay_bonus,
                     (struct player * p, struct object* obj,
                      const struct monster* mon, int* slay, int* brand));
STATIC_OVL bool FDECL(brand_message,
                      (struct brand * brand, const struct monster* mon));
STATIC_OVL void FDECL(learn_brand_slay_helper,
                      (struct player * p, struct object* obj1,
                       struct object* obj2, const struct monster* mon));
STATIC_OVL void FDECL(learn_brand_slay_from_melee,
                      (struct player * p, struct object* weapon,
                       const struct monster* mon));
STATIC_OVL void FDECL(learn_brand_slay_from_launch,
                      (struct player * p, struct object* missile,
                       struct object* launcher, const struct monster* mon));
STATIC_OVL void FDECL(learn_brand_slay_from_throw,
                      (struct player * p, struct object* missile,
                       const struct monster* mon));
STATIC_OVL int FDECL(att_valid, (struct object * obj));
STATIC_OVL int FDECL(att_max, (struct object * obj, bool assume_artistry));
STATIC_OVL int FDECL(att_min, (struct object * obj));
STATIC_OVL int FDECL(ds_valid, (struct object * obj));
STATIC_OVL int FDECL(ds_max, (struct object * obj, bool assume_artistry));
STATIC_OVL int FDECL(ds_min, (struct object * obj));
STATIC_OVL int FDECL(evn_valid, (struct object * obj));
STATIC_OVL int FDECL(evn_max, (struct object * obj, bool assume_artistry));
STATIC_OVL int FDECL(evn_min, (struct object * obj));
STATIC_OVL int FDECL(ps_valid, (struct object * obj));
STATIC_OVL int FDECL(ps_max, (struct object * obj, bool assume_artistry));
STATIC_OVL int FDECL(ps_min, (struct object * obj));
STATIC_OVL int FDECL(pval_valid, (struct object * obj));
STATIC_OVL int FDECL(pval_default, (struct object * obj));
STATIC_OVL int FDECL(pval_max, (struct object * obj));
STATIC_OVL int FDECL(pval_min, (struct object * obj));
STATIC_OVL int FDECL(wgt_valid, (struct object * obj));
STATIC_OVL int FDECL(wgt_max, (struct object * obj));
STATIC_OVL int FDECL(wgt_min, (struct object * obj));
STATIC_OVL void FDECL(modify_numbers,
                      (struct object * obj, int choice, int* pval));
STATIC_OVL bool FDECL(object_is_mithril, (const struct object* obj));
STATIC_OVL bool FDECL(melt_mithril_item,
                      (struct player * p, struct object* obj));
STATIC_OVL int FDECL(mithril_items_carried, (struct player * p));
STATIC_OVL int FDECL(mithril_carried, (struct player * p));
STATIC_OVL void FDECL(use_mithril, (struct player * p, int cost));
STATIC_OVL void FDECL(dif_mod, (int value, int positive_base, int* dif_inc));
STATIC_OVL void FDECL(adjust_smithing_cost,
                      (int diff, struct obj_property* prop,
                       struct smithing_cost* smithing_cost));
STATIC_OVL int FDECL(object_difficulty, (struct object * obj,
                                         struct smithing_cost* smithing_cost));
STATIC_OVL int FDECL(too_difficult, (struct object * obj));
STATIC_OVL bool FDECL(check_stat_drain,
                      (struct player * p, int stat, int cost));
STATIC_OVL bool FDECL(smith_affordable, (struct object * obj,
                                         struct smithing_cost* smithing_cost));
STATIC_OVL void FDECL(smith_pay_costs, (struct smithing_cost * smithing_cost));
STATIC_OVL void FDECL(set_base_values, (struct object * obj));
STATIC_OVL void FDECL(create_base_object,
                      (struct object_kind * kind, struct object* obj));
STATIC_OVL void FDECL(create_special,
                      (struct object * obj, struct ego_item* ego));
STATIC_OVL void FDECL(artefact_copy,
                      (struct artifact * a_dst, struct artifact* a_src));
STATIC_OVL void FDECL(add_artefact_details,
                      (struct artifact * art, struct object* obj));
STATIC_OVL bool FDECL(applicable_property,
                      (struct obj_property * prop, struct object* obj));
STATIC_OVL bool FDECL(object_has_property, (struct obj_property * prop,
                                            struct object* obj, bool negative));
STATIC_OVL void FDECL(add_object_property, (struct obj_property * prop,
                                            struct object* obj, bool negative));
STATIC_OVL void FDECL(remove_object_property,
                      (struct obj_property * prop, struct object* obj));
STATIC_OVL void FDECL(create_smithing_item,
                      (struct object * obj, struct smithing_cost* cost));
STATIC_OVL void FDECL(start_smithing, (struct player * p, int turns));
STATIC_OVL void FDECL(do_cmd_smith_aux, (bool flush));
STATIC_OVL void FDECL(do_cmd_smith, (struct command * cmd));
STATIC_OVL bool FDECL(tval_is_staff, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_note, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_horn, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_potion, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_food, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_food_k, (const struct object_kind* kind));
STATIC_OVL bool FDECL(tval_is_herb, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_herb_k, (const struct object_kind* kind));
STATIC_OVL bool FDECL(tval_is_light, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_light_k, (const struct object_kind* kind));
STATIC_OVL bool FDECL(tval_is_ring, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_chest, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_metal, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_fuel, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_digger, (const struct object* obj));
STATIC_OVL bool FDECL(tval_can_have_nourishment, (const struct object* obj));
STATIC_OVL bool FDECL(tval_can_have_charges, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_cloak, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_gloves, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_boots, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_sword, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_shield, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_body_armor, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_head_armor, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_ammo, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_sharp, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_launcher, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_useable, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_jewelry, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_weapon, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_armor, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_melee_weapon, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_held_weapon, (const struct object* obj));
STATIC_OVL bool FDECL(tval_has_variable_power, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_wearable, (const struct object* obj));
STATIC_OVL bool FDECL(tval_is_edible, (const struct object* obj));
STATIC_OVL bool FDECL(tval_can_have_flavor_k, (const struct object_kind* kind));
STATIC_OVL char* FDECL(de_armour, (const char* name));
STATIC_OVL int FDECL(tval_find_idx, (const char* name));
STATIC_OVL const char* FDECL(tval_find_name, (int tval));
STATIC_OVL int FDECL(tval_sval_count, (const char* name));
STATIC_OVL int FDECL(tval_sval_list,
                     (const char* name, int* list, int max_size));
STATIC_OVL void FDECL(flavor_assign_fixed, (void));
STATIC_OVL void FDECL(flavor_assign_random, (uint8_t tval));
STATIC_OVL void FDECL(flavor_init, (void));
STATIC_OVL void FDECL(flavor_set_all_aware, (void));
STATIC_OVL void FDECL(object_flags,
                      (const struct object* obj, bitflag flags[OF_SIZE]));
STATIC_OVL void FDECL(object_flags_known,
                      (const struct object* obj, bitflag flags[OF_SIZE]));
STATIC_OVL bool FDECL(object_test,
                      (item_tester tester, const struct object* obj));
STATIC_OVL unsigned FDECL(check_for_inscrip,
                          (const struct object* obj, const char* inscrip));
STATIC_OVL unsigned FDECL(check_for_inscrip_with_int,
                          (const struct object* obj, const char* inscrip,
                           int* ival));
STATIC_OVL struct object_kind* FDECL(lookup_kind, (int tval, int sval));
STATIC_OVL struct object_kind* FDECL(lookup_selfmade_kind, (int tval));
STATIC_OVL struct object_kind* FDECL(objkind_byid, (int kidx));
STATIC_OVL const struct artifact* FDECL(lookup_artifact_name,
                                        (const char* name));
STATIC_OVL struct ego_item* FDECL(lookup_ego_item,
                                  (const char* name, int tval, int sval));
STATIC_OVL int FDECL(lookup_sval, (int tval, const char* name));
STATIC_OVL void FDECL(object_short_name,
                      (char* buf, size_t max, const char* name));
STATIC_OVL int FDECL(compare_types,
                     (const struct object* o1, const struct object* o2));
STATIC_OVL int FDECL(compare_items,
                     (const struct object* o1, const struct object* o2));
STATIC_OVL uint8_t FDECL(convert_depth_to_origin, (int depth));
STATIC_OVL int FDECL(obj_digging_score, (const struct object* obj));
STATIC_OVL bool FDECL(obj_can_dig, (const struct object* obj));
STATIC_OVL bool FDECL(obj_has_charges, (const struct object* obj));
STATIC_OVL bool FDECL(obj_can_refuel, (const struct object* obj));
STATIC_OVL bool FDECL(obj_can_takeoff, (const struct object* obj));
STATIC_OVL bool FDECL(obj_can_throw, (const struct object* obj));
STATIC_OVL bool FDECL(obj_can_wear, (const struct object* obj));
STATIC_OVL bool FDECL(obj_can_fire, (const struct object* obj));
STATIC_OVL bool FDECL(obj_is_throwing, (const struct object* obj));
STATIC_OVL bool FDECL(obj_is_cursed, (const struct object* obj));
STATIC_OVL bool FDECL(obj_is_broken, (const struct object* obj));
STATIC_OVL bool FDECL(obj_has_inscrip, (const struct object* obj));
STATIC_OVL bool FDECL(obj_has_flag, (const struct object* obj, int flag));
STATIC_OVL bool FDECL(obj_is_useable, (const struct object* obj));
STATIC_OVL bool FDECL(obj_nourishes, (const struct object* obj));
STATIC_OVL struct effect* FDECL(object_effect, (const struct object* obj));
STATIC_OVL bool FDECL(obj_needs_aim, (const struct object* obj));
STATIC_OVL bool FDECL(obj_allows_vertical_aim, (const struct object* obj));
STATIC_OVL void FDECL(distribute_charges,
                      (struct object * source, struct object* dest, int amt));
STATIC_OVL void FDECL(uncurse_object, (struct object * obj));
STATIC_OVL bool FDECL(verify_object,
                      (const char* prompt, const struct object* obj,
                       const struct player* p));
STATIC_OVL msg_tag_t FDECL(msg_tag_lookup, (const char* tag));
STATIC_OVL void FDECL(print_custom_message,
                      (const struct object* obj, const char* string,
                       int msg_type, const struct player* p));
STATIC_OVL bool FDECL(is_artifact_created, (const struct artifact* art));
STATIC_OVL bool FDECL(is_artifact_seen, (const struct artifact* art));
STATIC_OVL bool FDECL(is_artifact_everseen, (const struct artifact* art));
STATIC_OVL void FDECL(mark_artifact_created,
                      (const struct artifact* art, bool created));
STATIC_OVL void FDECL(mark_artifact_seen,
                      (const struct artifact* art, bool seen));
STATIC_OVL void FDECL(mark_artifact_everseen,
                      (const struct artifact* art, bool seen));
STATIC_OVL void FDECL(write_abilities,
                      (ang_file * fff, const struct ability* abils));
STATIC_OVL void FDECL(write_self_made_artefact_entries, (ang_file * fff));
STATIC_OVL const char* FDECL(option_type_name, (int page));
STATIC_OVL const char* FDECL(option_name, (int opt));
STATIC_OVL const char* FDECL(option_desc, (int opt));
STATIC_OVL int FDECL(option_type, (int opt));
STATIC_OVL bool FDECL(option_is_cheat, (int opt));
STATIC_OVL bool FDECL(option_set, (const char* name, int val));
STATIC_OVL void FDECL(options_init_cheat, (void));
STATIC_OVL void FDECL(options_init_defaults, (struct player_options * opts));
STATIC_OVL bool FDECL(options_save_custom,
                      (struct player_options * opts, int page));
STATIC_OVL bool FDECL(options_restore_custom,
                      (struct player_options * opts, int page));
STATIC_OVL void FDECL(options_restore_maintainer,
                      (struct player_options * opts, int page));
STATIC_OVL void FDECL(options_list_challenge, (void));
STATIC_OVL void FDECL(init_options, (void));
STATIC_OVL struct parser* FDECL(parser_new, (void));
STATIC_OVL struct parser_hook* FDECL(findhook,
                                     (struct parser * p, const char* dir));
STATIC_OVL void FDECL(parser_freeold, (struct parser * p));
STATIC_OVL bool FDECL(parse_random, (const char* str, random_value* bonus));
STATIC_OVL enum parser_error FDECL(parser_parse,
                                   (struct parser * p, const char* line));
STATIC_OVL void* FDECL(parser_priv, (struct parser * p));
STATIC_OVL void FDECL(parser_setpriv, (struct parser * p, void* v));
STATIC_OVL int FDECL(parse_type, (const char* s));
STATIC_OVL void FDECL(clean_specs, (struct parser_hook * h));
STATIC_OVL void FDECL(parser_destroy, (struct parser * p));
STATIC_OVL errr FDECL(parse_specs, (struct parser_hook * h, char* fmt));
STATIC_OVL errr FDECL(parser_reg,
                      (struct parser * p, const char* fmt,
                       enum parser_error (*func)(struct parser* p)));
STATIC_OVL enum parser_error FDECL(ignored, (struct parser * p));
STATIC_OVL bool FDECL(parser_hasval, (struct parser * p, const char* name));
STATIC_OVL struct parser_value* FDECL(parser_getval,
                                      (struct parser * p, const char* name));
STATIC_OVL const char* FDECL(parser_getsym,
                             (struct parser * p, const char* name));
STATIC_OVL int FDECL(parser_getint, (struct parser * p, const char* name));
STATIC_OVL unsigned int FDECL(parser_getuint,
                              (struct parser * p, const char* name));
STATIC_OVL const char* FDECL(parser_getstr,
                             (struct parser * p, const char* name));
STATIC_OVL struct random FDECL(parser_getrand,
                               (struct parser * p, const char* name));
STATIC_OVL wchar_t FDECL(parser_getchar, (struct parser * p, const char* name));
STATIC_OVL int FDECL(parser_getstate,
                     (struct parser * p, struct parser_state* s));
STATIC_OVL void FDECL(parser_setstate,
                      (struct parser * p, unsigned int col, const char* msg));
STATIC_OVL enum parser_error FDECL(parse_ability_skill, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ability_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ability_level, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ability_prereq, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ability_type, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ability_item, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_ability_desc, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_ability, (void));
STATIC_OVL errr FDECL(run_parse_ability, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_ability, (struct parser * p));
STATIC_OVL void FDECL(cleanup_ability, (void));
STATIC_OVL struct ability* FDECL(lookup_ability, (int skill, const char* name));
STATIC_OVL int FDECL(count_abilities, (struct ability * ability, int skill));
STATIC_OVL bool FDECL(ability_is_active, (const struct ability* ability));
STATIC_OVL int FDECL(test_ability, (const char* name, struct ability* test,
                                    ability_predicate pred));
STATIC_OVL bool FDECL(applicable_ability,
                      (struct ability * ability, struct object* obj));
STATIC_OVL struct ability* FDECL(locate_ability, (struct ability * ability,
                                                  struct ability* test));
STATIC_OVL void FDECL(add_ability,
                      (struct ability * *set, struct ability* add));
STATIC_OVL void FDECL(activate_ability,
                      (struct ability * *set, struct ability* activate));
STATIC_OVL void FDECL(remove_ability,
                      (struct ability * *ability, struct ability* remove));
STATIC_OVL bool FDECL(player_has_ability,
                      (struct player * p, struct ability* ability));
STATIC_OVL int FDECL(player_active_ability,
                     (struct player * p, const char* name));
STATIC_OVL bool FDECL(player_has_prereq_abilities,
                      (struct player * p, struct ability* ability));
STATIC_OVL int FDECL(player_ability_cost,
                     (struct player * p, struct ability* ability));
STATIC_OVL bool FDECL(player_can_gain_ability,
                      (struct player * p, struct ability* ability));
STATIC_OVL bool FDECL(player_gain_ability,
                      (struct player * p, struct ability* ability));
STATIC_OVL void FDECL(release_ability_list, (struct ability * head));
STATIC_OVL struct ability* FDECL(copy_ability_list,
                                 (const struct ability* head));
STATIC_OVL bool FDECL(valid_charge,
                      (struct player * p, struct loc grid, int attack_type));
STATIC_OVL void FDECL(possible_follow_through,
                      (struct player * p, struct loc grid, int attack_type));
STATIC_OVL void FDECL(py_cruel_blow,
                      (int crit_bonus_dice, struct monster* mon));
STATIC_OVL int FDECL(prt_after_sharpness,
                     (struct player * p, const struct object* obj, int* flag));
STATIC_OVL void FDECL(attack_punctuation, (char* punctuation, size_t len,
                                           int net_dam, int crit_bonus_dice));
STATIC_OVL bool FDECL(whirlwind_possible, (struct player * p));
STATIC_OVL void FDECL(whirlwind, (struct player * p, struct loc grid));
STATIC_OVL void FDECL(py_attack_real,
                      (struct player * p, struct loc grid, int attack_type));
STATIC_OVL void FDECL(py_attack,
                      (struct player * p, struct loc grid, int attack_type));
STATIC_OVL int FDECL(breakage_chance,
                     (const struct object* obj, bool hit_wall));
STATIC_OVL int FDECL(archery_range, (const struct object* bow));
STATIC_OVL int FDECL(throwing_range, (const struct object* obj));
STATIC_OVL bool FDECL(do_radiance, (struct player * p, struct loc grid));
STATIC_OVL bool FDECL(thrown_potion_effects,
                      (struct player * p, struct object* obj, bool* is_dead,
                       struct monster* mon));
STATIC_OVL void FDECL(attacks_of_opportunity,
                      (struct player * p, struct loc safe));
STATIC_OVL struct attack_result FDECL(make_ranged_shot,
                                      (struct player * p, struct object* ammo,
                                       struct monster* mon, bool undo_rapid,
                                       bool attack_penalty, bool one_shot));
STATIC_OVL struct attack_result FDECL(make_ranged_throw,
                                      (struct player * p, struct object* obj,
                                       struct monster* mon, bool undo_rapid,
                                       bool attack_penalty, bool one_shot));
STATIC_OVL void FDECL(ranged_helper,
                      (struct player * p, struct object* obj, int dir,
                       int range, int shots, bool archery, bool radiance));
STATIC_OVL void FDECL(do_cmd_fire, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_throw, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_fire_quiver1, (void));
STATIC_OVL void FDECL(do_cmd_fire_quiver2, (void));
STATIC_OVL void FDECL(do_cmd_fire_at_nearest, (void));
STATIC_OVL void FDECL(do_cmd_automatic_throw, (void));
STATIC_OVL void FDECL(save_birth_data, (birther * tosave));
STATIC_OVL void FDECL(load_birth_data, (birther * saved, birther* prev_player));
STATIC_OVL void FDECL(get_bonuses, (struct player * p));
STATIC_OVL char* FDECL(get_history,
                       (struct history_chart * chart, struct player* p));
STATIC_OVL void FDECL(get_ahw, (struct player * p));
STATIC_OVL void FDECL(player_embody, (struct player * p));
STATIC_OVL void FDECL(player_init, (struct player * p));
STATIC_OVL void FDECL(wield_all, (struct player * p));
STATIC_OVL bool FDECL(player_make_simple,
                      (const char* nrace, const char* nhouse, const char* nsex,
                       const char* nplayer));
STATIC_OVL void FDECL(player_outfit, (struct player * p));
STATIC_OVL void FDECL(recalculate_stats, (int* stats_local_local));
STATIC_OVL void FDECL(reset_stats,
                      (int stats_local[STAT_MAX],
                       int points_spent_local[STAT_MAX],
                       int points_inc_local[STAT_MAX], int* points_left_local,
                       bool update_display));
STATIC_OVL bool FDECL(buy_stat, (int choice, int stats_local[STAT_MAX],
                                 int points_spent_local[STAT_MAX],
                                 int points_inc_local[STAT_MAX],
                                 int* points_left_local, bool update_display));
STATIC_OVL bool FDECL(sell_stat, (int choice, int stats_local[STAT_MAX],
                                  int points_spent_local[STAT_MAX],
                                  int points_inc_local[STAT_MAX],
                                  int* points_left_local, bool update_display));
STATIC_OVL void FDECL(finalise_stats, (struct player * p));
STATIC_OVL void FDECL(player_generate,
                      (struct player * p, const struct player_race* r,
                       const struct player_house* h, const struct player_sex* s,
                       bool old_history));
STATIC_OVL void FDECL(do_birth_reset,
                      (bool use_quickstart, birther* quickstart_prev_local));
STATIC_OVL void FDECL(do_cmd_birth_init, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_birth_reset, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_choose_race, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_choose_house, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_choose_sex, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_buy_stat, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_sell_stat, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_reset_stats, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_refresh_stats, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_choose_name, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_choose_history, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_accept_character, (struct command * cmd));
STATIC_OVL char* FDECL(find_roman_suffix_start, (const char* buf));
STATIC_OVL int FDECL(int_to_roman, (int n, char* roman, size_t bufsize));
STATIC_OVL int FDECL(roman_to_int, (const char* roman));
STATIC_OVL uint8_t FDECL(total_mdd,
                         (struct player * p, const struct object* obj));
STATIC_OVL uint8_t FDECL(total_mds,
                         (struct player * p, struct player_state* state,
                          const struct object* obj, int str_adjustment));
STATIC_OVL int FDECL(hand_and_a_half_bonus,
                     (struct player * p, const struct object* obj));
STATIC_OVL bool FDECL(two_handed_melee, (struct player * p));
STATIC_OVL int FDECL(blade_bonus,
                     (struct player * p, const struct object* obj));
STATIC_OVL int FDECL(axe_bonus, (struct player * p, const struct object* obj));
STATIC_OVL int FDECL(polearm_bonus,
                     (struct player * p, const struct object* obj));
STATIC_OVL uint8_t FDECL(total_ads,
                         (struct player * p, struct player_state* state,
                          const struct object* obj, bool single_shot));
STATIC_OVL bool FDECL(earlier_object,
                      (struct object * orig, struct object* new));
STATIC_OVL int FDECL(equipped_item_slot,
                     (struct player_body body, struct object* item));
STATIC_OVL void FDECL(calc_inventory, (struct player * p));
STATIC_OVL void FDECL(calc_voice, (struct player * p, bool update));
STATIC_OVL void FDECL(calc_hitpoints, (struct player * p));
STATIC_OVL int FDECL(light_up_to, (struct object * obj));
STATIC_OVL int FDECL(hate_level, (struct loc grid, int multiplier));
STATIC_OVL bool FDECL(weapon_glows, (struct object * obj, int near));
STATIC_OVL void FDECL(calc_light, (struct player * p));
STATIC_OVL int FDECL(weight_limit, (struct player_state state));
STATIC_OVL int FDECL(weight_remaining, (struct player * p));
STATIC_OVL void FDECL(calc_bonuses,
                      (struct player * p, struct player_state* state,
                       bool known_only, bool update));
STATIC_OVL void FDECL(update_bonuses, (struct player * p));
STATIC_OVL void FDECL(health_track,
                      (struct player_upkeep * upkeep, struct monster* mon));
STATIC_OVL void FDECL(monster_race_track, (struct player_upkeep * upkeep,
                                           struct monster_race* race));
STATIC_OVL void FDECL(track_object,
                      (struct player_upkeep * upkeep, struct object* obj));
STATIC_OVL void FDECL(track_object_kind, (struct player_upkeep * upkeep,
                                          struct object_kind* kind));
STATIC_OVL void FDECL(track_object_cancel, (struct player_upkeep * upkeep));
STATIC_OVL bool FDECL(tracked_object_is,
                      (struct player_upkeep * upkeep, struct object* obj));
STATIC_OVL void FDECL(notice_stuff, (struct player * p));
STATIC_OVL void FDECL(update_stuff, (struct player * p));
STATIC_OVL void FDECL(redraw_stuff, (struct player * p));
STATIC_OVL void FDECL(handle_stuff, (struct player * p));
STATIC_OVL void FDECL(history_init, (struct player_history * h));
STATIC_OVL void FDECL(history_realloc, (struct player_history * h));
STATIC_OVL void FDECL(history_clear, (struct player * p));
STATIC_OVL bool FDECL(history_add_full,
                      (struct player * p, bitflag* type, int aidx, int dlev,
                       int turnno, const char* text));
STATIC_OVL bool FDECL(history_add_with_flags,
                      (struct player * p, const char* text,
                       bitflag flags[HIST_SIZE],
                       const struct artifact* artifact));
STATIC_OVL bool FDECL(history_add,
                      (struct player * p, const char* text, int type));
STATIC_OVL bool FDECL(history_is_artifact_known,
                      (struct player * p, const struct artifact* artifact));
STATIC_OVL bool FDECL(history_mark_artifact_known,
                      (struct player_history * h,
                       const struct artifact* artifact));
STATIC_OVL bool FDECL(history_mark_artifact_lost,
                      (struct player_history * h,
                       const struct artifact* artifact));
STATIC_OVL void FDECL(get_artifact_name,
                      (char* buf, size_t len, const struct artifact* artifact));
STATIC_OVL void FDECL(history_find_artifact,
                      (struct player * p, const struct artifact* artifact));
STATIC_OVL void FDECL(history_lose_artifact,
                      (struct player * p, const struct artifact* artifact));
STATIC_OVL void FDECL(history_unmask_unknown, (struct player * p));
STATIC_OVL size_t FDECL(history_get_list,
                        (struct player * p, struct history_info** list));
STATIC_OVL bool FDECL(is_valid_pf, (struct player * p, struct loc grid));
STATIC_OVL void FDECL(get_pathfind_region, (void));
STATIC_OVL int FDECL(path_dist, (struct loc grid));
STATIC_OVL void FDECL(set_path_dist, (struct loc grid, int dist));
STATIC_OVL void FDECL(path_dist_info_init, (void));
STATIC_OVL bool FDECL(set_up_path_distances, (struct loc grid));
STATIC_OVL bool FDECL(find_path, (struct loc grid));
STATIC_OVL int FDECL(pathfind_direction_to, (struct loc from, struct loc to));
STATIC_OVL bool FDECL(see_wall, (int dir, struct loc grid));
STATIC_OVL void FDECL(run_init, (int dir));
STATIC_OVL bool FDECL(run_test, (const struct player* p));
STATIC_OVL void FDECL(run_step, (int dir));
STATIC_OVL void FDECL(drop_iron_crown,
                      (struct monster * mon, const char* message));
STATIC_OVL void FDECL(shatter_weapon, (struct player * p, int silnum));
STATIC_OVL void FDECL(break_truce, (struct player * p, bool obvious));
STATIC_OVL void FDECL(check_truce, (struct player * p));
STATIC_OVL void FDECL(wake_all_monsters, (struct player * p));
STATIC_OVL void FDECL(prise_silmaril, (struct player * p));
STATIC_OVL int FDECL(silmarils_possessed, (struct player * p));
STATIC_OVL int FDECL(skill_cost, (int base, int points));
STATIC_OVL void FDECL(recalculate_skills, (void));
STATIC_OVL void FDECL(init_skills, (bool start, bool reset));
STATIC_OVL void FDECL(finalise_skills, (void));
STATIC_OVL void FDECL(reset_skills, (void));
STATIC_OVL bool FDECL(buy_skill, (int choice));
STATIC_OVL bool FDECL(sell_skill, (int choice));
STATIC_OVL void FDECL(do_cmd_buy_skill, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_sell_skill, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_reset_skills, (struct command * cmd));
STATIC_OVL void FDECL(do_cmd_refresh_skills, (struct command * cmd));
STATIC_OVL int FDECL(timed_name_to_idx, (const char* name));
STATIC_OVL enum parser_error FDECL(parse_player_timed_name,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_desc,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_end_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_increase_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_decrease_message,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_change_increase,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_change_decrease,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_message_type,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_fail,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_grade,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_change_grade,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_resist,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_este,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_player_timed_save,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_player_timed, (void));
STATIC_OVL errr FDECL(run_parse_player_timed, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_player_timed, (struct parser * p));
STATIC_OVL void FDECL(cleanup_player_timed, (void));
STATIC_OVL int FDECL(player_timed_decrement_amount,
                     (struct player * p, int idx));
STATIC_OVL void FDECL(player_timed_end_effect, (int idx));
STATIC_OVL const char* FDECL(player_get_timed_grade,
                             (const struct player* p, int idx));
STATIC_OVL bool FDECL(player_timed_grade_eq,
                      (const struct player* p, int idx, const char* match));
STATIC_OVL bool FDECL(player_timed_grade_gt,
                      (const struct player* p, int idx, const char* match));
STATIC_OVL bool FDECL(player_timed_grade_lt,
                      (const struct player* p, int idx, const char* match));
STATIC_OVL bool FDECL(player_set_timed, (struct player * p, int idx, int v,
                                         bool notify, bool can_disturb));
STATIC_OVL bool FDECL(player_saving_throw,
                      (struct player * p, struct monster* mon, int resistance));
STATIC_OVL bool FDECL(player_inc_check,
                      (struct player * p, int idx, bool lore));
STATIC_OVL bool FDECL(player_inc_timed,
                      (struct player * p, int idx, int v, bool notify,
                       bool can_disturb, bool check));
STATIC_OVL bool FDECL(player_dec_timed, (struct player * p, int idx, int v,
                                         bool notify, bool can_disturb));
STATIC_OVL bool FDECL(player_clear_timed, (struct player * p, int idx,
                                           bool notify, bool can_disturb));
STATIC_OVL bool FDECL(player_timed_inc_happened,
                      (struct player * p, int old[], int len));
STATIC_OVL int FDECL(player_min_depth, (struct player * p));
STATIC_OVL int FDECL(dungeon_get_next_level,
                     (struct player * p, int dlev, int added));
STATIC_OVL void FDECL(dungeon_change_level, (struct player * p, int dlev));
STATIC_OVL int FDECL(int_exp, (int base, int power));
STATIC_OVL void FDECL(take_hit,
                      (struct player * p, int dam, const char* kb_str));
STATIC_OVL void FDECL(death_knowledge, (struct player * p));
STATIC_OVL void FDECL(player_regen_hp, (struct player * p));
STATIC_OVL void FDECL(player_regen_mana, (struct player * p));
STATIC_OVL void FDECL(player_digest, (struct player * p));
STATIC_OVL void FDECL(player_update_light, (struct player * p));
STATIC_OVL bool FDECL(player_radiates, (struct player * p));
STATIC_OVL void FDECL(player_fall_in_pit, (struct player * p, bool spiked));
STATIC_OVL void FDECL(player_falling_damage, (struct player * p, bool stun));
STATIC_OVL void FDECL(player_fall_in_chasm, (struct player * p));
STATIC_OVL void FDECL(player_flanking_or_retreat,
                      (struct player * p, struct loc grid));
STATIC_OVL void FDECL(player_opportunist_or_zone,
                      (struct player * p, struct loc grid1, struct loc grid2,
                       bool opp_only));
STATIC_OVL void FDECL(player_polearm_passive_attack,
                      (struct player * p, struct loc grid_from,
                       struct loc grid_to));
STATIC_OVL bool FDECL(player_can_leap,
                      (struct player * p, struct loc grid, int dir));
STATIC_OVL bool FDECL(player_break_web, (struct player * p));
STATIC_OVL bool FDECL(player_escape_pit, (struct player * p));
STATIC_OVL void FDECL(player_blast_ceiling, (struct player * p));
STATIC_OVL void FDECL(player_blast_floor, (struct player * p));
STATIC_OVL int FDECL(lookup_skill, (const char* name));
STATIC_OVL bool FDECL(player_action_is_movement, (struct player * p, int n));
STATIC_OVL int FDECL(player_dodging_bonus, (struct player * p));
STATIC_OVL bool FDECL(player_can_riposte, (struct player * p, int hit_result));
STATIC_OVL bool FDECL(player_is_sprinting, (struct player * p));
STATIC_OVL int FDECL(player_bane_type_killed, (int bane_type));
STATIC_OVL int FDECL(calc_bane_bonus, (struct player * p));
STATIC_OVL int FDECL(player_bane_bonus,
                     (struct player * p, struct monster* mon));
STATIC_OVL int FDECL(player_spider_bane_bonus, (struct player * p));
STATIC_OVL bool FDECL(player_can_fire, (struct player * p, bool show_msg));
STATIC_OVL bool FDECL(player_can_fire_quiver1,
                      (struct player * p, bool show_msg));
STATIC_OVL bool FDECL(player_can_fire_quiver2,
                      (struct player * p, bool show_msg));
STATIC_OVL bool FDECL(player_can_refuel, (struct player * p, bool show_msg));
STATIC_OVL bool FDECL(player_can_fire_prereq, (void));
STATIC_OVL bool FDECL(player_can_fire_quiver1_prereq, (void));
STATIC_OVL bool FDECL(player_can_fire_quiver2_prereq, (void));
STATIC_OVL bool FDECL(player_can_refuel_prereq, (void));
STATIC_OVL bool FDECL(player_can_debug_prereq, (void));
STATIC_OVL bool FDECL(player_can_save_prereq, (void));
STATIC_OVL bool FDECL(player_confuse_dir,
                      (struct player * p, int* dp, bool too));
STATIC_OVL bool FDECL(player_resting_is_special, (int16_t count));
STATIC_OVL bool FDECL(player_is_resting, (const struct player* p));
STATIC_OVL int16_t FDECL(player_resting_count, (const struct player* p));
STATIC_OVL void FDECL(player_resting_set_count,
                      (struct player * p, int16_t count));
STATIC_OVL void FDECL(player_resting_cancel, (struct player * p, bool disturb));
STATIC_OVL bool FDECL(player_resting_can_regenerate, (const struct player* p));
STATIC_OVL void FDECL(player_resting_step_turn, (struct player * p));
STATIC_OVL void FDECL(player_resting_complete_special, (struct player * p));
STATIC_OVL int FDECL(player_get_resting_repeat_count, (struct player * p));
STATIC_OVL void FDECL(player_set_resting_repeat_count,
                      (struct player * p, int16_t count));
STATIC_OVL bool FDECL(player_resists, (const struct player* p, int element));
STATIC_OVL void FDECL(player_place,
                      (struct chunk * c, struct player* p, struct loc grid));
STATIC_OVL void FDECL(player_handle_post_move,
                      (struct player * p, bool eval_trap, bool is_involuntary));
STATIC_OVL void FDECL(disturb, (struct player * p, bool stop_stealth));
STATIC_OVL void FDECL(search_square, (struct player * p, struct loc grid,
                                      int dist, int searching));
STATIC_OVL void FDECL(search, (struct player * p));
STATIC_OVL void FDECL(perceive, (struct player * p));
STATIC_OVL struct player_race* FDECL(player_id2race, (guid id));
STATIC_OVL struct player_house* FDECL(player_id2house, (guid id));
STATIC_OVL struct player_house* FDECL(player_house_from_count, (int idx));
STATIC_OVL struct player_sex* FDECL(player_id2sex, (guid id));
STATIC_OVL int FDECL(stat_name_to_idx, (const char* name));
STATIC_OVL const char* FDECL(stat_idx_to_name, (int type));
STATIC_OVL bool FDECL(player_stat_inc, (struct player * p, int stat));
STATIC_OVL bool FDECL(player_stat_res,
                      (struct player * p, int stat, int points));
STATIC_OVL void FDECL(player_stat_dec, (struct player * p, int stat));
STATIC_OVL void FDECL(check_experience, (struct player * p));
STATIC_OVL void FDECL(player_exp_gain, (struct player * p, int32_t amount));
STATIC_OVL void FDECL(player_exp_lose, (struct player * p, int32_t amount));
STATIC_OVL void FDECL(player_flags, (struct player * p, bitflag f[OF_SIZE]));
STATIC_OVL void FDECL(player_flags_timed,
                      (struct player * p, bitflag f[OF_SIZE]));
STATIC_OVL uint8_t FDECL(player_hp_attr, (struct player * p));
STATIC_OVL uint8_t FDECL(player_sp_attr, (struct player * p));
STATIC_OVL bool FDECL(player_restore_mana, (struct player * p, int amt));
STATIC_OVL size_t FDECL(player_random_name, (char* buf, size_t buflen));
STATIC_OVL void FDECL(player_safe_name, (char* safe, size_t safelen,
                                         const char* name, bool strip_suffix));
STATIC_OVL void FDECL(player_cleanup_members, (struct player * p));
STATIC_OVL void FDECL(init_player, (void));
STATIC_OVL void FDECL(cleanup_player, (void));
STATIC_OVL int FDECL(proj_name_to_idx, (const char* name));
STATIC_OVL const char* FDECL(proj_idx_to_name, (int type));
STATIC_OVL int FDECL(projectable, (struct chunk * c, struct loc grid1,
                                   struct loc grid2, int flg));
STATIC_OVL struct loc FDECL(origin_get_loc, (struct source origin));
STATIC_OVL bool FDECL(project,
                      (struct source origin, int rad, struct loc finish, int dd,
                       int ds, int dif, int typ, int flg, int degrees_of_arc,
                       bool uniform, const struct object* obj));
STATIC_OVL void FDECL(project_feature_handler_FIRE,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_COLD,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_POIS,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_DARK,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_NOTHING,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_HURT,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_ARROW,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_BOULDER,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_ACID,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_SOUND,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_FORCE,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_LIGHT,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_KILL_WALL,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_SLEEP,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_SPEED,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_SLOW,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_CONFUSION,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_FEAR,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_EARTHQUAKE,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_DARK_WEAK,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_KILL_DOOR,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_LOCK_DOOR,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_KILL_TRAP,
                      (project_feature_handler_context_t * context));
STATIC_OVL void FDECL(project_feature_handler_DISP_ALL,
                      (project_feature_handler_context_t * context));
STATIC_OVL bool FDECL(project_f, (struct source origin, struct loc grid,
                                  int dif, int typ));
STATIC_OVL void FDECL(project_monster_hurt_immune,
                      (project_monster_handler_context_t * context,
                       int hurt_flag, int imm_flag, int hurt_factor,
                       enum mon_messages hurt_msg, enum mon_messages die_msg));
STATIC_OVL void FDECL(project_monster_hurt_only,
                      (project_monster_handler_context_t * context, int flag,
                       enum mon_messages hurt_msg, enum mon_messages die_msg));
STATIC_OVL void FDECL(project_monster_breath,
                      (project_monster_handler_context_t * context, int flag));
STATIC_OVL int FDECL(project_monster_skill_check,
                     (project_monster_handler_context_t * context, int flag));
STATIC_OVL void FDECL(project_monster_handler_FIRE,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_COLD,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_POIS,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_DARK,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_NOTHING,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_HURT,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_ARROW,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_BOULDER,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_ACID,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_SOUND,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_FORCE,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_LIGHT,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_KILL_WALL,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_SLEEP,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_SPEED,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_SLOW,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_CONFUSION,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_FEAR,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_EARTHQUAKE,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_DARK_WEAK,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_KILL_DOOR,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_LOCK_DOOR,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_KILL_TRAP,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_monster_handler_DISP_ALL,
                      (project_monster_handler_context_t * context));
STATIC_OVL bool FDECL(project_m_monster_attack,
                      (project_monster_handler_context_t * context, int m_idx));
STATIC_OVL bool FDECL(project_m_player_attack,
                      (project_monster_handler_context_t * context));
STATIC_OVL void FDECL(project_m_apply_side_effects,
                      (project_monster_handler_context_t * context, int m_idx));
STATIC_OVL void FDECL(project_m, (struct source origin, int r, struct loc grid,
                                  int dam, int ds, int dif, int typ, int flg,
                                  bool* did_hit, bool* was_obvious));
STATIC_OVL int FDECL(inven_damage,
                     (struct player * p, int type, int perc, int resistance));
STATIC_OVL void FDECL(project_object_handler_FIRE,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_COLD,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_POIS,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_DARK,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_NOTHING,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_HURT,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_ARROW,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_BOULDER,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_ACID,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_SOUND,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_FORCE,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_LIGHT,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_KILL_WALL,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_SLEEP,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_SPEED,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_SLOW,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_CONFUSION,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_FEAR,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_EARTHQUAKE,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_DARK_WEAK,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_KILL_DOOR,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_LOCK_DOOR,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_KILL_TRAP,
                      (project_object_handler_context_t * context));
STATIC_OVL void FDECL(project_object_handler_DISP_ALL,
                      (project_object_handler_context_t * context));
STATIC_OVL bool FDECL(project_o, (struct loc grid, int typ,
                                  const struct object* protected_obj));
STATIC_OVL int FDECL(adjust_dam, (struct player * p, int dd, int ds, int type));
STATIC_OVL void FDECL(project_player_handler_FIRE,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_COLD,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_POIS,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_DARK,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_NOTHING,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_HURT,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_ARROW,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_BOULDER,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_ACID,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_SOUND,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_FORCE,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_LIGHT,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_KILL_WALL,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_SLEEP,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_SPEED,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_SLOW,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_CONFUSION,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_FEAR,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_EARTHQUAKE,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_DARK_WEAK,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_KILL_DOOR,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_LOCK_DOOR,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_KILL_TRAP,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(project_player_handler_DISP_ALL,
                      (project_player_handler_context_t * context));
STATIC_OVL void FDECL(monster_ranged_attack,
                      (project_player_handler_context_t * context,
                       char* killer));
STATIC_OVL bool FDECL(project_p, (struct source origin, struct loc grid, int dd,
                                  int ds, int typ));
STATIC_OVL void FDECL(build_prob, (name_probs probs, const char** learn));
STATIC_OVL size_t FDECL(randname_make, (randname_type name_type, size_t min,
                                        size_t max, char* word_buf,
                                        size_t buflen, const char*** sections));
STATIC_OVL int FDECL(score_points, (const struct high_score* score));
STATIC_OVL size_t FDECL(highscore_read,
                        (struct high_score scores[], size_t sz));
STATIC_OVL size_t FDECL(highscore_where,
                        (const struct high_score* entry,
                         const struct high_score scores[], size_t sz));
STATIC_OVL size_t FDECL(highscore_add, (const struct high_score* entry,
                                        struct high_score scores[], size_t sz));
STATIC_OVL size_t FDECL(highscore_count,
                        (const struct high_score scores[], size_t sz));
STATIC_OVL void FDECL(highscore_write,
                      (const struct high_score scores[], size_t sz));
STATIC_OVL void FDECL(build_score,
                      (struct high_score * entry, const struct player* p,
                       const char* died_from, const time_t* death_time));
STATIC_OVL void FDECL(enter_score,
                      (const struct player* p, const time_t* death_time));
STATIC_OVL void FDECL(wr_description, (void));
STATIC_OVL void FDECL(wr_item, (const struct object* obj));
STATIC_OVL void FDECL(wr_monster, (const struct monster* mon));
STATIC_OVL void FDECL(wr_trap, (struct trap * trap));
STATIC_OVL void FDECL(wr_randomizer, (void));
STATIC_OVL void FDECL(wr_options, (void));
STATIC_OVL void FDECL(wr_messages, (void));
STATIC_OVL void FDECL(wr_monster_memory, (void));
STATIC_OVL void FDECL(wr_object_memory, (void));
STATIC_OVL void FDECL(wr_player, (void));
STATIC_OVL void FDECL(wr_ignore, (void));
STATIC_OVL void FDECL(wr_misc, (void));
STATIC_OVL void FDECL(wr_artifacts, (void));
STATIC_OVL void FDECL(wr_gear_aux, (struct object * gear));
STATIC_OVL void FDECL(wr_gear, (void));
STATIC_OVL void FDECL(wr_dungeon_aux, (struct chunk * c));
STATIC_OVL void FDECL(wr_objects_aux, (struct chunk * c));
STATIC_OVL void FDECL(wr_monsters_aux, (struct chunk * c));
STATIC_OVL void FDECL(wr_traps_aux, (struct chunk * c));
STATIC_OVL void FDECL(wr_dungeon, (void));
STATIC_OVL void FDECL(wr_objects, (void));
STATIC_OVL void FDECL(wr_monsters, (void));
STATIC_OVL void FDECL(wr_traps, (void));
STATIC_OVL void FDECL(wr_history, (void));
STATIC_OVL void FDECL(wr_monster_groups, (void));
STATIC_OVL void FDECL(note, (const char* message));
STATIC_OVL void FDECL(sf_put, (uint8_t v));
STATIC_OVL uint8_t FDECL(sf_get, (void));
STATIC_OVL void FDECL(wr_byte, (uint8_t v));
STATIC_OVL void FDECL(wr_u16b, (uint16_t v));
STATIC_OVL void FDECL(wr_s16b, (int16_t v));
STATIC_OVL void FDECL(wr_u32b, (uint32_t v));
STATIC_OVL void FDECL(wr_s32b, (int32_t v));
STATIC_OVL void FDECL(wr_string, (const char* str));
STATIC_OVL void FDECL(rd_byte, (uint8_t * ip));
STATIC_OVL void FDECL(rd_u16b, (uint16_t * ip));
STATIC_OVL void FDECL(rd_s16b, (int16_t * ip));
STATIC_OVL void FDECL(rd_u32b, (uint32_t * ip));
STATIC_OVL void FDECL(rd_s32b, (int32_t * ip));
STATIC_OVL void FDECL(rd_string, (char* str, int max));
STATIC_OVL void FDECL(strip_bytes, (int n));
STATIC_OVL void FDECL(pad_bytes, (int n));
STATIC_OVL bool FDECL(try_save, (ang_file * file));
STATIC_OVL bool FDECL(savefile_save, (const char* path));
STATIC_OVL bool FDECL(check_header, (ang_file * f));
STATIC_OVL errr FDECL(next_blockheader, (ang_file * f, struct blockheader* b));
STATIC_OVL loader_t FDECL(find_loader, (struct blockheader * b,
                                        const struct blockinfo* local_loaders));
STATIC_OVL bool FDECL(load_block,
                      (ang_file * f, struct blockheader* b, loader_t loader));
STATIC_OVL void FDECL(skip_block, (ang_file * f, struct blockheader* b));
STATIC_OVL bool FDECL(try_load,
                      (ang_file * f, const struct blockinfo* local_loaders));
STATIC_OVL int FDECL(get_desc, (void));
STATIC_OVL const char* FDECL(savefile_get_description, (const char* path));
STATIC_OVL bool FDECL(savefile_load, (const char* path, bool cheat_death));
STATIC_OVL void FDECL(savefile_get_panic_name,
                      (char* buf, size_t len, const char* path));
STATIC_OVL bool FDECL(save_charoutput, (void));
STATIC_OVL enum parser_error FDECL(parse_song_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_verb, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_alt_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_bonus_mult, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_bonus_div, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_bonus_min, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_noise, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_extend, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_song_effect, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_song, (void));
STATIC_OVL errr FDECL(run_parse_song, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_song, (struct parser * p));
STATIC_OVL void FDECL(cleanup_song, (void));
STATIC_OVL struct song* FDECL(song_by_idx, (int idx));
STATIC_OVL struct song* FDECL(lookup_song, (const char* name));
STATIC_OVL int FDECL(song_bonus,
                     (struct player * p, int pskill, struct song* song));
STATIC_OVL void FDECL(player_change_song,
                      (struct player * p, struct song* song, bool exchange));
STATIC_OVL bool FDECL(player_is_singing,
                      (struct player * p, struct song* song));
STATIC_OVL int FDECL(player_song_noise, (struct player * p));
STATIC_OVL void FDECL(player_sing, (struct player * p));
STATIC_OVL int FDECL(monster_sing, (struct monster * mon, struct song* song));
STATIC_OVL void FDECL(load_sound, (struct sound_data * sound_data));
STATIC_OVL errr FDECL(register_sound_pref_parser, (struct parser * p));
STATIC_OVL void FDECL(play_sound, (game_event_type type, game_event_data* data,
                                   void* user));
STATIC_OVL bool FDECL(set_preloaded_sounds, (bool new_setting));
STATIC_OVL errr FDECL(init_sound,
                      (const char* soundstr, int argc, char** argv));
STATIC_OVL void FDECL(close_sound, (void));
STATIC_OVL void FDECL(print_sound_help, (void));
STATIC_OVL struct source FDECL(source_none, (void));
STATIC_OVL struct source FDECL(source_trap, (struct trap * trap));
STATIC_OVL struct source FDECL(source_monster, (int who));
STATIC_OVL struct source FDECL(source_player, (void));
STATIC_OVL struct source FDECL(source_object, (struct object * object));
STATIC_OVL struct source FDECL(source_chest_trap,
                               (struct chest_trap * chest_trap));
STATIC_OVL struct source FDECL(source_grid, (struct loc grid));
STATIC_OVL void FDECL(look_mon_desc, (char* buf, size_t max, int m_idx));
STATIC_OVL bool FDECL(target_able, (struct monster * m));
STATIC_OVL bool FDECL(target_okay, (int range));
STATIC_OVL bool FDECL(target_set_monster, (struct monster * mon));
STATIC_OVL void FDECL(target_set_location, (struct loc grid));
STATIC_OVL bool FDECL(target_is_set, (void));
STATIC_OVL void FDECL(target_fix, (void));
STATIC_OVL void FDECL(target_release, (void));
STATIC_OVL int FDECL(cmp_distance, (const void* a, const void* b));
STATIC_OVL int16_t FDECL(target_pick, (int y1, int x1, int dy, int dx,
                                       struct point_set* targets));
STATIC_OVL bool FDECL(target_accept, (struct loc grid));
STATIC_OVL void FDECL(coords_desc, (char* buf, int size, struct loc grid));
STATIC_OVL void FDECL(target_get, (struct loc * grid));
STATIC_OVL struct monster* FDECL(target_get_monster, (void));
STATIC_OVL bool FDECL(target_sighted, (void));
STATIC_OVL struct point_set* FDECL(target_get_monsters,
                                   (int mode, monster_predicate pred,
                                    bool restrict_to_panel));
STATIC_OVL bool FDECL(target_set_closest, (int mode, monster_predicate pred));
STATIC_OVL enum parser_error FDECL(parse_trap_name, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_graphics, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_rarity, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_min_depth, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_max_depth, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_power, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_stealth, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_flags, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_effect, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_dice, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_expr, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_effect_xtra, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_dice_xtra, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_expr_xtra, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_desc, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_msg, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_msg2, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_msg3, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_msg_vis, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_msg_silence, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_msg_good, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_msg_bad, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trap_msg_xtra, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_trap, (void));
STATIC_OVL errr FDECL(run_parse_trap, (struct parser * p));
STATIC_OVL errr FDECL(finish_parse_trap, (struct parser * p));
STATIC_OVL void FDECL(cleanup_trap, (void));
STATIC_OVL struct trap_kind* FDECL(lookup_trap, (const char* desc));
STATIC_OVL bool FDECL(square_trap_specific,
                      (struct chunk * c, struct loc grid, int t_idx));
STATIC_OVL bool FDECL(square_trap_flag,
                      (struct chunk * c, struct loc grid, int flag));
STATIC_OVL bool FDECL(square_verify_trap,
                      (struct chunk * c, struct loc grid, int vis));
STATIC_OVL void FDECL(square_free_trap, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_remove_all_traps,
                      (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(square_remove_trap,
                      (struct chunk * c, struct loc grid, int t_idx_remove));
STATIC_OVL bool FDECL(check_hit,
                      (int power, bool display_roll, struct source against));
STATIC_OVL bool FDECL(square_player_trap_allowed,
                      (struct chunk * c, struct loc grid));
STATIC_OVL int FDECL(pick_trap, (struct chunk * c, int feat, int trap_level));
STATIC_OVL void FDECL(place_trap, (struct chunk * c, struct loc grid, int t_idx,
                                   int trap_level));
STATIC_OVL bool FDECL(square_reveal_trap,
                      (struct chunk * c, struct loc grid, bool domsg));
STATIC_OVL void FDECL(square_memorize_traps,
                      (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(hit_trap, (struct loc grid));
STATIC_OVL void FDECL(square_set_door_lock,
                      (struct chunk * c, struct loc grid, int power));
STATIC_OVL int FDECL(square_door_lock_power,
                     (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_set_door_jam,
                      (struct chunk * c, struct loc grid, int power));
STATIC_OVL int FDECL(square_door_jam_power,
                     (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(square_set_forge,
                      (struct chunk * c, struct loc grid, int uses));
STATIC_OVL int FDECL(square_forge_uses, (struct chunk * c, struct loc grid));
STATIC_OVL struct object* FDECL(create_tutorial_note, (char* name));
STATIC_OVL void FDECL(tutorial_section_place_feature,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(tutorial_section_place_trap,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(tutorial_section_place_note,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(tutorial_section_place_trigger,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(tutorial_section_place_gate,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(tutorial_section_place_forge,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(tutorial_section_place_object,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(tutorial_section_place_monster,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(tutorial_section_place_custom_trap,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(tutorial_section_place_custom_door,
                      (struct chunk * c, struct loc grid,
                       struct tutorial_section_sym_val* val));
STATIC_OVL void FDECL(append_with_case_sensitive_first,
                      (textblock * tb, const char* src, bool capital));
STATIC_OVL textblock* FDECL(tutorial_expand_message_from_string,
                            (const char* text, bool note));
STATIC_OVL void FDECL(tutorial_handle_player_move,
                      (game_event_type t, game_event_data* d, void* u));
STATIC_OVL void FDECL(tutorial_leave_section_helper,
                      (struct tutorial_dict_val_type * *dest,
                       struct tutorial_dict_val_type** note,
                       const struct player* p));
STATIC_OVL bool FDECL(in_tutorial, (void));
STATIC_OVL void FDECL(tutorial_prepare_section,
                      (const char* name, struct player* p));
STATIC_OVL void FDECL(tutorial_leave_section, (struct player * p));
STATIC_OVL const char* FDECL(tutorial_get_next_section,
                             (const struct player* p));
STATIC_OVL textblock* FDECL(tutorial_expand_message, (int pval));
STATIC_OVL void FDECL(tutorial_textblock_show,
                      (textblock * tb, const char* header));
STATIC_OVL void FDECL(tutorial_display_death_note, (const struct player* p));
STATIC_OVL void FDECL(tutorial_textblock_append_command_phrase,
                      (textblock * tb, const char* command_name, bool capital,
                       bool gerund));
STATIC_OVL void FDECL(tutorial_textblock_append_direction_phrase,
                      (textblock * tb, int dirnum, bool capital, bool gerund));
STATIC_OVL void FDECL(tutorial_textblock_append_direction_rose,
                      (textblock * tb));
STATIC_OVL void FDECL(tutorial_textblock_append_feature_symbol,
                      (textblock * tb, int feat));
STATIC_OVL void FDECL(tutorial_textblock_append_monster_symbol,
                      (textblock * tb, const struct monster_race* race));
STATIC_OVL void FDECL(tutorial_textblock_append_object_symbol,
                      (textblock * tb, const struct object_kind* kind));
STATIC_OVL struct object* FDECL(tutorial_create_artifact,
                                (const struct artifact* art));
STATIC_OVL struct object* FDECL(tutorial_create_object,
                                (const struct tutorial_item* item));
STATIC_OVL void FDECL(tutorial_handle_enter_world,
                      (game_event_type t, game_event_data* d, void* u));
STATIC_OVL void FDECL(tutorial_handle_leave_world,
                      (game_event_type t, game_event_data* d, void* u));
STATIC_OVL void FDECL(tutorial_item_tweaks_free,
                      (struct tutorial_item_tweak * tweaks, int count));
STATIC_OVL uint32_t FDECL(tutorial_section_sym_key_hash, (const void* key));
STATIC_OVL int FDECL(tutorial_section_sym_key_compare,
                     (const void* a, const void* b));
STATIC_OVL void FDECL(tutorial_section_sym_value_free, (void* value));
STATIC_OVL struct tutorial_section_sym_table FDECL(
    tutorial_section_sym_table_create, (void));
STATIC_OVL void FDECL(tutorial_section_sym_table_destroy,
                      (struct tutorial_section_sym_table t));
STATIC_OVL bool FDECL(tutorial_section_sym_table_insert,
                      (struct tutorial_section_sym_table t,
                       struct tutorial_section_sym_key* key,
                       struct tutorial_section_sym_val* value));
STATIC_OVL enum parser_error FDECL(tutorial_section_parse_symbol,
                                   (const char* symbol,
                                    struct tutorial_parser_priv* priv,
                                    struct tutorial_section_sym_table t,
                                    struct tutorial_section_sym_key** key));
STATIC_OVL uint32_t FDECL(tutorial_key_hash, (const void* key));
STATIC_OVL int FDECL(tutorial_key_compare, (const void* a, const void* b));
STATIC_OVL void FDECL(tutorial_key_free, (void* key));
STATIC_OVL void FDECL(free_trigger_compiled_ops,
                      (struct trigger_compiled_op * ops, int n));
STATIC_OVL void FDECL(tutorial_value_free, (void* value));
STATIC_OVL struct tutorial_dict_type FDECL(tutorial_dict_create, (void));
STATIC_OVL void FDECL(tutorial_dict_destroy, (struct tutorial_dict_type d));
STATIC_OVL bool FDECL(tutorial_dict_insert,
                      (struct tutorial_dict_type d,
                       struct tutorial_dict_key_type* key,
                       struct tutorial_dict_val_type* value));
STATIC_OVL void FDECL(verify_section,
                      (struct tutorial_dict_val_type * section));
STATIC_OVL enum parser_error FDECL(tutorial_add_item_tweak,
                                   (struct tutorial_item_tweak * *tweaks,
                                    int* count, int* alloc,
                                    enum tutorial_item_tweak_kind kind,
                                    const char* dice, const random_value* rv,
                                    int idx));
STATIC_OVL enum parser_error FDECL(tutorial_parse_tweaks,
                                   (struct tutorial_item_tweak * *tweaks,
                                    int* count, int* alloc, const char* props,
                                    const char* mods));
STATIC_OVL enum parser_error FDECL(tutorial_add_area_flags,
                                   (struct parser * p,
                                    struct tutorial_dict_val_type* val,
                                    bool clear));
STATIC_OVL enum parser_error FDECL(parse_archetype_block_start,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_note_block_start, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trigger_block_start,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_block_start,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_race, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_house, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_sex, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_character_name,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_history,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_experience,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_stats, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_skills, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_abilities,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_object, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_complex_object,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_artifact,
                                   (struct parser * p));
STATIC_OVL void FDECL(add_trigger_op,
                      (struct trigger_compiled_op * *c, int* n_c, int* a_c,
                       enum trigger_op_kind kind, int tval, int sval, int idx,
                       char* name));
STATIC_OVL int FDECL(get_drained_index, (const char* name));
STATIC_OVL enum parser_error FDECL(parse_trigger_condition,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_rows, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_columns, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_area_flag,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_clear_area_flag,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_start_note,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_trigger_or_section_death_note,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_note, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_trigger, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_gate, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_forge, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_object, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_complex_object,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_artifact, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_monster, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_trap, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_door, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_section_line, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_note_or_trigger_text,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_archetype_or_section_flags,
                                   (struct parser * p));
STATIC_OVL errr FDECL(tutorial_run_parser, (struct parser * p));
STATIC_OVL void FDECL(tutorial_parse_data, (void));
STATIC_OVL void FDECL(tutorial_cleanup_parsed_data, (void));
STATIC_OVL struct tutorial_section_sym_val* FDECL(
    tutorial_section_sym_table_has,
    (struct tutorial_section_sym_table t,
     const struct tutorial_section_sym_key* key));
STATIC_OVL struct tutorial_dict_val_type* FDECL(
    tutorial_dict_has,
    (struct tutorial_dict_type d, const struct tutorial_dict_key_type* key));
STATIC_OVL bool FDECL(tutorial_text_escaped,
                      (const char* cursor, const char* limit));
STATIC_OVL size_t FDECL(tutorial_copy_strip_escapes,
                        (char* dest, size_t sz, const char* src, size_t rd));
STATIC_OVL void FDECL(tutorial_cleanup_trigger_gate_map,
                      (struct tutorial_dict_val_type * **m));
STATIC_OVL struct parser* FDECL(tutorial_init_parser, (void));
STATIC_OVL errr FDECL(tutorial_finish_parser, (struct parser * p));
STATIC_OVL int FDECL(get_skill_abilities, (int skill));
STATIC_OVL void FDECL(bane_display, (struct menu * menu, int oid, bool cursor,
                                     int row, int col, int width));
STATIC_OVL bool FDECL(bane_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL bool FDECL(bane_menu, (void));
STATIC_OVL void FDECL(ability_display,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL bool FDECL(ability_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(ability_browser,
                      (int oid, void* data, const region* loc));
STATIC_OVL void FDECL(skill_display, (struct menu * menu, int oid, bool cursor,
                                      int row, int col, int width));
STATIC_OVL bool FDECL(skill_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(do_cmd_abilities, (void));
STATIC_OVL enum birth_stage FDECL(textui_birth_quickstart, (void));
STATIC_OVL void FDECL(birthmenu_display,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL int FDECL(stat_attr, (int adj));
STATIC_OVL void FDECL(race_help, (int i, void* db, const region* l));
STATIC_OVL void FDECL(house_help, (int i, void* db, const region* l));
STATIC_OVL void FDECL(sex_help, (int i, void* db, const region* l));
STATIC_OVL bool FDECL(use_context_menu_birth,
                      (struct menu * current_menu, const ui_event* in,
                       ui_event* out));
STATIC_OVL void FDECL(init_birth_menu,
                      (struct menu * menu, int n_choices, int initial_choice,
                       const region* reg, bool allow_random, browse_f aux));
STATIC_OVL void FDECL(setup_menus, (void));
STATIC_OVL void FDECL(setup_house_menu, (const struct player_race* r));
STATIC_OVL void FDECL(free_birth_menu, (struct menu * menu));
STATIC_OVL void FDECL(free_birth_menus, (void));
STATIC_OVL void FDECL(clear_question, (void));
STATIC_OVL void FDECL(print_menu_instructions, (void));
STATIC_OVL enum birth_stage FDECL(menu_question, (enum birth_stage current,
                                                  struct menu* current_menu,
                                                  cmd_code choice_command));
STATIC_OVL void FDECL(point_stats, (game_event_type type, game_event_data* data,
                                    void* user));
STATIC_OVL void FDECL(point_misc, (game_event_type type, game_event_data* data,
                                   void* user));
STATIC_OVL void FDECL(stat_points, (game_event_type type, game_event_data* data,
                                    void* user));
STATIC_OVL void FDECL(stat_points_start, (void));
STATIC_OVL void FDECL(stat_points_stop, (void));
STATIC_OVL enum birth_stage FDECL(stat_points_command, (void));
STATIC_OVL enum birth_stage FDECL(get_name_command, (void));
STATIC_OVL void FDECL(get_screen_loc,
                      (size_t cursor, int* x, int* y, size_t n_lines,
                       size_t* line_starts, size_t* line_lengths));
STATIC_OVL int FDECL(edit_text, (char* buffer, int buflen));
STATIC_OVL enum birth_stage FDECL(get_ahw_command, (void));
STATIC_OVL enum birth_stage FDECL(get_history_command, (void));
STATIC_OVL enum birth_stage FDECL(get_confirm_command, (void));
STATIC_OVL int FDECL(textui_do_birth, (void));
STATIC_OVL void FDECL(ui_enter_birthscreen,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(ui_leave_birthscreen,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(ui_init_birthstate_handlers, (void));
STATIC_OVL void FDECL(new_combat_round, (game_event_type type,
                                         game_event_data* data, void* user));
STATIC_OVL void FDECL(update_combat_rolls_attack,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_combat_rolls_damage,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(display_combat_rolls,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(do_cmd_redraw, (void));
STATIC_OVL void FDECL(do_cmd_xxx_options, (void));
STATIC_OVL void FDECL(do_cmd_unknown, (void));
STATIC_OVL void FDECL(do_cmd_version, (void));
STATIC_OVL void FDECL(textui_cmd_retire, (void));
STATIC_OVL void FDECL(textui_cmd_rest, (void));
STATIC_OVL void FDECL(textui_quit, (void));
STATIC_OVL void FDECL(write_html_escape_char,
                      (ang_file * fp, char* mbbuf, wchar_t c));
STATIC_OVL void FDECL(screenshot_term_query,
                      (int wid, int hgt, int x, int y, int* a, wchar_t* c));
STATIC_OVL void FDECL(html_screenshot,
                      (const char* path, int mode, term* other_term));
STATIC_OVL void FDECL(do_cmd_save_screen_html, (int mode, term* other_term));
STATIC_OVL void FDECL(do_cmd_save_screen, (void));
STATIC_OVL int FDECL(context_menu_player_2, (int mx, int my));
STATIC_OVL void FDECL(context_menu_player_display_floor, (void));
STATIC_OVL int FDECL(context_menu_player, (int mx, int my));
STATIC_OVL int FDECL(context_menu_cave, (struct chunk * c, int y, int x,
                                         int adjacent, int mx, int my));
STATIC_OVL int FDECL(context_menu_object, (struct object * obj));
STATIC_OVL int FDECL(show_command_list,
                     (struct cmd_info cmd_list[], int size, int mx, int my));
STATIC_OVL int FDECL(context_menu_command, (int mx, int my));
STATIC_OVL void FDECL(textui_process_click, (ui_event e));
STATIC_OVL void FDECL(cmd_sub_entry, (struct menu * menu, int oid, bool cursor,
                                      int row, int col, int width));
STATIC_OVL bool FDECL(cmd_menu,
                      (struct command_list * list, void* selection_p));
STATIC_OVL bool FDECL(cmd_list_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(cmd_list_entry, (struct menu * menu, int oid, bool cursor,
                                       int row, int col, int width));
STATIC_OVL struct cmd_info* FDECL(textui_action_menu_choose, (void));
STATIC_OVL void FDECL(display_exit_screen, (struct high_score * score));
STATIC_OVL void FDECL(death_scores, (const char* title, int row));
STATIC_OVL void FDECL(death_examine, (const char* title, int row));
STATIC_OVL void FDECL(death_dungeon, (const char* title, int row));
STATIC_OVL void FDECL(death_messages, (const char* title, int row));
STATIC_OVL void FDECL(death_info, (const char* title, int row));
STATIC_OVL void FDECL(death_history, (const char* title, int row));
STATIC_OVL void FDECL(death_note, (const char* title, int row));
STATIC_OVL void FDECL(death_file, (const char* title, int row));
STATIC_OVL void FDECL(death_spoilers, (const char* title, int row));
STATIC_OVL void FDECL(death_new_game, (const char* title, int row));
STATIC_OVL void FDECL(death_screen, (void));
STATIC_OVL int FDECL(prt_one_tmd, (int row, int col, int ind));
STATIC_OVL void FDECL(prt_field, (const char* info, int row, int col));
STATIC_OVL void FDECL(prt_name, (int row, int col));
STATIC_OVL void FDECL(prt_stat, (int stat, int row, int col));
STATIC_OVL void FDECL(prt_exp, (int row, int col));
STATIC_OVL void FDECL(prt_equippy, (int row, int col));
STATIC_OVL void FDECL(prt_mel, (int row, int col));
STATIC_OVL void FDECL(prt_arc, (int row, int col));
STATIC_OVL void FDECL(prt_evn, (int row, int col));
STATIC_OVL void FDECL(prt_hp, (int row, int col));
STATIC_OVL void FDECL(prt_sp, (int row, int col));
STATIC_OVL void FDECL(prt_song, (int row, int col));
STATIC_OVL uint8_t FDECL(health_attr, (int current, int max));
STATIC_OVL int FDECL(prt_health_aux, (int row, int col));
STATIC_OVL void FDECL(prt_health, (int row, int col));
STATIC_OVL void FDECL(prt_cut, (int row, int col));
STATIC_OVL void FDECL(prt_poisoned, (int row, int col));
STATIC_OVL void FDECL(prt_speed, (int row, int col));
STATIC_OVL void FDECL(prt_str, (int row, int col));
STATIC_OVL void FDECL(prt_dex, (int row, int col));
STATIC_OVL void FDECL(prt_con, (int row, int col));
STATIC_OVL void FDECL(prt_gra, (int row, int col));
STATIC_OVL int FDECL(prt_stat_short, (int stat, int row, int col));
STATIC_OVL int FDECL(prt_exp_short, (int row, int col));
STATIC_OVL int FDECL(prt_hp_short, (int row, int col));
STATIC_OVL int FDECL(prt_sp_short, (int row, int col));
STATIC_OVL int FDECL(prt_health_short, (int row, int col));
STATIC_OVL void FDECL(update_topbar,
                      (game_event_type type, game_event_data* data, void* user,
                       int row));
STATIC_OVL void FDECL(update_sidebar, (game_event_type type,
                                       game_event_data* data, void* user));
STATIC_OVL void FDECL(hp_colour_change, (game_event_type type,
                                         game_event_data* data, void* user));
STATIC_OVL size_t FDECL(prt_state, (int row, int col));
STATIC_OVL size_t FDECL(prt_light, (int row, int col));
STATIC_OVL int FDECL(longest_terrain_name, (void));
STATIC_OVL size_t FDECL(prt_terrain, (int row, int col));
STATIC_OVL size_t FDECL(prt_tmd, (int row, int col));
STATIC_OVL size_t FDECL(prt_unignore, (int row, int col));
STATIC_OVL size_t FDECL(prt_depth, (int row, int col));
STATIC_OVL void FDECL(update_statusline_aux, (int row, int col));
STATIC_OVL void FDECL(update_statusline, (game_event_type type,
                                          game_event_data* data, void* user));
STATIC_OVL void FDECL(update_maps, (game_event_type type, game_event_data* data,
                                    void* user));
STATIC_OVL void FDECL(do_animation, (void));
STATIC_OVL void FDECL(allow_animations, (void));
STATIC_OVL void FDECL(disallow_animations, (void));
STATIC_OVL void FDECL(animate, (game_event_type type, game_event_data* data,
                                void* user));
STATIC_OVL void FDECL(idle_update, (void));
STATIC_OVL void FDECL(bolt_pict, (int y, int x, int ny, int nx, int typ,
                                  uint8_t* a, wchar_t* c));
STATIC_OVL void FDECL(display_explosion, (game_event_type type,
                                          game_event_data* data, void* user));
STATIC_OVL void FDECL(display_bolt, (game_event_type type,
                                     game_event_data* data, void* user));
STATIC_OVL void FDECL(display_missile, (game_event_type type,
                                        game_event_data* data, void* user));
STATIC_OVL void FDECL(hit_pict, (int dam, int typ, bool fatal, uint8_t* a));
STATIC_OVL void FDECL(display_hit, (game_event_type type, game_event_data* data,
                                    void* user));
STATIC_OVL void FDECL(pause_with_text, (game_event_type type,
                                        game_event_data* data, void* user));
STATIC_OVL void FDECL(update_inven_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_equip_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(toggle_inven_equip, (void));
STATIC_OVL void FDECL(update_itemlist_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_monlist_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_monster_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_object_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_messages_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_minimap_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_player0_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_player1_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_topbar_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_player_compact_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(update_combat_rolls_subwindow,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(flush_subwindow, (game_event_type type,
                                        game_event_data* data, void* user));
STATIC_OVL void FDECL(subwindow_flag_changed,
                      (int win_idx, uint32_t flag, bool new_state));
STATIC_OVL void FDECL(subwindow_set_flags, (int win_idx, uint32_t new_flags));
STATIC_OVL void FDECL(subwindows_set_flags,
                      (uint32_t * new_flags, size_t n_subwindows));
STATIC_OVL void FDECL(init_angband_aux, (const char* why));
STATIC_OVL void FDECL(splashscreen_note, (game_event_type type,
                                          game_event_data* data, void* user));
STATIC_OVL void FDECL(show_splashscreen, (game_event_type type,
                                          game_event_data* data, void* user));
STATIC_OVL void FDECL(ui_refresh, (game_event_type type, game_event_data* data,
                                   void* user));
STATIC_OVL void FDECL(repeated_command_display,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(new_level_display_update,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(cheat_death, (game_event_type type, game_event_data* data,
                                    void* user));
STATIC_OVL void FDECL(check_panel, (game_event_type type, game_event_data* data,
                                    void* user));
STATIC_OVL void FDECL(see_floor_items, (game_event_type type,
                                        game_event_data* data, void* user));
STATIC_OVL void FDECL(process_character_pref_files, (void));
STATIC_OVL void FDECL(ui_enter_init, (game_event_type type,
                                      game_event_data* data, void* user));
STATIC_OVL void FDECL(ui_leave_init, (game_event_type type,
                                      game_event_data* data, void* user));
STATIC_OVL void FDECL(ui_enter_world, (game_event_type type,
                                       game_event_data* data, void* user));
STATIC_OVL void FDECL(ui_leave_world, (game_event_type type,
                                       game_event_data* data, void* user));
STATIC_OVL void FDECL(ui_enter_game, (game_event_type type,
                                      game_event_data* data, void* user));
STATIC_OVL void FDECL(ui_leave_game, (game_event_type type,
                                      game_event_data* data, void* user));
STATIC_OVL void FDECL(init_display, (void));
STATIC_OVL struct menu* FDECL(effect_menu_new, (struct effect * effect,
                                                int count, bool allow_random));
STATIC_OVL int FDECL(effect_menu_select,
                     (struct menu * m, const char* prompt, bool allow_random));
STATIC_OVL void FDECL(effect_menu_destroy, (struct menu * m));
STATIC_OVL int FDECL(textui_get_effect_from_list,
                     (const char* prompt, struct effect* effect, int count,
                      bool allow_random));
STATIC_OVL keycode_t FDECL(keycode_find_code, (const char* str, size_t len));
STATIC_OVL const char* FDECL(keycode_find_desc, (keycode_t kc));
STATIC_OVL bool FDECL(keycode_isprint, (keycode_t kc));
STATIC_OVL int FDECL(dehex, (char c));
STATIC_OVL void FDECL(keypress_from_text,
                      (struct keypress * buf, size_t len, const char* str));
STATIC_OVL void FDECL(keypress_to_text,
                      (char* buf, size_t len, const struct keypress* src,
                       bool expand_backslash));
STATIC_OVL void FDECL(keypress_to_readable,
                      (char* buf, size_t len, struct keypress src));
STATIC_OVL bool FDECL(char_matches_key, (wchar_t c, keycode_t key));
STATIC_OVL bool FDECL(event_is_key, (ui_event e, keycode_t key));
STATIC_OVL bool FDECL(event_is_mouse, (ui_event e, uint8_t button));
STATIC_OVL bool FDECL(event_is_mouse_m,
                      (ui_event e, uint8_t button, uint8_t mods));
STATIC_OVL void FDECL(cmd_init, (void));
STATIC_OVL unsigned char FDECL(cmd_lookup_key, (cmd_code lookup_cmd, int mode));
STATIC_OVL unsigned char FDECL(cmd_lookup_key_unktrl,
                               (cmd_code lookup_cmd, int mode));
STATIC_OVL cmd_code FDECL(cmd_lookup, (unsigned char key, int mode));
STATIC_OVL size_t FDECL(cmd_list_lookup_by_name, (const char* name));
STATIC_OVL void FDECL(textui_process_command, (void));
STATIC_OVL errr FDECL(textui_get_cmd, (cmd_context context));
STATIC_OVL void FDECL(check_for_player_interrupt,
                      (game_event_type type, game_event_data* data,
                       void* user));
STATIC_OVL void FDECL(pre_turn_refresh, (void));
STATIC_OVL bool FDECL(start_game, (bool new_game));
STATIC_OVL void FDECL(cleanup_savefile_selection_strings,
                      (char** entries, int count));
STATIC_OVL enum game_mode_type FDECL(select_savefile, (bool retry));
STATIC_OVL void FDECL(play_game, (enum game_mode_type mode));
STATIC_OVL void FDECL(savefile_set_name,
                      (const char* fname, bool make_safe, bool strip_suffix));
STATIC_OVL bool FDECL(savefile_name_already_used,
                      (const char* fname, bool make_safe, bool strip_suffix));
STATIC_OVL void FDECL(save_game, (void));
STATIC_OVL bool FDECL(save_game_checked, (void));
STATIC_OVL void FDECL(close_game, (bool prompt_failed_save));
STATIC_OVL bool FDECL(got_savefile, (savefile_getter * pg));
STATIC_OVL bool FDECL(got_savefile_dir, (const savefile_getter g));
STATIC_OVL const struct savefile_details* FDECL(get_savefile_details,
                                                (const savefile_getter g));
STATIC_OVL void FDECL(cleanup_savefile_getter, (savefile_getter g));
STATIC_OVL void FDECL(string_lower, (char* buf));
STATIC_OVL bool FDECL(show_file,
                      (const char* name, const char* what, int line, int mode));
STATIC_OVL void FDECL(do_cmd_help, (void));
STATIC_OVL void FDECL(print_history_header, (void));
STATIC_OVL void FDECL(history_display, (void));
STATIC_OVL void FDECL(dump_history, (ang_file * file));
STATIC_OVL void FDECL(textui_init, (void));
STATIC_OVL void FDECL(textui_cleanup, (void));
STATIC_OVL void FDECL(flush, (game_event_type unused, game_event_data* data,
                              void* user));
STATIC_OVL ui_event FDECL(inkey_aux, (int scan_cutoff));
STATIC_OVL ui_event FDECL(inkey_ex, (void));
STATIC_OVL void FDECL(anykey, (void));
STATIC_OVL struct keypress FDECL(inkey, (void));
STATIC_OVL ui_event FDECL(inkey_m, (void));
STATIC_OVL void FDECL(msg_flush, (int x));
STATIC_OVL void FDECL(msg_flush_split_existing, (int w, int* x));
STATIC_OVL void FDECL(display_message, (game_event_type unused,
                                        game_event_data* data, void* user));
STATIC_OVL void FDECL(bell_message, (game_event_type unused,
                                     game_event_data* data, void* user));
STATIC_OVL void FDECL(message_flush, (game_event_type unused,
                                      game_event_data* data, void* user));
STATIC_OVL void FDECL(clear_from, (int row));
STATIC_OVL bool FDECL(askfor_aux_keypress,
                      (char* buf, size_t buflen, size_t* curs, size_t* len,
                       struct keypress keypress, bool firsttime));
STATIC_OVL int FDECL(askfor_aux_mouse,
                     (char* buf, size_t buflen, size_t* curs, size_t* len,
                      struct mouseclick mouse, bool firsttime));
STATIC_OVL bool FDECL(askfor_aux,
                      (char* buf, size_t len,
                       bool (*keypress_h)(char*, size_t, size_t*, size_t*,
                                          struct keypress, bool)));
STATIC_OVL bool FDECL(
    askfor_aux_ext,
    (char* buf, size_t len,
     bool (*keypress_h)(char*, size_t, size_t*, size_t*, struct keypress, bool),
     int (*mouse_h)(char*, size_t, size_t*, size_t*, struct mouseclick, bool)));
STATIC_OVL bool FDECL(get_name_keypress,
                      (char* buf, size_t buflen, size_t* curs, size_t* len,
                       struct keypress keypress, bool firsttime));
STATIC_OVL int FDECL(handle_name_mouse,
                     (char* buf, size_t buflen, size_t* curs, size_t* len,
                      struct mouseclick mouse, bool firsttime));
STATIC_OVL bool FDECL(get_character_name, (char* buf, size_t buflen));
STATIC_OVL bool FDECL(textui_get_string,
                      (const char* prompt, char* buf, size_t len));
STATIC_OVL int FDECL(textui_get_quantity, (const char* prompt, int max));
STATIC_OVL bool FDECL(textui_get_check, (const char* prompt));
STATIC_OVL char FDECL(get_char, (const char* prompt, const char* options,
                                 size_t len, char fallback));
STATIC_OVL bool FDECL(get_file_text,
                      (const char* suggested_name, char* path, size_t len));
STATIC_OVL bool FDECL(textui_get_com, (const char* prompt, char* command));
STATIC_OVL bool FDECL(get_com_ex, (const char* prompt, ui_event* command));
STATIC_OVL void FDECL(pause_line, (struct term * tm));
STATIC_OVL bool FDECL(textui_get_rep_dir, (int* dp, bool allow_5));
STATIC_OVL bool FDECL(textui_get_aim_dir, (int* dp, int range));
STATIC_OVL void FDECL(textui_input_init, (void));
STATIC_OVL int FDECL(textui_get_count, (void));
STATIC_OVL ui_event FDECL(textui_get_command, (int* count));
STATIC_OVL bool FDECL(key_confirm_command, (unsigned char c));
STATIC_OVL bool FDECL(textui_process_key,
                      (struct keypress kp, unsigned char* c, int count));
STATIC_OVL const struct keypress* FDECL(keymap_find,
                                        (int keymap, struct keypress kc));
STATIC_OVL struct keypress* FDECL(keymap_make,
                                  (const struct keypress* actions));
STATIC_OVL void FDECL(keymap_add, (int keymap, struct keypress trigger,
                                   struct keypress* actions, bool user));
STATIC_OVL bool FDECL(keymap_remove, (int keymap, struct keypress trigger));
STATIC_OVL void FDECL(keymap_free, (void));
STATIC_OVL void FDECL(keymap_dump, (ang_file * fff));
STATIC_OVL int FDECL(default_item_id, (int oid));
STATIC_OVL int FDECL(default_group_id, (int oid));
STATIC_OVL int FDECL(feat_order, (int feat));
STATIC_OVL int FDECL(actual_width, (int width));
STATIC_OVL int FDECL(actual_height, (int height));
STATIC_OVL int FDECL(logical_width, (int width));
STATIC_OVL int FDECL(logical_height, (int height));
STATIC_OVL void FDECL(display_tiles, (int col, int row, int height, int width,
                                      uint8_t attr_top, wchar_t char_left));
STATIC_OVL void FDECL(place_tile_cursor,
                      (int col, int row, uint8_t a, wchar_t c, uint8_t attr_top,
                       wchar_t char_left));
STATIC_OVL void FDECL(remove_tiles, (int col, int row, bool* picker_ptr,
                                     int width, int height));
STATIC_OVL bool FDECL(tile_picker_command,
                      (ui_event ke, bool* tile_picker_ptr, int height,
                       int width, uint8_t* attr_top_ptr, wchar_t* char_left_ptr,
                       uint8_t* cur_attr_ptr, wchar_t* cur_char_ptr, int col,
                       int row, int* delay));
STATIC_OVL void FDECL(display_glyphs, (int col, int row, int height, int width,
                                       uint8_t a, wchar_t c));
STATIC_OVL bool FDECL(glyph_command,
                      (ui_event ke, bool* glyph_picker_ptr, int height,
                       int width, uint8_t* cur_attr_ptr, wchar_t* cur_char_ptr,
                       int col, int row));
STATIC_OVL void FDECL(display_group_member,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int wid));
STATIC_OVL const char* FDECL(recall_prompt, (int oid));
STATIC_OVL void FDECL(display_knowledge,
                      (const char* title, int* obj_list, int o_count,
                       group_funcs g_funcs, member_funcs o_funcs,
                       const char* otherfields));
STATIC_OVL void FDECL(display_monster,
                      (int col, int row, bool cursor, int oid));
STATIC_OVL int FDECL(m_cmp_race, (const void* a, const void* b));
STATIC_OVL wchar_t* FDECL(m_xchar, (int oid));
STATIC_OVL uint8_t* FDECL(m_xattr, (int oid));
STATIC_OVL const char* FDECL(race_name, (int gid));
STATIC_OVL void FDECL(mon_lore, (int oid));
STATIC_OVL void FDECL(mon_summary, (int gid, const int* item_list, int n,
                                    int top, int row, int col));
STATIC_OVL int FDECL(count_known_monsters, (void));
STATIC_OVL void FDECL(do_cmd_knowledge_monsters, (const char* name, int row));
STATIC_OVL void FDECL(get_artifact_display_name,
                      (char* o_name, size_t namelen, int a_idx));
STATIC_OVL void FDECL(display_artifact,
                      (int col, int row, bool cursor, int oid));
STATIC_OVL struct object* FDECL(find_artifact, (struct artifact * artifact));
STATIC_OVL void FDECL(desc_art_fake, (int a_idx));
STATIC_OVL int FDECL(a_cmp_tval, (const void* a, const void* b));
STATIC_OVL const char* FDECL(kind_name, (int gid));
STATIC_OVL int FDECL(art2gid, (int oid));
STATIC_OVL bool FDECL(artifact_is_known, (int a_idx));
STATIC_OVL int FDECL(collect_known_artifacts,
                     (int* artifacts, size_t artifacts_len));
STATIC_OVL void FDECL(do_cmd_knowledge_artifacts, (const char* name, int row));
STATIC_OVL const char* FDECL(ego_grp_name, (int gid));
STATIC_OVL void FDECL(display_ego_item,
                      (int col, int row, bool cursor, int oid));
STATIC_OVL void FDECL(desc_ego_fake, (int oid));
STATIC_OVL int FDECL(e_cmp_tval, (const void* a, const void* b));
STATIC_OVL void FDECL(do_cmd_knowledge_ego_items, (const char* name, int row));
STATIC_OVL void FDECL(display_object, (int col, int row, bool cursor, int oid));
STATIC_OVL void FDECL(desc_obj_fake, (int k_idx));
STATIC_OVL int FDECL(o_cmp_tval, (const void* a, const void* b));
STATIC_OVL int FDECL(obj2gid, (int oid));
STATIC_OVL wchar_t* FDECL(o_xchar, (int oid));
STATIC_OVL uint8_t* FDECL(o_xattr, (int oid));
STATIC_OVL const char* FDECL(o_xtra_prompt, (int oid));
STATIC_OVL void FDECL(o_xtra_act, (struct keypress ch, int oid));
STATIC_OVL void FDECL(textui_browse_object_knowledge,
                      (const char* name, int row));
STATIC_OVL void FDECL(display_rune, (int col, int row, bool cursor, int oid));
STATIC_OVL const char* FDECL(rune_var_name, (int gid));
STATIC_OVL int FDECL(rune_var, (int oid));
STATIC_OVL void FDECL(rune_lore, (int oid));
STATIC_OVL const char* FDECL(rune_xtra_prompt, (int oid));
STATIC_OVL void FDECL(rune_xtra_act, (struct keypress ch, int oid));
STATIC_OVL void FDECL(do_cmd_knowledge_runes, (const char* name, int row));
STATIC_OVL void FDECL(display_feature,
                      (int col, int row, bool cursor, int oid));
STATIC_OVL int FDECL(f_cmp_fkind, (const void* a, const void* b));
STATIC_OVL const char* FDECL(fkind_name, (int gid));
STATIC_OVL uint8_t* FDECL(f_xattr, (int oid));
STATIC_OVL wchar_t* FDECL(f_xchar, (int oid));
STATIC_OVL void FDECL(feat_lore, (int oid));
STATIC_OVL const char* FDECL(feat_prompt, (int oid));
STATIC_OVL void FDECL(f_xtra_act, (struct keypress ch, int oid));
STATIC_OVL void FDECL(do_cmd_knowledge_features, (const char* name, int row));
STATIC_OVL void FDECL(display_trap, (int col, int row, bool cursor, int oid));
STATIC_OVL int FDECL(trap_order, (int trap));
STATIC_OVL int FDECL(t_cmp_tkind, (const void* a, const void* b));
STATIC_OVL const char* FDECL(tkind_name, (int gid));
STATIC_OVL uint8_t* FDECL(t_xattr, (int oid));
STATIC_OVL wchar_t* FDECL(t_xchar, (int oid));
STATIC_OVL void FDECL(trap_lore, (int oid));
STATIC_OVL const char* FDECL(trap_prompt, (int oid));
STATIC_OVL void FDECL(t_xtra_act, (struct keypress ch, int oid));
STATIC_OVL void FDECL(do_cmd_knowledge_traps, (const char* name, int row));
STATIC_OVL enum parser_error FDECL(parse_monster_category, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mcat_include_base,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mcat_include_flag,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_mcat_include_glyph,
                                   (struct parser * p));
STATIC_OVL struct parser* FDECL(init_ui_knowledge_parser, (void));
STATIC_OVL errr FDECL(run_ui_knowledge_parser, (struct parser * p));
STATIC_OVL errr FDECL(finish_ui_knowledge_parser, (struct parser * p));
STATIC_OVL void FDECL(cleanup_ui_knowledge_parsed_data, (void));
STATIC_OVL void FDECL(do_cmd_knowledge_scores, (const char* name, int row));
STATIC_OVL void FDECL(do_cmd_knowledge_history, (const char* name, int row));
STATIC_OVL void FDECL(textui_knowledge_init, (void));
STATIC_OVL void FDECL(textui_knowledge_cleanup, (void));
STATIC_OVL void FDECL(textui_browse_knowledge, (void));
STATIC_OVL void FDECL(do_cmd_message_one, (void));
STATIC_OVL void FDECL(do_cmd_messages, (void));
STATIC_OVL void FDECL(do_cmd_inven, (void));
STATIC_OVL void FDECL(do_cmd_equip, (void));
STATIC_OVL void FDECL(do_cmd_look, (void));
STATIC_OVL void FDECL(do_cmd_locate, (void));
STATIC_OVL int FDECL(cmp_level, (const void* a, const void* b));
STATIC_OVL int FDECL(cmp_tkill, (const void* a, const void* b));
STATIC_OVL int FDECL(cmp_pkill, (const void* a, const void* b));
STATIC_OVL int FDECL(cmp_monsters, (const void* a, const void* b));
STATIC_OVL void FDECL(lookup_symbol, (char sym, char* buf, size_t max));
STATIC_OVL void FDECL(do_cmd_query_symbol, (void));
STATIC_OVL void FDECL(do_cmd_center_map, (void));
STATIC_OVL void FDECL(do_cmd_monlist, (void));
STATIC_OVL void FDECL(do_cmd_itemlist, (void));
STATIC_OVL void FDECL(hallucinatory_monster, (int midx, int* a, wchar_t* c));
STATIC_OVL void FDECL(image_monster, (int* a, wchar_t* c));
STATIC_OVL void FDECL(image_object, (int* a, wchar_t* c));
STATIC_OVL void FDECL(get_trap_graphics, (struct chunk * c, struct grid_data* g,
                                          int* a, wchar_t* w));
STATIC_OVL void FDECL(grid_get_attr, (struct grid_data * g, int* a));
STATIC_OVL void FDECL(grid_data_as_text, (struct grid_data * g, int* ap,
                                          wchar_t* cp, int* tap, wchar_t* tcp));
STATIC_OVL void FDECL(get_minimap_dimensions,
                      (term * t, const struct chunk* c, int tw, int th, int* mw,
                       int* mh));
STATIC_OVL void FDECL(move_cursor_relative_map, (int y, int x));
STATIC_OVL void FDECL(move_cursor_relative, (int y, int x));
STATIC_OVL void FDECL(print_rel_map, (wchar_t c, uint8_t a, int y, int x));
STATIC_OVL void FDECL(print_rel, (wchar_t c, uint8_t a, int y, int x));
STATIC_OVL void FDECL(prt_map_aux, (void));
STATIC_OVL void FDECL(prt_map, (void));
STATIC_OVL void FDECL(display_map, (int* cy, int* cx));
STATIC_OVL void FDECL(do_cmd_view_map, (void));
STATIC_OVL void FDECL(mini_screenshot, (game_event_type type,
                                        game_event_data* data, void* user));
STATIC_OVL void FDECL(prt_mini_screenshot, (int col, int row));
STATIC_OVL void FDECL(file_mini_screenshot, (ang_file * fff));
STATIC_OVL void FDECL(display_action_aux, (menu_action * act, uint8_t color,
                                           int row, int col, int wid));
STATIC_OVL char FDECL(menu_action_tag, (struct menu * m, int oid));
STATIC_OVL int FDECL(menu_action_valid, (struct menu * m, int oid));
STATIC_OVL void FDECL(menu_action_display,
                      (struct menu * m, int oid, bool cursor, int row, int col,
                       int width));
STATIC_OVL bool FDECL(menu_action_handle,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(display_string, (struct menu * m, int oid, bool cursor,
                                       int row, int col, int width));
STATIC_OVL bool FDECL(handle_string,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL int FDECL(scrolling_get_cursor,
                     (int row, int col, int n, int top, region* loc));
STATIC_OVL void FDECL(display_scrolling,
                      (struct menu * menu, int cursor, int* top, region* loc));
STATIC_OVL char FDECL(scroll_get_tag, (struct menu * menu, int pos));
STATIC_OVL ui_event FDECL(scroll_process_direction, (struct menu * m, int dir));
STATIC_OVL int FDECL(object_skin_get_cursor,
                     (int row, int col, int n, int top, region* loc));
STATIC_OVL void FDECL(object_skin_display,
                      (struct menu * menu, int cursor, int* top, region* loc));
STATIC_OVL char FDECL(object_skin_get_tag, (struct menu * menu, int pos));
STATIC_OVL ui_event FDECL(object_skin_process_direction,
                          (struct menu * m, int dir));
STATIC_OVL int FDECL(columns_get_cursor,
                     (int row, int col, int n, int top, region* loc));
STATIC_OVL void FDECL(display_columns,
                      (struct menu * menu, int cursor, int* top, region* loc));
STATIC_OVL char FDECL(column_get_tag, (struct menu * menu, int pos));
STATIC_OVL ui_event FDECL(column_process_direction, (struct menu * m, int dir));
STATIC_OVL bool FDECL(is_valid_row, (struct menu * menu, int cursor));
STATIC_OVL bool FDECL(no_valid_row, (struct menu * menu, int count));
STATIC_OVL int FDECL(get_cursor_key,
                     (struct menu * menu, int top, struct keypress key));
STATIC_OVL menu_row_style_t FDECL(menu_row_style_for_validity,
                                  (menu_row_validity_t row_valid));
STATIC_OVL void FDECL(display_menu_row,
                      (struct menu * menu, int pos, int top, bool cursor,
                       int row, int col, int width));
STATIC_OVL void FDECL(menu_refresh, (struct menu * menu, bool reset_screen));
STATIC_OVL bool FDECL(menu_handle_mouse,
                      (struct menu * menu, const ui_event* in, ui_event* out));
STATIC_OVL bool FDECL(menu_handle_action,
                      (struct menu * m, const ui_event* in));
STATIC_OVL bool FDECL(menu_handle_keypress,
                      (struct menu * menu, const ui_event* in, ui_event* out));
STATIC_OVL ui_event FDECL(menu_select,
                          (struct menu * menu, int notify, bool popup));
STATIC_OVL const menu_iter* FDECL(menu_find_iter, (menu_iter_id id));
STATIC_OVL const menu_skin* FDECL(menu_find_skin, (skin_id id));
STATIC_OVL void FDECL(menu_set_filter,
                      (struct menu * menu, const int filter_list[], int n));
STATIC_OVL void FDECL(menu_release_filter, (struct menu * menu));
STATIC_OVL void FDECL(menu_ensure_cursor_valid, (struct menu * m));
STATIC_OVL bool FDECL(menu_calc_size, (struct menu * menu));
STATIC_OVL bool FDECL(menu_layout, (struct menu * m, const region* loc));
STATIC_OVL void FDECL(menu_setpriv,
                      (struct menu * menu, int count, void* data));
STATIC_OVL void* FDECL(menu_priv, (struct menu * menu));
STATIC_OVL void FDECL(menu_init,
                      (struct menu * menu, skin_id id, const menu_iter* iter));
STATIC_OVL struct menu* FDECL(menu_new, (skin_id id, const menu_iter* iter));
STATIC_OVL struct menu* FDECL(menu_new_action, (menu_action * acts, size_t n));
STATIC_OVL void FDECL(menu_free, (struct menu * m));
STATIC_OVL void FDECL(menu_set_cursor_x_offset, (struct menu * m, int offset));
STATIC_OVL int FDECL(dynamic_valid, (struct menu * m, int oid));
STATIC_OVL void FDECL(dynamic_display, (struct menu * m, int oid, bool cursor,
                                        int row, int col, int width));
STATIC_OVL struct menu* FDECL(menu_dynamic_new, (void));
STATIC_OVL void FDECL(menu_dynamic_add_valid,
                      (struct menu * m, const char* text, int value,
                       menu_row_validity_t valid));
STATIC_OVL void FDECL(menu_dynamic_add,
                      (struct menu * m, const char* text, int value));
STATIC_OVL void FDECL(menu_dynamic_add_label_valid,
                      (struct menu * m, const char* text, const char label,
                       int value, char* label_list, menu_row_validity_t valid));
STATIC_OVL void FDECL(menu_dynamic_add_label,
                      (struct menu * m, const char* text, const char label,
                       int value, char* label_list));
STATIC_OVL size_t FDECL(menu_dynamic_longest_entry, (struct menu * m));
STATIC_OVL void FDECL(menu_dynamic_calc_location,
                      (struct menu * m, int mx, int my));
STATIC_OVL int FDECL(menu_dynamic_select, (struct menu * m));
STATIC_OVL void FDECL(menu_dynamic_free, (struct menu * m));
STATIC_OVL void FDECL(monster_list_format_section,
                      (const monster_list_t* list, textblock* tb,
                       monster_list_section_t section, int lines_to_display,
                       int max_width, const char* prefix, bool show_others,
                       size_t* max_width_result));
STATIC_OVL bool FDECL(monster_list_format_special,
                      (const monster_list_t* list, textblock* tb, int max_lines,
                       int max_width, size_t* max_height_result,
                       size_t* max_width_result));
STATIC_OVL void FDECL(monster_list_format_textblock,
                      (const monster_list_t* list, textblock* tb, int max_lines,
                       int max_width, size_t* max_height_result,
                       size_t* max_width_result));
STATIC_OVL void FDECL(monster_list_get_glyphs, (monster_list_t * list));
STATIC_OVL void FDECL(monster_list_show_subwindow, (int height, int width));
STATIC_OVL void FDECL(monster_list_show_interactive, (int height, int width));
STATIC_OVL void FDECL(monster_list_force_subwindow_update, (void));
STATIC_OVL void FDECL(lore_title,
                      (textblock * tb, const struct monster_race* race));
STATIC_OVL void FDECL(lore_description,
                      (textblock * tb, const struct monster_race* race,
                       const struct monster_lore* original_lore,
                       bool spoilers));
STATIC_OVL void FDECL(lore_show_interactive, (const struct monster_race* race,
                                              const struct monster_lore* lore));
STATIC_OVL void FDECL(lore_show_subwindow, (const struct monster_race* race,
                                            const struct monster_lore* lore));
STATIC_OVL void FDECL(object_list_format_section,
                      (const object_list_t* list, textblock* tb,
                       object_list_section_t section, int lines_to_display,
                       int max_width, const char* prefix, bool show_others,
                       size_t* max_width_result));
STATIC_OVL bool FDECL(object_list_format_special,
                      (const object_list_t* list, textblock* tb, int max_lines,
                       int max_width, size_t* max_height_result,
                       size_t* max_width_result));
STATIC_OVL void FDECL(object_list_format_textblock,
                      (const object_list_t* list, textblock* tb, int max_lines,
                       int max_width, size_t* max_height_result,
                       size_t* max_width_result));
STATIC_OVL void FDECL(object_list_show_subwindow, (int height, int width));
STATIC_OVL void FDECL(object_list_show_interactive, (int height, int width));
STATIC_OVL bool FDECL(use_flavor_glyph, (const struct object_kind* kind));
STATIC_OVL uint8_t FDECL(object_kind_attr, (const struct object_kind* kind));
STATIC_OVL wchar_t FDECL(object_kind_char, (const struct object_kind* kind));
STATIC_OVL uint8_t FDECL(object_attr, (const struct object* obj));
STATIC_OVL wchar_t FDECL(object_char, (const struct object* obj));
STATIC_OVL void FDECL(show_obj, (int obj_num, int row, int col, bool cursor,
                                 olist_detail_t mode));
STATIC_OVL void FDECL(wipe_obj_list, (void));
STATIC_OVL void FDECL(build_obj_list,
                      (int last, struct object** list, item_tester tester,
                       olist_detail_t mode));
STATIC_OVL void FDECL(set_obj_names, (bool terse, const struct player* p));
STATIC_OVL void FDECL(show_obj_list, (olist_detail_t mode));
STATIC_OVL void FDECL(show_inven, (int mode, item_tester tester));
STATIC_OVL void FDECL(show_equip, (int mode, item_tester tester));
STATIC_OVL void FDECL(show_floor, (struct object * *floor_list, int floor_num,
                                   int mode, item_tester tester));
STATIC_OVL bool FDECL(get_item_allow,
                      (const struct object* obj, unsigned char ch, cmd_code cmd,
                       bool is_harmless));
STATIC_OVL bool FDECL(get_tag,
                      (struct object * *tagged_obj, char tag, cmd_code cmd));
STATIC_OVL void FDECL(menu_header, (void));
STATIC_OVL char FDECL(get_item_tag, (struct menu * menu, int oid));
STATIC_OVL int FDECL(get_item_validity, (struct menu * menu, int oid));
STATIC_OVL void FDECL(get_item_display,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL bool FDECL(get_item_action,
                      (struct menu * menu, const ui_event* event, int oid));
STATIC_OVL struct object* FDECL(item_menu,
                                (cmd_code cmd, int prompt_size, int mode));
STATIC_OVL bool FDECL(textui_get_item,
                      (struct object * *choice, const char* pmt,
                       const char* str, cmd_code cmd, item_tester tester,
                       int mode));
STATIC_OVL void FDECL(display_object_recall, (struct object * obj));
STATIC_OVL void FDECL(display_object_kind_recall, (struct object_kind * kind));
STATIC_OVL void FDECL(display_object_recall_interactive, (struct object * obj));
STATIC_OVL void FDECL(textui_obj_examine, (void));
STATIC_OVL void FDECL(textui_cmd_ignore_menu, (struct object * obj));
STATIC_OVL void FDECL(textui_cmd_ignore, (void));
STATIC_OVL void FDECL(textui_cmd_toggle_ignore, (void));
STATIC_OVL bool FDECL(get_pref_path,
                      (const char* what, int row, char* buf, size_t max));
STATIC_OVL void FDECL(dump_pref_file,
                      (void (*dump)(ang_file*), const char* title, int row));
STATIC_OVL void FDECL(option_toggle_display,
                      (struct menu * m, int oid, bool cursor, int row, int col,
                       int width));
STATIC_OVL bool FDECL(option_toggle_handle,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL bool FDECL(use_option_context_menu,
                      (struct menu * m, const ui_event* in, ui_event* out));
STATIC_OVL void FDECL(option_toggle_menu, (const char* name, int page));
STATIC_OVL void FDECL(do_cmd_options_birth, (void));
STATIC_OVL void FDECL(do_cmd_options_win, (const char* name, int row));
STATIC_OVL struct keypress FDECL(keymap_get_trigger, (void));
STATIC_OVL void FDECL(ui_keymap_pref_load, (const char* title, int row));
STATIC_OVL void FDECL(ui_keymap_pref_append, (const char* title, int row));
STATIC_OVL void FDECL(ui_keymap_query, (const char* title, int row));
STATIC_OVL void FDECL(ui_keymap_create, (const char* title, int row));
STATIC_OVL void FDECL(ui_keymap_remove, (const char* title, int row));
STATIC_OVL void FDECL(keymap_browse_hook,
                      (int oid, void* db, const region* loc));
STATIC_OVL void FDECL(do_cmd_keymaps, (const char* title, int row));
STATIC_OVL void FDECL(visuals_pref_load, (const char* title, int row));
STATIC_OVL void FDECL(visuals_dump_monsters, (const char* title, int row));
STATIC_OVL void FDECL(visuals_dump_objects, (const char* title, int row));
STATIC_OVL void FDECL(visuals_dump_features, (const char* title, int row));
STATIC_OVL void FDECL(visuals_dump_flavors, (const char* title, int row));
STATIC_OVL void FDECL(visuals_reset, (const char* title, int row));
STATIC_OVL void FDECL(visuals_browse_hook,
                      (int oid, void* db, const region* loc));
STATIC_OVL void FDECL(do_cmd_visuals, (const char* title, int row));
STATIC_OVL void FDECL(colors_pref_load, (const char* title, int row));
STATIC_OVL void FDECL(colors_pref_dump, (const char* title, int row));
STATIC_OVL void FDECL(colors_modify, (const char* title, int row));
STATIC_OVL void FDECL(colors_browse_hook,
                      (int oid, void* db, const region* loc));
STATIC_OVL void FDECL(do_cmd_colors, (const char* title, int row));
STATIC_OVL bool FDECL(askfor_aux_numbers,
                      (char* buf, size_t buflen, size_t* curs, size_t* len,
                       struct keypress keypress, bool firsttime));
STATIC_OVL void FDECL(do_cmd_delay, (const char* name, int unused));
STATIC_OVL void FDECL(do_cmd_sidebar_mode, (const char* name, int unused));
STATIC_OVL void FDECL(do_cmd_hp_warn, (const char* name, int unused));
STATIC_OVL void FDECL(do_cmd_lazymove_delay, (const char* name, int unused));
STATIC_OVL void FDECL(do_cmd_pref_file_hack, (long row));
STATIC_OVL void FDECL(do_dump_options, (const char* title, int row));
STATIC_OVL void FDECL(do_dump_autoinsc, (const char* title, int row));
STATIC_OVL void FDECL(options_load_pref_file, (const char* n, int row));
STATIC_OVL const char* FDECL(strip_ego_name, (const char* name));
STATIC_OVL int FDECL(ego_item_name,
                     (char* buf, size_t buf_size, struct ego_desc* desc));
STATIC_OVL int FDECL(ego_comp_func, (const void* a_ptr, const void* b_ptr));
STATIC_OVL void FDECL(ego_display, (struct menu * menu, int oid, bool cursor,
                                    int row, int col, int width));
STATIC_OVL bool FDECL(ego_action,
                      (struct menu * menu, const ui_event* event, int oid));
STATIC_OVL void FDECL(ego_menu, (const char* unused, int also_unused));
STATIC_OVL int FDECL(cmp_ignore, (const void* a, const void* b));
STATIC_OVL int FDECL(quality_validity, (struct menu * menu, int oid));
STATIC_OVL void FDECL(quality_display,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL void FDECL(quality_subdisplay,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL bool FDECL(quality_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(quality_menu, (const char* unused, int also_unused));
STATIC_OVL bool FDECL(ignore_tval, (int tval));
STATIC_OVL void FDECL(ignore_sval_menu_display,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL bool FDECL(ignore_sval_menu_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL int FDECL(ignore_collect_kind, (int tval, ignore_choice** ch));
STATIC_OVL bool FDECL(sval_menu, (int tval, const char* desc));
STATIC_OVL bool FDECL(seen_tval, (int tval));
STATIC_OVL char FDECL(tag_options_item, (struct menu * menu, int oid));
STATIC_OVL int FDECL(valid_options_item, (struct menu * menu, int oid));
STATIC_OVL void FDECL(display_options_item,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL bool FDECL(handle_options_item,
                      (struct menu * menu, const ui_event* event, int oid));
STATIC_OVL void FDECL(do_cmd_options_item, (const char* title, int row));
STATIC_OVL void FDECL(do_cmd_options, (void));
STATIC_OVL void FDECL(cleanup_options, (void));
STATIC_OVL region FDECL(region_calculate, (region loc));
STATIC_OVL void FDECL(region_erase_bordered, (const region* loc));
STATIC_OVL void FDECL(region_erase, (const region* loc));
STATIC_OVL bool FDECL(region_inside, (const region* loc, const ui_event* key));
STATIC_OVL void FDECL(display_area,
                      (const wchar_t* text, const int* attrs,
                       size_t* line_starts, size_t* line_lengths,
                       size_t n_lines, region area, size_t line_from));
STATIC_OVL void FDECL(textui_textblock_place,
                      (textblock * tb, region orig_area, const char* header));
STATIC_OVL struct keypress FDECL(textui_textblock_show,
                                 (textblock * tb, region orig_area,
                                  const char* header));
STATIC_OVL void FDECL(text_out_to_screen, (int a, const char* str));
STATIC_OVL void FDECL(c_put_str,
                      (uint8_t attr, const char* str, int row, int col));
STATIC_OVL void FDECL(put_str, (const char* str, int row, int col));
STATIC_OVL void FDECL(c_prt, (uint8_t attr, const char* str, int row, int col));
STATIC_OVL void FDECL(prt, (const char* str, int row, int col));
STATIC_OVL void FDECL(screen_save, (void));
STATIC_OVL void FDECL(screen_load, (void));
STATIC_OVL void FDECL(screen_load_all, (void));
STATIC_OVL bool FDECL(textui_map_is_visible, (void));
STATIC_OVL void FDECL(window_make,
                      (int origin_x, int origin_y, int end_x, int end_y));
STATIC_OVL bool FDECL(panel_should_modify, (term * t, int wy, int wx));
STATIC_OVL bool FDECL(modify_panel, (term * t, int wy, int wx));
STATIC_OVL void FDECL(verify_panel_int, (bool centered, bool avoid_center));
STATIC_OVL bool FDECL(change_panel, (int dir));
STATIC_OVL void FDECL(verify_panel, (void));
STATIC_OVL void FDECL(center_panel, (void));
STATIC_OVL void FDECL(textui_get_panel,
                      (int* min_y, int* min_x, int* max_y, int* max_x));
STATIC_OVL bool FDECL(textui_panel_contains, (unsigned int y, unsigned int x));
STATIC_OVL struct panel* FDECL(panel_allocate, (int n));
STATIC_OVL void FDECL(panel_free, (struct panel * p));
STATIC_OVL void FDECL(panel_line, (struct panel * p, uint8_t attr,
                                   const char* label, const char* fmt, ...));
STATIC_OVL void FDECL(panel_space, (struct panel * p));
STATIC_OVL void FDECL(display_player_stat_info, (void));
STATIC_OVL void FDECL(display_player_skill_info, (void));
STATIC_OVL void FDECL(display_panel, (const struct panel* p, bool left_adj,
                                      const region* bounds));
STATIC_OVL uint8_t FDECL(max_color, (int val, int max));
STATIC_OVL struct panel* FDECL(get_panel_topleft, (void));
STATIC_OVL struct panel* FDECL(get_panel_midleft, (void));
STATIC_OVL struct panel* FDECL(get_panel_combat, (void));
STATIC_OVL struct panel* FDECL(get_panel_misc, (void));
STATIC_OVL void FDECL(display_player_xtra_info, (void));
STATIC_OVL void FDECL(display_player, (int mode));
STATIC_OVL void FDECL(write_character_dump, (ang_file * fff));
STATIC_OVL bool FDECL(dump_save, (const char* path));
STATIC_OVL void FDECL(do_cmd_change_name, (void));
STATIC_OVL void FDECL(remove_old_dump,
                      (const char* cur_fname, const char* mark));
STATIC_OVL void FDECL(pref_header, (ang_file * fff, const char* mark));
STATIC_OVL void FDECL(pref_footer, (ang_file * fff, const char* mark));
STATIC_OVL void FDECL(dump_monsters, (ang_file * fff));
STATIC_OVL void FDECL(dump_objects, (ang_file * fff));
STATIC_OVL void FDECL(dump_autoinscriptions, (ang_file * f));
STATIC_OVL void FDECL(dump_features, (ang_file * fff));
STATIC_OVL void FDECL(dump_flavors, (ang_file * fff));
STATIC_OVL void FDECL(dump_colors, (ang_file * fff));
STATIC_OVL void FDECL(option_dump, (ang_file * fff));
STATIC_OVL bool FDECL(prefs_save, (const char* path, void (*dump)(ang_file*),
                                   const char* title));
STATIC_OVL enum parser_error FDECL(parse_prefs_load, (struct parser * p));
STATIC_OVL const char* FDECL(process_pref_file_expr, (char** sp, char* fp));
STATIC_OVL enum parser_error FDECL(parse_prefs_expr, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_object, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_monster, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_monster_base,
                                   (struct parser * p));
STATIC_OVL void FDECL(set_trap_graphic,
                      (int trap_idx, int light_idx, uint8_t attr, wchar_t ch));
STATIC_OVL enum parser_error FDECL(parse_prefs_trap, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_feat, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_gf, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_gs, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_flavor, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_inscribe, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_keymap_action,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_keymap_input,
                                   (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_message, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_color, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_window, (struct parser * p));
STATIC_OVL enum parser_error FDECL(parse_prefs_dummy, (struct parser * p));
STATIC_OVL struct parser* FDECL(init_parse_prefs, (bool user));
STATIC_OVL errr FDECL(finish_parse_prefs, (struct parser * p));
STATIC_OVL errr FDECL(process_pref_file_command, (const char* s));
STATIC_OVL void FDECL(ui_print_error, (const char* name, struct parser* p));
STATIC_OVL bool FDECL(process_pref_file_named,
                      (const char* path, bool quiet, bool user));
STATIC_OVL bool FDECL(process_pref_file_layered,
                      (const char* name, bool quiet, bool user,
                       const char* base_search_path,
                       const char* fallback_search_path, bool* used_fallback));
STATIC_OVL bool FDECL(process_pref_file,
                      (const char* name, bool quiet, bool user));
STATIC_OVL void FDECL(reset_visuals, (bool load_prefs));
STATIC_OVL void FDECL(textui_prefs_init, (void));
STATIC_OVL void FDECL(textui_prefs_free, (void));
STATIC_OVL void FDECL(do_cmd_pref, (void));
STATIC_OVL term* FDECL(find_first_subwindow, (uint32_t flag));
STATIC_OVL void FDECL(comma_number, (char* output, int number, int len));
STATIC_OVL void FDECL(atomonth, (int number, char* output, int len));
STATIC_OVL void FDECL(display_single_score, (const struct high_score* score,
                                             int row, int place, int attr));
STATIC_OVL void FDECL(display_score_page,
                      (const struct high_score scores[], int start, int count,
                       int highlight));
STATIC_OVL void FDECL(display_scores_aux,
                      (const struct high_score scores[], int from, int to,
                       int highlight, bool allow_scrolling));
STATIC_OVL void FDECL(predict_score, (bool allow_scrolling));
STATIC_OVL void FDECL(show_scores, (void));
STATIC_OVL Signal_Handler_t FDECL(wrap_signal,
                                  (int sig, Signal_Handler_t handler));
STATIC_OVL void FDECL(handle_signal_simple, (int sig));
STATIC_OVL void FDECL(handle_signal_abort, (int sig));
STATIC_OVL void FDECL(signals_ignore_tstp, (void));
STATIC_OVL void FDECL(signals_handle_tstp, (void));
STATIC_OVL void FDECL(signals_init, (void));
STATIC_OVL void FDECL(point_skills, (game_event_type type,
                                     game_event_data* data, void* user));
STATIC_OVL void FDECL(sk_point_misc, (game_event_type type,
                                      game_event_data* data, void* user));
STATIC_OVL void FDECL(skill_points, (game_event_type type,
                                     game_event_data* data, void* user));
STATIC_OVL void FDECL(skill_points_start, (cmd_context context, bool reset));
STATIC_OVL void FDECL(skill_points_stop, (void));
STATIC_OVL int FDECL(skill_points_command, (void));
STATIC_OVL int FDECL(gain_skills, (cmd_context context, bool reset));
STATIC_OVL void FDECL(include_pval, (struct object * obj));
STATIC_OVL void FDECL(exclude_pval, (struct object * obj));
STATIC_OVL void FDECL(wipe_smithing_objects, (void));
STATIC_OVL void FDECL(know_smith_obj, (void));
STATIC_OVL void FDECL(reset_smithing_objects, (struct object_kind * kind));
STATIC_OVL void FDECL(show_smith_obj, (void));
STATIC_OVL void FDECL(smith_obj_browser,
                      (int oid, void* data, const region* loc));
STATIC_OVL int FDECL(get_smithing_svals, (int tval));
STATIC_OVL void FDECL(sval_display, (struct menu * menu, int oid, bool cursor,
                                     int row, int col, int width));
STATIC_OVL bool FDECL(sval_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(tval_display, (struct menu * menu, int oid, bool cursor,
                                     int row, int col, int width));
STATIC_OVL bool FDECL(tval_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(tval_menu, (const char* name, int row));
STATIC_OVL int FDECL(get_smithing_specials, (struct object_kind * kind));
STATIC_OVL void FDECL(special_display,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL bool FDECL(special_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(special_menu, (const char* name, int row));
STATIC_OVL int FDECL(get_smith_properties, (enum smithing_category cat));
STATIC_OVL int FDECL(get_smith_art_abilities, (int skill));
STATIC_OVL void FDECL(rename_artefact, (void));
STATIC_OVL void FDECL(ui_skill_display,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL bool FDECL(ui_skill_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(prop_display, (struct menu * menu, int oid, bool cursor,
                                     int row, int col, int width));
STATIC_OVL bool FDECL(prop_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(artefact_display,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL bool FDECL(artefact_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(artefact_menu, (const char* name, int row));
STATIC_OVL void FDECL(melt_display, (struct menu * menu, int oid, bool cursor,
                                     int row, int col, int width));
STATIC_OVL bool FDECL(melt_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(melt_menu, (const char* name, int row));
STATIC_OVL void FDECL(numbers_set_validity, (void));
STATIC_OVL void FDECL(numbers_display,
                      (struct menu * menu, int oid, bool cursor, int row,
                       int col, int width));
STATIC_OVL bool FDECL(numbers_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(numbers_menu, (const char* name, int row));
STATIC_OVL void FDECL(accept_item, (const char* name, int row));
STATIC_OVL void FDECL(smithing_menu_browser,
                      (int oid, void* data, const region* loc));
STATIC_OVL void FDECL(check_smithing_menu_row_colors, (void));
STATIC_OVL struct object* FDECL(textui_smith_object,
                                (struct smithing_cost * cost));
STATIC_OVL int FDECL(get_songs, (void));
STATIC_OVL char FDECL(song_tag, (struct menu * menu, int oid));
STATIC_OVL void FDECL(song_display, (struct menu * menu, int oid, bool cursor,
                                     int row, int col, int width));
STATIC_OVL bool FDECL(song_action,
                      (struct menu * m, const ui_event* event, int oid));
STATIC_OVL void FDECL(textui_change_song, (void));
STATIC_OVL void FDECL(spoiler_menu_act, (const char* title, int row));
STATIC_OVL void FDECL(do_cmd_spoilers, (void));
STATIC_OVL int FDECL(target_dir_allow, (struct keypress ch, bool allow_5));
STATIC_OVL void FDECL(target_display_help,
                      (bool monster, bool object, bool free));
STATIC_OVL bool FDECL(is_running_keymap, (struct keypress ch));
STATIC_OVL bool FDECL(adjust_panel_help, (struct loc grid, bool help));
STATIC_OVL ui_event FDECL(target_recall_loop_object,
                          (struct object * obj, int y, int x,
                           char out_val[TARGET_OUT_VAL_SIZE], const char* s1,
                           const char* s2, const char* s3, const char* coords,
                           const struct player* p));
STATIC_OVL bool FDECL(aux_reinit, (struct chunk * c, struct player* p,
                                   struct target_aux_state* auxst));
STATIC_OVL bool FDECL(aux_hallucinate, (struct chunk * c, struct player* p,
                                        struct target_aux_state* auxst));
STATIC_OVL bool FDECL(aux_monster, (struct chunk * c, struct player* p,
                                    struct target_aux_state* auxst));
STATIC_OVL bool FDECL(aux_trap, (struct chunk * c, struct player* p,
                                 struct target_aux_state* auxst));
STATIC_OVL bool FDECL(aux_object, (struct chunk * c, struct player* p,
                                   struct target_aux_state* auxst));
STATIC_OVL bool FDECL(aux_terrain, (struct chunk * c, struct player* p,
                                    struct target_aux_state* auxst));
STATIC_OVL bool FDECL(aux_wrapup, (struct chunk * c, struct player* p,
                                   struct target_aux_state* auxst));
STATIC_OVL ui_event FDECL(target_set_interactive_aux,
                          (struct loc grid, int mode));
STATIC_OVL void FDECL(textui_target, (void));
STATIC_OVL void FDECL(textui_target_closest, (void));
STATIC_OVL int FDECL(draw_path, (uint16_t path_n, struct loc* path_g,
                                 wchar_t* c, int* a, struct loc grid1));
STATIC_OVL void FDECL(load_path, (uint16_t path_n, struct loc* path_g,
                                  wchar_t* c, int* a));
STATIC_OVL bool FDECL(pile_is_tracked, (const struct object* obj));
STATIC_OVL bool FDECL(pile_has_known, (const struct object* obj));
STATIC_OVL bool FDECL(target_set_interactive,
                      (int mode, struct loc grid, int range));
STATIC_OVL errr FDECL(term_win_nuke, (term_win * s));
STATIC_OVL errr FDECL(term_win_init, (term_win * s, int w, int h));
STATIC_OVL errr FDECL(term_win_copy, (term_win * s, term_win* f, int w, int h));
STATIC_OVL extern errr FDECL(Term_redraw_all, (void));
STATIC_OVL errr FDECL(Term_xtra, (int n, int v));
STATIC_OVL errr FDECL(Term_curs_hack, (int x, int y));
STATIC_OVL errr FDECL(Term_wipe_hack, (int x, int y, int n));
STATIC_OVL errr FDECL(Term_text_hack,
                      (int x, int y, int n, int a, const wchar_t* cp));
STATIC_OVL errr FDECL(Term_pict_hack,
                      (int x, int y, int n, const int* ap, const wchar_t* cp,
                       const int* tap, const wchar_t* tcp));
STATIC_OVL void FDECL(Term_queue_char, (term * t, int x, int y, int a,
                                        wchar_t c, int ta, wchar_t tc));
STATIC_OVL void FDECL(Term_big_queue_char,
                      (term * t, int x, int y, int clipy, int a, wchar_t c,
                       int a1, wchar_t c1));
STATIC_OVL void FDECL(Term_queue_chars,
                      (int x, int y, int n, int a, const wchar_t* s));
STATIC_OVL void FDECL(Term_fresh_row_pict, (int y, int x1, int x2));
STATIC_OVL void FDECL(Term_fresh_row_pict_dblh,
                      (int y, int x1, int x2, int* pr_drw));
STATIC_OVL int FDECL(is_padding_changed, (term * t, int y, int x));
STATIC_OVL void FDECL(Term_fresh_row_both, (int y, int x1, int x2));
STATIC_OVL void FDECL(Term_fresh_row_both_dblh,
                      (int y, int x1, int x2, int* pr_drw));
STATIC_OVL void FDECL(Term_fresh_row_text, (int y, int x1, int x2));
STATIC_OVL errr FDECL(Term_mark, (int x, int y));
STATIC_OVL errr FDECL(Term_fresh, (void));
STATIC_OVL errr FDECL(Term_set_cursor, (bool v));
STATIC_OVL errr FDECL(Term_gotoxy, (int x, int y));
STATIC_OVL errr FDECL(Term_draw, (int x, int y, int a, wchar_t c));
STATIC_OVL errr FDECL(Term_addch, (int a, wchar_t c));
STATIC_OVL errr FDECL(Term_addstr, (int n, int a, const char* buf));
STATIC_OVL errr FDECL(Term_putch, (int x, int y, int a, wchar_t c));
STATIC_OVL void FDECL(Term_big_putch, (int x, int y, int a, wchar_t c));
STATIC_OVL errr FDECL(Term_putstr, (int x, int y, int n, int a, const char* s));
STATIC_OVL errr FDECL(Term_erase, (int x, int y, int n));
STATIC_OVL errr FDECL(Term_clear, (void));
STATIC_OVL errr FDECL(Term_redraw, (void));
STATIC_OVL errr FDECL(Term_redraw_section, (int x1, int y1, int x2, int y2));
STATIC_OVL errr FDECL(Term_get_cursor, (bool* v));
STATIC_OVL errr FDECL(Term_get_size, (int* w, int* h));
STATIC_OVL errr FDECL(Term_locate, (int* x, int* y));
STATIC_OVL errr FDECL(Term_what, (int x, int y, int* a, wchar_t* c));
STATIC_OVL errr FDECL(Term_flush, (void));
STATIC_OVL void FDECL(log_keypress, (ui_event e));
STATIC_OVL errr FDECL(Term_keypress, (keycode_t k, uint8_t mods));
STATIC_OVL errr FDECL(Term_mousepress, (int x, int y, char button));
STATIC_OVL errr FDECL(Term_key_push, (int k));
STATIC_OVL errr FDECL(Term_event_push, (const ui_event* ke));
STATIC_OVL errr FDECL(Term_inkey, (ui_event * ch, bool wait, bool take));
STATIC_OVL errr FDECL(Term_save, (void));
STATIC_OVL errr FDECL(Term_load, (void));
STATIC_OVL errr FDECL(Term_load_all, (void));
STATIC_OVL errr FDECL(Term_resize, (int w, int h));
STATIC_OVL errr FDECL(Term_activate, (term * t));
STATIC_OVL errr FDECL(term_nuke, (term * t));
STATIC_OVL errr FDECL(term_init, (term * t, int w, int h, int k));
STATIC_OVL int FDECL(big_pad, (int col, int row, uint8_t a, wchar_t c));
STATIC_OVL int FDECL(Term_get_first_tile_row, (term * t));
STATIC_OVL void FDECL(textui_tutorial_textblock_show,
                      (textblock * tb, const char* header));
STATIC_OVL void FDECL(textui_tutorial_textblock_append_command_phrase,
                      (textblock * tb, const char* command_name, bool capital,
                       bool gerund));
STATIC_OVL void FDECL(textui_tutorial_textblock_append_direction_phrase,
                      (textblock * tb, int dirnum, bool capital, bool gerund));
STATIC_OVL void FDECL(textui_tutorial_textblock_append_direction_rose,
                      (textblock * tb));
STATIC_OVL void FDECL(textui_tutorial_textblock_append_feature_symbol,
                      (textblock * tb, int feat));
STATIC_OVL void FDECL(textui_tutorial_textblock_append_monster_symbol,
                      (textblock * tb, const struct monster_race* race));
STATIC_OVL void FDECL(textui_tutorial_textblock_append_object_symbol,
                      (textblock * tb, const struct object_kind* kind));
STATIC_OVL void FDECL(start_tutorial, (void));
STATIC_OVL struct visuals_color_cycle* FDECL(visuals_color_cycle_new,
                                             (const char* name,
                                              size_t const step_count,
                                              uint8_t const invalid_color));
STATIC_OVL void FDECL(visuals_color_cycle_free,
                      (struct visuals_color_cycle * ccycle));
STATIC_OVL struct visuals_color_cycle* FDECL(
    visuals_color_cycle_copy, (struct visuals_color_cycle const* original));
STATIC_OVL uint8_t FDECL(visuals_color_cycle_attr_for_frame,
                         (struct visuals_color_cycle const* ccycle,
                          size_t const frame));
STATIC_OVL struct visuals_cycle_group* FDECL(visuals_cycle_group_new,
                                             (const char* name,
                                              size_t const cycle_count));
STATIC_OVL void FDECL(visuals_cycle_group_free,
                      (struct visuals_cycle_group * group));
STATIC_OVL struct visuals_cycler* FDECL(visuals_cycler_new,
                                        (size_t const group_count));
STATIC_OVL void FDECL(visuals_cycler_free, (struct visuals_cycler * cycler));
STATIC_OVL struct visuals_color_cycle* FDECL(
    visuals_cycler_cycle_by_name,
    (struct visuals_cycler const* cycler, const char* group_name,
     const char* cycle_name));
STATIC_OVL uint8_t FDECL(visuals_cycler_get_attr_for_frame,
                         (const char* group_name, const char* cycle_name,
                          size_t const frame));
STATIC_OVL void FDECL(visuals_cycler_set_cycle_for_race,
                      (struct monster_race const* race, const char* group_name,
                       const char* cycle_name));
STATIC_OVL uint8_t FDECL(visuals_cycler_get_attr_for_race,
                         (struct monster_race const* race, size_t const frame));
STATIC_OVL struct visuals_flicker* FDECL(visuals_flicker_new,
                                         (size_t const max_cycles,
                                          size_t const colors_per_cycle));
STATIC_OVL void FDECL(visuals_flicker_free, (struct visuals_flicker * table));
STATIC_OVL void FDECL(visuals_flicker_set_color,
                      (struct visuals_flicker * table, size_t const cycle_index,
                       size_t const color_index, uint8_t const attr));
STATIC_OVL uint8_t FDECL(visuals_flicker_get_color,
                         (struct visuals_flicker * table,
                          size_t const cycle_index, size_t const color_index));
STATIC_OVL uint8_t FDECL(visuals_flicker_get_attr_for_frame,
                         (uint8_t const selection_attr, size_t const frame));
STATIC_OVL struct visuals_parse_context* FDECL(visuals_parse_context_new,
                                               (void));
STATIC_OVL void FDECL(visuals_parse_context_free,
                      (struct visuals_parse_context * context));
STATIC_OVL struct visuals_cycler* FDECL(
    visuals_parse_context_convert,
    (struct visuals_parse_context const* context));
STATIC_OVL enum parser_error FDECL(visuals_parse_flicker,
                                   (struct parser * parser));
STATIC_OVL enum parser_error FDECL(visuals_parse_flicker_color,
                                   (struct parser * parser));
STATIC_OVL enum parser_error FDECL(visuals_parse_cycle,
                                   (struct parser * parser));
STATIC_OVL enum parser_error FDECL(visuals_parse_cycle_color,
                                   (struct parser * parser));
STATIC_OVL struct parser* FDECL(visuals_file_parser_init, (void));
STATIC_OVL errr FDECL(visuals_file_parser_run, (struct parser * parser));
STATIC_OVL errr FDECL(visuals_file_parser_finish, (struct parser * parser));
STATIC_OVL void FDECL(visuals_file_parser_cleanup, (void));
STATIC_OVL void FDECL(ui_visuals_module_init, (void));
STATIC_OVL void FDECL(ui_visuals_module_cleanup, (void));
STATIC_OVL void FDECL(proj_display, (struct menu * m, int type, bool cursor,
                                     int row, int col, int wid));
STATIC_OVL void FDECL(wiz_proj_demo, (void));
STATIC_OVL void FDECL(get_art_name, (char* buf, int max, int a_idx));
STATIC_OVL void FDECL(wiz_create_item_subdisplay,
                      (struct menu * m, int oid, bool cursor, int row, int col,
                       int width));
STATIC_OVL bool FDECL(wiz_create_item_subaction,
                      (struct menu * m, const ui_event* e, int oid));
STATIC_OVL void FDECL(wiz_create_item_display,
                      (struct menu * m, int oid, bool cursor, int row, int col,
                       int width));
STATIC_OVL bool FDECL(wiz_create_item_action,
                      (struct menu * m, const ui_event* e, int oid));
STATIC_OVL void FDECL(wiz_create_item, (bool art));
STATIC_OVL void FDECL(wiz_confirm_quit_no_save, (void));
STATIC_OVL void FDECL(wiz_create_artifact, (void));
STATIC_OVL void FDECL(wiz_create_nonartifact, (void));
STATIC_OVL void FDECL(wiz_acquire_good, (void));
STATIC_OVL void FDECL(wiz_acquire_great, (void));
STATIC_OVL void FDECL(wiz_create_all_for_tval, (void));
STATIC_OVL void FDECL(wiz_learn_all_object_kinds, (void));
STATIC_OVL void FDECL(wiz_cheat_death, (void));
STATIC_OVL void FDECL(spoiler_out_n_chars, (int n, char c));
STATIC_OVL void FDECL(spoiler_blanklines, (int n));
STATIC_OVL void FDECL(spoiler_underline, (const char* str, char c));
STATIC_OVL void FDECL(kind_info, (char* buf, size_t buf_len, char* dam,
                                  size_t dam_len, char* wgt, size_t wgt_len,
                                  int* lev, int32_t* val, int k));
STATIC_OVL void FDECL(spoil_obj_desc, (const char* fname));
STATIC_OVL void FDECL(spoil_artifact, (const char* fname));
STATIC_OVL void FDECL(spoil_mon_desc, (const char* fname));
STATIC_OVL void FDECL(spoil_mon_info, (const char* fname));
STATIC_OVL bool FDECL(stats_are_enabled, (void));
STATIC_OVL void FDECL(stats_collect, (int nsim, int simtype));
STATIC_OVL void FDECL(disconnect_stats, (int nsim, bool stop_on_disconnect));
STATIC_OVL void FDECL(stat_grid_counter,
                      (struct chunk * c, struct grid_counter_pred* gpreds,
                       int n_gpred, struct neighbor_counter_pred* npreds,
                       int n_npred));
STATIC_OVL bool FDECL(is_easily_traversed, (struct chunk * c, struct loc grid));
STATIC_OVL bool FDECL(is_floor_trap, (struct chunk * c, struct loc grid));
STATIC_OVL void FDECL(stat_grid_counter_simple,
                      (struct chunk * c, struct grid_counts counts[3]));
STATIC_OVL bool FDECL(flag_has, (const bitflag* flags, const size_t size,
                                 const int flag));
STATIC_OVL bool FDECL(flag_has_dbg,
                      (const bitflag* flags, const size_t size, const int flag,
                       const char* fi, const char* fl));
STATIC_OVL int FDECL(flag_next,
                     (const bitflag* flags, const size_t size, const int flag));
STATIC_OVL int FDECL(flag_count, (const bitflag* flags, const size_t size));
STATIC_OVL bool FDECL(flag_is_empty, (const bitflag* flags, const size_t size));
STATIC_OVL bool FDECL(flag_is_full, (const bitflag* flags, const size_t size));
STATIC_OVL bool FDECL(flag_is_inter,
                      (const bitflag* flags1, const bitflag* flags2,
                       const size_t size));
STATIC_OVL bool FDECL(flag_is_subset,
                      (const bitflag* flags1, const bitflag* flags2,
                       const size_t size));
STATIC_OVL bool FDECL(flag_is_equal,
                      (const bitflag* flags1, const bitflag* flags2,
                       const size_t size));
STATIC_OVL bool FDECL(flag_on,
                      (bitflag * flags, const size_t size, const int flag));
STATIC_OVL bool FDECL(flag_on_dbg,
                      (bitflag * flags, const size_t size, const int flag,
                       const char* fi, const char* fl));
STATIC_OVL bool FDECL(flag_off,
                      (bitflag * flags, const size_t size, const int flag));
STATIC_OVL void FDECL(flag_wipe, (bitflag * flags, const size_t size));
STATIC_OVL void FDECL(flag_setall, (bitflag * flags, const size_t size));
STATIC_OVL void FDECL(flag_negate, (bitflag * flags, const size_t size));
STATIC_OVL void FDECL(flag_copy, (bitflag * flags1, const bitflag* flags2,
                                  const size_t size));
STATIC_OVL bool FDECL(flag_union, (bitflag * flags1, const bitflag* flags2,
                                   const size_t size));
STATIC_OVL bool FDECL(flag_inter, (bitflag * flags1, const bitflag* flags2,
                                   const size_t size));
STATIC_OVL bool FDECL(flag_diff, (bitflag * flags1, const bitflag* flags2,
                                  const size_t size));
STATIC_OVL bool FDECL(flags_test,
                      (const bitflag* flags, const size_t size, ...));
STATIC_OVL bool FDECL(flags_test_all,
                      (const bitflag* flags, const size_t size, ...));
STATIC_OVL bool FDECL(flags_clear, (bitflag * flags, const size_t size, ...));
STATIC_OVL bool FDECL(flags_set, (bitflag * flags, const size_t size, ...));
STATIC_OVL void FDECL(flags_init, (bitflag * flags, const size_t size, ...));
STATIC_OVL bool FDECL(flags_mask, (bitflag * flags, const size_t size, ...));
STATIC_OVL int FDECL(color_char_to_attr, (char c));
STATIC_OVL int FDECL(color_text_to_attr, (const char* name));
STATIC_OVL const char* FDECL(attr_to_text, (uint8_t a));
STATIC_OVL uint8_t FDECL(get_color, (uint8_t a, int attr, int n));
STATIC_OVL void FDECL(build_gamma_table, (int gamma));
STATIC_OVL dice_input_t FDECL(dice_input_for_char, (char c));
STATIC_OVL dice_state_t FDECL(dice_parse_state_transition,
                              (dice_state_t state, dice_input_t input));
STATIC_OVL void FDECL(dice_reset, (dice_t * dice));
STATIC_OVL dice_t* FDECL(dice_new, (void));
STATIC_OVL void FDECL(dice_free, (dice_t * dice));
STATIC_OVL int FDECL(dice_add_variable, (dice_t * dice, const char* name));
STATIC_OVL int FDECL(dice_bind_expression, (dice_t * dice, const char* name,
                                            const expression_t* expression));
STATIC_OVL bool FDECL(dice_parse_string, (dice_t * dice, const char* string));
STATIC_OVL void FDECL(dice_random_value, (const dice_t* dice, random_value* v));
STATIC_OVL int FDECL(dice_evaluate, (const dice_t* dice, int level, aspect asp,
                                     random_value* v));
STATIC_OVL int FDECL(dice_roll, (const dice_t* dice, random_value* v));
STATIC_OVL bool FDECL(dice_test_values, (const dice_t* dice, int base,
                                         int dice_count, int sides, int bonus));
STATIC_OVL bool FDECL(dice_test_variables,
                      (const dice_t* dice, const char* base,
                       const char* dice_name, const char* sides,
                       const char* bonus));
STATIC_OVL void FDECL(dict_depth_first_recurse,
                      (dict_type d,
                       void (*element_visitor)(dict_type d,
                                               struct dict_list_entry* e,
                                               void* closure),
                       void* element_closure));
STATIC_OVL void FDECL(dict_free_element,
                      (dict_type d, struct dict_list_entry* e, void* closure));
STATIC_OVL dict_type FDECL(dict_create,
                           (uint32_t(*key_hasher)(const void* key),
                            int (*key_comparer)(const void* a, const void* b),
                            void (*key_freer)(void* key),
                            void (*value_freer)(void* value)));
STATIC_OVL void FDECL(dict_destroy, (dict_type d));
STATIC_OVL bool FDECL(dict_insert, (dict_type d, void* key, void* value));
STATIC_OVL void* FDECL(dict_has, (dict_type d, const void* key));
STATIC_OVL expression_operator_t FDECL(expression_operator_from_token,
                                       (const char* token));
STATIC_OVL expression_input_t FDECL(expression_input_for_operator,
                                    (expression_operator_t operator));
STATIC_OVL expression_t* FDECL(expression_new, (void));
STATIC_OVL void FDECL(expression_free, (expression_t * expression));
STATIC_OVL expression_t* FDECL(expression_copy, (const expression_t* source));
STATIC_OVL void FDECL(expression_set_fixed_base,
                      (expression_t * expression, int32_t value));
STATIC_OVL void FDECL(expression_set_base_value,
                      (expression_t * expression,
                       expression_base_value_f function));
STATIC_OVL int32_t FDECL(expression_evaluate,
                         (expression_t const* const expression));
STATIC_OVL void FDECL(expression_add_operation,
                      (expression_t * expression,
                       const expression_operation_t operation));
STATIC_OVL int16_t FDECL(expression_add_operations_string,
                         (expression_t * expression, const char* string));
STATIC_OVL bool FDECL(expression_test_copy,
                      (const expression_t* a, const expression_t* b));
STATIC_OVL void FDECL(safe_setuid_drop, (void));
STATIC_OVL void FDECL(safe_setuid_grab, (void));
STATIC_OVL void FDECL(path_parse, (char* buf, size_t max, const char* file));
STATIC_OVL void FDECL(path_process, (char* buf, size_t len, size_t* cur_len,
                                     const char* path));
STATIC_OVL size_t FDECL(path_build, (char* buf, size_t len, const char* base,
                                     const char* leaf));
STATIC_OVL int FDECL(path_normalize,
                     (char* buf, size_t len, const char* path_in,
                      bool trailing_sep, size_t* req_len, size_t* root_len));
STATIC_OVL size_t FDECL(path_filename_index, (const char* path));
STATIC_OVL bool FDECL(file_delete, (const char* fname));
STATIC_OVL bool FDECL(file_move, (const char* fname, const char* newname));
STATIC_OVL bool FDECL(file_exists, (const char* fname));
STATIC_OVL bool FDECL(file_newer, (const char* first, const char* second));
STATIC_OVL bool FDECL(file_close, (ang_file * f));
STATIC_OVL void FDECL(file_lock, (ang_file * f));
STATIC_OVL void FDECL(file_unlock, (ang_file * f));
STATIC_OVL bool FDECL(file_skip, (ang_file * f, int bytes));
STATIC_OVL bool FDECL(file_readc, (ang_file * f, uint8_t* b));
STATIC_OVL bool FDECL(file_writec, (ang_file * f, uint8_t b));
STATIC_OVL int FDECL(file_read, (ang_file * f, char* buf, size_t n));
STATIC_OVL bool FDECL(file_write, (ang_file * f, const char* buf, size_t n));
STATIC_OVL bool FDECL(file_getl, (ang_file * f, char* buf, size_t len));
STATIC_OVL bool FDECL(file_put, (ang_file * f, const char* buf));
STATIC_OVL bool FDECL(file_putf, (ang_file * f, const char* fmt, ...));
STATIC_OVL bool FDECL(file_vputf, (ang_file * f, const char* fmt, va_list vp));
STATIC_OVL bool FDECL(dir_exists, (const char* path));
STATIC_OVL bool FDECL(dir_create, (const char* path));
STATIC_OVL ang_dir* FDECL(my_dopen, (const char* dirname));
STATIC_OVL bool FDECL(alter_ang_dir_only_files, (ang_dir * dir, bool newval));
STATIC_OVL bool FDECL(my_dread, (ang_dir * dir, char* fname, size_t len));
STATIC_OVL void FDECL(my_dclose, (ang_dir * dir));
STATIC_OVL size_t FDECL(vstrnfmt,
                        (char* buf, size_t max, const char* fmt, va_list vp));
STATIC_OVL void FDECL(strnfcat, (char* str, size_t max, size_t* end,
                                 const char* fmt, ...));
STATIC_OVL char* FDECL(vformat, (const char* fmt, va_list vp));
STATIC_OVL void FDECL(vformat_kill, (void));
STATIC_OVL size_t FDECL(strnfmt, (char* buf, size_t max, const char* fmt, ...));
STATIC_OVL char* FDECL(format, (const char* fmt, ...));
STATIC_OVL void FDECL(plog_fmt, (const char* fmt, ...));
STATIC_OVL void FDECL(quit_fmt, (const char* fmt, ...));
STATIC_OVL quark_t FDECL(quark_add, (const char* str));
STATIC_OVL const char* FDECL(quark_str, (quark_t q));
STATIC_OVL void FDECL(quarks_init, (void));
STATIC_OVL void FDECL(quarks_free, (void));
STATIC_OVL struct queue* FDECL(q_new, (size_t size));
STATIC_OVL int FDECL(q_len, (struct queue * q));
STATIC_OVL void FDECL(q_push, (struct queue * q, uintptr_t item));
STATIC_OVL uintptr_t FDECL(q_pop, (struct queue * q));
STATIC_OVL void FDECL(q_free, (struct queue * q));
STATIC_OVL uint32_t FDECL(WELLRNG1024a, (void));
STATIC_OVL void FDECL(Rand_state_init, (uint32_t seed));
STATIC_OVL void FDECL(Rand_init, (void));
STATIC_OVL uint32_t FDECL(Rand_div, (uint32_t m));
STATIC_OVL int16_t FDECL(Rand_normal, (int mean, int stand));
STATIC_OVL int FDECL(Rand_sample, (int mean, int upper, int lower, int stand_u,
                                   int stand_l));
STATIC_OVL int FDECL(damroll, (int num, int sides));
STATIC_OVL int FDECL(damcalc, (int num, int sides, aspect dam_aspect));
STATIC_OVL int FDECL(rand_range, (int A, int B));
STATIC_OVL int16_t FDECL(m_bonus, (int divisor, int level));
STATIC_OVL int16_t FDECL(m_bonus_calc,
                         (int divisor, int level, aspect bonus_aspect));
STATIC_OVL int FDECL(randcalc, (random_value v, int level, aspect rand_aspect));
STATIC_OVL bool FDECL(randcalc_valid, (random_value v, int test));
STATIC_OVL bool FDECL(randcalc_varies, (random_value v));
STATIC_OVL bool FDECL(random_chance_check, (random_chance c));
STATIC_OVL int FDECL(random_chance_scaled, (random_chance c, int scale));
STATIC_OVL void FDECL(rand_fix, (uint32_t val));
STATIC_OVL uint32_t FDECL(Rand_simple, (uint32_t m));
STATIC_OVL textblock* FDECL(textblock_new, (void));
STATIC_OVL void FDECL(textblock_free, (textblock * tb));
STATIC_OVL void FDECL(textblock_resize_if_needed,
                      (textblock * tb, size_t additional_size));
STATIC_OVL void FDECL(textblock_vappend_c,
                      (textblock * tb, int attr, const char* fmt, va_list vp));
STATIC_OVL void FDECL(textblock_append_pict, (textblock * tb, int attr, int c));
STATIC_OVL void FDECL(textblock_append_textblock,
                      (textblock * tb, const textblock* tba));
STATIC_OVL void FDECL(textblock_append, (textblock * tb, const char* fmt, ...));
STATIC_OVL void FDECL(textblock_append_c,
                      (textblock * tb, int attr, const char* fmt, ...));
STATIC_OVL const wchar_t* FDECL(textblock_text, (textblock * tb));
STATIC_OVL const int* FDECL(textblock_attrs, (textblock * tb));
STATIC_OVL void FDECL(new_line, (size_t * *line_starts, size_t** line_lengths,
                                 size_t* n_lines, size_t* cur_line,
                                 size_t start, size_t len));
STATIC_OVL size_t FDECL(textblock_calculate_lines,
                        (textblock * tb, size_t** line_starts,
                         size_t** line_lengths, size_t width));
STATIC_OVL void FDECL(textblock_to_file,
                      (textblock * tb, ang_file* f, int indent, int wrap_at));
STATIC_OVL void FDECL(text_out_to_file, (int a, const char* str));
STATIC_OVL void FDECL(text_out, (const char* fmt, ...));
STATIC_OVL void FDECL(text_out_c, (int a, const char* fmt, ...));
STATIC_OVL bool FDECL(next_section,
                      (const char* source, size_t init, const char** text,
                       size_t* len, const char** tag, size_t* taglen,
                       const char** end));
STATIC_OVL void FDECL(text_out_e, (const char* fmt, ...));
STATIC_OVL errr FDECL(text_lines_to_file,
                      (const char* path, text_writer writer));
STATIC_OVL struct loc FDECL(loc, (int x, int y));
STATIC_OVL bool FDECL(loc_eq, (struct loc grid1, struct loc grid2));
STATIC_OVL bool FDECL(loc_is_zero, (struct loc grid));
STATIC_OVL struct loc FDECL(loc_sum, (struct loc grid1, struct loc grid2));
STATIC_OVL struct loc FDECL(loc_diff, (struct loc grid1, struct loc grid2));
STATIC_OVL struct loc FDECL(rand_loc,
                            (struct loc grid, int x_spread, int y_spread));
STATIC_OVL struct loc FDECL(loc_offset, (struct loc grid, int dx, int dy));
STATIC_OVL struct point_set* FDECL(point_set_new, (int initial_size));
STATIC_OVL void FDECL(point_set_dispose, (struct point_set * ps));
STATIC_OVL void FDECL(add_to_point_set,
                      (struct point_set * ps, struct loc grid));
STATIC_OVL int FDECL(point_set_size, (struct point_set * ps));
STATIC_OVL int FDECL(point_set_contains,
                     (struct point_set * ps, struct loc grid));
STATIC_OVL size_t FDECL(utf8_strlen, (const char* s));
STATIC_OVL void FDECL(utf8_clipto, (char* s, size_t n));
STATIC_OVL char* FDECL(utf8_fskip, (char* s, size_t n, char* lim));
STATIC_OVL char* FDECL(utf8_rskip, (char* s, size_t n, char* lim));
STATIC_OVL size_t FDECL(utf32_to_utf8,
                        (char* out, size_t n_out, const uint32_t* in,
                         size_t n_in, size_t* pn_cnvt));
STATIC_OVL bool FDECL(utf32_isprint, (uint32_t v));
STATIC_OVL int FDECL(my_stricmp, (const char* s1, const char* s2));
STATIC_OVL int FDECL(my_strnicmp, (const char* a, const char* b, int n));
STATIC_OVL char* FDECL(my_stristr, (const char* string, const char* pattern));
STATIC_OVL size_t FDECL(my_strcpy,
                        (char* buf, const char* src, size_t bufsize));
STATIC_OVL size_t FDECL(my_strcat,
                        (char* buf, const char* src, size_t bufsize));
STATIC_OVL void FDECL(my_strcap, (char* buf));
STATIC_OVL bool FDECL(streq, (const char* a, const char* b));
STATIC_OVL bool FDECL(suffix, (const char* s, const char* t));
STATIC_OVL bool FDECL(suffix_i, (const char* s, const char* t));
STATIC_OVL bool FDECL(prefix, (const char* s, const char* t));
STATIC_OVL bool FDECL(prefix_i, (const char* s, const char* t));
STATIC_OVL void FDECL(strskip, (char* s, const char c, const char e));
STATIC_OVL void FDECL(strescape, (char* s, const char c));
STATIC_OVL int FDECL(hex_char_to_int, (char c));
STATIC_OVL int FDECL(hex_str_to_int, (const char* s));
STATIC_OVL void FDECL(strunescape, (char* s));
STATIC_OVL bool FDECL(contains_only_spaces, (const char* s));
STATIC_OVL bool FDECL(is_a_vowel, (int ch));
STATIC_OVL size_t FDECL(text_mbstowcs,
                        (wchar_t * dest, const char* src, int n));
STATIC_OVL int FDECL(text_wctomb, (char* s, wchar_t wchar));
STATIC_OVL int FDECL(text_wcsz, (void));
STATIC_OVL int FDECL(text_iswprint, (wint_t wc));
STATIC_OVL void FDECL(plog, (const char* str));
STATIC_OVL void FDECL(quit, (const char* str));
STATIC_OVL int FDECL(mean, (const int* nums, int size));
STATIC_OVL int FDECL(variance, (const int* nums, int size));
STATIC_OVL void FDECL(sort, (void* base, size_t nmemb, size_t smemb,
                             int (*comp)(const void*, const void*)));
STATIC_OVL uint32_t FDECL(djb2_hash, (const char* str));
STATIC_OVL void* FDECL(mem_alloc, (size_t len));
STATIC_OVL void* FDECL(mem_zalloc, (size_t len));
STATIC_OVL void FDECL(mem_free, (void* p));
STATIC_OVL void* FDECL(mem_realloc, (void* p, size_t len));
STATIC_OVL char* FDECL(string_make, (const char* str));
STATIC_OVL void FDECL(string_free, (char* str));
STATIC_OVL char* FDECL(string_append, (char* s1, const char* s2));
STATIC_OVL void FDECL(quit_hook, (const char* s));
STATIC_OVL void FDECL(init_stuff, (void));
STATIC_OVL void FDECL(generic_reinit, (void));
STATIC_OVL void FDECL(change_path, (const char* info));
STATIC_OVL void FDECL(user_name, (char* buf, size_t len, int id));
STATIC_OVL void FDECL(list_saves, (void));
STATIC_OVL int FDECL(main, (int argc, char* argv[]));
