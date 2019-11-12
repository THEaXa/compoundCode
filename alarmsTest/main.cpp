#include <iostream>
#include <ctime>
#include <windows.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    while(1)
    {
            time_t pcTime = time(NULL);
            tm* timepointer = localtime(&pcTime);
           int pc_hours = timepointer ->tm_hour;
           int pc_mins = timepointer ->tm_min;
           int pc_sec = timepointer ->tm_sec;

             system("CLS");
                cout<< "The time is: " << pc_hours <<":"<< pc_mins <<":"<< pc_sec << flush;
                Sleep(1000);

            ifstream myFile;
            int hr,mins,sec;

            myFile.open("alarmsTest.txt");

            while(myFile >> hr >> mins >> sec)
            {
                if (pc_hours == hr && pc_mins == mins && pc_sec == sec)
                {
                    cout<< "\a";
                }
            }
    }

return 0;
    }
