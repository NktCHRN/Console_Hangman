#include "Hangman_Lib.h"

void print_hangman(int stage, std::string topic, std::string word, std::string used) {
	system("cls");
	std::cout << center_word("C o n s o l e  H a n g m a n ", 60) << std::endl;
	std::cout << std::endl;
	switch (stage) {
	case -1:
		std::cout << center_word("YOU WON!!!", 60) << std::endl;
		std::cout << "   |" << std::endl;
		std::cout << " --+-----+" << std::setw(24) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << "   |     |" << std::endl;
		std::cout << "   |" << std::setw(29) << "Your word:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << "   |     @" << std::endl;
		std::cout << "   |   \\-|-/" << center_word("Letters left:", 41) << std::endl;
		std::cout << "   |     |" << center_word(print_alpha(used, 1), 45) << std::endl;
		std::cout << "   |    / \\" << center_word(print_alpha(used, 2), 43) << std::endl;
		std::cout << "---+---------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	case 0:
		std::cout << std::endl;
		std::cout << std::setw(34) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << std::endl;
		std::cout << std::setw(33) << "Your word:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << std::endl;
		std::cout << center_word("Letters left:", 65) << std::endl;
		std::cout << center_word(print_alpha(used, 1), 65) << std::endl;
		std::cout << center_word(print_alpha(used, 2), 65) << std::endl;
		std::cout << "-------------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	case 1:
		std::cout << "   |" << std::endl;
		std::cout << " --+-----+" << std::setw(24) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << "   |     |" << std::endl;
		std::cout << "   |" << std::setw(29) << "Your word:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << "   |" << std::endl;
		std::cout << "   |" << center_word("Letters left:", 57) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 1), 57) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 2), 57) << std::endl;
		std::cout << "---+---------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	case 2:
		std::cout << "   |" << std::endl;
		std::cout << " --+-----+" << std::setw(24) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << "   |     |" << std::endl;
		std::cout << "   |     @" << std::setw(23) << "Your word:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << "   |" << std::endl;
		std::cout << "   |" << center_word("Letters left:", 57) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 1), 57) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 2), 57) << std::endl;
		std::cout << "---+---------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	case 3:
		std::cout << "   |" << std::endl;
		std::cout << " --+-----+" << std::setw(24) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << "   |     |" << std::endl;
		std::cout << "   |     @" << std::setw(23) << "Your word:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << "   |	 |" << std::endl;
		std::cout << "   |     |" << center_word("Letters left:", 45) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 1), 57) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 2), 57) << std::endl;
		std::cout << "---+---------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	case 4:
		std::cout << "   |" << std::endl;
		std::cout << " --+-----+" << std::setw(24) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << "   |     |" << std::endl;
		std::cout << "   |     @" << std::setw(23) << "Your word:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << "   |   /-|" << std::endl;
		std::cout << "   |     |" << center_word("Letters left:", 45) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 1), 57) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 2), 57) << std::endl;
		std::cout << "---+---------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	case 5:
		std::cout << "   |" << std::endl;
		std::cout << " --+-----+" << std::setw(24) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << "   |     |" << std::endl;
		std::cout << "   |     @" << std::setw(23) << "Your word:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << "   |   /-|-\\" << std::endl;
		std::cout << "   |     |" << center_word("Letters left:", 45) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 1), 57) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 2), 57) << std::endl;
		std::cout << "---+---------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	case 6:
		std::cout << "   |" << std::endl;
		std::cout << " --+-----+" << std::setw(24) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << "   |     |" << std::endl;
		std::cout << "   |     @" << std::setw(23) << "Your word:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << "   |   /-|-\\" << std::endl;
		std::cout << "   |     |" << center_word("Letters left:", 45) << std::endl;
		std::cout << "   |    /" << center_word(print_alpha(used, 1), 47) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 2), 57) << std::endl;
		std::cout << "---+---------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	case 7:
		std::cout << "   |" << std::endl;
		std::cout << " --+-----+" << std::setw(24) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << "   |     |" << std::endl;
		std::cout << "   |     @" << std::setw(23) << "Your word:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << "   |   /-|-\\" << std::endl;
		std::cout << "   |     |" << center_word("Letters left:", 45) << std::endl;
		std::cout << "   |    / \\" << center_word(print_alpha(used, 1), 43) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 2), 57) << std::endl;
		std::cout << "---+---------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	case 8:
		std::cout << center_word("YOU LOST!!!", 60) << std::endl;
		std::cout << "   |" << std::endl;
		std::cout << " --+-----+" << std::setw(24) << "Your topic:" << std::setw(static_cast<std::streamsize>(topic.size()) + 4) << topic << std::endl;
		std::cout << "   |     |" << std::endl;
		std::cout << "   |    @/" << std::setw(23) << "Your word was:" << std::setw(static_cast<std::streamsize>(word.size()) + 5) << word << std::endl;
		std::cout << "   |   /-|-\\" << std::endl;
		std::cout << "   |     |" << center_word("Letters left:", 45) << std::endl;
		std::cout << "   |    / \\" << center_word(print_alpha(used, 1), 43) << std::endl;
		std::cout << "   |" << center_word(print_alpha(used, 2), 57) << std::endl;
		std::cout << "---+---------" << center_word(print_alpha(used, 3), 39) << std::endl;
		break;
	}
}

