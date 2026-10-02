#include <algorithm>
#include <iostream>

#include "../include/Constants.h"

void writeToFileAllPlayedGames ();
void writeToFileAllFutureGames ();

int main() {
	writeToFileAllPlayedGames();
	writeToFileAllFutureGames();
	return 0;
}

void writeToFileAllPlayedGames () {
	std::ofstream file (Constants::playedGamesFile);
	if (file.is_open()) {
		std::vector <std::pair<std::string, std::vector<std::string>>> allGames = Constants::allPlayedGames;
		std::sort(allGames.begin(), allGames.end());
		int i = 1, j;
		char c;
		int n = allGames.size(), m;
		for (auto game: allGames) {
			c = 97;
			if (game.second.empty() && i != n)
				file << i << ". " << game.first << ";" << std::endl;
			else if (game.second.empty() && i == n)
				file << i << ". " << game.first << "." << std::endl;
			else
				file << i << ". " << game.first << ":" << std::endl;
			std::sort(game.second.begin(), game.second.end());
			m = game.second.size();
			j = 1;
			for (std::string subGame: game.second) {
				if (j != m)
					file << "\t" << c << ". " << subGame << ";" << std::endl;
				else 
					file << "\t" << c << ". " << subGame << "." << std::endl;
				c++;
				j++;
			}
			i++;
		}
	} else std::cout << "Unable to open the file." << std::endl;
}

void writeToFileAllFutureGames () {
	std::ofstream file (Constants::futureGamesFile);
	if (file.is_open()) {
		std::vector <std::pair<std::string, std::vector<std::string>>> allGames = Constants::allFutureGames;
		std::sort(allGames.begin(), allGames.end());
		int i = 1, j;
		char c;
		int n = allGames.size(), m;
		for (auto game: allGames) {
			c = 97;
			if (game.second.empty() && i != n)
				file << i << ". " << game.first << ";" << std::endl;
			else if (game.second.empty() && i == n)
				file << i << ". " << game.first << "." << std::endl;
			else
				file << i << ". " << game.first << ":" << std::endl;
			std::sort(game.second.begin(), game.second.end());
			m = game.second.size();
			j = 1;
			for (std::string subGame: game.second) {
				if (j != m)
					file << "\t" << c << ". " << subGame << ";" << std::endl;
				else 
					file << "\t" << c << ". " << subGame << "." << std::endl;
				c++;
				j++;
			}
			i++;
		}
	} else std::cout << "Unable to open the file." << std::endl;
}
