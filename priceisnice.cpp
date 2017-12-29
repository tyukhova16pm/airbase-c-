#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "ticket.hpp"
using namespace std;

double Ticket::priceisnice(int n)
{
	double a, b;
	double cena;
	int free;
	a = 0.000000132; 	
	b = 0.000053;
	free = 185 - n;
		cena = 1/(a*free + b);

return cena;	
}
