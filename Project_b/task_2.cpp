#include <iostream>

void drawRectangle(int N, int K)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < K; ++j)
            std::cout << "*";
        std::cout << "\n";
    }
}

int main()
{
    drawRectangle(5, 10);
    return 0;
}