#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int numSticks = 21;
int userMove  ;
int compMove;

int drawSticks();
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
	refresh();
	
	
	mvprintw(17,0, "You took %d",userMove);

	compMove = rand()%4+1;
	refresh();
	mvprintw(20,0,"Opponent took %d", compMove);
	

	numSticks = numSticks - userMove - compMove;
	mvprintw(25,0,"Number of sticks left : %d" , numSticks);
	refresh();
	if (numSticks ==1){
		mvprintw(30,10,"Opponent wins!");
		break;
		refresh();
	}
	
	}


sleep(1);

endwin();

}
int drawSticks(int row, int col, int h, int w){

for(int i = 0; i<row;i++){

for (int j = 0; j<col; j++){
	move (row+i, col+j);
	printw("|");

		}
	}
}
