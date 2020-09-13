#include<stdio.h>
int binaryNumOfOne(unsigned int n){
	int count = 0;
	while(n){
		n = n&(n - 1);
		count++;
	}
	return count;
}
int main(){
	unsigned int x;
	scanf("%d", &x);
	printf("%d", binaryNumOfOne(x));
	return 0;
}
