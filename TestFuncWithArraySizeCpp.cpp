// TestFuncWithArraySizeCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>
#include <stdlib.h>
#include "TestClass.h"
#include "TestClass.hpp"


int _tmain(int argc, _TCHAR* argv[])
{
	char buf1[16];
	CHARARRAY_16 mbuf;

	TestClass tc;
	tc.func(buf1);
	tc.func2(mbuf);

	return 0;
}

