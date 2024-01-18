#include<bits/stdc++.h>
using namespace std;


int Bs(int arr[],int start,int end,int target){  //binary working on sorted array only but better than linear search
	
	if(start<=end){         // this the condition start should not cross the end 
		int mid=(start+end)/2;
		
		if(arr[mid]==target)
			return mid;
		if(arr[mid]>target)
			return Bs(arr,start,mid-1,target); 
		return Bs(arr,mid+1,end,target);
	}
	return -1;
	
}

int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<Bs(arr,0,n-1,7);
}
	