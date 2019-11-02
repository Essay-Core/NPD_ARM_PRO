#pragma once
#include "stdafx.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

/*****************************************************************
g++ main.cc liblte/src/liblte_rrc.o -o main -I liblte/hdr/

*****************************************************************/
typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned int   uint32;

int DecodeSIBMeg();
int ExtraData(int bit_pos, int bitsize);
long ExtraDataLong(int bit_pos, int bitsize);
int main_test_sib5();
int main_test_sib4();
int main_test_sib3();
int main_test_sib2();
int main_test_sib1();

//读取文件保存内容输出
int getStrFromFile(const char *fileName, char *strOut, int size);

//将十六进制字符串内容转成数字
int strDoubToInt(char *strIn, int size, uint8 *result);
int bitStrToInt(char *strIn, int size, uint8 *result);
