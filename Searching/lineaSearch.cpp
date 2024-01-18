#include<bits/stdc++.h>
using namespace std;


int Ls(int arr[],int start,int end,int target){
	
	for(int i=start;i<=end;++i){
		if(arr[i]==target)
			return i;
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=Ls(arr,0,n-1,3);
	if(result!=-1)
		cout<<"Element found"<<endl;
	else
		cout<<"\nElement not found";
}
	