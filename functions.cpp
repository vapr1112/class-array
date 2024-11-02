#include "Header.h"


Array mas_factory()
{
	Array mas;

	for (int i = 0; i < SIZE; i++)
	{
		mas.random();
	}

	return mas;
}