#pragma once
#define SUCCESSALL 171
#define LOSTCOPY 170
//written by c++
#include<cstdlib>
#include<string>
#include<Windows.h>
using namespace std;
int copyfile( string pathfrom,string pathto)
{
	string dowork="xcopy "+pathfrom+" "+pathto+" /s/e";
	int back=system(dowork.c_str());
	if(back==-1)
	{
		MessageBox(NULL,TEXT("UNDONE"),TEXT("UNDONE"),MB_OK);
		return LOSTCOPY;
	}
	MessageBox(NULL,TEXT("DONE"),TEXT("DONE"),MB_OK);
	return SUCCESSALL;
}
