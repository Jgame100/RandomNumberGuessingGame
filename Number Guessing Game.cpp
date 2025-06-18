#include <iostream>
#include <cstdlib>
#include <ctime>

// Number Guessing Game, user inputs a number from 1-100 and sees how close they are to the actual number in the program. Program also tells you what the number was at the end.

int main()
{
    srand(time(NULL));

    int modeSelect;
    std::cout << "Hello, Welcome to the Number Guessing Game! You can select from 3 modes, Or Casual. \n";
    std::cout << "1. Easy \n2. Normal \n3. Hard \n4. Casual \n";
    std::cin >> modeSelect;


    // If Easy Mode is Selceted
    if (modeSelect == 1) {

        std::cout << "Easy mode Selected. You will have 7 chances to guess the number. \n";
        int userGuess = 0;
        int maxAttempts = 7;
        int userAttempts = 0;

        int randNumber = 1 + rand() % 100;

        //this is the loop
        while (userAttempts <= maxAttempts) {

            std::cout << "Enter your guess: ";
            std::cin >> userGuess;

            int distance = abs(userGuess - randNumber);
            
            //Goes through each and checks the argument. Prints the result if true.
            if (distance == 0) {

                std::cout << "You guessed the number!";
                break;

            }
            else if (distance <= 1) {
                std::cout << "VERY HOT!! \n";
                

            }
            else if (distance < 5) {
                std::cout << "Hot! \n";
                

            }
            else if (distance < 15) {
                std::cout << "Pretty Warm. \n";
                

            }
            else if (distance < 25) {
                std::cout << "Cold. \n";
                

            }
            else if (distance <= 50){
                std::cout << "ICE Cold. \n";

            }
            else {
                std::cout << "Not Close. \n";

            }

            userAttempts++;

            // Tells the user what the number was when out of attempts
            if (userAttempts == maxAttempts) {
                std::cout << "You are out of attempts. The number was: " << randNumber << " :(\n";
                return main();
            }

        }
    }


    if (modeSelect == 2) {
        std::cout << "Normal mode selected. You will have 5 chances to guess the number. \n";
        int userGuess = 0;
        int maxAttempts = 5;
        int userAttempts = 0;

        int randNumber = 1 + rand() % 100;

        //this is the loop
        while (userAttempts <= maxAttempts) {

            std::cout << "Enter your guess: ";
            std::cin >> userGuess;

            int distance = abs(userGuess - randNumber);

            //Goes through each and checks the argument. Prints the result if true.
            if (distance == 0) {

                std::cout << "You guessed the number!";
                break;

            }
            else if (distance <= 1) {
                std::cout << "VERY HOT!! \n";


            }
            else if (distance < 5) {
                std::cout << "Hot! \n";


            }
            else if (distance < 15) {
                std::cout << "Pretty Warm. \n";


            }
            else if (distance < 25) {
                std::cout << "Cold. \n";


            }
            else if (distance <= 50) {
                std::cout << "ICE Cold. \n";

            }
            else {
                std::cout << "Not Close. \n";

            }

            userAttempts++;

            // Tells the user what the number was when out of attempts
            if (userAttempts == maxAttempts) {
                std::cout << "You are out of attempts. The number was: " << randNumber << " :(\n";
                return main();
            }

        }

    }

    if (modeSelect == 3) {
        std::cout << "Hard mode selected. You will have 3 chances to guess the number. \n";
        int userGuess = 0;
        int maxAttempts = 3;
        int userAttempts = 0;

        int randNumber = 1 + rand() % 100;

        //this is the loop
        while (userAttempts <= maxAttempts) {

            std::cout << "Enter your guess: ";
            std::cin >> userGuess;

            int distance = abs(userGuess - randNumber);

            //Goes through each and checks the argument. Prints the result if true.
            if (distance == 0) {

                std::cout << "You guessed the number!";
                break;

            }
            else if (distance <= 1) {
                std::cout << "VERY HOT!! \n";


            }
            else if (distance < 5) {
                std::cout << "Hot! \n";


            }
            else if (distance < 15) {
                std::cout << "Pretty Warm. \n";


            }
            else if (distance < 25) {
                std::cout << "Cold. \n";


            }
            else if (distance <= 50) {
                std::cout << "ICE Cold. \n";

            }
            else {
                std::cout << "Not Close. \n";

            }

            userAttempts++;

            // Tells the user what the number was when out of attempts
            if (userAttempts == maxAttempts) {
                std::cout << "You are out of attempts. The number was: " << randNumber << " :(\n";
                return main();
            }

        }

    }

    if (modeSelect == 4) {
        std::cout << "Casual mode selected. You can guess however many times you want. \n";
        int userGuess = 0;
        int maxAttempts = 999;
        int userAttempts = 0;

        int randNumber = 1 + rand() % 100;

        //this is the loop
        while (userAttempts <= maxAttempts) {

            std::cout << "Enter your guess: ";
            std::cin >> userGuess;

            int distance = abs(userGuess - randNumber);

            //Goes through each and checks the argument. Prints the result if true.
            if (distance == 0) {

                std::cout << "You guessed the number!";
                break;

            }
            else if (distance <= 1) {
                std::cout << "VERY HOT!! \n";


            }
            else if (distance < 5) {
                std::cout << "Hot! \n";


            }
            else if (distance < 15) {
                std::cout << "Pretty Warm. \n";


            }
            else if (distance < 25) {
                std::cout << "Cold. \n";


            }
            else if (distance <= 50) {
                std::cout << "ICE Cold. \n";

            }
            else {
                std::cout << "Not Close. \n";

            }

            userAttempts++;

            // Tells the user what the number was when out of attempts and resets back to start.
            if (userAttempts == maxAttempts) {
                std::cout << "You are out of attempts. The number was: " << randNumber << " :(\n";
                return main();
            }

        }

        return 0;

    }

}
    

