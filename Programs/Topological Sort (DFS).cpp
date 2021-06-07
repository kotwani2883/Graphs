//Topological Sort (DFS)
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void findTopo(int node,vector<int>&vis,stack<int>&st,vector<int>adj[]){
	vis[node]=1;
	for(auto it:adj[node]){
		if(!vis[it])
		findTopoSort(it,vis,st,adj);
	}
	st.push(node);
}
vector<int>topoSort(int N,vector<int>adj[]){
	stack<int>st;
	vector<int>vis(N,0);
	for(int i=0;i<N;i++){
		if(!vis[i])
		findTopoSOrt(i,vis,st,adj);
	}
	vector<int>topo;
	while(!st.empty()){
		topo.push_back(st.top());
		st.pop();
	}
	return  topo;
}
int main(){
	
}
