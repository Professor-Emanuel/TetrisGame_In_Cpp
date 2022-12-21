#pragma once
#include <string>
#include "Board.h"
#include "Tetrominoes.h"

class Game {
public:
	Game(int width, int height, int fps, std::string title);
	Game(const Game& other) = delete; //delete copy constructor
	Game& operator=(const Game& other) = delete; //delete copy assignment
	~Game() noexcept;

	bool GameShouldClose() const;
	void Tick();

private:
	void Draw();
	void Update();

	Board board;
	Jay tetromino;
};