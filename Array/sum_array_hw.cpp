#include <iostream>
using namespace std;

int sum_array(int arr[], int size){
int sum=0;
for (int i=0; i<size; i++){
    sum=sum+arr[i];
}
return sum;
}

int main(){
    int arr[5] = {6,7,8,9,4};
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
     cout << " ";
    int result = sum_array(arr, 5);
    cout << "the sum of array is: " << result << endl;

    return 0;
}