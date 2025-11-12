#ifndef HANGMAN_H
#define HANGMAN_H

#include <iostream>
#include <vector>
#include <string>

// Reads words from a file and stores them in a vector
std::vector<std::string> loadWordsFromFile(const std::string& filename);

// Selects and returns a random word from the vector
std::string chooseRandomWord(const std::vector<std::string>& words);

// Creates and returns a string of underscores matching the word length
std::string initializeHiddenWord(const std::string& word);

// Updates the hidden word when the guess is correct
void updateHiddenWord(std::string& hiddenWord, const std::string& word, char guess);

// Checks if the guessed letter was already tried
bool alreadyGuessed(const std::vector<char>& guessedLetters, char guess);

// Displays the current game state
void displayGameState(const std::string& hiddenWord, const std::vector<char>& guessedLetters, int wrongGuesses);

// Returns true if the player has guessed all letters
bool isWordGuessed(const std::string& hiddenWord);

#endif