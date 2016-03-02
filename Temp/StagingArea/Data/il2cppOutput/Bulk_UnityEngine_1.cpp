#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

struct t5_109;
struct t1_18;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "t1_33.h"
#include "t5_108.h"
#include "t5_108MD.h"
#include "t5_109.h"
#include "t5_109MD.h"
#include "t1_25.h"
#include "t1_31.h"
#include "t1_31MD.h"
#include "t1_18.h"
#include "t1_3MD.h"
#include "t1_3.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern TypeInfo* t5_108_TI_var;
extern "C" void m5_397 (t5_109 * __this, int32_t p0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		t5_108_TI_var = il2cpp_codegen_type_info_from_index(872);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = p0;
		int32_t L_1 = L_0;
		t1_1 * L_2 = Box(t5_108_TI_var, &L_1);
		t1_18* L_3 = (t1_18*)VirtFuncInvoker0< t1_18* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		m5_398(__this, L_3, NULL);
		return;
	}
}
extern "C" void m5_398 (t5_109 * __this, t1_18* p0, const MethodInfo* method)
{
	{
		m1_17(__this, NULL);
		t1_18* L_0 = p0;
		__this->f0 = L_0;
		return;
	}
}
extern "C" t1_18* m5_399 (t5_109 * __this, const MethodInfo* method)
{
	{
		t1_18* L_0 = (__this->f0);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
