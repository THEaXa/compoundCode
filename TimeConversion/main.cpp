#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s)
{
    string am_pm = s.substr(8,2), hr,mil_time;
    hr=s.substr(0,2);
    int myHr = stoi(hr);

    if(am_pm.compare("PM")==0)
    {
        if(myHr==12)
        {
            mil_time = s.substr(0,8);
        }

        else
        {
            int militaryTime = myHr+12;
            mil_time = to_string(militaryTime)+s.substr(2,6);
        }

    }
    else
    {
        if (myHr==12)
        {
            mil_time = "00"+s.substr(2,6);
        }
        else
        {
            mil_time = s.substr(0,8);
        }
    }


    return mil_time;
}

int main()
{

    // sample string
    string s = "07:05:45PM",hour,mint,sec;

    hour = s.substr(0,2);
    mint = s.substr(3,2);
    sec = s.substr(6,2);
    int the_hour = stoi(hour);
    int the_mint = stoi(mint);
    int the_sec = stoi(sec);

    if(the_hour>=1 && the_hour<=12 && the_mint>=0 && the_mint<=59 && the_sec>=0 && the_sec<=59)
    {
        string result = timeConversion(s);

        cout << result << "\n";
    }


    return 0;
}
