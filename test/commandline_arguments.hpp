// Copyright (c) 2013 Steinwurf ApS
// All Rights Reserved
//
// Distributed under the "BSD License". See the accompanying LICENSE.rst file.

#pragma once

#include <cxxopts.hpp>

namespace commandline
{
void parse_arguments(int argc, char** argv);
cxxopts::ParseResult& arguments();
}
