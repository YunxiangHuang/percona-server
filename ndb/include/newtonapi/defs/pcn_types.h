/* Copyright (C) 2003 MySQL AB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#ifndef PCN_TYPES_H
#define PCN_TYPES_H

#include <ndb_global.h>

#ifdef NDB_MACOSX
typedef unsigned int Size_t;
#elif defined(NDB_SPARC_64)
typedef unsigned int Size_t;
#else
typedef size_t Size_t;
#endif

typedef int Boolean_t;

typedef unsigned UInt32_t;

#define PCN_TRUE true 
#define PCN_FALSE false

#define PCN_SIZE_OF(s, m )    sizeof(((s *)0)->m)
#define PCN_OFFSET_OF(s, m)   offsetof(s, m)

#endif
