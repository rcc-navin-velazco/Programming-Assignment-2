#include "hangman.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

int main() {
    std::srand((std::time(nullptr)));  // seed the random number generator

    std::cout << "Welcome to Hangman!" << std::endl;

    std::vector<std::string> words = loadWordsFromFile("../../dictionary/words.txt");
    if (words.empty()) {
        std::cout << "Error: Could not load any words from file.\n";
        return 1;
    }

    std::string secretWord = chooseRandomWord(words);
    std::string hiddenWord = initializeHiddenWord(secretWord);
    std::vector<char> guessedLetters;
    int wrongGuesses = 0;
    const int MAX_WRONG = 6;

    while (wrongGuesses < MAX_WRONG && !isWordGuessed(hiddenWord,secretWord)) {
        displayGameState(hiddenWord, guessedLetters, wrongGuesses);
        std::cout << "Enter a letter: ";
        char guess;
        std::cin >> guess;

        // Convert to lowercase
        guess = static_cast<char>(std::tolower(guess));

        if (alreadyGuessed(guessedLetters, guess)) {
            std::cout << "You already guessed '" << guess << "'. Try another letter.\n";
            continue;
        }

        guessedLetters.push_back(guess);

        // Check if guess is correct
        if (secretWord.find(guess) != std::string::npos) {
            std::cout << "Good guess!\n";
            updateHiddenWord(hiddenWord, secretWord, guess);
        } else {
            std::cout << "Sorry, '" << guess << "' is not in the word.\n";
            wrongGuesses++;
        }

        std::cout << std::endl;
    }

    if (isWordGuessed(hiddenWord,secretWord)) {
        std::cout << "🎉 Congratulations! You guessed the word: " << secretWord << std::endl;
    } else {
        std::cout << "😞 You lost. The word was: " << secretWord << std::endl;
    }

    return 0;
}
