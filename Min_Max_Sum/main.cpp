#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Complete the minMaxSum function below.
void minMaxSum(vector<int> arr)
{   //int temp;
    long long int temp, min_sum=0,max_sum=0;
    for(int left=0;left<5;left++)
    {
        for(int right=left+1;right<5;right++)
        {
            if(arr[left]>arr[right])
            {
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
            }
        }
    }
    for(int i=0; i<4;i++)
    {
        min_sum+=arr[i];
    }

    for(int i=1; i<5;i++)
    {
        max_sum+=arr[i];
    }

    cout<<min_sum<<" "<<max_sum;
}

// test minMaxSum with the following
int main()
{
    int counter=0;
    vector<int> arr = {1, 2, 3, 4, 5};

    for(int i=0;i<arr.size();i++)
    {
       if(arr[i]<1 || arr[i]>1000000000)
       {
           counter+=1;
       }
    }

    if (counter == 0)
    {
         minMaxSum(arr);

    }

    return 0;
}
