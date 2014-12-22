#include <stdio.h>
#include <curses.h>

int main()
{
    initscr();
    mvprintw(10,10,"Hello world!\n");
    refresh();
    getch();
    endwin();
    return 0;
}
