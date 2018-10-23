// Copyright (c) 2013 Steinwurf ApS
// All Rights Reserved
//
// Distributed under the "BSD License". See the accompanying LICENSE.rst file.

#pragma once

#include <memory>

#include "platform.hpp"

namespace cpuid
{

class cpuinfo;
void init_cpuinfo(cpuinfo& info);
class cpuinfo
{
public:

    cpuinfo() :
        m_has_fpu(false),
        m_has_mmx(false),
        m_has_sse(false),
        m_has_sse2(false),
        m_has_sse3(false),
        m_has_ssse3(false),
        m_has_sse4_1(false),
        m_has_sse4_2(false),
        m_has_pclmulqdq(false),
        m_has_avx(false),
        m_has_avx2(false),
        m_has_neon(false)
    {
        init_cpuinfo(*this);
    }

    // x86 member functions
    bool has_fpu() const
    {
        return m_has_fpu;
    }

    bool has_mmx() const
    {
        return m_has_mmx;
    }

    bool has_sse() const
    {
        return m_has_sse;
    }

    bool has_sse2() const
    {
        return m_has_sse2;
    }

    bool has_sse3() const
    {
        return m_has_sse3;
    }

    bool has_ssse3() const
    {
        return m_has_ssse3;
    }

    bool has_sse4_1() const
    {
        return m_has_sse4_1;
    }

    bool has_sse4_2() const
    {
        return m_has_sse4_2;
    }

    bool has_pclmulqdq() const
    {
        return m_has_pclmulqdq;
    }

    bool has_avx() const
    {
        return m_has_avx;
    }

    bool has_avx2() const
    {
        return m_has_avx2;
    }

    // ARM functions
    bool has_neon() const
    {
        return m_has_neon;
    }

public:

    bool m_has_fpu;
    bool m_has_mmx;
    bool m_has_sse;
    bool m_has_sse2;
    bool m_has_sse3;
    bool m_has_ssse3;
    bool m_has_sse4_1;
    bool m_has_sse4_2;
    bool m_has_pclmulqdq;
    bool m_has_avx;
    bool m_has_avx2;
    bool m_has_neon;
};
}

#if defined(CPUID_PLATFORM_GCC_COMPATIBLE_X86)
    #include "init_gcc_x86.hpp"
#elif defined(CPUID_PLATFORM_MSVC_X86) && !defined(CPUID_PLATFORM_WINDOWS_PHONE)
    #include "init_msvc_x86.hpp"
#elif defined(CPUID_PLATFORM_MSVC_ARM)
    #include "init_msvc_arm.hpp"
#elif defined(CPUID_PLATFORM_CLANG_ARM) && defined(CPUID_PLATFORM_IOS)
    #include "init_ios_clang_arm.hpp"
#elif defined(CPUID_PLATFORM_GCC_COMPATIBLE_ARM) && defined(CPUID_PLATFORM_LINUX)
    #include "init_linux_gcc_arm.hpp"
#else
    #include "init_unknown.hpp"
#endif