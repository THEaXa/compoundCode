#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// function prototype
string caesar(int k, string plaintext);

int main(int argc, char* argv[])
{
    //declaring an int to hold k as well as a string to hold the plaintext
    int k;
    string plaintext,encrypted;

    // ensuring that the right number of command line arguments are entered
    // If the wrong number are entered exit by returning 3.
    if(argc > 2)
    {
        cout<<"Usage: ./caesar k";
        return 3;
    }

    else if (argc < 2)
    {
        cout<<"Usage: ./caesar k";
        return 3;
    }
    // If the right number are entered assign k the appropriate value
    else
    {
        k = atoi(argv[1]);

    }
    // Prompting user for the plaintext
    cout << "Plaintext: ";

    // Reading in the plaintext using getline
    getline(cin,plaintext);

    // Running the function caesar with appropriate arguments and assigning the value returned to a string called encrypted
    encrypted = caesar(k,plaintext);

    cout << "Ciphertext: "<<encrypted;


return 0;
}

// Implementing the caesar function

string caesar(int k, string plaintext)
{
    int cipher,deci,position;

for(int i=0;i<=plaintext.size();i++)
{
    if (isalpha(plaintext[i]))
    {
        if(islower(plaintext[i]))
        {
            deci = int(plaintext[i]);
            position = deci - 97;
            cipher = (position+k)%26;

            plaintext.at(i)=char(cipher+97);

        }

        else if(isupper(plaintext[i]))
        {
            deci = int(plaintext[i]);
            position = deci - 65;
            cipher = (position+k)%26;

            plaintext.at(i)=char(cipher+65);

        }

    }

}

return plaintext;
}
