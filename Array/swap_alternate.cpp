#include <iostream>
using namespace std;

void swap_alternate(int arr[], int size){
int first=0;
int secound=1;
while(first<size){
    swap(arr[first],arr[secound]);
    first=first+2;
    secound=secound+2;
}
}

void PrintArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
int arr[10] = {1,5,6,8,4,3,9,0,2,7};

swap_alternate(arr,10);
PrintArray(arr,10);
return 0;
}