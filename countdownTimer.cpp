#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
    while (1)
    {
       time_t pcTime = time(NULL);
       tm* timepointer = localtime(&pcTime);

       int pcHours = timepointer ->tm_hour;
       int pcMins = timepointer ->tm_min;
       int pcSec = timepointer ->tm_sec;

       system("CLS");
       cout<< "The time is: " << pcHours <<":"<< pcMins <<":"<< pcSec <<flush;
       Sleep(1000);


    }


    return 0;
}
