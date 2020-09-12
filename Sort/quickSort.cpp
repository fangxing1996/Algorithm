#include<bits/stdc++.h>
using namespace std;
int quickSort(int input[], int low, int high);
int quickSort(int input[], int low, int high){
    int i = low, j = high;
    if(i < j){
        int temp = input[i];
        while(i < j){ 
            while(i < j && input[j] >= temp)
                j--;
            input[i] = input[j];
            while(i < j && input[i] <= temp)
                i++;
            input[j] = input[i];     
        }
        input[i] = temp; 
        quickSort(input, low, i - 1);
        quickSort(input, i + 1, high); 
    }
    return 0;
}
int main(){
    int num[10] = {0};
    srand((unsigned int)time(NULL));
    for(int i = 0; i < 10; i++){
        num[i] = rand()%100;
        cout << num[i] << ' ';
    }
    cout << endl;
    quickSort(num, 0, 9);
    for(int i = 0; i < 10; i++){
        cout << num[i] << ' ';
    }
    cout << endl;
    return 0;
}
