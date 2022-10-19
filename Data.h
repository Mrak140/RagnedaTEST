#pragma once

#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

struct FIO {
	string Surname;
	string Name;
	string Partname;
};

struct Date {
	int day, minth, year;
};

struct Number {
	int studak;
};

class Data {
private:
	FIO fio;
	Date date;
	Number Studak;
public:
	Data();
	Data(FIO fio, Date date, Number studak);
	~Data();

	void Show();
	void DataEntry(FIO fio, Date date, Number studak);
	FIO GetFIO() { return fio; };
	Date GetDate() { return date; };
	Number GetNumber() { return Studak; };

	Data& operator = (Data d_old);
}; 