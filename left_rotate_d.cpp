#include<bits/stdc++.h>
using namespace std;
int left_rotate_d(int arr[],int n,int d){
    vector<int>temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
}
int main(){
    int n;
    cin>>n;
    int d;
    cout<<"Enter the value for d"<<endl;
    cin>>d;

    int arr[n];
    cout<<"Enter the elemnts for array"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    left_rotate_d(arr,n,d);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
