//Bipartite Graph (DFS) 
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool bipartiteDfs(int node,vector<int>adj[],vector<int>&color){
	if(color[node]==-1)
	color[node]=1;
	for(auto it:adj[node]){
		if(color[it]==-1){
			color[it]=1-color[node];
			if(!bipartiteDfs(it,adj,color))
			return false;
		}
		else if(color[it]==color[node])
		return false;
	}
	return true;
}

bool checkBipartite(vector<int>adj[],int n){
	vector<int>color(n,-1);
	for(int i=0;i<v;i++){
		if(color[i]==-1)
		{
			if(!bipartiteDfs(i,adj,color))
			return false;
		}
	}
	return true;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>adj[n];
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	if(checkBipartite(adj,n))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}

//Time Complexity:O(N+E)
//Space Complexity:O(N)+O(N)+O(N+E)
