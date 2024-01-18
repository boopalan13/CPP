#include<bits/stdc++.h>

using namespace std;

/*int main(){
   int a;
   cout<<"What's your age.? :";
   cin>>a;
   cout<<"Your age is : "<<a<<endl;
    if (a<18){
        cout<<"You can't vote.. Because your age is : "<<a;
    }
    else{
        cout<<"You can vote.. Because Your age is :"<<a;
    }
    string name="Boopalan";
    int LengthofName= name.length();
    cout<<"\nLength of the name :"<<LengthofName<<endl;

    for(int i=-1;i<LengthofName;i++){
        cout<<name[i]<<"\nName : ";
    }
return 0; */


/*int main(){
int i =0;
while(i<10){
    cout<<"Hello Boopalan"<<endl;
    i++;
}

}*/


/*int main(){
    string Name="Boopalan";
    int sizeOfName= Name.size();
    for(int i=0;i<sizeOfName;i++){
        cout<<Name[i]<<"\n";
    }
}

*/


/*
int main(){
    int arr[5]={2,1,6,7,3};
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        if(arr[i]==6){
            cout<<" 6 is there "<<endl;
        }
        else{
        cout<<"There is no number as specified "<<endl;
        }
        //break;
    }
}
*/

/*
void Avg(float total ,float subjects){
    float Avg=total/subjects;
    cout<<"Your percentage is : "<<Avg;
}
int main(){
    int tot,subs;
    cout<<"Giv your total marks : ";
    cin>>tot;
    cout<<"Giv your total subjects : ";
    cin>>subs;
    Avg(tot,subs);
}

*/

/*void LenghtOfNumber(int Number){
    int count=0;
    while(Number>0){
        Number /=10;
        count++;
    }
    cout<<count;
}
int main(){
    int num;
    cout<< "Giv Number for finding length : ";
    cin>>num;
    LenghtOfNumber(num);
}
*/

/*
int main(){
    int num=123;

    int sum=0;

    while(num>0){

        int rem=num%10;
        sum =sum+rem;
        num /=10;

    }
    cout<<sum;
}
*/

/*
void SumOfNumber(int n){
    int sum=0;
    while(n>0){
        int rem = n % 10;
        sum+=rem;
        n /=10;

    }
    cout<<sum;
}

int main(){
    int num;
    cout<<"Giv number to find length : ";
    cin>>num;
    SumOfNumber(num);
}
*/


/*
void reverseOfNumber(int n){
    int reversed=0;
    while(n>0){

        int rem= n%10;
        reversed=rem;
        n /=10;

        cout<<reversed<<" ";
    }

}
int main(){
    int num;
    cout<<"Giv number to reverse : ";
    cin>>num;
    reverseOfNumber(num);
}

*/

/*
int main(){
    int n;
    cout<<"Giv Number to : ";
    cin>>n;
    int count=0;
    while(n>0){

        count++;
        n/=10;


}cout<<count;
}

*/

/*
int main(){
    int n;
    cout<<"Giv Number  : ";
    cin>>n;
    for (int i=1;i<=10;i++){

        cout<<i<<" and "<<n<<" is : "<<i*n<<"\n";

    }
}
*/

/*
void swapping(int a, int b){
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<"\n"<<b;
}
int main(){
    int a=5;
    int b=10;
    swapping(a,b);
}
*/

/*
void swapping(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<"\n"<<b;

}

int main(){
    int c=5,d=10;
    swapping(c,d);
}
*/


/*
int main(){
    int a;
    cout<<"Giv number to... : ";
    cin>>a;
    int star;
    for(int i=0;i<a;i++){
        star=;
        cout<<"\n*";
    }
}
*/


/*
int main(){
    int n=1234;
    int rev=0;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    n=rev;
    cout<<n;
}
*/
/*
void revNum(int n){

    int rev=0;
    while(n!=0){
        int rem =n%10;
        rev=rev*10+rem;
        n/=10;
    }
    n=rev;
    cout<<n;
}

int main(){
    int a;
    cout<<"Giv Number to .. : ";
    cin>>a;
    revNum(a);
}
*/
/*
int main(){
    int n=123;
    int sum=0;
    while(n!=0){
        int rem=n%10;
        sum +=rem;
        n/=10;
    }
    cout<<sum;
}
*/

