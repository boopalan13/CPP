#include<bits/stdc++.h>

using namespace std;

void print(vector<int>v){
    for(auto it:v){
        cout<<it<<" ";
    }
}

int main()
/* Pair
{
    pair<pair<int,int>,int>pr{{1,2},3};
    cout<<pr.first.first;
    cout<<pr.second;
}*/

/* Vector
{
    vector<int>vec(5,2);
    vector<int>vec1{3,5,7,9,11};
    vec1.push_back(6);
    vec1.pop_back();
    vec.swap(vec1);
    vec.insert(vec.begin(),0);
    vec.insert(vec.begin()+1,3,1);
    vec.erase(vec.begin()+1,vec.begin()+4);
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    print(vec);
} */

/* list and its also similar to deque as well
{
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_front(0);
    li.pop_back();
    li.pop_front();
    for(auto it:li){
        cout<<it<<" ";
    }
    
} */

/* stack and queue almost same 
{
    stack<int>st;
    int check=st.empty();
    st.push(1);
    st.pop();
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
        }
    
} */

/*
{
    queue<int>qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    cout<<qu.front()<<endl;
    cout<<qu.back()<<endl;
    cout<<qu.size()<<endl;
    qu.emplace();
    qu.emplace();
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
} */

/* priority_queue , maximum heap
{
    priority_queue<int>pq;
    pq.push(3);
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(1);
    cout<<pq.top()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
} */

/* priority queue minimum heap
{
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(3);
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(1);
    cout<<pq.top()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

} */

/*
{
    set<int>st{1,2,3,5,4,4};
    st.insert(6);
    cout<<st.count(2)<<endl;
    //auto it:st.find(2);
    for(auto i : st){
        cout<<i<<" ";
    }
}*/