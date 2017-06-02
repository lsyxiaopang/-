#include<Windows.h>
#include<string>
#include <time.h>
using namespace std;
DWORD getreadycopy(string diskfrom)
{
	time_t lt = time(NULL);
	tm* time = localtime(&lt);
	string pathplace = time->tm_year +" "+time->tm_mon+time->tm_mday+time->tm_hour+time->tm_min;
	pathplace = pathplace + "in " + diskfrom;
	const string mainpath = "d:\\thief\\";
	pathplace = mainpath + pathplace;
}
