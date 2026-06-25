#include <ncurses.h>

int main() {

  initscr();
  printw("Hello");
  refresh();

  return 0;
}
