#include <stdio.h>
#include <math.h>

int main(){
	
//	decToBinOnesComp(14);
//	printf("\n");
//	binToDecOnesComp(101);
//	printf("\n");
//	decToBinTwosComp(-8);
//	printf("\n");
//	binToDecTwosComp(1101);
//	fromSignedMagnitude(110,1);
	return 0;
}

// from signed magnitude with sign bit
int fromSignedMagnitude(int number,int sign_bit){
	
	int total,counter = 0;
	
	while(number != 0){
		int rem;
		rem = number % 10;
		if ( rem == 1){
			total = total + (int)pow(2,counter);
		}
		counter++;
		number = (number - rem)/10;
	}
	
	if (sign_bit == 0){
		printf("%d",total);
	}else {
	printf("-%d",total);
		
	}
	
	return 1;
}


// to signed magnitude from decimal
int toSignedMagnitude(int number){
	
	int array[16] = {0};
	
	if (number < 0){
		array[0] = 1;
	}
	
	int i,counter;
	
	counter = 1;
	
	while (number != 0){
		int rem;
		rem = number % 2;
		array[16 - counter] = abs(rem);
		number = (number - rem)/2;
		counter++;
		
	}
	
	
	for (i = 0; i < 16; i++){
		printf("%d",array[i]);
	}

	return 1;
}


// Twos complement binary to decimal
int binToDecTwosComp(int number){

	int total,counter = 0;
	
	
	while(number > 0){
		int rem;
		rem = number % 10;
		if (rem == 1){
			total = total + (int)pow(2,counter);		
		}
		counter++;
		number = (number - rem)/10;

	}
	
	int res;
	
	res = total - (int)pow(2,counter) + 1;
	
	printf("%d",res);

	return 1;	
	
}



// Twos complement decimal to binary
int decToBinTwosComp(int number){
	int array[16] = {0};
		
	if (number < 0){
		int twosComplement;
		
		twosComplement = ((int)pow(2,16) - 1) - abs(number);
		twosComplement++;
		int counter;
		counter = 0;
		
		while ( twosComplement > 0 ){
			
			int rem;
			rem = twosComplement % 2;
			array[15-counter] = rem;
			counter++;
			twosComplement = (twosComplement-rem) / 2;			
		}
					
	}else{

		int counter;
		counter = 0;
		
		while ( number > 0 ){
			
			int rem;
			rem = number % 2;
			array[15-counter] = rem;
			counter++;
			number = (number-rem) / 2;			
		}				
	}


	int i;
		
	for (i = 0; i < 16; i++){
		printf("%d",array[i]);
	}
	
	return 1;
	
	
}



// ones complement binary to decimal
int binToDecOnesComp(int number){

	int counter,total = 0;

	while (number > 0){
		int rem;
		rem = number % 2;
		if(rem == 1){
			total += (int)pow(2,counter);	
		}
		counter++;
		number = (number - rem) / 10;
	}
	
	int res;
	
	res = (int)pow(2,counter)- 1 - total;
	printf("%d",res);
	return 1;
}



// Ones complement decimal to binary
int decToBinOnesComp(int number){
	
	
	int array[16] = {0};

		
	if (number < 0){
		int onesComplement;
		
		onesComplement = ((int)pow(2,16) - 1) - abs(number);
		
		int counter;
		counter = 0;
		
		while ( onesComplement > 0 ){
			
			int rem;
			rem = onesComplement % 2;
			array[15-counter] = rem;
			counter++;
			onesComplement = (onesComplement-rem) / 2;
			
		}
			
		
	}else{

		int counter;
		counter = 0;
		
		while ( number > 0 ){
			
			int rem;
			rem = number % 2;
			array[15-counter] = rem;
			counter++;
			number = (number-rem) / 2;
			
		}		
		
	}


	int i;
	
	for (i = 0; i < 16; i++){
		if (array[i] == 0){
			array[i] = 1;
		}else{
			array[i] = 0;
		}
	}
	
	for (i = 0; i < 16; i++){
		printf("%d",array[i]);
	}
	
	return 1;
	
}
