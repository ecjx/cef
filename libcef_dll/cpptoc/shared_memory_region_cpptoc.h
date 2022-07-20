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
// $hash=77de7d9d9e62fa5075ff6e76e4647639c51a7f05$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_SHARED_MEMORY_REGION_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_SHARED_MEMORY_REGION_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_shared_memory_region_capi.h"
#include "include/cef_shared_memory_region.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefSharedMemoryRegionCppToC
    : public CefCppToCRefCounted<CefSharedMemoryRegionCppToC,
                                 CefSharedMemoryRegion,
                                 cef_shared_memory_region_t> {
 public:
  CefSharedMemoryRegionCppToC();
  virtual ~CefSharedMemoryRegionCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_SHARED_MEMORY_REGION_CPPTOC_H_