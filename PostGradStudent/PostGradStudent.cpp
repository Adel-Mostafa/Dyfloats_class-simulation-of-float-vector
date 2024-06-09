#include <iostream>
#include "PostGradStudent.h"

using namespace std;

PostGradStudent::PostGradStudent()
{
}

PostGradStudent::PostGradStudent(string n , string g , float a , string d , int l , float GPA , string research_interst) 
                : Student(n , g , a , d , l , GPA )
{
    this -> research_interst = research_interst;
}

PostGradStudent::~PostGradStudent()
{
}

// function overriding
void PostGradStudent:: display(void)
{
    Student :: display();
    cout<<"Post Grad Research Interst"<<research_interst<<endl;
}
