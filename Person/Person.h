#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{    
//--- attributes --------------------------------
private :
    string name ;
    string gender ;
    float  age;
    
//--- methodes / operations ---------------------
public  :
    //--- constructor ---------------------------
    // default constructor
    Person();
    // parameterized constructor
    Person(string n , string g , float a);
    //--- destructor ----------------------------
    ~Person();
    
    //--- setters / mutators --------------------
    void setName   (string n);
    void setGender (string g);
    void setAge    (float a);

    //--- getters / accessors -------------------
    string getName   (void);
    string getGender (void);
    float  getAge    (void);
    
    //--- general method ------------------------
    virtual void display(void);
};

#endif // PERSON_H
