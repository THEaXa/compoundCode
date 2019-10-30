#include <iostream>
#include <windows.h>
#include <cmath>
#include <ctime>
using namespace std;



int main()
{
    cout<< "WELCOME TO C++ PROGRAMMING" <<endl;
    Sleep(1000);
    cout<< "I CARRY OUT THE FOLLOWING OPERATIONS" <<endl;
    Sleep(1000);
    cout<<"[1] EVEN OR ODD CHECK" << endl;
     Sleep(1000);
    cout<<"[2] SUMMATION OF INPUT NUMBERS" <<endl;
     Sleep(1000);
    cout<<"[3] MEAN OF INPUT NUMBERS" <<endl;
     Sleep(1000);
    cout<<"[4] SORTING OF INPUT NUMBERS" <<endl;
     Sleep(1000);
    cout<<"[5] NTH ROOT OF INPUT NUMBERS" <<endl;
     Sleep(1000);
     cout<<"[6] SUMS UP TWO 3X3 MATRICES" <<endl;
     Sleep(1000);
     cout<<"[7] TRANSPOSES AN N BY N MATRIX" <<endl;
     Sleep(1000);
     cout<<"[8] COUNTS NUMBER OF VOWELS AND CONSONANTS IN SENTENCE" <<endl;
     Sleep(1000);
     cout<<"[9] GET THE TIME" <<endl;
     Sleep(1000);


    int option;
    int answer = 0;
    cout<<"What operation can I perform for you?" << endl;
    cin>>option;


   if (option == 1)
   {
       cout << "ENTER THE NUMBER" << endl;
       int number;
       cin>>number;
       if (number % 2 == 0)
       {
           cout<<"YOUR NUMBER IS EVEN" <<endl;
       }
       else
       {
         cout<<"YOUR NUMBER IS ODD" <<endl;

       }
   }


    else if (option == 2)
    { //sum

       int n,i;

       cout<<"How many numbers will we be adding?" <<endl;
       cin>> n;

       for(i=1;i<=n;i++)
       {
           int number;
           cout<<"Enter the number" <<endl;
           cin>>number;

           answer=answer+number;
       }

       cout<<"Your answer is " <<answer;



    }

    else if (option==3)
    {
        int n,i,sum,mean;
        cout<<"How many numbers will you be working with?" <<endl; //Prompt user to state the number of numbers they will use
        cin>>n; //Enables user to input

        for(i=1;i<=n;i++) //For loop to enable user to input n numbers
       {
           int number;
           cout<<"Enter the number" <<endl; //Prompt user to enter the number
           cin>>number; //Allows user to enter number

           answer=answer+number; //This will add up all the n numbers that were inputed
       }

        mean = (answer/n); // The average is gotten by addition of n number divided by n. This line fulfills this

        cout<<"The mean of your numbers is: " <<mean <<endl; //Outputs the mean of the numbers

    }

    else if (option == 4) //Descending

{

    int range,maxi;
    //Prompting the user to input the number of numbers they will use
    cout<<"How many numbers are you going to be working with?"<<endl;
    cin>>range; //Allows user to input the number

    int myArray[range]; //Initializing an array of size 'range'
    cout<<"Enter the numbers"<<endl; //prompting the user to input the numbers

    for(int i=0;i<range;i++) //For loop (the size of the range) for enabling the user to input the numbers
    {
        cin>>myArray[i]; //User inputs and the input is stored in an array
    }

    for(int leftNumber=0;leftNumber<range;leftNumber++) //Here we have a nested for loop which will compare each element of the array to the one on it's right. If the element on the right is greater than it, then they swap positions, the greater one moves to the left.
    {
        for(int rightNumber=leftNumber+1;rightNumber<range;rightNumber++)  //For loop for the element to the right of the leftNumber
           {

                if(myArray[leftNumber]<myArray[rightNumber])  //checking If the element on the right is greater
                {
                    maxi = myArray[leftNumber];  //Variable maxi will be equal to the element on the right
                    myArray[leftNumber] = myArray[rightNumber];  //The element on the right which is greater will move to the left
                    myArray[rightNumber] = maxi;  //The lesser myArray[leftNumber] will go to maxi which we initially said was myArray[rightNumber], so it will move to the right
                }
           }
    }
    cout<<"Your numbers in descending order are as follows: " <<endl;
    for (int i=0;i<range;i++) //For loop to output the elements of the newly arranged array
    {
        cout<<myArray[i]<<endl; //Outputs the array
    }

//Ascending
for (int leftNumber=0;leftNumber<range;leftNumber++)//Here we have a nested for loop which will compare each element of the array to the one on it's right. If the element on the right is less than it, then they swap positions, the greater one moves to the right.
{

    for(int rightNumber=leftNumber+1;rightNumber<range;rightNumber++) //For loop for the element to the right of the leftNumber
    {
        {
            if(myArray[leftNumber]>myArray[rightNumber]) //checking If the element on the left is greater
            {
                int mini = myArray[leftNumber]; //Variable mini will be equal to the element on the right
                myArray[leftNumber] = myArray[rightNumber];  //The element on the right which is less will move to the left
                myArray[rightNumber] = mini;  //The lesser myArray[rightNumber] will go to mini which we initially said was myArray[leftNumber], so it will move to the left

            }
        }
    }
}
    cout<<"Your numbers in ascending order is as follows:" <<endl;
            for(int i=0;i<range;i++)   //For loop to output the newly arranged array
            {
                cout<<myArray[i]<<endl; //Outputs numbers in ascending order
            }



}
else if (option == 5) //Nth root
{
    double number,root;
    //int one = 1;
    cout<<"Enter the number" <<endl; //Prompts user to input number
    cin>>number;  //User inputs number

    cout<<"What Nth root of " <<number << " do you want to calculate?" <<endl; //Prompts user to input nth root
    cin>>root; //User enters nth root

    double sqroot = 1/root; //The Nth root of a number is the number raised to 1 divided by the root they want to get

    double result = pow(number,sqroot); //This line does the calculation of (number^(1/root)
    cout<<number<<"^"<<sqroot<<"="<<result;  //Prints the result
}

else if (option == 6)
{
    int myMatrix[3][3];
    int myMatrix2[3][3];

    int row,col,sum[3][3];
    cout<<"Enter the values starting with rows of your first Matrix";

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            cin>>myMatrix[row][col];
        }

    }
    cout<<"Array one is: "<<endl;
     for (row=0;row<3;row++)
     {
         for(col=0;col<3;col++)
         {
             cout<<myMatrix[row][col]<<" ";
         }
         cout<<endl;
     }

    cout<<"Enter the values starting with rows of your second Matrix";

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            cin>>myMatrix2[row][col];
        }

    }
    cout<<"Array two is: "<<endl;
     for (row=0;row<3;row++)
     {
         for(col=0;col<3;col++)
         {
             cout<<myMatrix2[row][col]<<" ";
         }
         cout<<endl;
     }
    cout<<"The sum of the two matrices is :" <<endl;
     for(row=0;row<3;row++)
     {
         for(col=0;col<3;col++)
         {
             sum[row][col] = myMatrix[row][col] + myMatrix2[row][col];
             cout<<sum[row][col] <<" ";
         }
         cout<<endl;
     }

}

