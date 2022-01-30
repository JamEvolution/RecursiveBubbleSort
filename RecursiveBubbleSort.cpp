#include <iostream>

using namespace std;

void recursiveBubbleSort(int arr[], int arraySize){
	for(int i=0; i<arraySize-1; i++){
		if(arr[i] > arr[i+1]){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	
	}
	if(arraySize - 1 > 1){
			recursiveBubbleSort(arr, arraySize-1);
		}
}

int main (){
	int arr[] = {8,63,12,62,7,65};
	int arraySize = 6;
	
	recursiveBubbleSort(arr, arraySize);
	
	for(int i=0; i<arraySize; i++){
		cout<<arr[i]<<"\t";
	}
	
	
}
