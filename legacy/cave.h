#pragma once
/**
 * \file cave.h
 * \brief Matters relating to the current dungeon level
 *
 * Copyright (c) 1997 Ben Harrison, James E. Wilson, Robert A. Koeneke
 *
 * This work is free software; you can redistribute it and/or modify it
 * under the terms of either:
 *
 * a) the GNU General Public License as published by the Free Software
 *    Foundation, version 2, or
 *
 * b) the "Angband licence":
 *    This software may be copied and distributed for educational, research,
 *    and not for profit purposes provided that this copyright and statement
 *    are included in all such copies.  Other copyrights may also apply.
 */

#ifndef CAVE_H
#define CAVE_H

#include "z-type.h"
#include "z-bitflag.h"

struct player;
struct monster;
struct monster_group;

extern const int16_t ddd[9];
extern const uint8_t cycle[17];
extern const uint8_t chome[10];
extern const int16_t ddx[10];
extern const int16_t ddy[10];
extern const struct loc ddgrid[10];
extern const int16_t ddx_ddd[9];
extern const int16_t ddy_ddd[9];
extern const struct loc ddgrid_ddd[9];
extern const int16_t clockwise_ddd[9];
extern const struct loc clockwise_grid[9];
extern const int *dist_offsets_y[10];
extern const int *dist_offsets_x[10];
extern const uint8_t side_dirs[20][8];

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

/**
 * Square flags
 */

enum
{
	#define SQUARE(a,b) SQUARE_##a,
	#include "list-square-flags.h"
	#undef SQUARE
	SQUARE_MAX
};

#define SQUARE_SIZE                FLAG_SIZE(SQUARE_MAX)

#define sqinfo_has(f, flag)        flag_has_dbg(f, SQUARE_SIZE, flag, #f, #flag)
#define sqinfo_next(f, flag)       flag_next(f, SQUARE_SIZE, flag)
#define sqinfo_is_empty(f)         flag_is_empty(f, SQUARE_SIZE)
#define sqinfo_is_full(f)          flag_is_full(f, SQUARE_SIZE)
#define sqinfo_is_inter(f1, f2)    flag_is_inter(f1, f2, SQUARE_SIZE)
#define sqinfo_is_subset(f1, f2)   flag_is_subset(f1, f2, SQUARE_SIZE)
#define sqinfo_is_equal(f1, f2)    flag_is_equal(f1, f2, SQUARE_SIZE)
#define sqinfo_on(f, flag)         flag_on_dbg(f, SQUARE_SIZE, flag, #f, #flag)
#define sqinfo_off(f, flag)        flag_off(f, SQUARE_SIZE, flag)
#define sqinfo_wipe(f)             flag_wipe(f, SQUARE_SIZE)
#define sqinfo_setall(f)           flag_setall(f, SQUARE_SIZE)
#define sqinfo_negate(f)           flag_negate(f, SQUARE_SIZE)
#define sqinfo_copy(f1, f2)        flag_copy(f1, f2, SQUARE_SIZE)
#define sqinfo_union(f1, f2)       flag_union(f1, f2, SQUARE_SIZE)
#define sqinfo_inter(f1, f2)       flag_inter(f1, f2, SQUARE_SIZE)
#define sqinfo_diff(f1, f2)        flag_diff(f1, f2, SQUARE_SIZE)


/**
 * Terrain flags
 */
enum
{
	#define TF(a,b) TF_##a,
	#include "list-terrain-flags.h"
	#undef TF
	TF_MAX
};

#define TF_SIZE                FLAG_SIZE(TF_MAX)

#define tf_has(f, flag)        flag_has_dbg(f, TF_SIZE, flag, #f, #flag)

/**
 * Information about terrain features.
 *
 * At the moment this isn't very much, but eventually a primitive flag-based
 * information system will be used here.
 */
struct feature {
	char *name;
	char *desc;
	int fidx;

	struct feature *mimic;		/**< Feature to mimic or NULL for no mimicry */
	uint8_t priority;	/**< Display priority */

	uint8_t forge_bonus;/**< What bonus does this get as a forge? */
	uint8_t dig;		/**< How hard is it to dig through? */
	uint8_t pit_difficulty;		/**< How hard is it to cimb out of? */

	bitflag flags[TF_SIZE];	/**< Terrain flags */

	uint8_t d_attr;	/**< Default feature attribute */
	wchar_t d_char;	/**< Default feature character */

	char *walk_msg;	/**< Message on walking into feature */
	char *run_msg;	/**< Message on running into feature */
	char *hurt_msg;	/**< Message on being hurt by feature */
	char *die_msg;	/**< Message on dying to feature */
	char *dig_msg;	/**< Message on digging out feature */
	char *fail_msg;	/**< Message on failing to dig out feature */
	char *str_msg;	/**< Message on being to weak to dig feature */
	char *confused_msg; /**< Message on confused monster move into feature */
	char *look_prefix; /**< Prefix for name in look result */
	char *look_in_preposition; /**< Preposition in look result when on the terrain */
};

