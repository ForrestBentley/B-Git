//  Copyright (C) 1995-1999 Microsoft Corporation.  All rights reserved.

#ifndef __MTXDM_H__
#pragma option push -b -a8 -pc -A- /*P_O_Push*/
#define __MTXDM_H__

// mtxdm.h
// Defines legacy mtxdm startup interface, remove asap, when all dispensers stop doing this.
// New stuff is in ccpublic.idl and dispman.idl

#include "comsvcs.h"

#ifdef __cplusplus
extern "C"{
#endif 

//
// GetDispenserManager
// A Dispenser calls this API to get a reference to DispenserManager.
//
__declspec(dllimport) HRESULT __cdecl GetDispenserManager(IDispenserManager**);


#ifdef __cplusplus
}
#endif


#pragma option pop /*P_O_Pop*/
#endif