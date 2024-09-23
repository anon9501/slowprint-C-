#include <windows.h>
#include <iostream>
#include <string.h>

using namespace std;

void SlowPrint(int MilliSeconds, string ToSay)
{
    int temp = 0;
    while(ToSay[temp] != '\0')
    {
        cout<<ToSay[temp];
        temp++;
        Sleep(MilliSeconds);
    }
}