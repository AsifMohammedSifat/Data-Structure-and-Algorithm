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
//====================================|Type - 1|=============================================
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;

    int i = 0, j = 0, s = 0;
    int mx = INT_MIN;
    while (j < n)
    {
        s += a[j];
        if (j >= k - 1)
        {
            mx = max(mx, s);
            s -= a[i];
            i++;
        }
        j++;
    }
    cout << mx << endl;
    return 0;
}
//====================================|Type - 2|=============================================
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
