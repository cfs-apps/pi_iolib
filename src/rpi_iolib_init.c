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
#include "../config.h"

/*
** Global File Data
*/

static const char *Version = "1.1.0";

/*
** Exported Functions
*/

/******************************************************************************
** Entry function
**
*/
uint32 RPI_IOLIB_Init(void)
{
   uint8 ChipCnt = 0; 
   
   #ifdef BCM2836_7
   ChipCnt++;
   OS_printf("RPI_IOLIB Version %s Initialized for BCM2836_7\n", Version);
   #endif
   #ifdef BCM2835
   ChipCnt++;
   OS_printf("RPI_IOLIB Version %s Initialized for BCM2835\n", Version);
   #endif
   #ifdef BCM2711
   ChipCnt++;
   OS_printf("RPI_IOLIB Version %s Initialized for BCM2711\n", Version);
   #endif
   
   if (ChipCnt != 1)
   {
      OS_printf("RPI_IOLIB Initialized. \n");      
   }
   
   return OS_SUCCESS;

} /* End RPI_IOLIB_Init() */

