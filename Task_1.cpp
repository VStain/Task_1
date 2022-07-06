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

std::string Case_months(int month_number)
{
    switch (static_cast<Months>(month_number))
    {
    case Months::January:
        return "Вы выбрали январь месяц";
        break;

    case Months::February:
        return "Вы выбрали февраль месяц";
        break;

    case Months::March:
        return "Вы выбрали март месяц";
        break;

    case Months::April:
        return "Вы выбрали апрель месяц";
        break;

    case Months::May:
        return "Вы выбрали май месяц";
        break;

    case Months::June:
        return "Вы выбрали июнь месяц";
        break;

    case Months::July:
        return "Вы выбрали июль месяц";
        break;

    case Months::August:
        return "Вы выбрали август месяц";
        break;

    case Months::September:
        return "Вы выбрали сентябрь месяц";
        break;

    case Months::October:
        return "Вы выбрали октябрь месяц";
        break;

    case Months::November:
        return "Вы выбрали ноябрь месяц";
        break;

    case Months::December:
        return "Вы выбрали декабрь месяц";
        break;

    /*default:
        return "Неправильный номер! Потворите ввод.";
        break;*/
    }
}

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

    do
    {
        cout << endl << "Введите номер месяца: ";
        cin >> requestedMonthNumber;
        if (requestedMonthNumber < 0 || requestedMonthNumber > 12) 
        {
            std::cout << "Неправильный номер! Повторите ввод." << endl;
            continue;
        }
        if (requestedMonthNumber == 0)
        {
            cout << "До свидания! " << endl;
            break;
        }
        cout << Case_months(requestedMonthNumber) << endl;

    } while (requestedMonthNumber != 0);


    return 0;
}

