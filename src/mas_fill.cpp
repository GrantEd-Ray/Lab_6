#include <iostream>
#include <time.h>
#include <math.h>


namespace gd
{
	int mas_fill(int *mas_element, int *num, int *min, int *max)
	{
		int num = rand() - (RAND_MAX / 2);
		if (num < 0)
		{
			mas_element = num % 100;
			std::cout << mas_element << " ";
		}
		else
		{
			mas_element = num % 100;
			std::cout << mas_element << " ";
		}

		if (mas_element < min)
			min = mas_element;
		if (mas_element > max)
			max = mas_element;
	}
}