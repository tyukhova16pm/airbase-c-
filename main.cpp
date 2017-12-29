#include <fstream>
#include <string>
#include <iostream>
#include "ticket.hpp"

using namespace std;
	int main(int argc, char* argv[])
{
char *filename;
Ticket tick;
if (argc == 2)
filename = argv[1];
else {
cout << "ерор" << endl;
return 0;
}
tick.run(filename);

}
