//Cycle Detection in Directed Graph using DFS
#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool checkForCycle(int node,vector<int>adj[],vector<int>&vis,vector<int>&dfsVis){
	vis[node]=1;
	dfsVis[node]=1;
	for(auto it:adj[node]){
		if(!vis[node]){
			if(checkForCycle(it,adj,vis,dfsVis))
			return true;
			else if(dfsVis[it])
			return true;
		}
	}
		dfs[node]=0;
		return false;
}

bool isCycle(int n,vector<int>adj[]){
	vector<int>vis(n,0);
	vector<int>dfsVis(n,0);
	for(int i=0;i<n;i++){
		if(!vis[i]){
			if(checkForCycle(i,adj,vis,dfsVis))
			return true;
		}
	}
	return false;
}
int main(){
	
}
//Time Complexity: O(N+E)
//Space Complexity: O(2*N)
//Auxiliary Space :Stack Recursion :O(N)
