#include "Hangman_Lib.h"

int main()
{
    int rounds = 0;
    int wins = 0;
    int main_menu;
    char choice;
    print_main();
    std::cout << std::setw(26);
    do {
        std::cout << "Enter 1, 2 or 3: ";
        std::cin >> main_menu;
        std::cin.clear();
        std::cin.ignore(8192, '\n');
        if (main_menu == 2) {
            print_rules();
            print_main();
            std::cout << std::setw(26);
        }
    } while (main_menu != 1 && main_menu != 3);
    std::vector<std::pair<std::string, std::vector<std::string>>> dictionary = read_words("Hangman_Dictionary.txt");
    while (main_menu == 1) {
        std::string topic;
        std::string word = rand_word(dictionary, &topic);
        wins += play_round(topic, word);
        continue_menu(++rounds, wins);
        if (!dictionary.empty()) {
            choice = 0;
            do {
                std::cout << "Do you want to continue? [Y/n]" << std::endl;
                std::cin >> choice;
                std::cin.clear();
                std::cin.ignore(8192, '\n');
                if (tolower(choice) != 'y' && tolower(choice) != 'n')
                    std::cout << "Please, enter Y(yes) or N(no)." << std::endl;
            } while (tolower(choice) != 'y' && tolower(choice) != 'n');
            if (tolower(choice) == 'y')
                main_menu = 1;
            else
                main_menu = 0;
        }
        else {
            std::cout << "Unfortunately, there are no more words in the dictionary." << std::endl;
            std::cout << std::endl;
            system("pause");
            main_menu = 0;
        }
    }
}