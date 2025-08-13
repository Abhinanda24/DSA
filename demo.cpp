#include<bits/stdc++.h>
using namespace std;
void exp_pair(){
    pair<int,int>p1={1,2};
    pair<int,int>p2={3,4};
    pair<int,char>p3={3,'A'};
    cout<<"{"<<p1.first<<",";
    cout<<p1.second<<"}";
    cout<<endl;
    cout<<p2.first;
    cout<<p2.second;
    cout<<endl;

    cout<<p3.first;
    cout<<p3.second;

    
        
    }
void exp_nestedpair(){
    pair<int,pair<string,double>>p1={1,{"Abhinanda",22.5}};
    pair<int,pair<string,double>>p2={2,{"Virat Kholi",50}};
    pair<int,pair<string,double>>p3={3,{"Rohit sharma ",50.8}};
    cout<<"{"<<p1.first<<","<<p1.second.first<<","<<p1.second.second<<"}"<<endl;
    cout<<"{"<<p2.first<<","<<p2.second.first<<","<<p2.second.second<<"}"<<endl;
    cout<<"{"<<p3.first<<","<<p3.second.first<<","<<p3.second.second<<"}"<<endl;
 

}




int main(){
 
    // exp_pair();
    exp_nestedpair();

    return 0;

}