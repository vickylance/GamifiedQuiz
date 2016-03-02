#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"

extern "C" void t1_250_marshal(const t1_250& unmarshaled, t1_250_marshaled& marshaled);
extern "C" void t1_250_marshal_back(const t1_250_marshaled& marshaled, t1_250& unmarshaled);
extern "C" void t1_250_marshal_cleanup(t1_250_marshaled& marshaled);
