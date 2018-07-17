#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

#define UNICODE
#define _UNICODE
void writeFunc(int i)
{
	_tprintf(TEXT("The writeFunc call %d .th\n"), i);
}

// ²âÊÔº¯Êý
void testFunc()
{
	for (int i = 0; i < 99999999; ++i)
	{
		writeFunc(i);
	}
}




int _tmain(int argc, char *argv[])
{
	testFunc();
	fflush( stdout );
	return 0;
}