#include "TestClass.h"

template<unsigned int N1>
void TestClass::func(char(&strBuf1)[N1])
{
	int a1 = _countof(strBuf1);
	int b1 = sizeof(strBuf1);
	strcpy_s(strBuf1, "abc");
}


