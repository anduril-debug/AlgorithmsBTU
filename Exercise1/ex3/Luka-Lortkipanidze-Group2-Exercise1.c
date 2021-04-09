#include <stdio.h>


int findMax(int arr[]);


int main(){
	
	int test[5] = {1,2,3,4,5};
	
	printf("%d ", findMax(test));
	
	
}


int findMax(int arr[]){
	
	int largest;
	largest = arr[0];
	
	if(arr[1] > largest){
		largest = arr[1];
	}
	if(arr[2] > largest){
		largest = arr[2];
	}
	if(arr[3] > largest){
		largest = arr[3];
	}
	if(arr[4] > largest){
		largest = arr[4];
	}
		
	return largest;	
	
	
}












//pseudo code

/*

largest := a

if b > largest:
	largest := b
endif

if c > largest:
	largest := c
endif

if d > largest:
	largest := d
endif 

if e > largest:
	largest := e
endif 

	
return largest



*/




