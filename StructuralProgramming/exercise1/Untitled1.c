#include <stdio.h>



int main(){
	
	int x_array[6] = {-2, 13, -14,27, 29,-1};
	
	
	int largest,i;
	
	largest = 0;
	
	
	for (i = 0; i < 6; i++){
		if(x_array[i] < 0){
			if (x_array[i] > largest){
				largest = x_array[i];
			}

		}
	}
	
	printf("%d \n", largest);
	
	return 0;
}
