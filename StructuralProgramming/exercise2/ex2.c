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


int columnSum(int array[4][4]){
	
	int firstAvarage,secondAvarage;
	int fistCol[4],secCol[4];
	
	firstCol = {array[0][0] + array[1][0] + array[2][0] + array[3][0]};
	secCol = {array[0][1] + array[1][1] + array[2][1] + array[3][1]};
	
	
	
	firstAvarage = (firstCol[0] + firstCol[1] + firstCol[2] + firstCol[3]) / 4;   
	secondAvarage =  = (secCol[0] + secCol[1] + secCol[2] + secCol[3]) / 4;
	
	if (firstAvarage > secondAvarage){
		
		int i;
		
		for (i = 0; i < 4; i++){
			array[i][0] = firstCol[i];
			array[i][1] = secCol[i]
		}

	}

	
	
	return 1;	
	
}
