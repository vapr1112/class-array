#include "array.h"

Array::Array(int* mas_p, int size_p) : mas{ new int[size_p] }, size{ size_p }//главный конструктор
{
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = mas_p[i];
	}
}

Array::Array(const Array& mas_p) : mas{ new int[mas_p.size] }, size{ mas_p.size } //конструктор перемещения
{
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = mas_p.get_mas()[i];
	}
}

Array::Array(Array&& mas_p) : mas{ new int[mas_p.size] }, size{mas_p.size} //конструктор перемещения
{
	mas = nullptr;
	size = 0;
}

void Array::random()
{
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