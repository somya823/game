#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main() {
    int userChoice, computerChoice;
    char c;
    char *choices[] = {"Stone", "Paper", "Scissor"};

    srand(time(0));
    int score=0;
    for(int i=0;i<=10;i++){
        printf("Welcome to Stone-Paper-Scissor Game!\n");
        printf("Enter your choice: 0 for Stone, 1 for Paper, 2 for Scissor: ");
        scanf("%d", &userChoice);

        // Computer randomly chooses 0, 1, or 2
        computerChoice = rand() % 3;

        printf("You chose: %s\n", choices[userChoice]);
        printf("Computer chose: %s\n", choices[computerChoice]);

        // Decide winner
        if (userChoice == computerChoice) {
            printf("It's a tie!\n");
        } 
        else if ((userChoice == 0 && computerChoice == 2) ||
                 (userChoice == 1 && computerChoice == 0) ||
                 (userChoice == 2 && computerChoice == 1)) {
                 	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
					 SetConsoleTextAttribute(h, 14); // Yellow color
					 printf("\n!!!YOU WIN!!!\n");
					 SetConsoleTextAttribute(h, 15);//back to white
					 score++;
        } 
        else {
            printf("Computer wins!\n");
        }

    }
    
	if (score >= 3) {
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 14);
    printf("\n***CONGRATULATIONS! YOUR REWARD!***\n\n");
    for(int i=1;i<=5;i++){
    	for(int j=1;j<=5;j++){
    		printf("*");
		}
		printf("\n");
	}
	SetConsoleTextAttribute(h, 15);
}
else {
    printf("\nNo chocolate this time \n");
    printf("Win more rounds to earn it!\n");
}

    return 0;
}
