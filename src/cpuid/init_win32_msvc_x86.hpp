// Copyright (c) 2011-2014 Steinwurf ApS
// All Rights Reserved
//
// THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF STEINWURF
// The copyright notice above does not evidence any
// actual or intended publication of such source code.

#pragma once

#include <intrin.h>

#include "cpuinfo.hpp"
#include "extract_x86_flags.hpp"

namespace cpuid
{
    /// @todo docs
    void init_cpuinfo(cpuinfo::impl& info)
    {
        int registers[4];

        /// According to the msvc docs eax, ebx, ecx and edx are
        /// stored (in that order) in the array passed to the __cpuid
        /// function.

        // Get flags

        __cpuid(registers, 1);
        extract_x86_flags(info, registers[2], registers[3]);
    }
}
