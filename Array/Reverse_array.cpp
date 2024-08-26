#include <iostream>
using namespace std;
 
void reverse(int arr[], int size){
int start=0;
int end=size-1;
while(start<=end){
  swap(arr[start],arr[end]);
  start++;
  end--;
}
}

void PrintArray(int arr[], int size){
  for(int i=0;i<size;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {6,-4,8,3,9};
    reverse(arr,6);
    reverse(brr,5);

    PrintArray(arr,6);
    PrintArray(brr,5);

    return 0;
}