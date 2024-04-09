#include <iostream>
#include <cstdlib>      
#include <ctime>        

int main()
{
   
    srand(static_cast<unsigned int>(time(0)));

    int playerScore = 0;
    int computerScore = 0;
    for (int i = 0; i < 5; ++i)
    {
        playerScore += (rand() % 6 + 1);
        computerScore += (rand() % 6 + 1);
    }

    std::cout << "Player score: " << playerScore << "\n";
    std::cout << "Computer score: " << computerScore << "\n";

    if (playerScore > computerScore)
        std::cout << "Player wins!\n";
    else if (playerScore < computerScore)
        std::cout << "Computer wins!\n";
    else
        std::cout << "It's a tie!\n";

    return 0;
}