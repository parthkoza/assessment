#include<stdio.h>
int main()
{
	int player;
	printf("ATP Top 10 Ranking for lawn tennis.");
	scanf("%d",&player);
	switch (player)
	{
		case 1:
		printf("NOVAK DJOKOVIC");
		break;
		case 2:
		printf("CARLOS ALCARAZ");
		break;
		case 3:
		printf("TSTTSIPAS");
		break;
		case 4:
		printf("MEDVEDEV");
		break;
		case 5:
		printf("CASPER RUDD");
		break;
		case 6:
		printf("ANDRY RUBLEV");
		break;
		case 7:
		printf("AUGER-ALLIASAME");
		break;
		case 8:
		printf("HOLGER RUNE");
		break;
		case 9:
		printf("JANNIK SINNER");
		break;
		case 10:
		printf("TYLOR FRITZ");
		break;
		default:
		printf("please enter valid number");	
	}
}
