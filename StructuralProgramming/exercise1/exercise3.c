#include <stdio.h>

int toNumbers(int n);

int main(){
	
	int n;
	
	scanf("%d", &n);
	
	toNumbers(n);
	
	return 0;
	
}

int toNumbers(int n){
	
	int i, nums[32], counter,j;
	counter = 0;

	for (i = 0; n > 1; i++){
		int rem = n % 10;
		n = (n-rem)/10;
		nums[i] = rem;
		counter++;
	}
	
	
	for (j = counter - 1; j >= 0; j--){
		printf("%d ",nums[j]);
	}

	printf(" \n");
	return 0;
	
}
