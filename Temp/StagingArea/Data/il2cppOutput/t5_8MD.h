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

struct t5_8;
struct t5_8_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_9 (t5_8 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_8_marshal(const t5_8& unmarshaled, t5_8_marshaled& marshaled);
extern "C" void t5_8_marshal_back(const t5_8_marshaled& marshaled, t5_8& unmarshaled);
extern "C" void t5_8_marshal_cleanup(t5_8_marshaled& marshaled);
