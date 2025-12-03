Lane Dodge Game (C – Windows Console)This is a small console game written in C where the player controls a character at the bottom of the screen and tries to dodge a falling obstacle that appears in one of three lanes.
#Requirements
Windows operating system 
C compiler that supports conio.h and windows.h 
Basic command‑line / terminal to compile and run the program 
#Detailed analysis of the game 
#Game Logic
Three vertical lanes 
player stays at the bottom row.
An obstacle falls from the top in one of the lanes.
Use the Left Arrow key to move one lane to the left and the Right Arrow key to move one lane to the right.
If the obstacle and the player are in the same lane when the obstacle reaches the player’s row, there is collision detected and the game ends with “GAME OVER!”and exits.
Else obstacle resets to the top in a new random lane
#Features
#Libraries used
stdio.h	(Input/output)
conio.h	(Keyboard input)
windows. 
stdlib.h
time.h	
#Functions used
srand(time(0))	Sets a starting point for random numbers so they change every time you run the game.
rand() % 3	Chooses a random number between 0 and 2 to decide which lane the obstacle will appear in.
_kbhit()	Checks if a key is pressed on the keyboard.
getch()	Reads which key is pressed (used to move the player).
system("cls")	Clears the console screen to redraw the game, making movement visible.
printf()	Prints the player, obstacles, and game messages to the screen.
Sleep(120)	Pauses the game for 120 milliseconds so the blocks fall at a playable speed.
#Variables used
int x – Stores the current lane of the player (0 = left, 1 = middle, 2 = right).
int step – Stores the vertical row index of the falling obstacle, from top to bottom.
int obstaclePos – Stores which lane (0, 1 or 2) the current obstacle is falling in.
Name: Somya Agarwal
Course: B.Tech – Computer Science
Section AA
1st SemesterAssignment: 