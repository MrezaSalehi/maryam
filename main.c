#include<stdio.h>

int isPrime(int num) {
	if(num == 1)
		return 0;
	int i = 0;
	for(i = 2; i * i < num; i++){
		if(num % i == 0)
			return 0;
		return 1;	
	}



}

int absVal(int num) {

if (num>0)
    return num;
else
    return -num;


}

int main() 	
{

	printf("Hello world!");
	return 0;
}
