#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int numSticks = 21;
int userMove  ;
int compMove;


int main (void){

initscr();
noecho();
curs_set(FALSE);

mvaddstr(0,33,"21 MATCHSTICKS");
mvprintw(10,0, "Pick up tp 4 sticks at the time. The player who draws the last stick loses the game");
refresh();

while (numSticks>=1){
	mvprintw(15,0,"How many sticks will you take? ");
	refresh();
	userMove = getch() - '0';

	if (userMove >= 5){
		mvprintw(17,0, "Invaild Entry, You can only pick up to 4 sticks at a time ");
		userMove = getch() -'0';
	}else{
	numSticks = numSticks - userMove;
	}
	mvprintw(17,0, "You took %d",userMove);
	refresh();
	mvprintw(20,0, "Number of sicks left : %d", numSticks);
	
	refresh();
	compMove = rand()%4+1;
	numSticks = numSticks - compMove;
	mvprintw(23,0,"Opponent took %d", compMove);
	mvprintw(25,0,"Number of sticks left : %d" , numSticks);

refresh();
}

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
