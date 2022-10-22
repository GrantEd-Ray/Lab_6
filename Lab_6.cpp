#include <iostream>
#include <time.h>
#include <math.h>
#include "has8.h"
#include "num_swap.h"
#include "mas_fill.h"


const int size = 8;

int main()
{
    srand(time(NULL));
    int mas[size][size];
    int num;
    int min_num = INT_MAX;
    int max_num = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            /*num = rand() - (RAND_MAX / 2);
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
                max_num = mas[i][j];*/
			gd::mas_fill(&mas[i][j], )
        }
        std::cout << "" << std::endl;
    }

    std::cout << min_num << " " << max_num << std::endl;
    std::cout << "" << std::endl;

    if (min_num + max_num == 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (gd::has8(mas[i]))
            {
                gd::num_swap(mas[i]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            std::cout << mas[i][j] << " ";
        std::cout << "" << std::endl;
    }

	return 0;
}



