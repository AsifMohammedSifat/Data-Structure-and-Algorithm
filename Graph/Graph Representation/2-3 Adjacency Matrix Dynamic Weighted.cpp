/**
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
====================================Weighted Graph -> Representation========================

    Weighted Graph        Adj. Matrix               Adj. List                Edge List

      2
   0----1                   0 1 2 3  -->column    0 -> (1,2)
     4 / \ 7                | | | |               1 -> (0,2),(2,4),(3,7)
      /   \        row-> 0- 0 2 0 0               2 -> (1,4),(3,7)
     2-----3             1- 2 0 4 7               3 -> (1,7),(2,5)
        5                2- 0 4 0 5
                         3- 0 7 5 0


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
        int x,y,w;
        cin>>x>>y>>w;
        matrix[x][y] = w;
        matrix[y][x] = w;
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

















