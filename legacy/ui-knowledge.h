#pragma once
/**
 * \file ui-knowledge.h
 * \brief Player knowledge functions
 *
 * Copyright (c) 2000-2007 Eytan Zweig, Andrew Doull, Pete Mack.
 * Copyright (c) 2010 Peter Denison, Chris Carr.
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
#ifndef UI_KNOWLEDGE_H
#define UI_KNOWLEDGE_H

#include "datafile.h"
#include "monster.h"

void textui_browse_object_knowledge(const char *name, int row);
void textui_knowledge_init(void);
void textui_knowledge_cleanup(void);
void textui_browse_knowledge(void);
void do_cmd_message_one(void);
void do_cmd_messages(void);
void do_cmd_inven(void);
void do_cmd_equip(void);
void do_cmd_look(void);
void do_cmd_locate(void);
int cmp_monsters(const void *a, const void *b);
void do_cmd_query_symbol(void);
void do_cmd_center_map(void);
void do_cmd_monlist(void);
void do_cmd_itemlist(void);

/* Exposed for use by test cases. */
struct ui_monster_category {
	struct ui_monster_category *next;
	const char *name;
	const struct monster_base **inc_bases;
	wchar_t *inc_glyphs;
	bitflag inc_flags[RF_SIZE];
	int n_inc_bases, max_inc_bases;
	int n_inc_glyphs, max_inc_glyphs;
};
struct ui_knowledge_parse_state {
	struct ui_monster_category *categories;
};
extern struct file_parser ui_knowledge_parser;

#endif /* UI_KNOWLEDGE_H */