std::string center_word(std::string word, unsigned int width) {
	std::string word_with_spaces = word;
	if (width > word.size()) {
		for (size_t i = 0; i < width - word.size(); i++) {
			if (i % 2 == 0)
				word_with_spaces.insert(0, " ");
			else
				word_with_spaces.push_back(' ');
		}
	}
	return word_with_spaces;
}

std::string print_alpha(std::string used, int mode) {
	std::string temp;
	switch (mode) {
	case 1:
		temp = "q w e r t y u i o p";
		break;
	case 2:
		temp = " a s d f g h j k l ";
		break;
	case 3:
		temp = "   z x c v b n m   ";
		break;
	}
		for (size_t i = 0; i < temp.size(); i++)
			if (temp[i] != ' ' && used.find(temp[i]) != -1)
				temp.replace(i, 1, " ");
	return temp;
}

std::vector<std::pair<std::string, std::vector<std::string>>> read_words(std::string filename) {
	std::vector<std::pair<std::string, std::vector<std::string>>> dictionary;
	std::string line;
	std::string word;
	std::ifstream file(filename);
	int row = -1;
	std::vector<std::string> empty_vector;
	if (file.is_open())
	{
		while (getline(file, line))
		{
			trim_back(&line);
			if (line.size() > 0) {
				word = "";
				if (line[0] == '!') {
					for (size_t i = 1; i < line.size(); i++) {
						if (!isspace(line[i]) && line[i] != '#')
							word += line[i];
						else if (line[i] == '#')
							break;
					}
					if (!word.empty()) {
						dictionary.push_back(make_pair(word, empty_vector));
						row++;
					}
				}
				else if (row >= 0) {
					for (size_t i = 0; i < line.size(); i++) {
						if (isalpha(line[i]))
							word += tolower(line[i]);
						else if (line[i] == '#')
							break;
					}
					if (!word.empty())
						dictionary[row].second.push_back(word);
				}
				else
					std::cout << "Error: Bad read" << std::endl;
			}
		}
	}
	file.close();     // закрываем файл
	remove_empty(dictionary);
	return dictionary;
}

void trim_back(std::string *s) {
	int pos = (*s).size() - 1;
	while ((*s)[pos] == ' ') {
		(*s).pop_back();
		pos--;
	}
}

void remove_empty(std::vector<std::pair<std::string, std::vector<std::string>>>& dictionary) {
	size_t pos = 0;
	while (pos < dictionary.size()) {
		if (dictionary[pos].second.empty()) {
			dictionary[pos].swap(dictionary[dictionary.size() - 1]);
			dictionary.pop_back();
		}
		else
			pos++;
	}
}

std::string rand_word(std::vector<std::pair<std::string, std::vector<std::string>>>& dictionary, std::string* topic) {
	srand(time(NULL));
	int temp = rand() % dictionary.size();
	*topic = dictionary[temp].first;
	int word_temp = rand() % dictionary[temp].second.size();
	std::string word = dictionary[temp].second[word_temp];
	dictionary[temp].second[word_temp].swap(dictionary[temp].second[dictionary[temp].second.size() - 1]);
	dictionary[temp].second.pop_back();
	remove_empty(dictionary);
	return word;
}

