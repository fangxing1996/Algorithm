#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int count = 0;
int outOfStack(int cur, int curIn, int curOut, int len, int outStack_[], int inStack_[], int array_[]);

int outOfStack(int cur, int curIn, int curOut, int len, int outStack_[], int inStack_[], int array_[]){

    int outStack[len], inStack[len], array[len];
    memcpy((int*)outStack, (int*)outStack_, len*sizeof(int));
    memcpy((int*)inStack, (int*)inStack_, len*sizeof(int));
    memcpy((int*)array, (int*)array_, len*sizeof(int));
    if(curOut == len){
        for(int i = 0; i < len; i++){
            cout << outStack_[i] << ' ';
        }
        cout << endl;
        count++;
        return 0;
    }

    if(curIn > 0){
        outStack[curOut] = inStack[curIn - 1];
        outOfStack(cur, curIn - 1, curOut + 1, len, outStack, inStack, array);
    }
    if(cur < len){
        inStack[curIn] = array[cur];
        outOfStack(cur + 1, curIn + 1, curOut, len, outStack, inStack, array);
    }
    return 0;
}


int main(){
    int num;
    cin >> num;
    int array[num], outStack[num], inStack[num];
    for(int i = 0; i < num; i++){
        array[i] = i + 1;
    }
    outOfStack(0, 0, 0, num, outStack, inStack, array);
    cout << "sum: " << count;
    return 0;
}
