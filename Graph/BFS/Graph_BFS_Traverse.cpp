/*
||-----------------------||
||  Asif Mohammed Sifat  ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
Topic: BFS on Graph
        1)Searching 2)Shortest Path Finding
        Input:
        BFS(2)
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
*/

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);
#define pub push_back
using namespace std;



vector<int> arr[1000];
bool visited[1000];

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
    BFS(2);


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
