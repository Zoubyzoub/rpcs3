#pragma once

#define GSL_UNENFORCED_ON_CONTRACT_VIOLATION

#pragma push_macro("new")
#undef new
#include <gsl.h>
#pragma pop_macro("new")
#undef Expects
#undef Ensures
