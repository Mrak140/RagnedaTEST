#include "Function.h"

void DataEntry(Data* (&d), int& n) {

	FIO fio;
	Date date;
	Number studak;

	cout << "Enter array size" << endl;
	cin >> n;

	d = new Data[n];

	for (int i = 0; i < n; i++) {
		cout << "FIO ";
		cin >> fio.Surname >> fio.Name >> fio.Partname;

		cout << "Date ";
		cin >> date.day >> date.minth >> date.year;

		cout << "Ticket number ";
		cin >> studak.studak;

		d[i].DataEntry(fio, date, studak);

		cout << "________________________________________________";
	}
};

void DataRead(Data* (&d), int& n, string file) {
	fstream reading;

	if (reading) {
		FIO fio;
		Date date;
		Number studak;

		reading >> n;

		d = new Data[n];

		for (int i = 0; i < n; i++) {
			reading >> fio.Surname >> fio.Name >> fio.Partname;
			reading >> date.day >> date.minth >> date.year;
			reading >> studak.studak;

			d[i].DataEntry(fio, date, studak);
		}

		cout << "Data Entered" << endl;
	}
	else cout << "!!!Error!!!" << endl;

	reading.close();
}
void DataShow(Data* (&d), int& n)
{
	for (int i = 0; i < n; i++) {
		cout << "Data #" << i << endl;

		d[i].Show();
		cout << "______________________________\n";
	}
}
void DataChange(Data* (&d), int n) {

	FIO fio;
	Date date;
	Number studak;
	int _n;

	cout << "Entry Change Element";
	cin >> _n;
	_n--;

	if (_n >= 0 && _n < n) {
		cout << "Set new FIO";
		cin >> fio.Surname >> fio.Name >> fio.Partname;

		cout << "Set new Date";
		cin >> date.day >> date.minth >> date.year;

		cout << "Set new Studack";
		cin >> studak.studak;

		d[_n].DataEntry(fio, date, studak);
	}
	else cout << "!!!Retard ALERT!!!";
}

void Copy(Data* d_new, Data* d_old, int n) {
	for (int i = 0; i < n; i++) {
		d_new[i] = d_old[i];
	}
};

void DataAdd(Data* (&d), int& n) {
	FIO fio;
	Date date;
	Number studak;

	Data* buf = new Data[n];
	int size = n;
	int new_size = ++n;

	Copy(buf, d, size);

	d = new Data[new_size];

	Copy(d, buf, size);

	cout << "Set new FIO";
	cin >> fio.Surname >> fio.Name >> fio.Partname;

	cout << "Set new Date";
	cin >> date.day >> date.minth >> date.year;

	cout << "Set new Studack";
	cin >> studak.studak;

	d[size].DataEntry(fio, date, studak);

	cout << "Data added" << endl;

	delete[] buf;
};

void DeleteData(Data* (&d), int& n) {
	int _n;
	Data* buf = new Data[n];

	cout << "Enter delete namber" << endl;
	cin >> _n;
	_n--;

	if (_n >= 0 && _n < n) {
		Copy(buf, d, n);
		int q = 0;
		n--;

		d = new Data[n];

		for (int i = 0; i < n; i++) {
			if (i != n) {
				d[q] = buf[i];
				q++;
			}
		}
	}
	else cout << "!!!ERROR Number" << endl;

	delete[] buf;
};

void DataSort(Data* (&d), int& n) {
	Data buf;
	int n_sort = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (d[i].GetFIO().Surname > d[j].GetFIO().Surname) {
				buf = d[i];
				d[i] = d[j];
				d[j] = d[i];

				n_sort++;
			}
		}
	}
	cout << "Data sorted" << endl;
}
void DataSave(Data* (&d), int& n, string file) {

	ofstream record(file);

	if (record) {
		record << n << endl;

		for (int i = 0; i < n; i++) {
			record << d[i].GetFIO().Surname << " " << d[i].GetFIO().Name << " " << d[i].GetFIO().Surname;
			record << d[i].GetDate().day << " " << d[i].GetDate().minth << " " << d[i].GetDate().year;
			record << d[i].GetNumber().studak;
		}
	}
	else cout << "!!!ERROR!!!" << endl;

	cout << "Data saved" << file << endl;

	record.close();
};