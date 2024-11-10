#include "array.h"

Array::Array(int* mas_p, int size_p) : mas{ new int[size_p] }, size{ size_p }//������� �����������
{
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = mas_p[i];
	}
}

Array::Array(const Array& mas_p) : mas{ new int[mas_p.size] }, size{ mas_p.size } //����������� �����������
{
	for (int i = 0; i < SIZE; i++)
	{
		mas[i] = mas_p.get_mas()[i];
	}
}

Array::Array(Array&& mas_p) : mas{ new int[mas_p.size] }, size{mas_p.size} //����������� �����������
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

void Array::print()//���������� �������� �������
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << mas[i] << " ";
	}
}