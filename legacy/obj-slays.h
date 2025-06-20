#pragma once
/**
 * \file obj-slays.h
 * \brief Structures and functions for dealing with slays and brands
 *
 * Copyright (c) 2014 Chris Carr, Nick McConnell
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
#ifndef OBJECT_SLAYS_H
#define OBJECT_SLAYS_H

#include "monster.h"

extern struct slay *slays;
extern struct brand *brands;

/*** Functions ***/
int lookup_slay(const char *code);
int lookup_brand(const char *code);
bool same_monsters_slain(int slay1, int slay2);
void copy_slays(bool **dest, bool *source);
void copy_brands(bool **dest, bool *source);
int brand_count(const bool *brands_on);
int slay_count(const bool *slays_on);
bool react_to_slay(struct slay *slay, const struct monster *mon);
int slay_bonus(struct player *p, struct object *obj, const struct monster *mon,
			   int *slay, int *brand);
void learn_brand_slay_from_melee(struct player *p, struct object *weapon,
	const struct monster *mon);
void learn_brand_slay_from_launch(struct player *p, struct object *missile,
	struct object *launcher, const struct monster *mon);
void learn_brand_slay_from_throw(struct player *p, struct object *missile,
	const struct monster *mon);

#endif /* OBJECT_SLAYS_H */
