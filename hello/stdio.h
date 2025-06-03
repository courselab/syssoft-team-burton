/*
 *    SPDX-FileCopyrightText: 2025 Lucas Claros <lucas.claros@cobli.co>
 *   
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  Lucas Claros <lucas.claros@cobli.co>
 */

#ifndef E8_H
#define E8_H

void __attribute__((fastcall, naked)) printf(const char *); 
int get_key(void);

#endif
