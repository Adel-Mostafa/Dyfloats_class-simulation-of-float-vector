#ifndef POSTGRADSTUDENT_H
#define POSTGRADSTUDENT_H

#include <iostream>
#include <string>

#include "Student.h"

class PostGradStudent : public Student
{
private :
    string research_interst;
    
public  :
    PostGradStudent();
    
    PostGradStudent(string n , string g , float a , string d , int l , float GPA , string research_interst);
    
    ~PostGradStudent();

    void display(void);
};

#endif // POSTGRADSTUDENT_H
