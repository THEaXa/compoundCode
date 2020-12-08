#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int searchValue, vector<int> arr)
{

int high,low,mid;
high = arr.size()-1;
low = 0;
mid = (high+low)/2;

cout<<low<<" "<<mid<<" "<<high<<endl;

while(low!=high)

{
    if(low>high)
    {
        return -1;
    }

    else if(arr[mid]<searchValue)
    {
        low = mid + 1;
        mid = (high+low)/2;

        cout<<low<<" "<<mid<<" "<<high<<endl;
    }

    else if(arr[mid]>searchValue)
    {
        high = mid - 1;
        mid = (high+low)/2;

        cout<<low<<" "<<mid<<" "<<high<<endl;
    }

    if(low==mid && low!=high)
    {
        low = mid + 1;
        mid = (high + low)/2;

        cout<<low<<" "<<mid<<" "<<high<<endl;
        return -1;
    }

    else if(high==mid && high!=low)
    {
        high = mid - 1;
        mid = (high + low)/2;

        cout<<low<<" "<<mid<<" "<<high<<endl;
        return -1;
    }

}

 if((low == high) && (arr[mid]!=searchValue))
    {
        return -1;
    }

 else
    {
        return mid;
    }

}

int main()
{
   int index, searchValue = 22;
   vector<int>arr={2,4,5,7,8,9,12,14,17,19,22,25,27,28,33,37};

   index = binarySearch(searchValue,arr);
   cout<<index;

    return 0;
}
