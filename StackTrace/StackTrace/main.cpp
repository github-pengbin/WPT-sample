#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

VOID writeFunc(INT i)
{
	_tprintf(TEXT("The writeFunc call %d .th\n"), i);
}

// ²âÊÔº¯Êý
VOID testFunc()
{
	for (int i = 0; i < 99999999; ++i)
	{
		writeFunc(i);
	}
}




INT _tmain(int argc, char *argv[])
{
	testFunc();
	fflush( stdout );
	return 0;
}