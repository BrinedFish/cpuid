#pragma once

#include <memory>
#include <cstdio>

#if (defined(_MSC_VER) && defined(_M_ARM))
    #include <armintr.h>
#endif

#if (defined(__linux__) || defined(ANDROID))
    #include <cstring>
#endif

namespace cpuid
{

    class cpuinfo
    {
        public:

            /// Constructor for feature detection with default values per arch
            cpuinfo();

            /// Destructor
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

        private:

            class impl;
            std::unique_ptr<impl> m_impl;

    };
}
