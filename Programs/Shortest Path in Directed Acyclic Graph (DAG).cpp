//Shortest Path in Directed Acyclic Graph (DAG)
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void findTopoSort(int node,vector<int>&vis,stack<int>&st,vector<int>adj[]){
	vis[node]=1;
	for(auto it:adj[node]){
		if(!vis[it])
		findTopoSort(it,vis,st,adj);
	}
	st.push(node);
}

void shortestPath(int src,int n,vector<pair<int,int>>adj[]){
	int vis[n]=0;
	stack<int>st;
	for(int i=0;i<n;i++){
		if(!vis[i])
		findTopoSort(i,vis,st,adj);
		int dist[n];
		for(int i=0;i<n;i++)
		dist[i]=INT_MAX;
		dist[src]=0;
		while(!st.empty()){
			int node=st.top();
			st.pop();
			if(dist[node]!=INT_MAX){
				for(auto it:adj[node]){
					if(dist[node]+it.second<dist[it.first])
					dist[it.first]=dist[node]+it.second;
				}
			}
		}
		
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,int>>adj[n];
	for(int i=0;i<m;i++){
		int u,v,wt;
		cin>>u>>v>>wt;
		adj[u].push_back({v,wt});
	}
	shortestPath(0,n,adj);
	return 0;
}
