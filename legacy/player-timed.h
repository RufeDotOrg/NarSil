#pragma once
/**
 * \file player-timed.h
 * \brief Timed effects handling
 *
 * Copyright (c) 1997 Ben Harrison
 * Copyright (c) 2007 A Sidwell <andi@takkaria.org>
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

#ifndef PLAYER_TIMED_H
#define PLAYER_TIMED_H

#include "player.h"

/**
 * Timed effects
 */
enum
{
	#define TMD(a, b, c) TMD_##a,
	#include "list-player-timed.h"
	#undef TMD
	TMD_MAX
};

struct timed_grade {
	int grade;
	uint8_t color;
	int max;
	char *name;
	char *up_msg;
	char *down_msg;
	struct timed_grade *next;
};

struct timed_change {
	struct timed_change *next;
	int max;
	char *msg;
	char *inc_msg;
};

struct timed_change_grade {
	int c_grade;
	uint8_t color;
	int max;
	int digits;
	char *name;
	struct timed_change_grade *next;
};

/**
 * Data struct
 */
struct timed_effect_data {
	const char *name;
	uint32_t flag_redraw;
	uint32_t flag_update;

	int index;
	char *desc;
	char *on_end;
	char *on_increase;
	char *on_decrease;
	int msgt;
	int fail;
	struct timed_grade *grade;
	struct timed_change_grade *c_grade;
	struct timed_change *increase;
	struct timed_change decrease;
	int temp_resist;
	bool este;
	bool save;
};

/**
 * Player food values
 */
extern int PY_FOOD_MAX; 	/* Food value (Bloated) */
extern int PY_FOOD_FULL;	/* Food value (Normal) */
extern int PY_FOOD_ALERT;	/* Food value (Hungry) */
extern int PY_FOOD_WEAK;	/* Food value (Weak) */
extern int PY_FOOD_STARVE;	/* Food value (Starving) */

extern struct file_parser player_timed_parser;
extern struct timed_effect_data timed_effects[TMD_MAX];

int timed_name_to_idx(const char *name);
int player_timed_decrement_amount(struct player *p, int idx);
const char *player_get_timed_grade(const struct player *p, int idx);
bool player_timed_grade_eq(const struct player *p, int idx, const char *match);
bool player_timed_grade_gt(const struct player *p, int idx, const char *match);
bool player_timed_grade_lt(const struct player *p, int idx, const char *match);
bool player_set_timed(struct player *p, int idx, int v, bool notify,
	bool can_disturb);
bool player_saving_throw(struct player *p, struct monster *mon, int resistance);
bool player_inc_check(struct player *p, int idx, bool lore);
bool player_inc_timed(struct player *p, int idx, int v, bool notify,
	bool can_disturb, bool check);
bool player_dec_timed(struct player *p, int idx, int v, bool notify,
	bool can_disturb);
bool player_clear_timed(struct player *p, int idx, bool notify,
	bool can_disturb);
bool player_timed_inc_happened(struct player *p, int old[], int len);

#endif /* !PLAYER_TIMED_H */
