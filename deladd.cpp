#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "ticket.hpp"

using namespace std;

int Ticket::setPass(char* filename)
{
	Ticket yrbytt;
	int n = strochki(filename);
	cout <<"Доброго времени суток!\n";
	cout <<"Вы перешли к покупке билета\n";
	cout<<"Вылет: Москва, 12.06.17 14:25 \n";
	cout <<"а/п Домодедово\n";
	cout <<"Прибытие: Петропавловск-Камчатский, 12.06.17 23:10\n";
	cout <<"а/п Петропавловск-Камчатский\n";
	cout <<"Введите ваши паспортные данные:\n";
	cin >> yrbytt;
	yrbytt.price = priceisnice(n);
	ofstream file(filename, ios_base::app);
	if(!file.is_open())
{
		cout << "ерор" << endl;
		return -1;
}
file << yrbytt.first_name << " " << yrbytt.second_name << " " << yrbytt.passnumb << " " << yrbytt.price << "\n";
	file.close();
	return 0;
}
	
/*!
@function delPass
Функция для удалени из файла данных пассажира,желающего отменить регистрацию.
*/	
int Ticket::delPass(char* filename)
{
	Ticket notyrbytt;
	int i, iF = -1;
	int n = notyrbytt.strochki(filename);
	Ticket *tick=new Ticket[n];
	tick = tick->load(filename, tick, n);
	cin >> notyrbytt;
for(i = 0; i<n; i++) {
		if ( (strcmp(notyrbytt.first_name,tick[i].first_name) == 0) && (strcmp(notyrbytt.second_name,tick[i].second_name) == 0) && (notyrbytt.passnumb == tick[i].passnumb) )
	iF = i;
	}
if (iF == -1) {
cout << "Вы не являетесь зарегестрированным на рейс пассажиром."<<endl;
return 0;
	}

	ofstream file(filename, ios_base::trunc);
		if(!file.is_open()) {
		cout << "ерор" << endl;
		return -1;
	}
	for(i=0; i<iF; i++)
		file << tick[i].first_name << " " << tick[i].second_name << " " << tick[i].passnumb << " " << tick[i].price << "\n";

	for(i=iF+1; i<n; i++)
		file << tick[i].first_name << " " << tick[i].second_name << " " << tick[i].passnumb << " " << tick[i].price << "\n";
	file.close();

return 1;
}
