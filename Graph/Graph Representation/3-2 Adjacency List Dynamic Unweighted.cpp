/**
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
                        3-2 Adjacency List Dynamic Unweighted.cpp
Sample Input:
4 4 //nodes edges

0 1
1 2
1 3
2 3
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
    int nodes,edges;
    cin>>nodes>>edges;

    vector<int> adj_list[nodes]; //s-> O(n)


    //connect nodes
    for(int i=0;i<edges;i++){
        int x,y;
        cin>>x>>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    for(int i=0; i<nodes; i++)
    {
        cout<<i<<"-->";
        for(int j=0; j<adj_list[i].size(); j++)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }





//    diffent way to print using for each loop
//    for(int i=0;i<nodes;i++){
//            cout<<i<<"-->";
//        for(auto j:adj_list[i]){
//            cout<<j<<" ";
//        }
//    cout<<endl;
//    }

}


















