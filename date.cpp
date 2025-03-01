#include <iostream>
#include <sstream>
#include "date.h"

Date::Date(){
    dateString= "0/00/0000";
    month=0;
    day= 0;
    year=0;

};
void Date::init(dateString){
    std:: ifstream inFile;
    std::string currentline;
    std:: converter; 
    std::strinsstream ss;
    std:: string months;
    std:: string days;
    std:: string years;
    std:: string dates;


    int month;
    int day;
    int year;

    inFile.open("students.csv");
    while (getline(inFile, currentline)){
        ss.clear();
        ss.str(" ");
        converter.clear();
        converter.str("")
        ss.str(currentline);
        getline(converter, days, ',');
        getline(converter, months, ',');
        getline(converter, years, ',');
        getline(converter, dates);

        converter<< days<< " "<< months << " "<< years;
        converter<< day >> months>> years; 
        inFile.close();
        

    }


};

void Date::printDate(){
    std::string month[]=("January", "Febuary", "March", "April", "May","June", "July",
    "Augest","Spetember", "October", "November", "December");