#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "ticket.hpp"
using namespace std;

Ticket* Ticket::load(char *filename, Ticket *tick, int n) {
	int i;
	char iF[n];
	ifstream file(filename);
	if(!file.is_open()) {
		cout << "ерор" << endl;
		return tick;
	}
	for(i=0; i<n; i++)
	{
		file >> tick[i].first_name >>  tick[i].second_name >> tick[i].passnumb >> tick[i].price;
	}	
	file.close();
	return tick;
}


int Ticket::strochki(char *filename) {
	int i = 0;
	char *str = new char[1024];
	ifstream file(filename);
	if(!file.is_open()) {
		cout << "ерор" << endl;
		return -1;
	}
	while(!file.eof()) {
		file.getline(str, 1024, '\n');
    	i++;
	}
	i--;
	file.close();
	delete[] str;
	return i;
}
