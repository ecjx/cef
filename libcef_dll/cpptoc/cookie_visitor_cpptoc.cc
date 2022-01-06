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
// $hash=922e883b71eb54b943f7cb4748bd2298eb296eee$
//

#include "libcef_dll/cpptoc/cookie_visitor_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK cookie_visitor_visit(struct _cef_cookie_visitor_t* self,
                                      const struct _cef_cookie_t* cookie,
                                      int count,
                                      int total,
                                      int* deleteCookie) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: cookie; type: struct_byref_const
  DCHECK(cookie);
  if (!cookie)
    return 0;
  // Verify param: deleteCookie; type: bool_byref
  DCHECK(deleteCookie);
  if (!deleteCookie)
    return 0;

  // Translate param: cookie; type: struct_byref_const
  CefCookie cookieObj;
  if (cookie)
    cookieObj.Set(*cookie, false);
  // Translate param: deleteCookie; type: bool_byref
  bool deleteCookieBool = (deleteCookie && *deleteCookie) ? true : false;

  // Execute
  bool _retval = CefCookieVisitorCppToC::Get(self)->Visit(
      cookieObj, count, total, deleteCookieBool);

  // Restore param: deleteCookie; type: bool_byref
  if (deleteCookie)
    *deleteCookie = deleteCookieBool ? true : false;

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefCookieVisitorCppToC::CefCookieVisitorCppToC() {
  GetStruct()->visit = cookie_visitor_visit;
}

// DESTRUCTOR - Do not edit by hand.

CefCookieVisitorCppToC::~CefCookieVisitorCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefCookieVisitor> CefCppToCRefCounted<
    CefCookieVisitorCppToC,
    CefCookieVisitor,
    cef_cookie_visitor_t>::UnwrapDerived(CefWrapperType type,
                                         cef_cookie_visitor_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefCookieVisitorCppToC,
                                   CefCookieVisitor,
                                   cef_cookie_visitor_t>::kWrapperType =
    WT_COOKIE_VISITOR;
