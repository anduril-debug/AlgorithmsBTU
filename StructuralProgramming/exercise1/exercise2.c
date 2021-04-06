#include <stdio.h>


int moreThanTwenty();
int moreThanHundred();

int main(){
	
	
	printf("20kms gaivlis me-%d-e dges\n", moreThanTwenty());
	printf("100kms gaivlis %d dgeshi\n", moreThanHundred());
	return 0;
}


int moreThanTwenty(){
	int counter = 1;
	float daily_mileage = 10.0;
	
	while (daily_mileage < 20.0){
		daily_mileage += daily_mileage/10;
		counter++;
	}
		
	return counter;
}


int moreThanHundred(){
	int counter = 1;
	float mileage = 10.0;
	
	while (mileage < 100){
		
		mileage += 10 + mileage/10;
		counter++;
	}
	
	
	return counter;
}


