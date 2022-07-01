#include <iostream>
using namespace std;

enum class Months
{
    Exit = 0,
    January ,
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
    int requestedMonthNumber = static_cast<int>(month);
    
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

    cout << endl << "Введите номер месяца: ";
    cin >> requestedMonthNumber;

    while (requestedMonthNumber != 0) 
    {
        /*if (requestedMonthNumber == 0)
        {
            cout << "До свидания! ";
        }*/
        switch (static_cast<Months>(requestedMonthNumber))
        {
        case Months::January:
            cout << endl << "Вы выбрали январь месяц" << endl;
            break;

        case Months::February:
            cout << endl << "Вы выбрали февраль месяц" << endl;
            break;

        case Months::March:
            cout << endl << "Вы выбрали март месяц" << endl;
            break;

        case Months::April:
            cout << endl << "Вы выбрали апрель месяц" << endl;
            break;

        case Months::May:
            cout << endl << "Вы выбрали май месяц" << endl;
            break;

        case Months::June:
            cout << endl << "Вы выбрали июнь месяц" << endl;
            break;

        case Months::July:
            cout << endl << "Вы выбрали июль месяц" << endl;
            break;

        case Months::August:
            cout << endl << "Вы выбрали август месяц" << endl;
            break;

        case Months::September:
            cout << endl << "Вы выбрали сентябрь месяц" << endl;
            break;

        case Months::October:
            cout << endl << "Вы выбрали октябрь месяц" << endl;
            break;

        case Months::November:
            cout << endl << "Вы выбрали ноябрь месяц" << endl;
            break;

        case Months::December:
            cout << endl << "Вы выбрали декабрь месяц" << endl;
            break;

        case Months::Exit:
            cout << "До свидания! ";
            break;

        default:
            cout << endl << "Неправильный номер! Потворите ввод." << endl;
            break;
        }

        
        cout << endl << "Введите номер месяца: ";
        cin >> requestedMonthNumber;
    }

    return 0;
}

