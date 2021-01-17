#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

void print_hangman(int stage, std::string topic, std::string word, std::string used);
std::string center_word(std::string word, unsigned int width);
std::string print_alpha(std::string used, int mode);
std::vector<std::pair<std::string, std::vector<std::string>>> read_words(std::string filename);
void remove_empty(std::vector<std::pair<std::string, std::vector<std::string>>> &dictionary);
void trim_back(std::string *s);
std::string rand_word(std::vector<std::pair<std::string, std::vector<std::string>>>& dictionary, std::string* topic);
std::string encrypt_word(std::string word);
bool play_round(std::string topic, std::string word);
void continue_menu(int rounds, int wins);
std::string add_spaces(std::string);
void print_main();
void print_rules();