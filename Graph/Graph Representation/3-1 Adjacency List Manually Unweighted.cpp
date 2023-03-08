/**
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
                        3-1 Adjacency List Manual Unweighted.cpp
Sample Input:
    Manual Input
Sample Output:
    0-->1
    1-->0 2 3
    2-->1 3
    3-->1 2


                                Graph Representation
        1)Adjacency Matrix      2)Adjacency List            3)Edge List

     UnWeighted Graph  |   Adj. Matrix       |      Adj. List       |       Edge List

                             0 1 2 3  -->column     0 -> 1
     0---1                   | | | |                1 -> 0,2,3
        / \                                         2 -> 1,3
       2---3       row-> 0-  0 1 0 0                3 -> 1,2
                         1-  1 0 1 1
                         2-  0 1 0 1
                         3-  0 1 1 0
====================================Weighted Graph -> Representation========================

    Weighted Graph        Adj. Matrix               Adj. List                Edge List

      2
   0----1                   0 1 2 3  -->column    0 -> (1,2)
     4 / \ 7                | | | |               1 -> (0,2),(2,4),(3,7)
      /   \        row-> 0- 0 2 0 0               2 -> (1,4),(3,7)
     2-----3             1- 2 0 4 7               3 -> (1,7),(2,5)
        5                2- 0 4 0 5
                         3- 0 7 5 0

                         Time Complexity : O(n^2)
                         Space Complexity : O(n^2)

*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;

int main()
{
    fast;
    int nodes = 4;

    vector<int> adj_list[nodes]; //s-> O(n)

    //t-> O(E*2) = O(E) = O(n^2); One edge use 2 times, so n*n = O(n^2)
    //s-> O(E*2) = O(E) = O(n^2); One edge use 2 times, so n*n = O(n^2)
    adj_list[0] = {1};
    adj_list[1] = {0,2,3};
    adj_list[2] = {1,3};
    adj_list[3] = {1,2};

    //t-> O(E*2) = O(E) = O(n^2); One edge use 2 times, so n*n = n^2
    //s O(1)
    for(int i=0; i<nodes; i++)
    {
        cout<<i<<"-->";
        for(int j=0; j<adj_list[i].size(); j++)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

}

















