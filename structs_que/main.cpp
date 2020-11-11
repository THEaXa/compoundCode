#include <iostream>
#include <string>
using namespace std;

/////////////////////// DO NOT MODIFY THIS PART OF THE CODE //////////////////////////////////
#ifndef myStruct
#define myStruct

// Create a new type called Customer that is based on a struct. Notice the use of typedef
// Notice also that the struct has a nested struct
    typedef struct {
    string lastName;
    string firstName;
    int customerNumber;
    struct {
        string phoneNumber;
        string address;
        string city;
        string province;
        string postalCode;
    } personal;
} Customer;

#endif

//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////// YOUR CODE GOES BELOW ////////////////////////////////////////////////

// each function should essentially just have ONE cout statement i.e. one line

// TODO 1: function that prints the member lastName of customer
void getLastName (Customer customer)
{
    cout<<customer.lastName<<endl;
}

// TODO 2: function that prints the member lastName of the structure pointed to by customerPtr
void getLastName2 (Customer * customerPtr)
{
    cout<<customerPtr ->lastName<<endl;
}

// TODO 3: function that prints the member firstName of structure customer
void getFirstName (Customer customer)
{
    cout<<customer.firstName<<endl;
}

// TODO 4: function that prints the member firstName of the structure pointed to by customerPtr
void getFirstName2 (Customer * customerPtr)
{
    cout<<customerPtr ->firstName<<endl;
}

//TODO 5: function that prints the member customerNumber of structure customer
void getCustomerNumber (Customer customer)
{
    cout<<customer.customerNumber<<endl;
}

// TODO 6: function that prints the member customerNumber of the structure pointed to by customerPtr
void getCustomerNumber2 (Customer * customerPtr)
{
    cout<<customerPtr ->customerNumber<<endl;
}

// TODO 7: function that prints the member phoneNumber of member personal of structure customer
void getPhoneNumber (Customer customer)
{
    cout<<customer.personal.phoneNumber<<endl;
}

// TODO 8: function that prints the member phoneNumber of member personal of the structure pointed to by customerPtr
void getPhoneNumber2 (Customer * customerPtr)
{
    cout<<customerPtr -> personal.phoneNumber<<endl;
}

// TODO 9: function that prints the member address of member personal of structure customer
void getAddress (Customer customer)
{
    cout<<customer.personal.address<<endl;
}

// TODO 10: function that prints the member address of member personal of the structure pointed to by customerPtr
void getAddress2 (Customer * customerPtr)
{
    cout<<customerPtr -> personal.address<<endl;
}

// TODO 11: function that prints the member city of member personal of structure customer
void getCity (Customer customer)
{
    cout<<customer.personal.city<<endl;
}

// TODO 12: function that prints the member city of member personal of the structure pointed to by customerPtr
void getCity2 (Customer * customerPtr)
{
    cout<<customerPtr -> personal.city<<endl;
}

// TODO 13: function that prints the member province of member personal of structure customer
void getProvince(Customer customer)
{
    cout<<customer.personal.province<<endl;
}

// TODO 14: function that prints the member province of member personal of the structure pointed to by customerPtr
void getProvince2 (Customer * customerPtr)
{
    cout<<customerPtr -> personal.province<<endl;
}

// TODO 15: function that prints the member postalCode of member personal of structure customer
void getPostalCode (Customer customer)
{
    cout<<customer.personal.postalCode<<endl;
}

// TODO 16: function that prints the member postalCode of member personal of the structure pointed to by customerPtr
void getPostalCode2 (Customer * customerPtr)
{
    cout<<customerPtr -> personal.postalCode<<endl;
}

// main function to test all the above
int main(){

    // TODO 17: make use of Customer to declare (a.k.a. create) a struct based on Customer (called customer) and pointer (called *customerPtr) which points to a Customer
     Customer customer,customer2;
     Customer *customerPtr;


    // TODO 18: initialize all the members of customer appropriately with dummy values
    customer.firstName = "Jacky";
    customer.lastName = "Chan";
    customer.customerNumber = 120078;
    customer.personal.phoneNumber = "0776543544";
    customer.personal.address = "37490 Camel St.";
    customer.personal.city = "New York";
    customer.personal.province = "Manhattan";
    customer.personal.postalCode = "00254";

    // TODO 19: initialize the pointer to Customer using the new keyword and assign it to customerPtr
    // The initialization can also be done without using the new keyword. Discover how to do it both ways.

    customerPtr = new Customer();

    // TODO 20: now initialize all the members of the struct pointed to  by customerPtr
    //customerPtr = &customer2;
    customerPtr ->lastName = "Hello";
    customerPtr -> firstName = "Lisa";
    //customer2.lastName = "Odundo";
    customerPtr -> customerNumber = 90610;
    customerPtr -> personal.phoneNumber = "0778903544";
    customerPtr -> personal.address = "590490 Sweet St.";
    customerPtr -> personal.city = "Nairobi";
    customerPtr -> personal.province = "Westwater";
    customerPtr -> personal.postalCode = "9800";


    // TODO 21: test ALL the functions created above by calling them one by one
    // upon calling each function, the value used to initialize members of customer and struct pointed to by customerPtr should be printed out
    // NB: there are 16 functions to test

    getLastName(customer);

    getLastName2(customerPtr);

    getFirstName(customer);

    getFirstName2(customerPtr);

    getCustomerNumber(customer);

    getCustomerNumber2(customerPtr);

    getPhoneNumber(customer);

    getPhoneNumber2(customerPtr);

    getAddress(customer);

    getAddress2(customerPtr);

    getCity(customer);

    getCity2(customerPtr);

    getProvince(customer);

    getProvince2(customerPtr);

    getPostalCode(customer);

    getPostalCode2(customerPtr);

    // TODO 22: VERY IMPORTANT: delete customerPtr IF you created it using the new keyword.
    delete customerPtr;
        return 0;
}
