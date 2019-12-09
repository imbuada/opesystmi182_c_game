#include <ncurses.h>
#include <unistd.h>


int numSticks = 21;
int userMove;
int compMove;

int main (void){

initscr();
noecho();
curs_set(FALSE);

mvaddstr(0,33,"21 MATCHSTICKS");
mvaddstr(10,20, "Pick up tp 4 sticks at the time. The player who draws the last stick loses the game");

//while (numSticks > =1){





//}


drawSticks();
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
