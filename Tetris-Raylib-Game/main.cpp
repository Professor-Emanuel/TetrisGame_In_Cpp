#include "Game.h"
#include "Settings.h"
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    //const int screenWidth = 800;
    //const int screenHeight = 600;

    Game game{ settings::screenWidth, settings::screenHeight, settings::fps, "Tetris Raylib" };

    while (!game.GameShouldClose()) {
        game.Tick();
    }

    return 0;
}