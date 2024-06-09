#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person :: Person() : name("") , gender("") , age(0)
{
    cout<<"person constructor"<<endl;
}

Person :: Person(string n , string g , float a) : name{n} , gender{g} , age{a}
{ 
    cout<<"person parameterized constructor"<<endl;
}

Person :: ~Person()
{
    cout<<"person destructor"<<endl;
}


//--- setters / mutators --------------------
void Person :: setName   (string n)
{
    name = n;
}

void Person :: setGender (string g)
{
    gender = g ;
}

void Person :: setAge    (float a)
{
    age = a ;
}

//--- getters / accessors -------------------
string Person :: getName   (void)
{
    return name ;
}

string Person :: getGender (void)
{
    return gender ;
}

float Person ::  getAge    (void)
{
    return age ;
}

//--- general method ------------------------
void Person :: display(void)
{
//    cout<<"_!_"<<endl;
    cout<<"person name is "<<name<<" , gender is "<<gender<<" , age is "<<age<<endl;
}
