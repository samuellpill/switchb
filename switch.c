#include<stdio.h>
main()
{
	printf("pick an item:");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("pizza rs 239");
		break;
			case 2:
			printf("burger rs 129");
		break;
			case 3:
			printf("pasta rs 179");
		break;
			case 4:
			printf("french fries rs 99");
		break;
			case 51:
			printf("sandwich rs 179");
		break;
	default: printf("french fries rs99");	
	
    }
