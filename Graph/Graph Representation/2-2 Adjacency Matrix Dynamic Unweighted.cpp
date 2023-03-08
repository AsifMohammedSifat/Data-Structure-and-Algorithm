/**
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

Graph to adjacency matrix -- Manually taken Input

 0----1
     / \
    2---3

Sample Input:
Number of Nodes = 4
Number of Edges = 4
                  0 1
                  1 2
                  1 3
                  2 3

Time Complexity = O(n^2)
Space Complexity = O(n^2)

*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;

int main(){
    fast;
    int nodes,edges; //t->O(1) s->O(1)
    cin>>nodes>>edges;
    //declear matrix
    int matrix[nodes][nodes];

    //initialize matrix by 0
    memset(matrix,0,sizeof(matrix));

    for(int i=0;i<edges;i++){
        int x,y;
        cin>>x>>y;
        matrix[x][y] = 1;
        matrix[y][x] = 1;
    }
    //print matrix
    //t->O(n^2) s->O(1)
    for(int i = 0;i<nodes;i++){
        for(int j = 0;j<nodes;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
















