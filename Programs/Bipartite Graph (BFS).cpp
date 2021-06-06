//Bipartite Graph (BFS)
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool bipartiteBfs(int src,vector<int>adj[],vector<int>&color){
	queue<int>q;
	q.push(src);
	color[src]=1;
	while(!q.empty()){
		int node=q.front();
		q.pop();
		for(auto it:adj[node]){
			if(color[it]==-1){
				color[it]=1-color[node];
				q.push(it);
			}
			else if(color[it]==color[node])
			return false;
		}
	}
	return true;
}

bool checkBipartite(vector<int>adj[],int n){
	vector<int>color(n ,-1)
	for(int i=0;i<n;i++){
		if(color==-1){
			if(!BipartiteBfs(i,afj,color))
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
