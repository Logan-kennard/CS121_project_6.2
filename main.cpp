#include <iostream>
#include <vector>
#include <sstream>
#include<ifstream>
#include "date.h"
#include "address.h"
#include "student.h"

void loadstudents(){
  std::ifstream inFile;
  std::string currentLine;
  std:: string converter;
  std::stringstream ss;
  std::string sCounter;
  std::string text;

  inFile.opean("student.csv");
  while (getline(inFile, currentLine)){
    ss.clear();
    ss.str("");
    converter.clear();
    converter.str("");
    ss.str(currentLine);
    getline(ss, sCounter, ',');

  }
  inFile.close()
}
void printStudents(){}
void showstudentnames(){}
void findStudent(std::vector<Students*>& students){
  std::string target;
  bool notFound=true;
  std::cout<<"last name of student:";
  gitline(std::cin, target);
  for (Students* s: students){
    std::string lName = s ->getLastName();
    if(lName, find (target)!= std::string::npos){
      s->printStudents();
      notFound= false 
    }
  }
  if(notFound){
    std::cout <<"Student" << target<<"not found"<<std::endl;
  }
}
void delstudent(){}
void menu(){}
int main(){}


