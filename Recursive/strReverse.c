#include<stdio.h>
void strReverse(){
	char ch;
	if((ch = getchar()) != '\n'){
		strReverse();
        putchar(ch);
	}
}
int main(){
	strReverse();
	return 0;
}
