#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

                // inheritance
class Student : public Person
{
    //--- attributes --------------------------------
    private :
        string depart ;
        int level ; 
        float GPA ;
    //--- methodes / operations ---------------------
    public:
        //--- constructor ---------------------------
        // default constructor
        Student();
        
        // parameterized constructor
                // parent attributes            // chaild attributes
        Student(string n , string g , float a , string d , int l , float GPA);
        
        //--- destructor ----------------------------
        ~Student();
        
        //--- setters / mutators --------------------
        void setDepart(string d);
        void setLevel(int l);
        void setGPA(float GPA);
        
        //--- getters / accessors -------------------
        string getDepart(void);
        int    getLevel (void);
        int    getGPA   (void);
        
        //--- general method ------------------------
        void display(void);
};

#endif // STUDENT_H