extern struct feature *f_info;

enum grid_light_level
{
	LIGHTING_LOS = 0,   /* line of sight */
	LIGHTING_TORCH,     /* torchlight */
	LIGHTING_LIT,       /* permanently lit (when not in line of sight) */
	LIGHTING_DARK,      /* dark */
	LIGHTING_MAX
};

struct grid_data {
	uint32_t m_idx;			/* Monster index */
	uint32_t f_idx;			/* Feature index */
	struct object_kind *first_kind;	/* The kind of the first item on the grid */
	const struct artifact *first_art;	/* Artifact pointer for first item on the grid */
	struct trap *trap;		/* Trap */
	bool multiple_objects;	/* Is there more than one item there? */

	enum grid_light_level lighting; /* Light level */
	bool in_view; 			/* Can the player can currently see the grid? */
	bool is_player;
	bool hallucinate;
	bool rage;
	bool glow;
};

struct square {
	uint8_t feat;
	bitflag *info;
	int light;
	int16_t mon;
	struct object *obj;
	struct trap *trap;
};

struct flow {
	struct loc centre;
	uint16_t **grids;
};

struct connector {
	struct loc grid;
	uint8_t feat;
	bitflag *info;
	struct connector *next;
};

struct chunk {
	char *name;
	int32_t turn;
	int depth;

	int height;
	int width;

	int *feat_count;

	struct loc project_path_ignore;

	struct square **squares;
	struct flow player_noise;
	struct flow monster_noise;
	struct flow scent;
	int scent_age;

	struct object **objects;
	uint16_t obj_max;

	struct monster *monsters;
	uint16_t mon_max;
	uint16_t mon_cnt;
	int mon_current;

	struct monster_group **monster_groups;

	char *vault_name;
};

/*** Feature Indexes (see "lib/gamedata/terrain.txt") ***/
enum {
	#define FEAT(x) FEAT_##x,
	#include "list-terrain.h"
	#undef FEAT
	FEAT_MAX
};

/* Current level */
extern struct chunk *cave;
/* Stored levels */
extern struct chunk **chunk_list;
extern uint16_t chunk_list_max;

/* cave-fire.c */
errr vinfo_init(void);
void forget_fire(struct chunk *c);
void update_fire(struct chunk *c, struct player *p);
int project_path(struct chunk *c, struct loc *gp, int range, struct loc grid1,
	struct loc *grid2, int flg);

/* cave-view.c */
int distance(struct loc grid1, struct loc grid2);
bool los(struct chunk *c, struct loc grid1, struct loc grid2);
void update_view(struct chunk *c, struct player *p);
bool no_light(const struct player *p);

/* cave-map.c */
void map_info(struct loc grid, struct grid_data *g);
void square_note_spot(struct chunk *c, struct loc grid);
void square_light_spot(struct chunk *c, struct loc grid);
void light_room(struct loc grid, bool light);
void wiz_light(struct chunk *c, struct player *p);
void wiz_dark(struct chunk *c, struct player *p);
void cave_illuminate(struct chunk *c, bool daytime);
void expose_to_sun(struct chunk *c, struct loc grid, bool daytime);

/* cave-square.c */
/**
 * square_predicate is a function pointer which tests a given square to
 * see if the predicate in question is true.
 */
typedef bool (*square_predicate)(struct chunk *c, struct loc grid);

/* FEATURE PREDICATES */
bool feat_is_rock(int feat);
bool feat_is_quartz(int feat);
bool feat_is_granite(int feat);
bool feat_is_wall(int feat);
bool feat_is_floor(int feat);
bool feat_is_trap_holding(int feat);
bool feat_is_object_holding(int feat);
bool feat_is_monster_walkable(int feat);
bool feat_is_forge(int feat);
bool feat_is_los(int feat);
bool feat_is_passable(int feat);
bool feat_is_projectable(int feat);
bool feat_is_torch(int feat);
bool feat_is_pit(int feat);
bool feat_is_no_flow(int feat);
bool feat_is_no_scent(int feat);
bool feat_is_chasm(int feat);

