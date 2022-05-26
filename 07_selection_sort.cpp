#include <bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n){
	for(int i=0;i<n;i++){
		int min = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				min  = j;
			}
		}
		if(min!=i){
			swap(arr[i], arr[min]);
		}
	}
}

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	printArray(arr, n);
	selectionSort(arr,n);
	printArray(arr, n);


}