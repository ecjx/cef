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
// $hash=4cf29c1d2d715dee4855acda840ca47d5f1fabbf$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_STRING_VISITOR_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_STRING_VISITOR_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/capi/cef_string_visitor_capi.h"
#include "include/cef_string_visitor.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefStringVisitorCppToC
    : public CefCppToCRefCounted<CefStringVisitorCppToC,
                                 CefStringVisitor,
                                 cef_string_visitor_t> {
 public:
  CefStringVisitorCppToC();
  virtual ~CefStringVisitorCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_STRING_VISITOR_CPPTOC_H_