/*
void Summing(int a){
    int sum=0;
    while(a!=0){
        int rem=a%10;
        sum +=rem;
        a/=10;
    }cout<<sum;
}

int main(){
    int n;
    cout<<"Giv number to s.. : ";
    cin>>n;
    Summing(n);
}
*/

/*
int main(){

    int start,end;+++++
    cin>>start>>end;
    int sum=0;
    for(int i=start;i<=end;i++){ //if asking for natural number it means starting always 1 we ask end only from user
        sum=sum+i;
    }cout<<sum;
}
*/

/*
int main(){
    int n;
    cout<<"Giv the number to chech whether it is prime or not : ";
    cin>>n;
    int div=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
        div++;
        }

    }
    if(div==2){
        cout<<"it's Prime number..";
    }
    else{
        cout<<"Not a prime number..";
    }
}
*/

/*
void primeNum(int a){
    int count=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            count++;
        }
    }if(count==2){
        cout<<a<<" is prime number..";
    }
    else{
        cout<<a<<" is not a prime number.. ";
    }
}

int main(){
    int n;
    cout<<"Giv number to check prime or not : ";
    cin>>n;
    primeNum(n);
}*/

/*
int main(){
    int n=1634;
    int len=int(log10(n))+1;    
    int sum=0;
    int dubNum=n;
    while(n!=0){
        int rem= n%10;
        sum=sum+pow(rem,len);
        n/=10;
    }cout<<"sum is : "<<sum<<endl;

    if(dubNum == sum)
        cout<<dubNum<<" is armstrong n..";
    else
        cout<<dubNum<<" is not an armstrong n..";

}
*/
/*
int main(){
    int n=14;
    long long int sum=1;
    //int sumOfFactorial=0;
    for(int i=1;i<=n;i++){
        sum=sum*i;
    }cout<<sum;
}*/

/*
int main(){
    int n= 40585;
    int OrginalNum=n;
    int sum=0;
    while(n!=0){
        int rem = n%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;

        }sum=sum+fact;
        n/=10;
    }//cout<<sum;
    if(OrginalNum==sum)
        cout<<"Given number is strong...";
    else
        cout<<"Given number is not str..";

}*/

/*
void strongNum(int n){
    int sum=0;
    while(n!=0){
        int rem=n%10;
        int fact=1;
        for(int i=1;i<=rem;i++)
            fact *=i;
        sum +=fact;
        n/=10;
    }cout<<sum;
}

int main(){
    int a;
    cout<<"Giv number to check strong or not.. : ";
    cin>>a;
    strongNum(a);

}*/

/*
int main(){
    string name="bOopAlAn";
    for(int i=0;i<name.size();i++){
        if(isupper(name[i]))
            name[i]=tolower(name[i]);
        else
            name[i]=toupper(name[i]);
    }cout<<name;
}*/

/*
int main(){
    string name="Boopalan";
    for(int i=name.length();i>=0;i--)
        cout<<name[i];
}*/  
/*
int main(){
    string name="boopalan";
    reverse(name.begin(),name.end());
    cout<<name;
}*/

/*
int main(){
    string name="Boopalan";
    int ptr1=0;
    int ptr2=name.size()-1;
    while(ptr1<=ptr2){
        name[ptr1]=name[ptr1]^name[ptr2];
        name[ptr2]=name[ptr1]^name[ptr2];
        name[ptr1]=name[ptr1]^name[ptr2];
        ptr1++;
        ptr2--;
     }cout<<name;
}
*/

/*
void revString(string n){

    int p1=0;
    int p2=n.size()-1;
    string OrigiNum=n;
    while(p1<p2){
        n[p1]=n[p1]+n[p2];
        n[p2]=n[p1]-n[p2];
        n[p1]=n[p1]-n[p2];
        p1++;
        p2--;
    }
    cout<<n<<endl;
    if(OrigiNum==n)
        cout<<"Yes";
    else
        cout<<"No";

}

int main(){
    string a;
    cout<<"Giv name to check palindrom or not : ";
    cin>>a;
    revString(a);
}
*/

/*new 16/oct*/
/*
int main(){
    string name="boop55alan951";
    int sum=0; 
    int len=name.size();
    for(int i=0;i<len;i++){
        if(name[i]>='0' && name[i]<='9'){
            sum+=name[i]-'0';

        }
    }cout<<sum;
}
*/

