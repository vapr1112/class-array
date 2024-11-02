#include "array.h"

Array::Array(int* mas_p, int size_p) : mas{ new int[size_p] }, size{ size_p }//главный конструктор
{
	mas = mas_p;
}

Array::Array(Array&& mas_p) : mas{ new int[mas_p.size] }, size{mas_p.size} //конструктор перемещения
{
	mas = nullptr;
	size = 0;
}

void Array::random()
{
	delete[] mas;

	mas = new int[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = rand() % 10;
	}
}

void Array::print()//показывает элементы массива
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << mas[i] << " ";
	}
}