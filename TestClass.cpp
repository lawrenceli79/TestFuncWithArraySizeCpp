#include "stdafx.h"
#include "TestClass.h"
#include <string.h>
#include <stdlib.h>

TestClass::TestClass(void)
{
}

TestClass::~TestClass(void)
{
}

void TestClass::func2( CHARARRAYREF_16 buf1 )
{
	int n = _countof(buf1);
	strcpy_s(buf1, "abc");
}

