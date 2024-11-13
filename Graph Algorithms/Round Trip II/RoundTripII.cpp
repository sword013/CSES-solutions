#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> path;

bool dfs(int node,vector<int> adj[],vector<bool> &vis,vector<bool> &pathVis){
  vis[node]=true;    
  pathVis[node]=true;
  path.push_back(node);
  
  for(int neigh:adj[node]){
    if(!vis[neigh]) {
        if(dfs(neigh,adj,vis,pathVis)==true) return true;
    }
    else{ 
        //neighbour is visited. just check if it is in current path or not
        if(pathVis[neigh]==true){
            path.push_back(neigh); //a--b--c--d---e--c
            return true;
        }
    }
  }
  
  pathVis[node]=false;
  path.pop_back();
  return false;
}

void printPath(){
    //a--b--c--d---e--c : find c
    int lastNode = path.back();
    int i=0;    //find the first node which is same as last
    while(path[i]!=lastNode) i++;
    
    //c--d---e---c
    //print the output they want
    cout<< path.size() - i <<endl;
    while(i<path.size()) cout<< path[i++]<<" ";
}

void rountTrip2(int n,int m,vector<int> adj[]){
    //n = number of cities, m=number of edges
    //cities are numbered 1,2,...,n
    vector<bool> vis(n+1,false);   
    vector<bool> pathVis(n+1,false);
    
    bool cycleFound=false;
    for(int node=1;node<=n;node++){
        if(!vis[node]){
            //go and apply dfs on it and check if dfs results in cycle
            if(dfs(node,adj,vis,pathVis)==true){
                //cycle found and thus a path !
                cycleFound=true;
                printPath();
                break;
            }
        }
    }
    if(!cycleFound) cout<<"IMPOSSIBLE"; //just like my life
}



int main() 
{
    int n;  //n cities
    int m;  //m edges
    cin >> n >> m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int a,b; //u and v
        cin >> a >> b;
        adj[a].push_back(b);
    }
    
    rountTrip2(n,m,adj);
    return 0;
}