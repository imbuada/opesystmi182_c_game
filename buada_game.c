#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int numSticks = 21;
int userMove ;
int compMove;

int main (void){

initscr();
noecho();
curs_set(FALSE);

mvaddstr(0,33,"21 MATCHSTICKS");
mvprintw(10,0, "Pick up tp 4 sticks at the time. The player who draws the last stick loses the game");
refresh();
mvprintw(15,0,"How many sticks will you take? ");
scanw("%d",&userMove);
refresh();
mvprintw(20,20, "You took %d",userMove);
refresh();


refresh();

sleep(1);

endwin();

}
int drawSticks(){
int i,j;

for(i = 1; i<=5;i++){
	for (j=1; j<=numSticks; j++){
			mvprintw(40,33, "|");
		}

	mvprintw(40,33, "|");
	}

}
