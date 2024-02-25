#include "Game.hpp"

int main(int argc, char* argv[])
{
  Game* game = new Game();

  game->setUpSystem("Donkey Kong",1000,600);

  while(game->loop());
  delete game;
  
  return 0;
}

#ifdef _WIN32
#include <windows.h>
INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow) {
  return main(__argc, __argv);
}
#endif