#pragma once
/**
 * \file obj-util.h
 * \brief Object utilities
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

#ifndef OBJECT_UTIL_H
#define OBJECT_UTIL_H

/* Maximum number of scroll titles generated */
#define MAX_TITLES	 50

/* An item's pval (for charges, amount of gold, etc) is limited to int16_t */
#define MAX_PVAL  32767

struct player;

void flavor_init(void);
void flavor_set_all_aware(void);
void object_flags(const struct object *obj, bitflag flags[OF_SIZE]);
void object_flags_known(const struct object *obj, bitflag flags[OF_SIZE]);
bool object_test(item_tester tester, const struct object *o);
bool item_test(item_tester tester, int item);
unsigned check_for_inscrip(const struct object *obj, const char *inscrip);
unsigned check_for_inscrip_with_int(const struct object *obj, const char *insrip, int *ival);
struct object_kind *lookup_kind(int tval, int sval);
struct object_kind *lookup_selfmade_kind(int tval);
struct object_kind *objkind_byid(int kidx);
const struct artifact *lookup_artifact_name(const char *name);
struct ego_item *lookup_ego_item(const char *name, int tval, int sval);
int lookup_sval(int tval, const char *name);
void object_short_name(char *buf, size_t max, const char *name);
int compare_items(const struct object *o1, const struct object *o2);
uint8_t convert_depth_to_origin(int depth);
int obj_digging_score(const struct object *obj);
bool obj_can_dig(const struct object *obj);
bool obj_has_charges(const struct object *obj);
bool obj_can_refuel(const struct object *obj);
bool obj_can_takeoff(const struct object *obj);
bool obj_can_throw(const struct object *obj);
bool obj_can_wear(const struct object *obj);
bool obj_can_fire(const struct object *obj);
bool obj_is_throwing(const struct object *obj);
bool obj_is_cursed(const struct object *obj);
bool obj_is_broken(const struct object *obj);
bool obj_has_inscrip(const struct object *obj);
bool obj_has_flag(const struct object *obj, int flag);
bool obj_is_useable(const struct object *obj);
bool obj_nourishes(const struct object *obj);
struct effect *object_effect(const struct object *obj);
bool obj_needs_aim(const struct object *obj);
bool obj_allows_vertical_aim(const struct object *obj);

void distribute_charges(struct object *source, struct object *dest, int amt);
void uncurse_object(struct object *obj);
bool verify_object(const char *prompt, const struct object *obj,
		const struct player *p);
void print_custom_message(const struct object *obj, const char *string,
		int msg_type, const struct player *p);

bool is_artifact_created(const struct artifact *art);
bool is_artifact_seen(const struct artifact *art);
bool is_artifact_everseen(const struct artifact *art);
void mark_artifact_created(const struct artifact *art, bool created);
void mark_artifact_seen(const struct artifact *art, bool seen);
void mark_artifact_everseen(const struct artifact *art, bool seen);
void write_self_made_artefact_entries(ang_file *fff);

#endif /* OBJECT_UTIL_H */
