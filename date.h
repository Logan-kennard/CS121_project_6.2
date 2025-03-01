#ifndef DATE_H_INCLUDE
#define DATE_H_INCLUDE
#include <string>

class date{
protected:
	std::string dateString;
	int month;
	int day;
	int year; 
public:
	Date()
	void init(std::string dateString)
	void printDate()
};

#endif