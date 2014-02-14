// Copyright (c) 2011-2014 Steinwurf ApS
// All Rights Reserved
//
// Distributed under the "BSD License". See accompanying file LICENSE.rst

#pragma once

namespace cpuid
{
    void extract_x86_flags(cpuinfo::impl& info, uint32_t ecx, uint32_t edx)
    {
        // Instruction set flags

        info.m_has_fpu = (edx & (1 << 0)) != 0;
        info.m_has_mmx = (edx & (1 << 23)) != 0;
        info.m_has_sse = (edx & (1 << 25)) != 0;
        info.m_has_sse2 = (edx & (1 << 26)) != 0;
        info.m_has_sse3 = (ecx & (1 << 0)) != 0;
        info.m_has_ssse3 = (ecx & (1 << 9)) != 0;
        info.m_has_sse4_1 = (ecx & (1 << 19)) != 0;
        info.m_has_sse4_2 = (ecx & (1 << 20)) != 0;
        info.m_has_pclmulqdq = (ecx & (1 << 1)) != 0;
        info.m_has_avx = (ecx & (1 << 28)) != 0;
    }
}
