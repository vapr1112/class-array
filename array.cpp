#include "array.h"

Array::Array(int* mas_p, int size_p) : mas{ new int[size_p] }, size{ size_p }//������� �����������
{
	mas = mas_p;
}

Array::Array(Array&& mas_p) : mas{ new int[mas_p.size] }, size{mas_p.size} //����������� �����������
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

void Array::print()//���������� �������� �������
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << mas[i] << " ";
	}
}