#pragma once
class Date
{
public:
	Date(int =1, int=1, int=1990);
	void print() const;
	
private:
	int day;
	int month;
	int year;
};

