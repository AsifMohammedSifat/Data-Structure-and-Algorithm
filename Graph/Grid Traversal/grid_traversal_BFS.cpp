/*
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

You are given a map of a labyrinth, and your task is to find a path from start to end. You can walk left, right, up and down.

Input

The first input line has two integers n
 and m
: the height and width of the map.

Then there are n
 lines of m
 characters describing the labyrinth. Each character is . (floor), # (wall), A (start), or B (end). There is exactly one A and one B in the input.

Output

First print "YES", if there is a path, and "NO" otherwise.

If there is a path, print the length of the shortest such path and its description as a string consisting of characters L (left), R (right), U (up), and D (down). You can print any valid solution.

Constraints
1≤n,m≤1000

Example

Input:
5 8
########
#.A#...#
#.##.#B#
#......#
########

Output:
YES
9
*/
#include<bits/stdc++.h>
using namespace std;

int row,col;
const int N = 1000;
int grid[N][N];
int visited[N][N];
int level[N][N];

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};


bool isInside(pair<int,int> coor){
    if(coor.first>=0 && coor.first<row && coor.second>=0 && coor.second<col ){
        return true;
    }
    return false;
}

bool isSafe(pair<int,int>coor){
    int x = coor.first;
    int y = coor.second;
    if(grid[x][y]==-1){
        return false;
    }
    return true;
}

void bfs(pair<int,int> src)
{
    queue<pair<int,int>>q;

    visited[src.first][src.second] = 1;
    level[src.first][src.second] = 0;
    q.push(src);


    while(!q.empty())
    {
        pair<int,int> head = q.front();
        q.pop();

        int x = head.first;
        int y = head.second;


        for(int i=0; i<4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            pair<int,int> adj_node = {new_x,new_y};

            if(visited[adj_node.first][adj_node.second]==0 && isInside(adj_node) && isSafe(adj_node)){
                q.push(adj_node);
                visited[adj_node.first][adj_node.second] = 1;
                level[adj_node.first][adj_node.second] = level[head.first][head.second]+1;

            }

        }
    }
}


int main()
{
    cin>>row>>col;

    pair<int,int> src,dst;

    for(int i = 0; i<row; i++)
    {
        string input;
        cin>>input;
        for(int j=0; j<col; j++)
        {
            if(input[j]=='#')
            {
                grid[i][j] = -1;
            }

            if(input[j]=='A')
            {
                src= {i,j};
            }
            if(input[j]=='B')
            {
                dst = {i,j};
            }
        }
    }
    bfs(src);
    if(visited[dst.first][dst.second] == 1){
        cout<<"YES\n";
        cout<<level[dst.first][dst.second]<<endl;
    }
    else{
        cout<<"NO\n";
    }
}
