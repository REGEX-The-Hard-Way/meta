/**
 * Wrapper around cpptoml.h that ensures <limits> is included for GCC 15+
 * compatibility (std::numeric_limits is no longer transitively included).
 */
#pragma once

#include <limits>
#include <cpptoml.h>
