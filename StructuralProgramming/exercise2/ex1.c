#include <stdio.h>


int main(){
	
	int array[9] = {1,2,3,0,4,5,7,0,8};
	
	findSum(array,9);
	
	return 1;
}




int findSum(int array[], int array_len){
	
	int i,j,counter;
	
	counter = 0;
	
	for (i = 0; i < array_len - 1; i++){
		if (array[i] == 0){
			for (j = i + 1; j < array_len - 1; j++){
				if (array[j] == 0){
					break;
				}
				counter += array[j];
			}
		}

	}
	
	printf("%d",counter);
	return counter;
}
