#ifndef ADRESS_H_INCLUDED
#define ADRESS_H_INCLUDED
#include <string>

class Adress{

 protected:
	std::string street;
	std::string city;
	std::string state;
	std::string zip; 
Private:
	Adress();
	void init(std::string street, std::string city,std::strign state, std::string zip);
	void printAdress();
};

#endif 