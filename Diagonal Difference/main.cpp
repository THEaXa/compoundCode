#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr)
{
    int primaryDiag = 0,secondaryDiag = 0,n=arr.size(),difference;

    for (int i=0;i<n;i++)
    {
       primaryDiag+=arr[i][i];
       secondaryDiag+=arr[i][n-i-1];
    }
    difference = abs(primaryDiag-secondaryDiag);
    return difference;
}
// for testing
int main()
{
    int result;
    int n = 3;
    int counter = 0;
    vector<vector<int>> arr = {{11, 2, 4},{4, 5, 6},{10, 8, -12}};

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(arr[i][j] < -100 || arr[i][j] >100)
            {
                counter+=1;
            }
        }
    }

    if(counter == 0)
    {
         result = diagonalDifference(arr);
         cout << result << "\n"; // this should print out 15
    }



    return 0;
}
