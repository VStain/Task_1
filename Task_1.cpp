#include <iostream>
using namespace std;

enum class Months
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
};

int main()
{
    setlocale(LC_ALL, "Ru");
    
    Months month = Months::August;
    int choice = static_cast<int>(month);
    
    cout << "1.  Январь " << endl <<
        "2.  Февраль" << endl <<
        "3.  Март" << endl <<
        "4.  Апрель" << endl <<
        "5.  Май" << endl <<
        "6.  Июнь" << endl <<
        "7.  Июль" << endl <<
        "8.  Август" << endl <<
        "9.  Сентябрь" << endl <<
        "10. Октябрь" << endl <<
        "11. Ноябрь" << endl <<
        "12. Декабрь" << endl <<
        "Нажмите 0 чтобы выйти" << endl;
    link: // сылка
    cout << endl << "Введите номер месяца: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << endl << "Вы выбрали январь месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 2:
        cout << endl << "Вы выбрали февраль месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 3:
        cout << endl << "Вы выбрали март месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 4:
        cout << endl << "Вы выбрали апрель месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 5:
        cout << endl << "Вы выбрали май месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 6:
        cout << endl << "Вы выбрали июнь месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 7:
        cout << endl << "Вы выбрали июль месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 8:
        cout << endl << "Вы выбрали август месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 9:
        cout << endl << "Вы выбрали сентябрь месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 10:
        cout << endl << "Вы выбрали октябрь месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 11:
        cout << endl << "Вы выбрали ноябрь месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 12:
        cout << endl << "Вы выбрали декабрь месяц" << endl;
        goto link; // сылка на 39 строку
        break;

    case 0:
         cout << "До свидания! ";
         break;

    default:
        cout << endl << "Неправильный номер! Потворите ввод." << endl;
        goto link; // сылка на 39 строку
        break;
    }
    
    

    return 0;
}

