#include "data.h"

Data::Data() {
	fio.Surname = "";
	fio.Name = "";
	fio.Partname = "";

	date.day = 0;
	date.minth = 0;
	date.year = 0;

	Studak.studak = 0;
};

Data::Data(FIO fio_, Date date_, Number studak_) {
	fio.Surname = fio_.Surname;
	fio.Name = fio_.Name;
	fio.Partname = fio_.Partname;

	date.day = date_.day;
	date.minth = date_.minth;
	date.year = date_.year;

	Studak.studak = studak_.studak;
}

Data::~Data() {};

void Data::Show() {

	cout << "ÔÈÎ" << fio.Surname << " " << fio.Name << " " << fio.Partname << endl;
	cout << "ÄÀÒÀ" << date.day << "." << date.minth << "." << date.year << endl;
	cout << "ÍÎÌÅĞ ÁÈËÅÒÀ" << Studak.studak << endl;

};

void Data::DataEntry(FIO fio_, Date date_, Number studak_) {
	fio.Surname = fio_.Surname;
	fio.Name = fio_.Name;
	fio.Partname = fio_.Partname;

	date.day = date_.day;
	date.minth = date_.minth;
	date.year = date_.year;

	Studak.studak = studak_.studak;
};

Data& Data::operator=(Data d_old) {
	this->fio.Surname = d_old.fio.Surname;
	this->fio.Name = d_old.fio.Name;
	this->fio.Partname = d_old.fio.Partname;

	this->date.day = d_old.date.day;
	this->date.minth = d_old.date.minth;
	this->date.year = d_old.date.year;

	this->Studak.studak = d_old.Studak.studak;

	return *this;
};
