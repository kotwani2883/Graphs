//Cycle Detection in Undirected Graph using DFS
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool checkForCycle(int node,int parent ,vector<int>&vis,vector<int>adj[]){
	vis[node]=1;
	for(auto it:adj[node]){
		if(vis[it]==0)
		if(checkForCycle(it,node,vis,adj))
		return true;
		else if(it!=parent)
		return true;
		
	}
	return false;
}
bool isCycle(int v,vector<int>adj[]){
	vector<int>vis(v+1,0);
	for(int i=1;i<=v;i++){
		if(!vis[i]){
			if(checkForCycle(i,-1,vis,adj))
			return true;
		}
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int V,e;
		cin>>V>>e;
		vector<int>adj[V];
		for(int i=0;i<e;i++){
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}
	return 0;
}
