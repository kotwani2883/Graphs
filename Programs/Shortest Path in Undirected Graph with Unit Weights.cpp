//Shortest Path in Undirected Graph with Unit Weights
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void bfs(int n,vector<int>adj[],int src){
	int dist[n];
	for(int i=0;i<n;i++)
	dist[i]=INT_MAX;
	queue<int>q;
	dist[src]=0;
	q.push_back(src);
	while(q.empty()==false){
		it node=q.front();
		q.pop();
		for(auto it:adj[node]){
			if(dist[node]+1<dist[it]){
			dist[it]=dis[node]+1;
			q.push(it);
		}
		}
	}
	for(int i=0;i<n;i++)
	cout<<dist[i]<<" ";
}
int main(){
	
}
//Time Complexity:O(V+E)
//Space Complexity:O(V)+O(V)
