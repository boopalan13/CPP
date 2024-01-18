#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int start,int end){      //to find the main(first) pivot position
	int pivot=arr[start];
	int i=start+1;
	for(int j=start+1;j<=end;++j){
		if(pivot>arr[j]){
			swap(arr[i],arr[j]);
			i++;
		}
	}
	swap(arr[start],arr[i-1]);
	return i-1;
}

void Qs(int arr[],int start,int end){
	if(start<end){
		int pivotPosition=partition(arr,start,end);
		Qs(arr,start,pivotPosition-1);      //to sort the left side of  main pivot position using recursive
		Qs(arr,pivotPosition+1,end);       //to sort the right side of main position
	}
}


int main(){
	int arr[]={2,3,1,5,6,4,9,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	Qs(arr,0,n-1);
	
	for(int i=0;i<n;++i){
		cout<<" "<<arr[i];
	}
	//cout<<"\n"<<partition(arr,0,n-1);  ---> to know the first pivot position
}