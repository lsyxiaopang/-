#define MAX_PATH 1024
#pragma once
#include<Windows.h>
#include<string>
#include<iostream>
using namespace std;
DWORD searchdriver()
{
	char getpath[MAX_PATH - 10];
	GetLogicalDriveStringsA(MAX_PATH, getpath);
	char* pgetpath = getpath;
	for (double i = 1; i < 1014; i++)
	{
		for (char a = 'A'; a <= 'Z'; a++)
		{
			if (*pgetpath == a)
			{
				string waitingcheck = a + ":\\";
				UINT OUTPUT = GetDriveTypeA(waitingcheck.c_str());
				if (OUTPUT == DRIVE_REMOVABLE)
				{

				}
			}
		}
		pgetpath++;
	}
	return 0;
}
