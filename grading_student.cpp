#include <iostream>

using namespace std;

int multOfFive(int n){
    int arr[13] = {40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};
    for(int i=0; i<13; i++){
        if(arr[i]>=n){
            return arr[i];
            break;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n; i++){
        if(arr[i]<38){
            cout<<arr[i]<<endl;
        }
        else{
            if((multOfFive(arr[i])-arr[i])>=3){
                cout<<arr[i]<<endl;
            }else{
                cout<<multOfFive(arr[i])<<endl;
            }
        }
    }
}
