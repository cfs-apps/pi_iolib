/*
**  Copyright 2022 bitValence, Inc.
**  All Rights Reserved.
**
**  This program is free software; you can modify and/or redistribute it
**  under the terms of the GNU Affero General Public License
**  as published by the Free Software Foundation; version 3 with
**  attribution addendums as found in the LICENSE.txt
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU Affero General Public License for more details.
**
**  Purpose:
**    Generic entry point function for MIPEA library
**
**  Notes:
**    1. See gpio_demo_app.h for details.
**
**  References:
**    1. OpenSatKit Object-based Application Developer's Guide.
**    2. cFS Application Developer's Guide.
**
*/

/*
** Includes
*/

#include "cfe.h"

/*
** Exported Functions
*/

/******************************************************************************
** Entry function
**
*/
uint32 PI_IOLIB_Init(void)
{

   OS_printf("PI_IOLIB Initialized. Version 0.9.0\n");
   
   return OS_SUCCESS;

} /* End PI_IOLIB_Init() */