/* SQUARE FEATURE PREDICATES */
bool square_isfloor(struct chunk *c, struct loc grid);
bool square_istrappable(struct chunk *c, struct loc grid);
bool square_isobjectholding(struct chunk *c, struct loc grid);
bool square_isgranitewall(struct chunk *c, struct loc grid);
bool square_isrock(struct chunk *c, struct loc grid);
bool square_isgranite(struct chunk *c, struct loc grid);
bool square_isperm(struct chunk *c, struct loc grid);
bool square_isquartz(struct chunk *c, struct loc grid);
bool square_ismineral(struct chunk *c, struct loc grid);
bool square_isrubble(struct chunk *c, struct loc grid);
bool square_issecretdoor(struct chunk *c, struct loc grid);
bool square_isopendoor(struct chunk *c, struct loc grid);
bool square_iscloseddoor(struct chunk *c, struct loc grid);
bool square_isbrokendoor(struct chunk *c, struct loc grid);
bool square_isdoor(struct chunk *c, struct loc grid);
bool square_iswall(struct chunk *c, struct loc grid);
bool square_isstairs(struct chunk *c, struct loc grid);
bool square_isupstairs(struct chunk *c, struct loc grid);
bool square_isdownstairs(struct chunk *c, struct loc grid);
bool square_isshaft(struct chunk *c, struct loc grid);
bool square_isforge(struct chunk *c, struct loc grid);
bool square_isplayer(struct chunk *c, struct loc grid);
bool square_isoccupied(struct chunk *c, struct loc grid);
bool square_isimpassable(struct chunk *c, struct loc grid);
bool square_isknown(struct chunk *c, struct loc grid);
bool square_ismemorybad(struct chunk *c, struct loc grid);
bool square_ischasm(struct chunk *c, struct loc grid);

/* SQUARE INFO PREDICATES */
bool square_ismark(struct chunk *c, struct loc grid);
bool square_isglow(struct chunk *c, struct loc grid);
bool square_isvault(struct chunk *c, struct loc grid);
bool square_isgreatervault(struct chunk *c, struct loc grid);
bool square_isroom(struct chunk *c, struct loc grid);
bool square_isseen(struct chunk *c, struct loc grid);
bool square_isview(struct chunk *c, struct loc grid);
bool square_isfire(struct chunk *c, struct loc grid);
bool square_wasseen(struct chunk *c, struct loc grid);
bool square_isfeel(struct chunk *c, struct loc grid);
bool square_istrap(struct chunk *c, struct loc grid);
bool square_isinvis(struct chunk *c, struct loc grid);
bool square_iswall_inner(struct chunk *c, struct loc grid);
bool square_iswall_outer(struct chunk *c, struct loc grid);
bool square_iswall_solid(struct chunk *c, struct loc grid);
bool square_tobechasm(struct chunk *c, struct loc grid);
bool square_isproject(struct chunk *c, struct loc grid);
bool square_isno_stairs(struct chunk *c, struct loc grid);

/* SQUARE BEHAVIOR PREDICATES */
bool square_isopen(struct chunk *c, struct loc grid);
bool square_isempty(struct chunk *c, struct loc grid);
bool square_isunseen(struct chunk *c, struct loc grid);
bool square_isarrivable(struct chunk *c, struct loc grid);
bool square_canputitem(struct chunk *c, struct loc grid);
bool square_isdiggable(struct chunk *c, struct loc grid);
bool square_iswebbable(struct chunk *c, struct loc grid);
bool square_isleapable(struct chunk *c, struct loc grid);
bool square_is_monster_walkable(struct chunk *c, struct loc grid);
bool square_ispassable(struct chunk *c, struct loc grid);
bool square_isprojectable(struct chunk *c, struct loc grid);
bool square_allowslos(struct chunk *c, struct loc grid);
bool square_isstrongwall(struct chunk *c, struct loc grid);
bool square_ispit(struct chunk *c, struct loc grid);
bool square_islit(struct chunk *c, struct loc grid);
bool square_isnoflow(struct chunk *c, struct loc grid);
bool square_isnoscent(struct chunk *c, struct loc grid);
bool square_iswarded(struct chunk *c, struct loc grid);
bool square_iswebbed(struct chunk *c, struct loc grid);
bool square_seemslikewall(struct chunk *c, struct loc grid);
bool square_isinteresting(struct chunk *c, struct loc grid);
bool square_islockeddoor(struct chunk *c, struct loc grid);
bool square_isjammeddoor(struct chunk *c, struct loc grid);
bool square_isplayertrap(struct chunk *c, struct loc grid);
bool square_isvisibletrap(struct chunk *c, struct loc grid);
bool square_issecrettrap(struct chunk *c, struct loc grid);
bool square_isdisabledtrap(struct chunk *c, struct loc grid);
bool square_isdisarmabletrap(struct chunk *c, struct loc grid);
bool square_dtrap_edge(struct chunk *c, struct loc grid);
bool square_changeable(struct chunk *c, struct loc grid);
bool square_in_bounds(struct chunk *c, struct loc grid);
bool square_in_bounds_fully(struct chunk *c, struct loc grid);
bool square_isbelievedwall(struct chunk *c, struct loc grid);
bool square_suits_start(struct chunk *c, struct loc grid);
bool square_suits_stairs(struct chunk *c, struct loc grid);
bool square_allows_summon(struct chunk *c, struct loc grid);
bool square_seen_by_keen_senses(struct chunk *c, struct loc grid);


