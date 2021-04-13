#include <stdio.h>


int main(){
	
	int testArray[4][4] = {
		{1,2,3,4},
		{0,2,4,2},
		{9,2,1,1},
		{0,9,8,3}
	};
	
	columnSum(testArray);
	
	return 0;
}



int findNegative(int array[4][4]){
	
	int counter,i,j;
	
	counter = 0;
	
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			if (array[i][j] < 0){
				counter++;
			}
		}
	}	
	
	int newArray[counter],k;	
	k = 0;
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			if (array[i][j] < 0){
				newArray[k] = array[i][j];
				k++;
			}
		}
	}	
		


	
}
