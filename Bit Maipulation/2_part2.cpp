                            Part - 2: Tricks

Trick 1:   
============= 
x^x = 0
5^5 = 0

5 = 1 0 0 1
5 = 1 0 0 1
--------------
  = 0 0 0 0

// x^x = 0
Sample Input:
1 2 3 2 1

Sample Output:
2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ans = ans ^ a;
    }
    cout << ans << endl;
    return 0;
}


Trick:2-
=============
i) Even Number & 1 = 0
ii) Odd Number & 1 = 1

Example:
i) 4 & 1
4 = 1 0 0
1 = 0 0 1
-----------
    0 0 0

ii)5 & 1 = 1
5 = 1 1 1
1 = 0 0 1
-----------
    0 0 1

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 10;

    if((n & 1)) cout << "ODD" << nl;
    else cout << "EVEN" << nl;
    
    return 0;
}



Trick -3(Convert A to B)
===========
A = 10 B=15+
To convert the number A->B how many Bit should be change?
10  = 1 0 1 0
^15 = 1 1 1 1
--------------
5 =  0 1 0 1


Trick-4:(Count Set Bit)
=======================
5 = 1 0 1 
    &   1
----------
        1
5>>1 = 0 1 0 & 1 = 0
5>>1 = 0 0 1 & 1 = 0
5>>1 = 0 0 0 & 1 = 0


// count set bit

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        ans += n & 1; // ans+=n%2
        n = n >> 1;   // n/=2
    }
    cout << ans << endl;
    return 0;
}


Trick-5:(Remove last Set Bit)
==============================

Note: কোন একটি সংখ্যাকে তার আগের সংখ্যা দ্বারা AND অপারেশন করলে| লাস্ট set bit 0 হয়ে যায় |
Logic: n & (n-1)

13 = 1 1 0 1
12 = 1 1 0 0
-------------
     1 1 0 0

12 = 1 1 0 0
11 = 1 0 1 1
--------------
     1 0 0 0

Trick - 5(Check is a number is Power of 2)
===========================================

If a number n is power of 2.Then n & (n-1) = 0

4 is power of 2-> 2^2
4 = 1 0 0
3 = 0 1 1
----------
    0 0 0

8 is power of 2->2^3
8 = 1 0 0 0
7 = 0 1 1 1
-------------
    0 0 0 0

Example: https://codeforces.com/problemset/problem/1475/A 


Trick-6:

A XOR B = C
A XOR C = B
B XOR C = A

Example: https://atcoder.jp/contests/abc213/tasks/abc213_a
Example: https://codeforces.com/problemset/problem/1421/A


