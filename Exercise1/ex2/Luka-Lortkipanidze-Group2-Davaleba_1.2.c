#include <stdio.h>


int find_multipliers(int a,int b,int c);

int main(){

	
    find_multipliers(25,11,4);
	return 0;

}




int find_multipliers(int a,int b,int c){

	if (a > b){
	    printf("%d",a/c - b/c);
		return a/c - b/c;
	}
	else{
	    printf("%d",b/c - a/c);
		return b/c - a/c;	
	}
	

}
