#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace std;
int selectSort(int input[], int n);
int main(){
	int x;
	cin >> x;
	if(x < 1)
		return 0;
	int in[x];
	int i;
	srand((unsigned int)time(NULL));
	for(i = 0; i < x; i++){
		in[i] = rand()%100;
		cout << in[i] << ' ';
	}
	cout << endl;
	selectSort(in, x);
	for(i = 0; i < x; i++){
		cout << in[i] << ' ';
	}
	cout << endl;
	
	return 0;
}

int selectSort(int input[], int n){
	int i, j;
	int min, pos;
	for(i = 0; i < n - 1; i++){

		min = input[i];
		pos = i;
		for(j = i + 1; j < n; j++){

			if(input[j] < min){
				min = input[j];
				pos = j;
			}
		}	
		input[pos] = input[i];
		input[i] = min;
	}
	return 0;
}
