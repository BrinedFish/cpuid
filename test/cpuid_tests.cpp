// Copyright (c) 2013 Steinwurf ApS
// All Rights Reserved
//
// Distributed under the "BSD License". See the accompanying LICENSE.rst file.

#include <cstdint>
#include <memory>
#include <gtest/gtest.h>

#include "commandline_arguments.hpp"

GTEST_API_ int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    commandline::parse_arguments(argc, argv);

    auto arguments = commandline::arguments();

    int result = RUN_ALL_TESTS();
    // The no_fail option is used when the CPU instruction sets are not
    // well-known, e.g. when running with valgrind or on a virtual machine
    if (arguments.count("no_fail")) result = 0;
    return result;
}
