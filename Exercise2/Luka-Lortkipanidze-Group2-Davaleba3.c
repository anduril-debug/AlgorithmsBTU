#include <stdio.h>
#include <math.h>



int main(){
	
	int n;

//	BinToDecOC(10100111);
	printf("\n");
	DecToBinTC(12);
	
	return 0;
}



// TC - Two's complement  - decimal to binary
int DecToBinTC(int number){
	
	printf("number is %d\n",number);
	
	int array[16] = {0};
	int counter;
	counter = 0;
	int tmpNum;
	tmpNum = number;

	//to binary
	while (tmpNum != 0){
		array[15-counter] = abs(tmpNum) % 2;
		tmpNum = tmpNum / 2;
		counter++;
	}
	
	
	
	int i,j,k;
	if (number < 0){
		// to one's complement
		for (j = 15; j >= 0; j--){
			if (array[j] == 1){
				array[j] = 0;
			}else {
				array[j] = 1;
			}
		}
		
		
		
		//to decimal for add 1
		long decimal_total;
		decimal_total = 0;
		
		
		for (k = 0; k < 16; k++){
			if (array[k] == 1){
				decimal_total += (int)pow(2,15-k);
			}
		}
		
		printf("\ndec is %d\n",decimal_total);
		
		decimal_total += 1;
		
		int final_array[16] = {0};
	
	
		int c;
		c = 0;
		
		while (decimal_total > 0){
			int rem;
			rem = decimal_total % 2;
			
			final_array[15-c] = rem;
			
			decimal_total = (decimal_total-rem) / 2;
			
			c++;
		}
	
		for (i = 0; i < 16; i++){
			printf("%d", final_array[i]);
		}
	}else{
		
		for (i = 0; i < 16; i++){
			printf("%d", array[i]);
		}		
		
	}
	

	
	return 1;
}

// OC - One's complement  - decimal to binary
int BinToDecOC(int number){

	int array[10] = {0};
	int counter;
	counter = 0;
	
	while (number > 0){
		int rem;
		rem = number % 10;
		array[counter] = rem;
		number = (number - rem) / 10;
		counter++;
	}
	
	int i,j;
	
	for (j = 9; j >= 0; j--){
		if (array[j] == 1){
			array[j] = 0;
		}else {
			array[j] = 1;
		}
	}
	
	for (i = 9; i >= 0; i--){
		printf("%d",array[i]);
	}

	return 1;	
}


// OC - One's complement  - decimal to binary
int DecToBinOC(int number){
	
	
	int array[16] = {0};
	int counter;
	counter = 0;
	int tmpNum;
	tmpNum = number;

	while (tmpNum != 0){
		array[15-counter] = abs(tmpNum) % 2;
		tmpNum = tmpNum / 2;
		counter++;
	}
	
	int i,j;
	
	if (number < 0){	
		for (i = 0; i < 16; i++){
			if (array[i] == 0){
				array[i] = 1;
			}else {
				array[i] = 0;
			}
		}		
	}

	
	for (j = 0; j < 16; j++){
		printf("%d",array[j]);
	}
	
	return 1;
	
}


// SM - signed magnitude - binary to decimal
int BinToDecSM(int number,int sign_bit){
	
	int total,counter;
	
	total = 0;
	counter = 0;
	
	while (number != 0){
		int rem;
		rem = number % 10;
		
		if (rem == 1){

			total += (int)pow(2,counter);
		}
		number = (number-rem) / 10;
		counter++;
	}
	
	if (sign_bit == 1){
		printf("-%d ",total);
	}
	else {
		printf(" +%d",total);
	}
	
	
	return 1;
}



// SM - signed magnitude - decimal to binary
int DecToBinSM(int number){
	
	int array[16] = {0};
	int counter;
	counter = 0;
	
	if (number < 0){
		array[0] = 1;
	}
	
	while (number != 0){
		array[15-counter] = abs(number) % 2;
		number = number / 2;
		counter++;

	}

	printf("\n");
	int i;
	
	for (i = 0; i < 16; i++){
		printf("%d",array[i]);
	}
	
	return 1;
}
