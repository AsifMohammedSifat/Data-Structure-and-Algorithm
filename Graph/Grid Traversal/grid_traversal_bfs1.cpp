/**
 * All Praise to Allah
 * ---------------------
 * Author: Asif Mohammed Sifat
 * Created: 2024-09-06   16:40:20
 * Source: 
 */
#include<bits/stdc++.h>
#define ll long long int 
#define ull unsigned long long int 
#define nl '\n' 
using namespace std;

int grid[100][100];
int vis[100][100];
int dist[100][100];
int row,col;

vector<pair<int,int>>child = {{0,1},{0,-1},{-1,0},{1,0}};

bool valid(int i,int j){
    return i<row && i>=0 && j<col && j>=0;
}

void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj] = 1;
    dist[si][sj]=0;

    while(!q.empty()){
        pair<int,int>par = q.front();
        int pi = par.first;
        int pj = par.second;
        q.pop();

        cout<<grid[pi][pj]<<nl;

        for(int i=0;i<4;i++){
            int ci = pi+child[i].first;
            int cj = pj+child[i].second;     

            if(vis[ci][cj]==0 && valid(ci,cj)){
                q.push({ci,cj});
                vis[ci][cj] = 1;
                dist[ci][cj] = dist[pi][pj] + 1;
            }       

        }

        
    }
}
                    
int main(){
    memset(vis,0,sizeof(vis));
    memset(dist,0,sizeof(dist));

    
    cin>>row>>col;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>grid[i][j];
        }
    }    
    bfs(2,0);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }    
              
    return 0;
}
