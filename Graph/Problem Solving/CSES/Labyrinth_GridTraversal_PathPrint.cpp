/*
||-----------------------||
||  	  Author           ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
* /
                                      Graph Related Problem
                      Problem Link: https://cses.fi/problemset/task/1193/
                              Tag: Grid Traversal + Path Printing
                      
*/
 


#include<bits/stdc++.h>
using namespace std;

const int N = 1000;
int grid[N][N];
int visited[N][N];
pair<int,int> parent[N][N];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
char stepDir[] = {'R','L','U','D'};


void bfs(int x,int y,int row,int col){
    queue<pair<int,int>>q;
    q.push({x,y});
    visited[x][y] = 1;
    parent[x][y] = {-1,-1};

    while(!q.empty()){

        pair<int,int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;

        for(int i=0;i<4;i++){
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            if(!visited[new_x][new_y] && new_x>=0 && new_x<row && new_y>=0 && new_y<col && grid[new_x][new_y]!=-1){
                visited[new_x][new_y] = 1;
                q.push({new_x,new_y});
                parent[new_x][new_y] = head;
            }
        }
    }

}

int main()
{
    int row,col;
    cin>>row>>col;

    int start_X,start_Y,end_X,end_Y;
    for(int i=0; i<row; i++)
    {
        string input;
        cin>>input;
        for(int j=0; j<col; j++)
        {
            if(input[j]=='#')
            {
                grid[i][j]=-1;
            }
            else if(input[j]=='A'){
                start_X = i;
                start_Y = j;
            }
            else if(input[j]=='B'){
                end_X = i;
                end_Y = j;
            }
        }
    }

    bfs(start_X,start_Y,row,col);
  

    if(visited[end_X][end_Y]){
        cout<<"YES\n";
        vector<pair<int,int>>path;
        path.push_back({end_X,end_Y});

        int x = end_X,y=end_Y;

        while(parent[x][y]!=make_pair(-1,-1)){
            pair<int,int> p = parent[x][y];
            x = p.first,y=p.second;
            path.push_back({x,y});
        }
        reverse(path.begin(),path.end());      
      
        string ans;
        for(int i=0;i<path.size()-1;i++){
            for(int j=0;j<4;j++){
                int dx_,dy_;
                dx_=path[i].first + dx[j];
                dy_=path[i].second + dy[j];

                if(dx_==path[i+1].first && dy_==path[i+1].second){
                    //ans.push_back(stepDir[j]);
                    ans+=stepDir[j];
                    break;
                }
            }
        }
        cout<<ans.size()<<endl;
        cout<<ans<<endl;
    }
    else{
        cout<<"NO\n";
    }

}
