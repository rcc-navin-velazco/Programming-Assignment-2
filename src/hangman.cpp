#include "hangman.hpp"
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iostream>

std::vector<std::string> loadWordsFromFile(const std::string& filename) {
    // TODO: Open the file, read each word, and store it in a vector    
    return {};
}

std::string chooseRandomWord(const std::vector<std::string>& words) {
    // TODO: Return a random element from the vector
    return "";
}

std::string initializeHiddenWord(const std::string& word) {
    // TODO: Return a string with underscores the same length as 'word'
    return "";
}

void updateHiddenWord(std::string& hiddenWord, const std::string& word, char guess) {
    // TODO: Reveal all positions of 'guess' in the hidden word
}

bool alreadyGuessed(const std::vector<char>& guessedLetters, char guess) {
    // TODO: Return true if 'guess' is already in guessedLetters
    return false;
}

void displayGameState(const std::string& hiddenWord, const std::vector<char>& guessedLetters, int wrongGuesses) {
    // TODO: Print the hidden word (with spaces), guessed letters, and wrong guess count
}

bool isWordGuessed(const std::string& hiddenWord) {
    // TODO: Return true if there are no underscores left in hiddenWord
    return false;
}