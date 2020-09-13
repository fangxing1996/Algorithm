#include<stdio.h>
unsigned int maxCommonDivisor(unsigned int a, unsigned int b){
	return b == 0 ? a : maxCommonDivisor(b, a%b);
}
int main(){
    printf("%u", maxCommonDivisor(32, 96));
    return 0;
}
