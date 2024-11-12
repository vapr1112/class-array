#pragma once

#include <iostream>

#define SIZE 10

using namespace std;

class Array
{
private:
	int* mas;
	int size;
public:

	Array() = default;

	explicit Array(int* mas_p) : Array(mas_p, size) {}

	Array(int* mas_p, int size_p);//главный конструктор

	Array(const Array& mas_p);

	Array(Array&& mas_p);//конструктор перемещения

	//аксессоры и модификаторы
	const int* get_mas()const
	{
		return mas;
	}

	int get_size()const
	{
		return size;
	}

	void set_mas(int* mas_p, const int size_p)
	{
		size = size_p;

		delete[] mas;

		mas = new int[size];

		mas = mas_p;
	}

	void random();//заполняет массив рандомными числами

	void print();//показывает элементы массива

	~Array()
	{
		delete[] mas;
	}
};

