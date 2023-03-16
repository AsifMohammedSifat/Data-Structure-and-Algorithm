/**
/*
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

/*
DFS Implementation: 
                    1)Using Stack  2)Using Recursion

        1
       / \
      2   3
     / \
    4---5

Input:
5 5

1 2
1 3
2 4
2 5
4 5
Output:
    1 3 2 5 4

1)PseudoCode of using Stack:

DFS-iterative(src): // src as source node
    let st as stack
    st.push(src)   //inserting s in stack

    while(st is not empty):

        //Pop a vertex from stack to visit next
        ver = st.top()
        st.pop()
        
        if ver is visited:
            continue
        
        print ver
        mark ver as visited


        //push all the neighburs of v in stack that are not visited
        for all neighbours w of ver in Graph G:
            if w is not visited:
                st.push(w)
Summary:
        1)Graph-> adjacency List
        2)Create stack + visited Array
        3)Push Source in stack
        4)While stack is not empty:
            i)Store and pop
            ii)Task + Mark -- In Conditon
            iii)Child Push -- In Conditon
*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> arr[N];
int visited[N] = {0};


// 1)Using Stack
int dfs_Stack(int node){
    stack<int> st;
    st.push(node);

    while(!st.empty()){
        //store + Pop
        int ver = st.top();
        st.pop();

        //task and mark In Condition
        if(visited[ver]==1){
            continue;
        }
        cout<<ver<<" ";
        visited[ver] = 1;

        //Child Push In Condition
        for(auto child: arr[ver]){
            if(visited[child]==0){
                st.push(child);
            }
        }
    }
}

int main(){
    int node,edge;
    cin>>node>>edge;

    //Build adjacency list/Graph
    for(int i=0;i<edge;i++){
        int x,y;
        cin>>x>>y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    dfs_Stack(1);

}
