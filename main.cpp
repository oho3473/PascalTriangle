#include<iostream>

int main()
{
	const int COLUMN{ 5 };
	int triangle[COLUMN][COLUMN]{};

    for (int i = 0; i < COLUMN; ++i)
    {
        if (i == 0)
        {
            triangle[0][0] = 1;
        }
        else
        {
            int preValue;

            for (int j = 0; j <= i; ++j)
            {
                preValue = (j - 1 < 0) ? 0 : triangle[i - 1][j - 1];
                triangle[i][j] = preValue + triangle[i - 1][j];
            }
        }

        
    }
        //Ãâ·Â
        for (int i = 0; i < COLUMN; ++i)
        {
            for (int j = 0; j < COLUMN; ++j)
            {
                std::cout << triangle[i][j];
            }

            std::cout << std::endl;
        }
}