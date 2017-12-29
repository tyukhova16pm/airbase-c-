#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include "ticket.hpp"

using namespace std;

int Ticket::run(char *filename) {
	int key=0;
	Ticket going;
	while (true) {
		cout << "Добро пожаловать на рейс Airbus A321!" << endl;
		cout << "Отправлемся в путешествие из Москвы в Петропавловск-Камчатский!" << endl;
		cout << "[1]Покупка билета" << endl;
		cout << "[2]Возвращение билета" << endl;
		cout << "[3]Список зарегестрированных на рейс" << endl;
		cout << "[4]Найти свое имя в списке регистрации" << endl;
		cout << "[5] Уйти." << endl;
		cout << "----------------------------------------" << endl;
		cout << "Выберите пункт:" << endl;
		cin >> key;
		system("clear");
		switch(key) {
		case 1:
			going.setPass(filename);
			break;
		case 2:
			going.delPass(filename);
			break;
		case 3:
			going.showlist(filename);
			break;
		case 4:
			going.searchyrslf(filename);
			break;
		default:
			return 0;
		}
	}
	return 0;
}
