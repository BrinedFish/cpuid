// Copyright (c) 2013 Steinwurf ApS
// All Rights Reserved
//
// Distributed under the "BSD License". See the accompanying LICENSE.rst file.

#include "commandline_arguments.hpp"

#include <cassert>

#include <cxxopts.hpp>

namespace commandline
{
// This wrapper allows us to store the ParseResult in a shared_ptr
struct arguments_wrapper
{
    arguments_wrapper(cxxopts::Options& options, int argc, char** argv) :
        m_arguments(options.parse(argc, argv))
    { }

    cxxopts::ParseResult& arguments()
    {
        return m_arguments;
    }

    cxxopts::ParseResult m_arguments;
};

std::shared_ptr<arguments_wrapper> wrapper;

void parse_arguments(int argc, char** argv)
{
    cxxopts::Options options(argv[0], "command line options for tests");

    options.add_options()
        ("no_fail", "The test should always return 0")
        ("has_fpu", "", cxxopts::value<bool>()->default_value("false"))
        ("has_mmx", "", cxxopts::value<bool>()->default_value("false"))
        ("has_sse", "", cxxopts::value<bool>()->default_value("false"))
        ("has_sse2", "", cxxopts::value<bool>()->default_value("false"))
        ("has_sse3", "", cxxopts::value<bool>()->default_value("false"))
        ("has_ssse3", "", cxxopts::value<bool>()->default_value("false"))
        ("has_sse4_1", "", cxxopts::value<bool>()->default_value("false"))
        ("has_sse4_2", "", cxxopts::value<bool>()->default_value("false"))
        ("has_pclmulqdq", "", cxxopts::value<bool>()->default_value("false"))
        ("has_avx", "", cxxopts::value<bool>()->default_value("false"))
        ("has_avx2", "", cxxopts::value<bool>()->default_value("false"))
        ("has_neon", "", cxxopts::value<bool>()->default_value("false"));

    wrapper = std::make_shared<arguments_wrapper>(options, argc, argv);
}

cxxopts::ParseResult& arguments()
{
    assert(wrapper && "Run parse_arguments() first!");
    return wrapper->arguments();
}
}
