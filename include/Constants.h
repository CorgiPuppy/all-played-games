#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <fstream>
#include <string>
#include <vector>
#include <utility>

namespace Constants {
	const std::string reportFolder = "report/";
	const std::string playedGamesFile = reportFolder + "allPlayedGames.md";
	const std::string futureGamesFile = reportFolder + "allFutureGames.md";

	const std::vector <std::pair<std::string, std::vector<std::string>>> allPlayedGames = {
		{
			"Шахматы", 
			{
				"Блиц",
				"Рапид",
				"Задачи по шахматам",
				"Шведские шахматы",
			}
		},
		{
			"Города",
			{}
		},
		{
			"Крокодил",
			{}
		},
		{
			"Майнкрафт",
			{}
		},
		{
			"Нарды",
			{
				"Длинные нарды",
			}
		},
		{
			"Настольный теннис",
			{
				"1x1",
				"2x2",
			}
		},
		{
			"Уголки",
			{}
		},
		{
			"Шашки",
			{
				"Русские",
			}
		},
		{
			"Эрудит",
			{}
		},
		{
			"Яцзы",
			{}
		},
		{
			"Alias",
			{}
		},
		{
			"Broforce",
			{}
		},
		{
			"Buckshot Roulette",
			{}
		},
		{
			"Factorio",
			{}
		},
		{
			"FreeGuessr",
			{
				"BestGuesser",
				"Circles",
				"Geo Duel",
			}
		},
		{
			"KTANE",
			{}
		},
		{
			"Lethal company",
			{
				"Без модов",
				"С модами",
			}
		},
		{
			"Stardew Valley",
			{
				"С модами",
			}
		},
		{
			"YAPYAP",
			{}
		},
		{
			"Deep Rock Galactic",
			{
				"Challenging Hazard Level",
				"Dangerous Hazard Level",
			}
		},
		{
			"R.E.P.O.",
			{}
		},
		{
			"Кто больше назовёт слов?",
			{}
		},
		{
			"Назвать то же самое слово",
			{}
		},
	};
	const std::vector <std::pair<std::string, std::vector<std::string>>> allFutureGames = {
		{
			"4 в ряд",
			{}
		},
		{
			"Большой теннис",
			{}
		},
		{
			"Домино",
			{}
		},
		{
			"Карты",
			{
				"Дурак",
				"Переводной",
				"Козёл",
			}
		},
		{
			"Крестики-нолики",
			{}
		},
		{
			"Морской бой",
			{}
		},
		{
			"Among us",
			{}
		},
		{
			"A way out",
			{}
		},
		{
			"Bloody trapland",
			{}
		},
		{
			"Bloody trapland 2",
			{}
		},
		{
			"CS 2",
			{}
		},
		{
			"Chained together",
			{}
		},
		{
			"Clone drone in the danger zone",
			{}
		},
		{
			"Escape the backrooms",
			{}
		},
		{
			"Fall guys",
			{}
		},
		{
			"Golf with your friends",
			{}
		},
		{
			"Human: Fall flat",
			{}
		},
		{
			"It takes two",
			{}
		},
		{
			"Left 4 dead 2",
			{}
		},
		{
			"Liar's bar",
			{}
		},
		{
			"LOCKDOWN Protocol",
			{}
		},
		{
			"MapHunt",
			{}
		},
		{
			"Paint the town red",
			{}
		},
		{
			"PayDay 2",
			{}
		},
		{
			"PEAK",
			{}
		},
		{
			"Phasmophobia",
			{}
		},
		{
			"Portal 2",
			{}
		},
		{
			"Raft",
			{}
		},
		{
			"Schedule 1",
			{}
		},
		{
			"SpyParty",
			{}
		},
		{
			"Super Bunny Man",
			{}
		},
		{
			"Terraria",
			{}
		},
		{
			"Uno",
			{}
		},
		{
			"Unravel two",
			{}
		},
		{
			"The Last Gas Station",
			{}
		},
		{
			"Slime Rancher 2",
			{}
		},
		{
			"Рабылка IRL",
			{}
		},
		{
			"Old Market Simulator",
			{}
		},
		{
			"Sons of the Forest",
			{}
		},
		{
			"The Outlast Trials",
			{}
		},
		{
			"Wordle",
			{}
		},
		{
			"Mindustry",
			{}
		},
		{
			"Overcooked! 2",
			{}
		},
		{
			"Moving out 2",
			{}
		},
		{
			"Го",
			{}
		},
		{
			"Garry's Mod",
			{}
		},
		{
			"RV There Yet",
			{}
		},
		{
			"Виселица",
			{}
		},
	};
}

#endif
