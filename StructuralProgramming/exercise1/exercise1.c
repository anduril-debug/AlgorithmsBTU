#include <stdio.h>



int findNumberCount(int number);

int main(){
	
	
	int number;
	
	printf("Sheikvanet ricxvi: ");
	scanf("%d", &number);
	
	printf("%d",findNumberCount(number));
	
	return 0;
}

int findNumberCount(int number){
	
	int counter = 1;
	
	if (number > 0){
		while (number > 1){
			number = number / 10;
			counter++;
		}		
	}
	else {
		while (number < -1){
			number = number / 10;
			counter++;
		}			
	}

	
	return counter;
}
