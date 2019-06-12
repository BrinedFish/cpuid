// Copyright (c) 2013 Steinwurf ApS
// All Rights Reserved
//
// Distributed under the "BSD License". See the accompanying LICENSE.rst file.

#include <cstdint>
#include <memory>
#include <gtest/gtest.h>

#include "argagg.hpp"

//std::shared_ptr<cxxopts::ParseResult> arguments;

GTEST_API_ int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    argagg::parser argparser;

    argparser.definitions.push_back(
        {"help", {"-h", "--help"}, "displays help information", 0});

    /*{
        {
            {"help", {"-h", "--help"}, "displays help information", 0},
            {"verbose", {"-v", "--verbose"}, "increases verbosity", 0},
            {"include_path", {"-I"}, "include path (can be repeated)", 1}
        }};*/

    //cxxopts::Options options(argv[0], "command line options for tests");

    /*options.add_options()
        ("no_fail", "The test should always return 0")
        ("has_fpu", "", cxxopts::value<bool>()->default_value(false))
        ("has_mmx", "", cxxopts::value<bool>()->default_value(false))
        ("has_sse", "", cxxopts::value<bool>()->default_value(false))
        ("has_sse2", "", cxxopts::value<bool>()->default_value(false))
        ("has_sse3", "", cxxopts::value<bool>()->default_value(false))
        ("has_ssse3", "", cxxopts::value<bool>()->default_value(false))
        ("has_sse4_1", "", cxxopts::value<bool>()->default_value(false))
        ("has_sse4_2", "", cxxopts::value<bool>()->default_value(false))
        ("has_pclmulqdq", "", cxxopts::value<bool>()->default_value(false))
        ("has_avx", "", cxxopts::value<bool>()->default_value(false))
        ("has_avx2", "", cxxopts::value<bool>()->default_value(false))
        ("has_neon", "", cxxopts::value<bool>()->default_value(false));*/

    //auto arguments = options.parse(argc, argv);

    int result = RUN_ALL_TESTS();
    // The no_fail option is used when the CPU instruction sets are not
    // well-known, e.g. when running with valgrind or on a virtual machine
    //if (arguments.count("no_fail")) result = 0;
    return result;
}
