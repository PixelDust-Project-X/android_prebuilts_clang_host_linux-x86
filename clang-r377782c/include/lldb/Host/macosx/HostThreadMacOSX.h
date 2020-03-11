//===-- HostThreadMacOSX.h --------------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef lldb_Host_macosx_HostThreadMacOSX_h_
#define lldb_Host_macosx_HostThreadMacOSX_h_

#include "lldb/Host/posix/HostThreadPosix.h"

namespace lldb_private {

class HostThreadMacOSX : public HostThreadPosix {
  friend class ThreadLauncher;

public:
  HostThreadMacOSX();
  HostThreadMacOSX(lldb::thread_t thread);

protected:
  static lldb::thread_result_t ThreadCreateTrampoline(lldb::thread_arg_t arg);
};
}

#endif
