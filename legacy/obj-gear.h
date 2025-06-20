#pragma once
/**
 * \file: obj-gear.h
 * \brief management of inventory, equipment and quiver
 *
 * Copyright (c) 1997 Ben Harrison, James E. Wilson, Robert A. Koeneke
 * Copyright (c) 2014 Nick McConnell
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

#ifndef OBJECT_GEAR_H
#define OBJECT_GEAR_H

#include "player.h"

/**
 * Player equipment slot types
 */
enum
{
	#define EQUIP(a, b, c, d, e) EQUIP_##a,
	#include "list-equip-slots.h"
	#undef EQUIP
	EQUIP_MAX
};

int slot_by_name(struct player *p, const char *name);
bool slot_type_is(const struct player *p, int slot, int type);
struct object *slot_object(struct player *p, int slot);
struct object *equipped_item_by_slot_name(struct player *p, const char *name);
int object_slot(struct player_body body, const struct object *obj);
bool object_is_equipped(struct player_body body, const struct object *obj);
bool object_is_carried(struct player *p, const struct object *obj);
bool object_is_in_quiver(const struct player *p, const struct object *obj);
uint16_t object_pack_total(struct player *p, const struct object *obj,
	bool ignore_inscrip, struct object **first);
int pack_slots_used(const struct player *p);
const char *equip_mention(struct player *p, int slot);
const char *equip_describe(struct player *p, int slot);
int wield_slot(const struct object *obj);
bool minus_ac(struct player *p);
char gear_to_label(struct player *p, struct object *obj);
bool gear_excise_object(struct player *p, struct object *obj);
struct object *gear_last_item(struct player *p);
void gear_insert_end(struct player *p, struct object *obj);
struct object *gear_object_for_use(struct player *p, struct object *obj,
	int num, bool message, bool *none_left);
bool handle_stickied_removal(struct player *p, struct object *obj);
int inven_carry_num(const struct player *p, const struct object *obj);
bool inven_carry_okay(const struct object *obj);
void inven_item_charges(struct object *obj);
void inven_carry(struct player *p, struct object *obj, bool absorb,
				 bool message);
void inven_wield(struct object *obj, int slot);
void inven_takeoff(struct object *item);
void inven_drop(struct object *obj, int amt);
bool inven_destroy(struct object *obj, int amt);
void combine_pack(struct player *p);
bool pack_is_full(void);
bool pack_is_overfull(void);
void pack_overflow(struct object *obj);
int preferred_quiver_slot(const struct object *obj);
bool player_has_throwable(struct player *p, bool show_msg);
bool player_has_throwable_prereq(void);

#endif /* OBJECT_GEAR_H */
