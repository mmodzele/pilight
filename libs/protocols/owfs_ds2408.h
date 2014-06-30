/*
	Copyright (C) 2014 mmodzele

	This file is part of pilight.

    pilight is free software: you can redistribute it and/or modify it under the 
	terms of the GNU General Public License as published by the Free Software 
	Foundation, either version 3 of the License, or (at your option) any later 
	version.

    pilight is distributed in the hope that it will be useful, but WITHOUT ANY 
	WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR 
	A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with pilight. If not, see	<http://www.gnu.org/licenses/>
*/

#ifndef _PROTOCOL_OWFS_DS2408_H_
#define _PROTOCOL_OWFS_DS2408_H_

#include "json.h"
#include "threads.h"

struct protocol_t *owfs_ds2408;
void owfs_ds2408Init(void);

#endif