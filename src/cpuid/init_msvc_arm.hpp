// Copyright (c) 2013 Steinwurf ApS
// All Rights Reserved
//
// Distributed under the "BSD License". See the accompanying LICENSE.rst file.

#pragma once

#include "cpuinfo.hpp"

namespace cpuid
{
void init_cpuinfo(cpuinfo& info)
{
    // Visual Studio 2012 (and above) guarantees the NEON capability when
    // compiling for Windows Phone 8 (and above)

#if defined(CPUID_PLATFORM_WINDOWS_PHONE)
    info.m_has_neon = true;
#else
    info.m_has_neon = false;
#endif
}
}
