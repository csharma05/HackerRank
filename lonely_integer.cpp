#include <iostream>
using namespace std;
int non_repeating_elements(int arr[], int n)
{
int i,j;

for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
if(arr[i] == arr[j] && i != j)
break;
}
if(j == n )
{
cout << arr[i] << endl;

}
}
return -1;
}
int main()
{
int n,i;

cin >> n;
int arr[n];

for(i = 0; i < n; i++)
{
cin >> arr[i];
}
non_repeating_elements(arr, n);
return 0;
}
