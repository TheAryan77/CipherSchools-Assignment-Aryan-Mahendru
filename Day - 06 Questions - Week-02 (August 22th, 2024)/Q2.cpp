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
    int os = 0;
    int es = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]%2==0){
            es+=arr[i];
        }
        else{
            os+= arr[i];
        }
    }
    cout<<"Sum of the even elements: "<<es<<endl;
    cout<<"Sum of the odd elements: "<<os;

}