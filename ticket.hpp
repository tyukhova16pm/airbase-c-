
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
/*!
@brief Ticket
Класс Пассажиров. Содержит его данные - private, public - методы. friend - перегрузки cout, cin.
*/

class Ticket {
private:
	char first_name[30];//!Фамилия пассажира
	char second_name[15];//!Имя пассажира
	int passnumb;//!Две последние цифры номера паспорта
	double price; //!Переменная ценообразования
public:
/*!@brief
Загрузка данных из файла в оперативную память(хранение массива).
\param filename Имя файла бд.
\return 0 при успешном выполнении или -1 при ошибке открытия файла
*/
	Ticket *load(char *filename, Ticket *set,int n);
/*! @brief
Функция вызова меню для main.
\param filename Имя файла базы данных
\return 0 при успешном запуске
*/
	int run(char *filename);
/*! @brief
Стандартная функция подсчета строк.
\param filename Имя файла базы данных
*/
	int strochki(char *filename);
/*!@brief
Функция для записи в файл данных пассажира,регистрирующегося на рейс.
\param filename Имя файла базы данных
*/
	int setPass(char *filename);
/*!@brief
Функция для удаления данных из файла.
\param filename Имя файла базы данных
*/
	int delPass(char *filename);

/*!@brief
Функция, позволяющая просмотреть бд из файла.
\param filename Имя файла базы данных
*/
	int showlist(char *filename);
/*!@brief
Функция поиска своего имени в базе, позволяющая проыерить, арошла ли регистрация на рейс успешно.
\param filename Имя файла базы данных
*/
	int searchyrslf(char* filename);
/*! @brief
Вычисление цен за билет с учетом занятых мест.
\param n Количество занятых мест
*/
	double priceisnice(int n);
/*! @brief
Перегрузка оператора cout
*/
	friend ostream& operator << (ostream& out, Ticket& t);
/*! @brief
Перегрузка оператора cin
*/
	friend istream& operator >> (istream& in, Ticket& t);
};
