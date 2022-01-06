// Copyright (c) 2022 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=d1a941bd47da6a5d5da6f4ce72f48d480351621f$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_MEDIA_ROUTE_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_MEDIA_ROUTE_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_media_router_capi.h"
#include "include/cef_media_router.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefMediaRouteCppToC : public CefCppToCRefCounted<CefMediaRouteCppToC,
                                                       CefMediaRoute,
                                                       cef_media_route_t> {
 public:
  CefMediaRouteCppToC();
  virtual ~CefMediaRouteCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_MEDIA_ROUTE_CPPTOC_H_
