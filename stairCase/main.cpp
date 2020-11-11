#include <iostream>
using namespace std;

// Complete the staircase function below.
void staircase(int n)
{
    for (int k=0;k<n;k++)
    {
        for(int i=n-1;i>k;i--)
        {
            cout<<" ";
        }

        for(int j=0;j<k+1;j++)
        {
            cout<<"#";

        }
           if(k!=n-1)
           {
               cout<<endl;
           }
           else
           {
               break;
           }

    }
}

int main()
{
    int n;
    cout<<"Enter the size of the pattern you would like"<<endl;
    cin>>n;

    if(n>0 && n<=100)
    {
        staircase(n);
    }

    return 0;
}
