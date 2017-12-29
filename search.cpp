#include <fstream>
#include <string>
#include <iostream>
#include <cstring>
#include "ticket.hpp"

using namespace std;

int Ticket::searchyrslf(char* filename)
{

	int i;
	Ticket familia;
	int n = familia.strochki(filename);
	Ticket oao;
	Ticket *tick = new Ticket[n];
	tick=oao.load(filename, tick, n);

	cout << "Чтобы проверить вашу регистрацию на рейс, пожалуйста\n" <<"заполните форму ниже"<<endl;
	cout << "Введите фамилию" << endl;
	cin >>familia.first_name;
	cout << "Введите имя" << endl;
	cin >>familia.second_name;
	for(i=0; i<n; i++) {
		if( (strcmp(familia.first_name, tick[i].first_name)==0) && (strcmp(familia.second_name, tick[i].second_name)==0))
	cout<<"Ваша регистрация на рейс успешна.Ожидайте перелета"<<endl;
		}
return 1;
}


int Ticket::showlist(char *filename) {
	string ff;
   	ifstream file(filename);
	if(!file.is_open()) {
		cout << "ерор" << endl;
		return 1;
	}
		while(!file.eof()) {
		getline(file, ff); 
		cout << ff << endl; 
	}
    file.close(); 
	return 0;
}

