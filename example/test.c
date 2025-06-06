#define PRUNE 1
#define main static _game_main
#include "../src/narsil.c"
#undef main

int
main()
{
  ui_refresh(0, 0, 0);

  return 0;
}
