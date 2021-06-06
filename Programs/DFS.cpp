//Depth First Traversal
#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&storeDfs){
	storeDfs.push_back(node);
	vis[node]=1;
	for(auto it:adj[node]){
		if(!vis[i])
		dfs(it,vis,adj,storeDfs);
	}
}

vector<int>dfsOfGraph(int v,vector<int>adj[]){
	vector<int>storeDfs;
	vector<int>vis(v+1,0);
	for(int i=1;i<=v;i++){
		if(!vis[i])
		dfs(i,vis,adj,storeDfs);
	}
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
}

//Time Complexity:O(N+E)
//Space Complexity:O(N)+O(N)+O(N+E)
