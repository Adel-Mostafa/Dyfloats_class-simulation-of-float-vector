#include <iostream>

#include "Dyfloats.h"

using namespace std;

//--- methodes / operations ----------------------------------------------------
//--- constructor --------------------------------------------------------------
// default constructor
dyfloats :: dyfloats() : ptr(NULL) , size(0)
{
}

//--- destructor ---------------------------------------------------------------
dyfloats :: ~dyfloats()
{
    delete ptr ;
    ptr = NULL ; 
}

//--- setters / mutators -------------------------------------------------------
void dyfloats :: set_size(int new_size)
{
    if (new_size == 0)
    {
        delete ptr;
        ptr = NULL ;
        size = 0 ;
    }
    else if ( (0 == size) && (NULL == ptr) ) // no allocated array
    {
        size = new_size;
        ptr  = new float[new_size];
    }
    else // an array is allocated
    {
        int temp_size = 0 ;
        
        size = new_size;
        float *temp = new float[new_size];
        
        if (new_size > size)
        {
            temp_size = size;
        }
        else // (new_size < size)
        {
            temp_size = new_size;
        }
        
        for(auto i = 0 ; i < temp_size ; i++)
        {
            temp[i] = ptr[i] ;
        }
        
        delete ptr ;
        ptr = temp ;
    }
}

void dyfloats :: set_element(int index , float num)
{
    if (index <= (size - 1))
    {
        ptr[index] = num ;
    }
    else {/* nothing */}
}

//--- getters / accessors ------------------------------------------------------
int dyfloats :: get_size(void)
{
    return size;
}

float dyfloats :: get_element(int index)
{
    float temp = 0 ;
    if (index <= (size - 1))
        temp = ptr[index] ;
        
    else {/* nothing */}
    
    return temp;
}

//--- methodes -----------------------------------------------------------------
void dyfloats :: add_element(float num) //push_back
{
    int new_size = size + 1 ;
    set_size( new_size );
    
    ptr[new_size - 1] = num;
}

void dyfloats :: sort(void) // sort the array
{
    
}

void dyfloats :: insert_element(int pos , float num) // shift then add
{
    /* If position of element is not valid */
    if(pos > size+1 || pos <= 0)
    {
        cout<<"Invalid position! Please enter position between 1 to "<< size <<endl;
    }
    else
    {
        /* Make room for new array element by shifting to right */
        for(int i = size ; i >= pos ; i--)
        {
            // because you start from size it self not fewer (size - 1). so, you'll take a +1 element now
            // assume pos = 5 , and size is 8
            // arr[8] = arr[7]
            // arr[7] = arr[6]
            // arr[6] = arr[5]
            ptr[i] = ptr[i-1];
        }
        
        /* Insert new element at given position and increment size */
        ptr[pos-1] = num;
        
        size++;
    }
}
int dyfloats :: find_element(float element) // search
{
    int temp = 0;
    
    for(int i = 0 ; i < size ; i++)
    {
        if (ptr[i] == element)
            temp = i ;
    }
    
    return temp;
}

