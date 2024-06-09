#ifndef DYFLOATS_H
#define DYFLOATS_H

#include <iostream>
#include <string>


class dyfloats
{
//--- attributes --------------------------------
private :
    float *ptr;
    int size;
    
//--- methodes / operations ---------------------
public  :
    //--- constructor ---------------------------
    dyfloats();                                      // default constructor
    
    //--- destructor ----------------------------
    ~dyfloats();
    
    //--- setters / mutators --------------------
    void  set_size(int size);
    void  set_element(int index , float num);        // replace

    //--- getters / accessors -------------------
    int   get_size(void);
    float get_element(int index);
    
    //--- methodes ------------------------------
    void  add_element(float num);                    // push_back
    void  sort(void);                                // sort the array
    void  insert_element(int pos , float num);       // add then shift
    int   find_element(float element);               // search
};

#endif // DYFLOATS_H
