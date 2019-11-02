// NPD_ARM_PRO.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stPDUDecoder.h"

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;

int _tmain(int argc, _TCHAR* argv[])
{
	char data[512] = { 0 };
	int retLen = getStrFromFile("data.ini", data, sizeof(data));
	printf("data:%s\n", data);

	uint8 result2[256] = { 0 };
	strDoubToInt(data, retLen, result2);
	
	DecodeSIBMeg();

	char cmd[33] = { 0 };
	while (true)
	{
		scanf("%s", &cmd);
		if (strcmp(cmd, "q") == 0)
		{
			break;
		}
	}

	return 0;
}

