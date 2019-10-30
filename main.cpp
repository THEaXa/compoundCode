#include <iostream>

using namespace std;

int main()
{
    string sentence;  //initializing a string
    int count_vowels = 0; // Below are the counters that will enable us to count number of each kind of characters
    int count_consonants = 0;
    int count_spaces = 0;
    int count_characters = 0;
    cout<<"What is your sentence?";
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
    return 0;
}
