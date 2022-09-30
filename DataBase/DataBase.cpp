#include "Function.h"

int point;

void menu() {
    cout << "Chekay mat ubludok:" << endl
        << "0 Quit" << endl
        << "1 Init base " << endl
        << "2 Show base" << endl
        << "3 Edit data" << endl
        << "4 Delete data" << endl
        << "5 Add data" << endl
        << "6 Sort" << endl
        << "7 SavePoint Madafuka" << endl
        << "Your poin-->";
    cin >> point;
}

int main()
{
    menu();
    string file;
    int actionPoint;

    int size = 0;
    Data* d = new Data[size];

    while (point != 0) {
        switch (point) {
        case 1:
            system("cls");
            cout << "1 to Init base manually\n" << "2 to Read file" << endl;
            cin >> actionPoint;
            system("cls");
            if (actionPoint == 1) {
                DataEntry(d, size);
            }
            else DataRead(d, size, "Input.txt");
            system("pause");
            system("cls");
            menu();
            break;
        case 2:
            system("cls");

            if (size != 0) {
                DataShow(d, size);
            }
            else cout << "Data is non" << endl;

            system("pause");
            system("cls");
            menu();
            break;
        case 3:
            system("cls");

            if (size != 0) {
                DataChange(d, size);
            }
            else cout << "Data is non" << endl;

            system("pause");
            system("cls");
            menu();
            break;
        case 4:
            system("cls");

            if (size != 0) {
                DataAdd(d, size);
            }
            else cout << "Data is non" << endl;
            system("pause");
            system("cls");
            menu();
            break;
        case 5:
            system("cls");

            if (size != 0) {
                DeleteData(d, size);
            }
            else cout << "Data is non" << endl;
            system("pause");
            system("cls");
            menu();
            break;
        case 6:
            system("cls");

            if (size != 0) {
                DataSort(d, size);
            }
            else cout << "Data is non" << endl;
            system("pause");
            system("cls");
            menu();
        case 7:
            system("cls");

            if (size != 0) {
                DataSave(d, size, "Output.txt");
            }
            else cout << "Data is non" << endl;
            system("pause");
            system("cls");
            menu();
            break;

        default:
            cout << "Entered void" << endl;
            system("cls");
            menu();
            break;
        }
    }
}

