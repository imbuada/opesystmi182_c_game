#include <ncurses.h>
#include <unistd.h>


int numSticks = 21;
int userMove;
int compMove;

int main (int argc, char *argv[]){

initscr();
noecho();
curs_set(FALSE);

printw("21 MATCHSTICKS");
printw("");
printw( "RULES");
printw("");
printw( "1. Each turn, the players will pick up the matchsticks");
printw("");
printw( "2. A player can pick a minimum of 1 stick up to a max of 4");
printw("");
printw( "3. The player who will pick the last matchstick loses the game");

refresh();

sleep(1);

endwin();

}
