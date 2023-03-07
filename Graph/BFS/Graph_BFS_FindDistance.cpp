/**
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

Topic: BFS on Graph
        1)Searching 2)Shortest Path Finding
        Input:
        BFS(3)
        5 6
        1 2
        1 3
        2 0
        2 4
        3 0
        3 4
        Output:
                2
                1
                0
                4
                3

                2 <- level
*/

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pub push_back
using namespace std;



vector<int> arr[1000];
bool visited[1000];
int level[1000];

void BFS(int source){
    memset(visited,false,sizeof(visited));
    memset(level,-1,sizeof(level));
    queue<int>q;
    q.push(source);
    level[source] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();
        if(visited[parent]==true){
            continue;
        }

        //task
        cout<<parent<<endl;
        visited[parent] = true;

        for(int i=0;i<arr[parent].size();i++){
            int children = arr[parent][i];

            //for shortest path
            if(level[children]==-1){
                level[children] = level[parent]+1;
            }

            //traverse
            if(visited[children]==false){
                q.push(children);
            }
        }

    }

}
void buildGraph(){
    fast;
    int nodes,edge;
    cin>>nodes>>edge;
//    vector<int> arr[1000];
    while(edge--){
        int x,y;
        cin>>x>>y;
        arr[x].pub(y);
        arr[y].pub(x);
    }
    BFS(3);
    cout<<endl<<level[2]<<endl;


//    arr[1].pub(2);
//    arr[2].pub(1);
//
//    arr[1].pub(3);
//    arr[3].pub(1);
//
//    arr[2].pub(0);
//    arr[0].pub(2);
//
//    arr[2].pub(4);
//    arr[4].pub(2);
//
//    arr[0].pub(3);
//    arr[3].pub(0);
//
//    arr[3].pub(4);
//    arr[4].pub(3);
}


int main(){
    fast;
    buildGraph();
    return 0;
}
