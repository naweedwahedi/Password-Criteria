
// Naweed Wahedi
// Homework-10A
// This program will ask for a password and then verifies that it meets all the  criteria.

#include <iostream>
#include<string>

using namespace std;
int main()
{
    string pass;
    cout<<"\n\tNaweed Wahedi "<<endl;
    cout<<"Enter your password: ";
    cin>>pass;

    //variables
    int l=0,u=0,d=0,p=0,size=0;
    //conditions to form the password
    if(pass.length()<7)
    {
        cout<<"Your password contains less than 7 characters."<<endl;
    }
    else if(pass.length()>20)
    {
        cout<<"Your password is too long! "<<endl;
    }   
    else
        {
            size=1;
        }
    for(int i=0;i<pass.length();i++)
    {
        if(isupper(pass[i]))
        {
            u=1;
        }
        if(islower(pass[i]))
        {
            l=1;
        }
        if(isdigit(pass[i]))
        {
            d=1;
        }
        if(ispunct(pass[i]))
        {
            p=1;
        }
    }
    if(size==1&&p==1&&d==1&l==1&&u==1)
    {
        cout<<"Your password meets the criteria."<<endl;
    }
    else
    {
        cout<<"Sorry! Your password doesn't meet the following criteria..\n"<<endl;
    }
    if(p==0)
    {
        cout<<"Your password does not contain any punctuations"<<endl;
    }
    if(l==0)
    {
        cout<<"Your password does not contain any lower case characters"<<endl;
    }
    if(u==0)
    {
        cout<<"Your password does not contain any upper case characters"<<endl;
    }
    if(d==0)
    {
        cout<<"Your password does not contain any digits"<<endl;
    }
    //return 0 to mark successful termination
    cin.get();
    return 0;
}