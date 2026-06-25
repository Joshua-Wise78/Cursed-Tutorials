#include <ncurses.h>

int main() {

  int ch;
  // Initialzie the screen
  initscr();

  // Disable line buffering
  raw();

  // Enable function keys
  keypad(stdscr, TRUE);

  // Switch off echoing
  noecho();
  // Print to the screen and store the character
  printw("Type any character to see it in bold\n");
  ch = getch();

  if (ch == KEY_F(1))
    printw("F1 Key pressed");

  else {
    printw("The pressed key is ");
    attron(A_BOLD);
    printw("%c", ch);
    attroff(A_BOLD);
  }

  // Refresh and then end screen on another press
  refresh();
  getch();
  endwin();

  return 0;
}
