/*****************************************************************************

  Copyright (c) 2016, VLDB Lab, SKKU. All Rights Reserved.

  This program is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free Software
  Foundation; version 2 of the License.

  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc.,
  51 Franklin Street, Suite 500, Boston, MA 02110-1335 USA

 *****************************************************************************/

/**************************************************//**
 @file include/aio0mul.h
 The database prefetch routines
 Created 12/02/16 Dasom Hwang
*******************************************************/

#ifndef aio0mul_h
#define aio0mul_h

//#include "srv0srv.h"
//#include <stdio.h>

/** How many records to be collected. 
  This value might be different from 
  the # of AIO Prefetch submision unit. */
//#define PREFETCH_ARRAY_N (srv_sort_buf_size / sizeof(prefetch_t))

#if 0
extern aio_prefetch_array_n;
* Think! Caculate and assign later in row_create_prebuilt().
#endif

/* Activate Prefetch*/
#define AIO_PREFETCH 0

#endif

