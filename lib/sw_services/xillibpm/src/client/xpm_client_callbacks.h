/******************************************************************************
*
* Copyright (C) 2019 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*
*
*
******************************************************************************/

#ifndef _XPM_CLIENT_CALLBACKS_H_
#define _XPM_CLIENT_CALLBACKS_H_

#include "xpm_client_api.h"

#ifdef __cplusplus
extern "C" {
#endif

XStatus XPm_NotifierAdd(XPm_Notifier* const Notifier);

XStatus XPm_NotifierRemove(XPm_Notifier* const Notifier);

void XPm_NotifierProcessEvent(const u32 Node, const enum XPmNotifyEvent Event,
			      const u32 Oppoint);

#ifdef __cplusplus
}
#endif

#endif /* _XPM_CLIENT_CALLBACKS_H_ */