/*
 * %CopyrightBegin%
 *
 * Copyright Ericsson AB 2008-2014. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * %CopyrightEnd%
 */

#ifndef _WXE_GL_H
#define _WXE_GL_H

#include "egl_impl.h"
#include "wxe_return.h"

void activateGL(ErlDrvTermData caller);
void setActiveGL(ErlDrvTermData caller, wxGLCanvas *canvas);
void deleteActiveGL(wxGLCanvas *canvas);
void wxe_initOpenGL(wxeReturn *, char*);
void gl_dispatch(int op, char *bp, ErlDrvTermData caller, WXEBinRef *bins);

WX_DECLARE_HASH_MAP(ErlDrvTermData, wxGLCanvas*, wxIntegerHash, wxIntegerEqual, wxeGLC);
extern wxeGLC glc;

#endif
