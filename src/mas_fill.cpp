#include <iostream>
#include <time.h>
#include <math.h>
#include <mas_fill.h>


namespace gd
{
	void mas_fill(int mas[size][size], int& min_num, int& max_num)
	{
		srand(time(NULL));
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				int num = rand() - (RAND_MAX / 2);
				if (num < 0)
				{
					mas[i][j] = num % 100;
					std::cout << mas[i][j] << " ";
				}
				else
				{
					mas[i][j] = num % 100;
					std::cout << mas[i][j] << " ";
				}

				if (mas[i][j] < min_num)
					min_num = mas[i][j];
				if (mas[i][j] > max_num)
					max_num = mas[i][j];
			}
			std::cout << "" << std::endl;
		}
	}
}