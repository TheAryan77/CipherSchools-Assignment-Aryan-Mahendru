#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    int arr[n]; 
    int s = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        s += arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}