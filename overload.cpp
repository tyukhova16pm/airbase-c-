#include <fstream>
#include <string>
#include <iostream>
#include "ticket.hpp"

using namespace std;

ostream& operator << (ostream& out, Ticket& tick)
{
	cout <<"Ваша фамилия: " << tick.first_name << "Имя: " << tick.second_name << "Ваши данные:" <<tick.passnumb<< "Цена билета: "<<tick.price << endl;
return out;
}
/*!
@function >>
Перегрузка оператора cin
*/
istream& operator >> (istream& in, Ticket& tick)
{
	cout << "Ваша фамилия: ";
	cin >> tick.first_name;
	cout << "Имя: ";
	cin >>tick.second_name;	
	cout << "Паспортные данные: (последние две цифрыы)"<<endl;
	cin >> tick.passnumb;

	return in;
}
