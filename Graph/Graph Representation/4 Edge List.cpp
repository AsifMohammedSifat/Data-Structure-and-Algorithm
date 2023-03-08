/**
                                Edge List.cpp

Sample Input:
    Manual Input
Sample Output:
    0 1 2
    1 2 4
    1 3 9
    2 3 1

                                    Graph Representation
        1)Adjacency Matrix      2)Adjacency List            3)Edge List

     UnWeighted Graph  |   Adj. Matrix       |      Adj. List       |       Edge List

                             0 1 2 3  -->column     0 -> 1                 [
     0---1                   | | | |                1 -> 0,2,3                [0,1]
        / \                                         2 -> 1,3                  [1,2]
       2---3       row-> 0-  0 1 0 0                3 -> 1,2                  [1,3]
                         1-  1 0 1 1                                          [2,3]
                         2-  0 1 0 1                                       ]
                         3-  0 1 1 0

====================================Weighted Graph -> Representation========================

    Weighted Graph        Adj. Matrix               Adj. List                Edge List

      2
   0----1                   0 1 2 3  -->column    0 -> (1,2)                [
     4 / \ 7                | | | |               1 -> (0,2),(2,4),(3,7)        [0,1,2]
      /   \        row-> 0- 0 2 0 0               2 -> (1,4),(3,7)              [1,2,4]
     2-----3             1- 2 0 4 7               3 -> (1,7),(2,5)              [1,3,7]
        5                2- 0 4 0 5                                             [2,3,5]
                         3- 0 7 5 0                                         ]

**/
/**
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
                        3-3 Adjacency List Manually weighted.cpp
Sample Input:
    Manual Input
Sample Output:
    0-->(1,2)
    1-->(0,2) (2,4) (3,7)
    2-->(1,4) (3,7)
    3-->(1,7) (2,5)


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
    vector<vector<int>> edge_list = {
        {0,1,2},
        {1,2,4},
        {1,3,9},
        {2,3,1}

    };
        //Unweighted graph Input
//    edge_list.push_back({0,1});
//    edge_list.push_back({1,2});
//    edge_list.push_back({1,3});
//    edge_list.push_back({2,3});

    for(int i=0; i<nodes; i++)
    {
        cout<<edge_list[i][0]<<" "<<edge_list[i][1]<<" "<<edge_list[i][2]<<endl;
    }
    return 0;
}

















