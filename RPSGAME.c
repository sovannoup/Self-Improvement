#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int cpt,user,randomNumber,Exist,restart,userScore=0,cptscore=0;
	srand(time(NULL));
	printf("number 1 for Rock!\n");
	printf("number 2 for Paper!\n");
	printf("number 3 for Scissor!\n");
	while(Exist==0)
	{
	printf("Enter to play: ");
	scanf("%d",&user);
	printf("\n");
	if (user==1) printf("You choose Rock.\n");
	else if(user==2) printf("You choose Paper.\n");
	else if(user==3) printf("You choose Scissor.\n");
	else {
		printf("Please try again later!!!");
		break;
	}
	randomNumber= rand() % 3 + 1;
	switch(randomNumber)
	{
	
	case 1:
		printf("Computer choose Rock.\n");
		 break;
	case 2:
		printf("Computer choose Paper.\n");
		break;
	case 3:
		printf("Computer choose Scissor.");
		break;
		}
	if(randomNumber==user)
	{
		printf("Draw!!please try again!");
		printf("          User's score is %d",userScore);
		printf("          Target's score = %d",cptscore);
	}
	else if((randomNumber==1&&user==3)||(randomNumber==2&&user==1)||(randomNumber==3&&user==2))
	{
		printf("\nOhh No!! You've lost this round.");
		cptscore++;
		printf("          User's score is %d",userScore);
		printf("          Target's score = %d",cptscore);
	}
	else if((randomNumber==1&&user==2)||(randomNumber==2&&user==3)||(randomNumber==3&&user==1))
	{
		printf("\nCongrate!! You win.");
		userScore++;
		printf("          User's score = %d",userScore);
		printf("          Target's score = %d",cptscore);
	}
	printf("\n \nPress 0 to Stop the game or other number to CONTINUE: ");
	scanf("%d",&restart);
	if(restart==0)
	{
		Exist=1;
	}
	else { printf("___________________________________\n");
	}
	}
}
