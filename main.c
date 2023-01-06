#include <stdio.h>
void movingUp(int x, int y){
	char floors[] = {'P', '1', '2', '3', '4', '5'};
	int i = 0;
	for(i = x; i < y; i++){
		printf("\n");
		printf("  ^  \n");
		printf("  |  \n");
		printf("  |  \n");
	}
	x = y;
	printf("You arrived, have a nice day <3\n");
	
}
void movingDown(int x, int y){
	char floors[] = {'P', '1', '2', '3', '4', '5'};
	int i = 0;
	for(i = x; i > y; i--){
		printf("  |  \n");
		printf("  |  \n");
		printf("  V  \n");
		printf("\n");
	}
	x = y;
	printf("You arrived, have a nice day <3\n");
	
}
int main(int argc, char *argv[]) {
	char floors[] = {'P', '1', '2', '3', '4', '5'};
	int x = 0;
	int y;
	printf("Current floor: %c \n", floors[0]);
	printf("Choose your floor: \n");
	scanf("%d", &y);
	
	while (y != 999){
	while(y != 0 && y != 1 && y != 2 && y != 3 && y != 4 && y != 5){
	printf("INVALID ENTRY!!\n");
	printf("Try again\n");
	scanf("%d", &y);
	}
	if(x < y){
		movingUp(x, y);
	}
	else{
		movingDown(x, y);
	}
	x = y;
	printf("Current floor: %c \n", floors[x]);
	printf("Choose your floor: \n");
	scanf("%d", &y);
	
	}
	return 0;
}
// Andjela Stosic RIN1
