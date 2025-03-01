#include <iostream>
#include "adress.h"

Adress::Adress(){
	street=" ";
	city=" ";
	state=" ";
	zip=" ";

}

void Adrss::init(std::string street, std::string city, std::string state, std::string zip){
	Adress::street=street;
	Adress::city=city;
	Adress::state=state;
	Adress::zip=zip;


}

void Adress::printAdress(){
	std::cout << street <<std::endl;
	std::cout << city <<" " << state << " ";
	std:: cout << zip << std::endl

};