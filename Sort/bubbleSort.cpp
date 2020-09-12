#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int bubbleSort(int in[], int n);
int bubbleSort(int in[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i -1; j++){
            if(in[j] < in[j + 1]){
                int temp = in[j];
                in[j] = in[j + 1];
                in[j + 1] = temp;
            }    
        }
    }
    return 0;
}

int main(){
    int num[15];
    srand((unsigned int)(time(NULL)));
    for(int i = 0; i < 30; i++){
        num[i] = rand()%100;
        cout << num[i] << ' ';
    }
    cout << endl;
    bubbleSort(num, 30);
    for(int i = 0; i < 30; i++){
        cout << num[i] << ' ';
    }
    return 0;
}
