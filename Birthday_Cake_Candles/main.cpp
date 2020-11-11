#include <iostream>
#include <vector>

using namespace std;

vector<string> split_string(string);

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar)
{
    int maxi=0,counter=0;
    for(int i=0;i<ar.size();i++)
    {

        if(ar[i]>maxi)
        {
            maxi=ar[i];
        }
    }

    for(int i=0;i<ar.size();i++)
    {
        if(ar[i] == maxi)
        {
            counter+=1;
        }
    }

    return counter;
}

int main()
{

    // Example one
    int ar_count =  10;
    vector<int> ar1 = {3, 2, 1, 3, 5, 4, 2, 5, 1, 5};
    int result = birthdayCakeCandles(ar1);
    cout << result << endl; // output should be 3

    // Example two
    ar_count =  4;
    vector<int> ar2 = {4, 4, 1, 3};
    result = birthdayCakeCandles(ar2);
    cout << result << endl; // output should be 2

    return 0;
}
