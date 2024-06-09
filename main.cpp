#include <iostream>
#include <vector>
#include <string>

//--- classes ---------------------------------------
#include "Car.h"
#include "Classes/Distance.h"
#include "Person.h"
#include "Student.h"
#include "PostGradStudent.h"

#include "Dyfloats.h" 


using namespace std;

int main(void)
{
    dyfloats dyf_1 ;
    dyf_1.set_size(10); // 0 -> 9
    
    dyf_1.set_element(0 , -1.3);
    dyf_1.set_element(1 , -2.3);
    dyf_1.set_element(2 , -3.3);
    dyf_1.set_element(3 , -4.3);
    dyf_1.set_element(4 , -5.3);
    dyf_1.set_element(5 , -6.3); 
    dyf_1.set_element(6 , -7.3);
    
    dyf_1.insert_element(5 , 1.0);
    
    //dyf_1.add_element(0.32); // 11
    
    cout<< dyf_1.get_size() <<endl; // 12
    cout<< dyf_1.get_element(0) <<endl;
    cout<< dyf_1.get_element(1) <<endl;
    cout<< dyf_1.get_element(11) <<endl;
    cout<< dyf_1.find_element(-6.3) <<endl;
    
    vector<Student> Scores;
    // PostGradStudent -> Student -> Person
    
    //Student(string n , string g , float a , string d , int l , float GPA)
    Student S_1("Adel" , "male" , 26.2 , "Embedded Systems" , 3 , 2.9);
    PostGradStudent S_2("Ahmed" , "male" , 28.4 , "C++ developer" , 3 , 3.2 , "HW design");
//    S_1.setName("Adel");
//    S_1.setGender("male");
//    S_1.setAge(26.2);
//    S_1.setDepart("Embedded Systems");
//    S_1.setLevel(3);
//    S_1.setGPA(2.9);
    
//    S_1.personDisplay();
//    S_1.studentDisplay();
    
    S_1.display();
    S_2.display();
    
    Distance Dis_1(32 , 13.5);
    Distance Dis_2(18 , 6.6);
    
    Distance result = Dis_1.add_distance(Dis_2);
    
    result.print();
    
    Distance Dis_3(19 , 6.6);
    Distance Dis_4 = ++Dis_3;
    Dis_4.print();
    
    // creating objects from class Car
    
//    sunny.setModel(2015);
//    sunny.setMaker("Nissan");
//    sunny.setColor("Moka");


    Car sunny(2015 , "Nissan" , "Moka");
    Car lanos;
    
    Car C_1(2019 , "Suzuki" , "Heavy Green");
    
    
    Car C_2(C_1);
    
    C_1.setModel(2024);
    
    lanos.setModel(2007);
    lanos.setMaker("Daiow");
    lanos.setColor("Sky-Blue");
    
    cout<<"-> C_1 model is : "<<C_1.getModel()<<endl;
    cout<<"-> C_1 maker is : "<<C_1.getMaker()<<endl;
    cout<<"-> C_1 color is : "<<C_1.getColor()<<endl;
    
    cout<<"=================================\n";
    
    cout<<"-> C_2 model is : "<<C_2.getModel()<<endl;
    cout<<"-> C_2 maker is : "<<C_2.getMaker()<<endl;
    cout<<"-> C_2 color is : "<<C_2.getColor()<<endl;
    
    cout<<"=================================\n";
    
    cout<<"-> sunny model is : "<<sunny.getModel()<<endl;
    cout<<"-> sunny maker is : "<<sunny.getMaker()<<endl;
    cout<<"-> sunny color is : "<<sunny.getColor()<<endl;
    
    cout<<"=================================\n";
    
    cout<<"-> lanos model is : "<<lanos.getModel()<<endl;
    cout<<"-> lanos maker is : "<<lanos.getMaker()<<endl;
    cout<<"-> lanos color is : "<<lanos.getColor()<<endl;
    
    cout<<"-> cars sum is : "<<C_2.get_carsCount()<<endl;
    
    cout<<"\n_!_\n";
        cout<<"\n_!_\n";
	return 0;
}