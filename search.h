#define MAX_PATH 1024
#pragma once
#include<Windows.h>
#include<string>
#include<iostream>
#include"getreadyforcopy.h"
using namespace std;
DWORD searchdriver()
{
	char szLCS[MAX_PATH]="A:\\";
	for (char a = 'A'; a <= 'Z'; a++)
	{
		szLCS[0] = a;
		UINT OUTPUT = GetDriveTypeA(szLCS);
		if (OUTPUT == DRIVE_REMOVABLE)
		{
			cout << "find";
		}
	}
	return 0;
}