std::string encrypt_word(std::string word) {
	std::string encrypted_word = "";
	for (size_t i = 0; i < word.size(); i++)
		encrypted_word += "_";
	return encrypted_word;
}

std::string add_spaces(std::string word) {
	std::string new_word = "";
	for (size_t i = 0; i < word.size(); i++) {
		new_word.push_back(word[i]);
		new_word += " ";
	}
	return new_word;
}

void print_main() {
	std::cout << center_word("C o n s o l e  H a n g m a n ", 60) << std::endl;
	std::cout << std::endl;
	std::cout << "   |" << std::endl;
	std::cout << " --+-----+" << center_word("M a i n  m e n u:", 40) << std::endl;
	std::cout << "   |     |" << std::endl;
	std::cout << "   |" << center_word("1. Play", 50) << std::endl;
	std::cout << "   |     @" << center_word("2. Rules & Info", 46) << std::endl;
	std::cout << "   |   \\-|-/" << center_word("3. Quit", 34) << std::endl;
	std::cout << "   |     |" << std::endl;
	std::cout << "   |    / \\" << std::endl;
	std::cout << "---+---------";
}

void print_rules() {
	system("cls");
	std::cout << center_word("C o n s o l e  H a n g m a n ", 60) << std::endl;
	std::cout << std::endl;
	std::cout << "   |" << std::endl;
	std::cout << " --+-----+" << center_word("R u l e s:", 40) << std::endl;
	std::cout << "   |     |" << std::endl;
	std::cout << "   |         " << "    After clicking the \"Play\" button you will see your topic, encrypted word and letters." << std::endl;
	std::cout << "   |     @   " << " You should try to guess letters that word has. Used letters will disappear on virtual keyboard." << std::endl;
	std::cout << "   |   \\-|-/ " << " If you have failed to guess the letter 8 times, you lost. If you have guessed the whole word - you won." << std::endl;
	std::cout << "   |     |   " << " You can play more rounds while your dictionary is not empty " << std::endl;
	std::cout << "   |    / \\  " << " (used words will disappear from it for this session)." << std::endl;
	std::cout << "---+---------" << " Also, you can add more topics and words to the dictionary. How? see on github.com/NktCHRN/Console_Hangman" << std::endl;
	std::cout << std::endl;
	system("pause");
	system("cls");
}

bool play_round(std::string topic, std::string word) {
	std::string encrypted = encrypt_word(word);
	std::string used = "";
	char letter = 0;
	int win = 1;
	int hangman_stage = 0;
	while (hangman_stage != 8 && encrypted != word) {
		print_hangman(hangman_stage, add_spaces(topic), add_spaces(encrypted), used);
		std::cout << add_spaces(topic) << std::endl;
		do {
			std::cout << "Pick a letter: ";
			std::cin >> letter;
			std::cin.clear();
			std::cin.ignore(8192, '\n');
			if (used.find(letter) != -1)
				std::cout << "This letter is already used." << std::endl;
			else if (!isalpha(letter))
				std::cout << "This is not a letter." << std::endl;
		} while (!isalpha(letter) || used.find(letter) != -1);
		used += letter;
		if (word.find(letter) != -1) {
			for (size_t i = 0; i < word.size(); i++)
				if (word[i] == letter)
					encrypted[i] = letter;
		}
		else
			hangman_stage++;
	}
	if (word == encrypted) {
		print_hangman(-1, add_spaces(topic), add_spaces(word), used);
		std::cout << std::endl;
		system("pause");
	}
	else {
		print_hangman(8, add_spaces(topic), add_spaces(word), used);
		std::cout << std::endl;
		system("pause");
		win = 0;
	}
	return win;
}

void continue_menu(int rounds, int wins) {
	system("cls");
	std::cout << center_word("C o n s o l e  H a n g m a n ", 60) << std::endl;
	std::cout << std::endl;
	std::cout << "Rounds:" << std::setw(5) << rounds << std::endl;
	std::cout << "Wins:" << std::setw(7) << wins << std::setw(7) << std::fixed << std::setprecision(2) << (double)wins / rounds * 100 << "%" << std::endl;
	std::cout << "Losses:" << std::setw(5) << rounds - wins << std::setw(7) << std::fixed << std::setprecision(2) << ((double)rounds - wins) / rounds * 100 << "%" << std::endl;
	std::cout << std::endl;
}