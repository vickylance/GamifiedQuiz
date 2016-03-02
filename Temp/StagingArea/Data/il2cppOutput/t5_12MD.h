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

struct t5_12;
struct t5_12_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_12 (t5_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5_13 (t5_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5_14 (t5_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_12_marshal(const t5_12& unmarshaled, t5_12_marshaled& marshaled);
extern "C" void t5_12_marshal_back(const t5_12_marshaled& marshaled, t5_12& unmarshaled);
extern "C" void t5_12_marshal_cleanup(t5_12_marshaled& marshaled);
