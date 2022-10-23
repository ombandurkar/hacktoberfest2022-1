#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void bubbleSort(int arr[], int size){
    bool isSwap = false;

    for(int i = 1; i < size; i++){
        for(int  j = 0; j < size - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                isSwap = true;
            }
        }
        if(isSwap = false){
            break;
        }
    }
}

int main(){
    int arr[8] ={64,25,10,15,89,90,42,37};
    int size = 8;

    cout<<"Unsorted array is: ";
    printArray(arr,size);

    //sorting
    bubbleSort(arr,size);

    cout<<"Sorterd array is: ";
    printArray(arr,size);

    return 0;
}
