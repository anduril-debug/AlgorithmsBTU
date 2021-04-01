#include <stdio.h>


int dec_to_bin(int x);



int main(){


    dec_to_bin(25);
	return 0;
}


int dec_to_bin(int x){

    int arr[32];
    int counter;
    counter = 0;
    
    while(x >= 1){
        arr[counter] = x % 2;
        
        x = x / 2;
        ++counter;
       }
    
    
    for (int i = counter - 1; i >= 0; --i){
        printf("%d", arr[i]);
    }
    
    return 0;

}




