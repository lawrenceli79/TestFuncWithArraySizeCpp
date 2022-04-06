#pragma once


typedef char(CHARARRAY_16)[16]; // char buf[16];
typedef char(&CHARARRAYREF_16)[16]; // char (&buf)[16];

class TestClass
{
public:
	TestClass(void);
	~TestClass(void);
	template<unsigned int N1> void func(char(&strBuf1)[N1]);
	void func2(CHARARRAYREF_16 buf1);
};
