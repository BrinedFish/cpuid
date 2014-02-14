// Copyright (c) 2011-2014 Steinwurf ApS
// All Rights Reserved
//
// Distributed under the "BSD License". See accompanying file LICENSE.rst

#pragma once

#include <memory>
#include <string>

namespace cpuid
{
    class cpuinfo
    {
    public:

        /// Constructor for feature detection with default values
        cpuinfo();

        ~cpuinfo();

        /// x86 member functions
        bool has_fpu() const;
        bool has_mmx() const;
        bool has_sse() const;
        bool has_sse2() const;
        bool has_sse3() const;
        bool has_ssse3() const;
        bool has_sse4_1() const;
        bool has_sse4_2() const;
        bool has_pclmulqdq() const;
        bool has_avx() const;

        /// ARM member functions
        bool has_neon() const;

        /// CPU Platform
        std::string platform() const;

    public:

        struct impl;

    private:

        std::unique_ptr<impl> m_impl;

    };
}
