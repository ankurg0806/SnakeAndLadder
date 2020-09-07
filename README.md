# SnakeAndLadder
A low level design question asked during several design interviews

Create a snake and ladder application.

The application should take as input (from the command line or a file):

- Number of snakes (s) followed by s lines each containing 2 numbers denoting the head and tail positions of the snake.

- Number of ladders (l) followed by l lines each containing 2 numbers denoting the start and end positions of the ladder.

- Number of players (p) followed by p lines each containing a name.

After taking these inputs, you should print all the moves in the form of the current player name followed by a random number between 1 to 6 denoting the die roll and the initial and final position based on the move.

When someone wins the game, print that the player won the game.

Rules of the game

- The board will have 100 cells numbered from 1 to 100.

- The game will have a six sided dice numbered from 1 to 6 and will always give a random number on rolling it.

- Each player has a piece which is initially kept outside the board (i.e., at position 0).

- Each player rolls the dice when their turn comes.

- Based on the dice value, the player moves their piece forward that number of cells. Ex: If the dice value is 5 and the piece is at position 21, the player will put their piece at position 26 now (21+5).

- A player wins if it exactly reaches the position 100 and the game ends there.

- After the dice roll, if a piece is supposed to move outside position 100, it does not move.

- The board also contains some snakes and ladders.

- Each snake will have its head at some number and its tail at a smaller number.

- Whenever a piece ends up at a position with the head of the snake, the piece should go down to the position of the tail of that snake.

- Each ladder will have its start position at some number and end position at a larger number.

- Whenever a piece ends up at a position with the start of the ladder, the piece should go up to the position of the end of that ladder.

- There could be another snake/ladder at the tail of the snake or the end position of the ladder and the piece should go up/down accordingly.

Assumptions you can take apart from those already mentioned in rules

- There won’t be a snake at 100.

- There won’t be multiple snakes/ladders at the same start/head point.

- It is possible to reach 100, i.e., it is possible to win the game.

- Snakes and Ladders do not form an infinite loop.

#Sample Output
ankur@xxxx:~/SnakeAndLadder/src) g++ -std=c++11 -I/home/users/ankur/SnakeAndLadder/ SnakeAndLadderMain.cpp SnakeAndLadderGame.cpp    
ankur@xxxx:~/SnakeAndLadder/src) ./a.out

Enter number of snakes: 4<br/>
99 10<br/>
37 15<br/>
68 23<br/>
49 30<br/>

Enter number of ladders: 4<br/>
12 45<br/>
20 62<br/>
32 50<br/>
52 85<br/>
Enter no of players: 2
enter nameAnkur<br/>
enter nameGaurav<br/>
Ankur turn, Press enter to roll the dice<br/>

Ankur got2<br/>
Ankur moved to 2<br/>
Gaurav turn, Press enter to roll the dice<br/>

Gaurav got5<br/>
Gaurav moved to 5<br/>
Ankur turn, Press enter to roll the dice<br/>

Ankur got4
Ankur moved to 6
Gaurav turn, Press enter to roll the dice

.
.
.
.

Ankur got3<br/>
Ankur moved to 100<br/>
Ankur wins the game
