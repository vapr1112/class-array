#include "Header.h"

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	Array mas_1{ mas_factory() };

	cout << "\n������\n";

	mas_1.print();

	return 0;
}