#include <iostream>
#include <sstream>
#include "adress.h"
#include "date.h"

Student::Student(){
    studentString= "";
    firstname= " ";
    lastname=" ";
    birthday= new Date();
    Gradday= new Date();
    adress= new Adress();
    credithours=0; 


}

Student::~Student(){
    delete birthday;
    delete Gradday;
    delete adress;
}

void Student::init(std:: string studentString){
    std:: ifstream inFile;
    std::string currentline;
    std::strinsstream ss;
    std::
    std::
    std:: string street;
    std:: string city;
    std:: string state;
    std:: string zip;

}

void Student::printStudents(){
    std::cout<<firstname<<" "<< lastname<< std::endl;
    std:: cout<< "DOB";

    std::cout<<"Graduation Day";
    

    std::cout::<< "Credits"<< credithours<< std::endl;
    std::cout:: <<"_____________________________";
    std::cout<< std::endl;
}
// void Students::getFirstName(){

}
// void Students::getLastName(){}
// void Students::getCreditHours(){}