#include <iostream>
#include <time.h>
#include <math.h>
#include "has8.h"
#include "num_swap.h"
#include <mas_fill.h>

int main()
{
    int mas[gd::size][gd::size];
    int min_num = INT_MAX;
    int max_num = INT_MIN;

	gd::mas_fill(mas, min_num, max_num);

    std::cout << min_num << " " << max_num << std::endl;
    std::cout << "" << std::endl;

    if (min_num + max_num == 0)
    {
        for (int i = 0; i < gd::size; i++)
        {
            if (gd::has8(mas[i]))
            {
                gd::num_swap(mas[i]);
            }
        }
    }

    for (int i = 0; i < gd::size; i++)
    {
        for (int j = 0; j < gd::size; j++)
            std::cout << mas[i][j] << " ";
        std::cout << "" << std::endl;
    }

	return 0;
}