else if (option == 7)
{
    int n;

    cout << "Hello. What size of matrix do you want?" << endl;
    cin>>n;
    int myMatrix[n][n];
    cout<<"Okay, now populate your "<< n << "by" << n << "matrix with elements starting with rows" <<endl;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            cin>>myMatrix[row][col];
        }
    }
     cout<<"This is your matrix!" << endl;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            cout<<myMatrix[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"This is your transposed matrix" <<endl;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            cout<<myMatrix[col][row]<<" ";
        }
        cout<<endl;
    }
}

else if (option == 8)
    {
    string sentence;  //initializing a string
    int count_vowels = 0; // Below are the counters that will enable us to count number of each kind of characters
    int count_consonants = 0;
    int count_spaces = 0;
    int count_characters = 0;

    cout<<"What is your sentence?";
    cin.ignore();  //
    getline(cin,sentence);  //This line enable a user to input a sentence and not just one string.

    for(unsigned i = 0; i<sentence.size();i++) //This loops through all the characters in the sentence
    {

        sentence[i] = tolower(sentence[i]); // This line converts all uppercase characters to lowercase so that we can proceed with the comparison
        if(sentence[i] == 'a'||sentence[i] =='e'||sentence[i] =='i'||sentence[i] =='o'||sentence[i] =='u') // This line checks whether the each character in the sentence is matches a vowel
        {
           count_vowels++;  //If so, the program will count it
        }
        else if (sentence[i] == ' ') // This line checks whether the character is a white space
        {
            count_spaces++; // The white space will then be counted
        }

        else if (sentence[i] == '.'||sentence[i] ==','||sentence[i] =='/') // This line checks for special characters
        {
            count_characters++; // This line counts the special characters in the sentence
        }

        else
        {
            count_consonants++; // This line counts the number of consonants
        }
    }

    cout<<"There are " << count_vowels << " vowels" <<endl;
    cout<<"There are " << count_consonants << " consonants" <<endl;
    cout<<"There are " << count_spaces << " spaces" <<endl;
    cout<<"There are " << count_characters << " characters" <<endl;

    }

else if (option == 9)
{
     while (1)
    {
    //int num = 1;
    // time_t is a variable type just like 'int'
    time_t currentTime = time(NULL); // reads current calendar time and stores it in a variable currentTime of type time_t
    tm* timepointer = localtime(&currentTime); // tm is a STRUCTURE (refer to sticky notes) & is used to access memory location. in this case &currentTime allows us to get the contents of memory address of currentTime

    int currentHours = timepointer ->tm_hour; // the arrow is used to extract  contents of structure
    int currentMins = timepointer ->tm_min;
    int currentSec = timepointer ->tm_sec;

    cout<< "The time in is " << currentHours << ":" << currentMins << ":" << currentSec <<endl;

    Sleep(1000);

    int alarmHours = currentHours;
    int alarmMins = 36;
    int alarmSec = 5;

    if (currentHours == alarmHours && currentMins == alarmMins && currentSec == alarmSec)
    {
        cout<< "\a" <<endl; // This triggers a beep from computer
    }

    }
}
    return 0;
}

