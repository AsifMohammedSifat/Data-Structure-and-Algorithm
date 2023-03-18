/*
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
Topic: BFS on Graph
        Here BFS() implemented in two Type.
        
       Summary:
       Type:01
        Summary:
        1)Graph-> adjacency List
        2)Create Queue + visited Array
        3)Push Source in Queue
        4)While Queue is not empty:
            i)Store and pop + cindition
            ii)Task + Mark -- In Conditon
            iii)Child Push -- In Conditon
            
       Type:02
        1)Graph-> adjacency List
        2)Create Queue + visited Array
        3)Push Source in Queue + Mark in visited array
        4)While stack is not empty:
            i)Store and pop
            ii)Task 
            iii)Child Push + mark -- In Conditon
        
        1)Searching 2)Shortest Path Finding
        Input:Type-01
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
        Sample Input-0:Type:2
        5
        0 1
        0 2
        1 3
        1 4
        3 4
        Sample Output-0:
        0 1 2 3 4


        Sample Input-1:
        11
        0 1
        0 2
        1 3
        1 4
        2 5
        2 6
        3 4
        5 6
        5 7
        5 8
        6 9
        Sample Output-1:
        0 1 2 3 4 5 6 7 8 9
*/

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pub push_back
using namespace std;

const int N = 1e5;
int visited[N];
vector<int> adj_list[N];

// Type : 01
void BFS(int source){
    memset(visited,false,sizeof(visited));
    queue<int>q;
    q.push(source);

    while(!q.empty()){
        int frnt = q.front();
        q.pop();
        if(visited[frnt]==true){
            continue;
        }
         //task
        cout<<frnt<<endl;
        visited[frnt] = true;

        for(int i=0;i<arr[frnt].size();i++){
            int val = arr[frnt][i];
            if(visited[val]==false){
                q.push(val);
            }
        }

    }

}

//Type : 02

void bfs(int src){
    queue<int>q;
    q.push(src);
    visited[src] = 1;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        //task
        cout<<node<<" ";
        
           //accessing node's child
        //using for loop
//        for(int i=0;i<adj_list[node].size();i++){
//            int val = adj_list[node][i];
//            if(visited[val]==0){
//                q.push(val);
//                visited[val]=1;
//            }
//        }
//
        //using for each loop
        for(auto child: adj_list[node]){
                if(visited[child]==0){
                q.push(child);
                visited[child]=1;
            }

        }
    }

}


void buildGraph(){
    fast;
     memset(visited,0,sizeof(visited));
    int edge;
    cin>>edge;

    while(edge--){
        int x,y;
        cin>>x>>y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);

    }
    bfs(0);


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