const struct square *square(struct chunk *c, struct loc grid);
struct feature *square_feat(struct chunk *c, struct loc grid);
int square_light(struct chunk *c, struct loc grid);
struct monster *square_monster(struct chunk *c, struct loc grid);
struct object *square_object(struct chunk *c, struct loc grid);
struct trap *square_trap(struct chunk *c, struct loc grid);
bool square_holds_object(struct chunk *c, struct loc grid, struct object *obj);
void square_excise_object(struct chunk *c, struct loc grid, struct object *obj);
void square_excise_pile(struct chunk *c, struct loc grid);
void square_excise_all_imagined(struct chunk *p_c, struct chunk *c,
		struct loc grid);
void square_delete_object(struct chunk *c, struct loc grid, struct object *obj, bool do_note, bool do_light);
void square_know_pile(struct chunk *c, struct loc grid);
int square_num_doors_adjacent(struct chunk *c, struct loc grid);
int square_num_walls_diagonal(struct chunk *c, struct loc grid);


/* Feature placers */
void square_set_feat(struct chunk *c, struct loc grid, int feat);
void square_set_mon(struct chunk *c, struct loc grid, int midx);
void square_set_obj(struct chunk *c, struct loc grid, struct object *obj);
void square_set_trap(struct chunk *c, struct loc grid, struct trap *trap);
void square_add_trap(struct chunk *c, struct loc grid);
void square_add_glyph(struct chunk *c, struct loc grid, int type);
void square_add_web(struct chunk *c, struct loc grid);
void square_add_stairs(struct chunk *c, struct loc grid, int depth);
void square_add_door(struct chunk *c, struct loc grid, bool closed);

/* Feature modifiers */
void square_open_door(struct chunk *c, struct loc grid);
void square_close_door(struct chunk *c, struct loc grid);
void square_smash_door(struct chunk *c, struct loc grid);
void square_unlock_door(struct chunk *c, struct loc grid);
void square_destroy_door(struct chunk *c, struct loc grid);
void square_destroy_trap(struct chunk *c, struct loc grid);
void square_tunnel_wall(struct chunk *c, struct loc grid);
void square_destroy_wall(struct chunk *c, struct loc grid);
void square_smash_wall(struct chunk *c, struct loc grid);
void square_destroy_rubble(struct chunk *c, struct loc grid);
void square_force_floor(struct chunk *c, struct loc grid);


int square_digging(struct chunk *c, struct loc grid);
int square_pit_difficulty(struct chunk *c, struct loc grid);
int square_forge_bonus(struct chunk *c, struct loc grid);
void square_apparent_name(struct chunk *c, struct loc grid, char *name,
						  int size);
const char *square_apparent_look_prefix(struct chunk *c, struct loc grid);
const char *square_apparent_look_in_preposition(struct chunk *c, struct loc grid);

void square_memorize(struct chunk *c, struct loc grid);
void square_forget(struct chunk *c, struct loc grid);
void square_mark(struct chunk *c, struct loc grid);
void square_unmark(struct chunk *c, struct loc grid);

/* cave.c */
int motion_dir(struct loc source, struct loc target);
struct loc next_grid(struct loc grid, int dir);
int dir_from_delta(int delta_y, int delta_x);
int rough_direction(struct loc grid1, struct loc grid2);
int lookup_feat(const char *name);
int lookup_feat_code(const char *code);
const char *get_feat_code_name(int idx);
void flow_new(struct chunk *c, struct flow *flow);
void flow_free(struct chunk *c, struct flow *flow);
struct chunk *cave_new(int height, int width);
void cave_connectors_free(struct connector *join);
void cave_free(struct chunk *c);
void list_object(struct chunk *c, struct object *obj);
void delist_object(struct chunk *c, struct object *obj);
void object_lists_check_integrity(struct chunk *c, struct chunk *c_k);
void scatter(struct chunk *c, struct loc *place, struct loc grid, int d,
			 bool need_los);
int scatter_ext(struct chunk *c, struct loc *places, int n, struct loc grid,
		int d, bool need_los, bool (*pred)(struct chunk *, struct loc));

struct monster *cave_monster(struct chunk *c, int idx);
int cave_monster_max(struct chunk *c);
int cave_monster_count(struct chunk *c);

int count_feats(struct loc *grid,
				bool (*test)(struct chunk *c, struct loc grid), bool under);
int count_neighbors(struct loc *match, struct chunk *c, struct loc grid,
	bool (*test)(struct chunk *c, struct loc grid), bool under);

void cave_known(struct player *p);

#endif /* !CAVE_H */
