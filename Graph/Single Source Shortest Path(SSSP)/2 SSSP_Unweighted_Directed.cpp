/*
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

                                                      2 SSSP_Unweighted_Directed.cpp

(0)   (1)   (2)
0 --->1----->2 ---->3 (3)
      |      |
      |      |
     \/     \/
  (2) 5----->4 (3)

6 6
0 1
2 3
1 5
1 2
2 4
5 4
node 0 -> level: 0
node 1 -> level: 1
node 2 -> level: 2
node 3 -> level: 3
node 4 -> level: 3
node 5 -> level: 2
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;

int visited[N];
int level[N];

vector<int>adj_list[N];

void bfs(int src) {
    queue<int>q;

    visited[src] = 1;
    level[src] = 0; // new line added
    q.push(src);

    while(!q.empty()) {
        int head = q.front();
        q.pop();

        for(int adj_node: adj_list[head]) {
            if(visited[adj_node] == 0) {
                visited[adj_node] = 1;

                level[adj_node] = level[head] + 1; // new line added

                q.push(adj_node);
            }
        }
    }
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    for(int i = 0 ; i < edges ; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    int src = 0;
    bfs(src);

    for(int i = 0 ; i < nodes ; i++) {
        cout<<"node "<<i<<" -> level: "<<level[i]<<endl;
    }
    return 0;
}
