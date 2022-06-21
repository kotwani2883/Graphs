//Cycle Detection in Undirected Graph using BFS
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool checkForCycle(int s,int v,vector<int>&adj[],vector<int>&vis){
	queue<pair<int,int>>q;
	vis[s]=true;
	q.push_back({s,-1});//For starting node prev=-1 , second Node for Storing Parent Node
	while(!q.empty()){
		int node=q.front.first;
		int parent=q.front.second;
		q.pop();
		for(auto it:adj[node]){
			if(!vis[it]){
				vis[it]=true;
				q.push({it,node});
			}
			else if(parent!=it)
			return true;
		}
	}
	return false;
}


bool isCycle(int v,vector<int>adj[]){
	vector<int>vis(v+1,0);
	for(int i=0;i<v;i++){ //Ensuring All Components
		if(!vis[i])
		if(checkForCycle(i,v,adj,vis))
		return true;
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

// Time Complexity:O(N+E)
// Space Complexity:O(N)+O(N)+O(N+E)
