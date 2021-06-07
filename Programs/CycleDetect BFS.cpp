//Cycle Detection in Directed Graph using BFS(Kahn's Algorithm)
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool CheckCycle(int N,vector<int>adj[]){
	queue<int>q;
	vector<int>indegree(N,0);
	for(int i=0;i<N;i++){
		for(auto it:adj[i])
		indegree[it]++;
	}
	for(int i=0;i<N;i++){
		if(indegree[i]==0)
		q.push_back(i);
	}
	vector<int>topo;
	while(!q.empty()){
		int node=q.front();
		q.pop();
		topo.push_back(node);
		for(auto it:adj[node]){
			indegree[it]--;
			if(indegree[it]==0)
			q.push(it);
		}
	}
	if(topo.size()==N)
	return true;
	else
	return false;
}
int main(){
	
}
