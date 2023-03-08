/**
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

Graph to adjacency matrix -- Manually

 0----1
     / \
    2---3

Total Nodes = 4
Connected Nodes:
0--1 and 1--0
1--2 and 2--1
1--3 and 3--1
2--3 and 3--2

Time Complexity = O(n^2)
Space Complexity = O(n^2)

*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;
int main(){
    fast;
    int nodes = 4; //t->O(1) s->O(1)
    //declear matrix
    int matrix[nodes][nodes]; //t->O(n^2) s->O(n^2)

    //initialize matrix by 0
    memset(matrix,0,sizeof(matrix)); //t->O(n^2) s->O(1)

    //set matrix[i][j] = 1 if and only if i--->j
    /**
        For manual assigning-> t->O(1)
        But, if the graph type is complete Graph;then
             total node time complexity is = O((n^2-n)/2) = O(n^2)
    */
    matrix[0][1] = 1;
    matrix[1][0] = 1;

    matrix[1][2] = 1;
    matrix[2][1] = 1;

    matrix[1][3] = 1;
    matrix[3][1] = 1;

    matrix[2][3] = 1;
    matrix[3][2] = 1;

    //print matrix

    //t->O(n^2) s->O(1)
    for(int i = 0;i<nodes;i++){
        for(int j = 0;j<nodes;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    /** Output
        0 1 0 0
        1 0 1 1
        0 1 0 1
        0 1 1 0

    */
}
















