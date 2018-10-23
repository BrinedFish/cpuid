// Copyright (c) 2013 Steinwurf ApS
// All Rights Reserved
//
// Distributed under the "BSD License". See the accompanying LICENSE.rst file.

#include <iostream>

#include <cpuid/cpuinfo.hpp>

int main()
{
    std::cout << "CPUID_PLATFORM_ANDROID ";
#if defined(CPUID_PLATFORM_ANDROID)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_ARM ";
#if defined(CPUID_PLATFORM_ARM)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_ASMJS ";
#if defined(CPUID_PLATFORM_ASMJS)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_AVX ";
#if defined(CPUID_PLATFORM_AVX)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_AVX2 ";
#if defined(CPUID_PLATFORM_AVX2)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_CLANG ";
#if defined(CPUID_PLATFORM_CLANG)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_CLANG_ARM ";
#if defined(CPUID_PLATFORM_CLANG_ARM)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_CLANG_ASMJS ";
#if defined(CPUID_PLATFORM_CLANG_ASMJS)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_CLANG_MIPS ";
#if defined(CPUID_PLATFORM_CLANG_MIPS)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_CLANG_X86 ";
#if defined(CPUID_PLATFORM_CLANG_X86)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_EMSCRIPTEN ";
#if defined(CPUID_PLATFORM_EMSCRIPTEN)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_GCC ";
#if defined(CPUID_PLATFORM_GCC)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_GCC_ARM ";
#if defined(CPUID_PLATFORM_GCC_ARM)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_GCC_X86 ";
#if defined(CPUID_PLATFORM_GCC_X86)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_GCC_MIPS ";
#if defined(CPUID_PLATFORM_GCC_MIPS)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_GCC_COMPATIBLE ";
#if defined(CPUID_PLATFORM_GCC_COMPATIBLE)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_GCC_COMPATIBLE_ARM ";
#if defined(CPUID_PLATFORM_GCC_COMPATIBLE_ARM)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_GCC_COMPATIBLE_ASMJS ";
#if defined(CPUID_PLATFORM_GCC_COMPATIBLE_ASMJS)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_GCC_COMPATIBLE_MIPS ";
#if defined(CPUID_PLATFORM_GCC_COMPATIBLE_MIPS)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_GCC_COMPATIBLE_X86 ";
#if defined(CPUID_PLATFORM_GCC_COMPATIBLE_X86)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_IOS ";
#if defined(CPUID_PLATFORM_IOS)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_LINUX ";
#if defined(CPUID_PLATFORM_LINUX)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_MAC ";
#if defined(CPUID_PLATFORM_MAC)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_MIPS ";
#if defined(CPUID_PLATFORM_MIPS)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_MMX ";
#if defined(CPUID_PLATFORM_MMX)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_MSVC ";
#if defined(CPUID_PLATFORM_MSVC)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_MSVC_ARM ";
#if defined(CPUID_PLATFORM_MSVC_ARM)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_MSVC_X86 ";
#if defined(CPUID_PLATFORM_MSVC_X86)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_NEON ";
#if defined(CPUID_PLATFORM_NEON)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_PCLMUL ";
#if defined(CPUID_PLATFORM_PCLMUL)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_SSE ";
#if defined(CPUID_PLATFORM_SSE)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_SSE2 ";
#if defined(CPUID_PLATFORM_SSE2)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_SSE3 ";
#if defined(CPUID_PLATFORM_SSE3)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_SSE41 ";
#if defined(CPUID_PLATFORM_SSE41)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_SSE42 ";
#if defined(CPUID_PLATFORM_SSE42)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_SSSE3 ";
#if defined(CPUID_PLATFORM_SSSE3)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_WINDOWS ";
#if defined(CPUID_PLATFORM_WINDOWS)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_WINDOWS_PHONE ";
#if defined(CPUID_PLATFORM_WINDOWS_PHONE)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;

    std::cout << "CPUID_PLATFORM_X86 ";
#if defined(CPUID_PLATFORM_X86)
    std::cout << "1";
#else
	std::cout << "0";
#endif
	std::cout << std::endl;


    cpuid::cpuinfo m_cpuid;

    std::cout << "CPU has FPU?: "
              << (m_cpuid.has_fpu() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has MMX?: "
              << (m_cpuid.has_mmx() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has SSE?: "
              << (m_cpuid.has_sse() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has SSE2?: "
              << (m_cpuid.has_sse2() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has SSE3?: "
              << (m_cpuid.has_sse3() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has SSSE3?: "
              << (m_cpuid.has_ssse3() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has SSE4.1?: "
              << (m_cpuid.has_sse4_1() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has SSE4.2?: "
              << (m_cpuid.has_sse4_2() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has PCLMULQDQ?: "
              << (m_cpuid.has_pclmulqdq() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has AVX?: "
              << (m_cpuid.has_avx() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has AVX2?: "
              << (m_cpuid.has_avx2() ? "Yes" : "No") << std::endl;

    std::cout << "CPU has ARM NEON?: "
              << (m_cpuid.has_neon() ? "Yes" : "No") << std::endl;

    return 0;
}
