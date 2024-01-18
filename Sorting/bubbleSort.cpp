#include<bits/stdc++.h>
using namespace std;


void bs(int arr[],int n){
	for(int i=0;i<n;++i){      //loop runs for n times(9)
		for(int j=0;j<n-i-1;++j){   //this loop run into array element like 0 to condition
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main(){
	int arr[]={1,3,4,2,6,7,5,9,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	bs(arr,n);
	
for(int i=0;i<n;++i){
	cout<<" "<<arr[i];
}
}
