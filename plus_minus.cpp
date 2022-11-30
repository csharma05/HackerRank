#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    double count_pos = 0.000000, count_neg =0.000000, count_zero = 0.000000;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            count_pos++;
        }else if(arr[i]==0){
            count_zero++;
        }else{
            count_neg++;
        }
    }
    
    double frac_pos = (double)(count_pos/n);
    double frac_neg = (double)(count_neg/n);
    double frac_zero = (double)(count_zero/n);
    cout<<setprecision(7)<<frac_pos<<endl;
    cout<<setprecision(7)<<frac_neg<<endl;
    cout<<setprecision(7)<<frac_zero<<endl;
}
