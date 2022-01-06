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
// $hash=ab8680da4bc909d2c1a6cf723fafc1a561bfeb44$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_PRINT_SETTINGS_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_PRINT_SETTINGS_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_print_settings_capi.h"
#include "include/cef_print_settings.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefPrintSettingsCppToC
    : public CefCppToCRefCounted<CefPrintSettingsCppToC,
                                 CefPrintSettings,
                                 cef_print_settings_t> {
 public:
  CefPrintSettingsCppToC();
  virtual ~CefPrintSettingsCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_PRINT_SETTINGS_CPPTOC_H_