/*
void sumFromString(string name){
    int len=name.size();
    int sum=0;
    for(int i=0;i<len;i++){
        if(name[i]>='0' && name[i]<='9'){
            sum+=name[i]-'0';
        }
    }cout<<sum;
}

int main(){
    string n;
    cout<<"Giv string number : ";
    cin>>n;
    sumFromString(n);
}
*/

/*
int main(){
    int n=1221;
    int origiNum=n;
    int rev=0;
    while(n!=0){
        int rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }cout<<rev<<endl;
    if(origiNum==rev)
        cout<<"Given number is palindrome of interger";
    else
        cout<<"Given number is not palindrome of integer";
}
*/

/*
int main(){
    string name="BOoPalAN";
    int len=name.size();
    int count=0;
    for(int i=0;i<len;i++){
        if(isupper(name[i])){
            count++;
        }
    }cout<<count;
}*/
/* reversing an array
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=len-1;i>=0;i--){
        cout<<arr[i];
    }
}*/

/*
int main(){
    int arr[11]={1,2,3,7,8,9,0,5,86,5,4};
    int target=86;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        if(arr[i]==target){
            cout<<"Target found at "<<i;
            break;
        }
    }

}*/

/*
void targetElement(int arr[],int target,int size){

        for(int i=0;i<size;i++){
        cin>>arr[i];
        //cout<<arr[i];
        }
        for(int i=0;i<size;i++){
            if(arr[i]==target){
                cout<<target<<" Target found at "<<i;
                break;
            }
        }
}

int main(){
    int size,target;
    cout<<"Giv size and target of an array : ";
    cin>>size>>target;
    int arr[size];
    cout<<"Giv an "<<size<<" sized array : ";
    targetElement(arr,target,size);

}*/
/*
int main(){
    int arr[3]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }cout<<sum;
}*/
/*
int main(){
    int arr[16]={3,1,2,5,3,3,56,76,3,3,2,1,74,2,47,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}*/
/*new 17/06*/
/*
void Sorting(int n[],int size){

    for(int i=0;i<size;i++){
        cin>>n[i];
    }


    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(n[i]>n[j]){
                swap(n[i],n[j]);
            }
        }
    }
    cout<<"Sorted array : ";
    for(int i=0;i<size;i++)
        cout<<n[i]<<" ";
}

int main(){
    int size;
    cout<<"Size of an array : ";
    cin>>size;
    int arr[size];
    cout<<"Give "<<size<<" arra : ";
    Sorting(arr,size);
}*/

/*
int main(){
pair <int,char> pr;
pr=make_pair(1,'p');
cout<<pr.second;
}*/

/*
int main(){
    pair<pair<int,int>,int>pr;
    pr=make_pair(make_pair(4,5),6);
    cout<<pr.first.first;

}*/
/*
int main(){
    vector<int>v{3,2,2,5,7,5,7,8};
    v.push_back(9);
    v.pop_back();
    cout<<v[4];
} */

/*
int main(){
    string name;
    cout<<"Giv name : ";
    getline(cin,name);
    cout<<"name is "<<name;

}
*/

/*  full box pattern
int main(){
	
	int n;
	cout<<"Number kudappa.!  : ";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<"* ";
		cout<<"\n";
	}
*/	

/* left pyramid, orederd

	int n;
	cout<<"Number kudappa.!  : ";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i+1;j++)
			cout<<"* ";
		cout<<"\n";
	}
	
	
}*/

/*  left pyramid, dicending

	int n;
	cout<<"Number kudappa.!  : ";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++)
			cout<<"* ";
		cout<<"\n";
	}*/

    /* perfect pyramid
    	int n;
	cout<<"Number kudappa.!  : ";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		for(int s=0;s<n-i-1;s++)
			cout<<"  ";
		for(int j=0;j<i*2+1;j++)
			cout<<"* ";
		cout<<"\n";
	}*/

    /* brief form of perfect pyramid
    	int n;
	cout<<"Number kudappa.!  : ";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n+i;j++){
			if(j<n-i-1)
				cout<<"  ";
			else
				cout<<"* ";
		}
			
		cout<<"\n";
	}*/
	
    /* outer outline box
    	int n;
	cout<<"Number kudappa.!  : ";
	cin>>n;
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0||j==0||i==n-1||j==n-1)
				cout<<"* ";
			else
				cout<<"  ";
		}
			
		cout<<"\n";
	}*/
	
	



