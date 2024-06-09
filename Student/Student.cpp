#include <iostream>
#include "Student.h"

using namespace std;


Student :: Student()
{
    cout<<"student constructor"<<endl;
}

// parameterized constructor
                    // parent attributes          // chaild attributes           // parent parameterized constructor
Student :: Student(string n , string g , float a , string d , int l , float GPA) : Person(n , g , a)
{
    cout<<"student parameterized constructor"<<endl;
    depart = d ;
    level = l ;
    this->GPA = GPA;
}

Student :: ~Student()
{
    cout<<"student destructor"<<endl;
}


//--- setters / mutators --------------------
void Student :: setDepart(string d)
{
    depart = d ;
}

void Student :: setLevel(int l)
{
    level = l ;
}

void Student :: setGPA(float GPA)
{
    this -> GPA = GPA ;
}

//--- getters / accessors -------------------
string Student :: getDepart(void)
{
    return depart ;
}

int    Student :: getLevel (void)
{
    return level ;
}

int    Student :: getGPA   (void)
{
    return GPA ;
}


//--- general method ------------------------
void Student :: display(void)
{
    Person :: display();
    cout<<"student department is "<<depart<<" , level is "<<level<<" , GPA is "<<GPA<<endl;
}
