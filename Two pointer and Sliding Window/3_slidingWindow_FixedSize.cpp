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
Sample Input:
5
1 2 3 4 5
3
Sample Output:
1 2 3  = 6
2 3 4  = 9
3 4 5  = 12
Maximum subarray summation is:12
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    int i = 0, j = 0,mx = INT_MIN,sum = 0;

    while(j<n){
        sum+=arr[j];
        if(j<k-1){
            j++;
        }else{
            mx = max(sum,mx);
            sum-=arr[i];
            i++;
            j++;
        }
    }
    cout<<mx<<endl;
    return 0;
}
