#pragma once

#include "data.h"

void DataEntry(Data* (&d), int& n);
void DataRead(Data* (&d), int& n, string file);
void DataShow(Data* (&d), int& n);
void DataChange(Data* (&d), int n);
void Copy(Data* d_new, Data* d_old, int n);
void DataAdd(Data* (&d), int& n);
void DeleteData(Data* (&d), int& n);
void DataSort(Data* (&d), int& n);
void DataSave(Data * (&d), int& n, string file);