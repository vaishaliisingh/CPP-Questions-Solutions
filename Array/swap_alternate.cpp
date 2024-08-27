#include <iostream>
using namespace std;

void swap_alternate(int arr[], int size){
for(int i=0;i<size;i+=2){
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
}
}

void PrintArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
int odd[9] = {1,5,6,8,4,3,9,0,2};
int even[10]= {1,7,4,33,66,7,33,2,0,7};

swap_alternate(odd,9);
PrintArray(odd,9);

swap_alternate(even,10);
PrintArray(even,10);
return 0;
}