#pragma once
/**
 * \file z-type.h
 * \brief Support various data types.
 *
 * Copyright (c) 2007 Angband Developers
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

#ifndef INCLUDED_ZTYPE_H
#define INCLUDED_ZTYPE_H

#include "h-basic.h"

struct loc {
	int x;
	int y;
};

struct loc loc(int x, int y);
bool loc_eq(struct loc grid1, struct loc grid2);
bool loc_is_zero(struct loc grid);
struct loc loc_sum(struct loc grid1, struct loc grid2);
struct loc loc_diff(struct loc grid1, struct loc grid2);
struct loc rand_loc(struct loc grid, int x_spread, int y_spread);
struct loc loc_offset(struct loc grid, int dx, int dy);


/**
 * Defines a (value, name) pairing.  Variable names used are historical.
 */
typedef struct grouper grouper;
struct grouper {
	int tval;
	const char *name;
};

/**
 * A set of points that can be constructed to apply a set of changes to
 */
struct point_set {
	int n;
	int allocated;
	struct loc *pts;
};

struct point_set *point_set_new(int initial_size);
void point_set_dispose(struct point_set *ps);
void add_to_point_set(struct point_set *ps, struct loc grid);
int point_set_size(struct point_set *ps);
int point_set_contains(struct point_set *ps, struct loc grid);

#endif /* !INCLUDED_ZTYPE_H */
