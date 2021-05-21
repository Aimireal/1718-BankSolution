#include "stdafx.h"
#include "Date.h"

using namespace std;

Date::Date(int dy, int mn, int yr) //Date account opened
{
	day = dy; 
	month - mn;
	year = yr;
}

void Date::print() const //Printing date account opened
{	
	cout << day << "/" << month << "/" << year << endl;
}
