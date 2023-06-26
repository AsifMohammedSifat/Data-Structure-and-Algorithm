/*
||-----------------------||
||  All Praise to Allah  ||
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
*/

/*
Question: Print all possible sub-array and calculate sum

Sample Input:
5
1 2 3 4 5
3
Sample Output:
1 2 3  = 6
2 3 4  = 9
3 4 5  = 12

*/
//Time complexity : O(n*k)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }      

    int k;
    cin>>k;
    int sum = 0;
    //O(n*k)
    for(int i=0;i<=n-k;i++){ //O(n)
        sum = 0;
        for(int j=i;j<i+k;j++){ //O(k)
            cout<<arr[j]<<" ";
            sum+=arr[j];
        }
        cout<<" = "<<sum<<endl;
    }
              
    return 0;
}

