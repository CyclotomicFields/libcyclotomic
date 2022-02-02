/****************************************************************************
**
**  This file is part of GAP, a system for computational discrete algebra.
**
**  Copyright of GAP belongs to its developers, whose names are too numerous
**  to list here. Please refer to the COPYRIGHT file for details.
**
**  SPDX-License-Identifier: GPL-2.0-or-later
**
**  This file contains the GAP build version
*/

#include "version.h"


/****************************************************************************
**
*V  SyKernelVersion . . . . . . . . . . . . . . . . . . kernel version number
**
**  'SyKernelVersion' is something like "4.37.2" or "4.37dev".
*/
const char * SyKernelVersion = "4.12dev";


/****************************************************************************
**
*V  SyReleaseDay . . . . . . . . . . . . . . release date of this GAP version
**
**  'SyReleaseDay' is the date of the release, e.g. "19-Jun-2019"; for
**  development versions, this is set to "today".
*/
const char * SyReleaseDay = "today";


/****************************************************************************
**
*V  SyBuildVersion . . . . . . . . . . . . . . . . . source version for build
**
**  'SyBuildVersion' is identical to 'SyKernelVersion' for release versions.
**  For development versions, it is something like "4.37dev-302-g09161ee".
*/
const char * SyBuildVersion = "4.12dev-1153-g056d4af";


/****************************************************************************
**
*V  SyBuildDateTime . . . . . . . . . .  date and time the build was compiled
**
**  'SyBuildDateTime' is set to something like "2020-01-30 09:48:08", with
**  the value given in local time.
*/
const char * SyBuildDateTime = "2022-02-02 17:18:14+0000";
