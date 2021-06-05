//Breadth First Traversal
#include<bits/stdc++.h>
using namespace std;
vector<int>bfsOfGraph(int v,vector<int>adj){
	vector<int>bfs;
	vector<int>vis(v+1,0);//visited Array
	for(int i=1;i<=v;i++){
		if(!vis[i]){
			queue<int>q;
			vis[i]=1;
			while(!q.empty()){
				int node=q.front();
				q.pop();
				bfs.push_back(node);
				for(auto it:adj[node]){
					if(!vis[it]){
						q.push(it);
						vis[it]=1;
					}
				}
			}
		}
	}
	return bfs;
}
int main(){
	
}

// Time Complexity:O(N+E)
// Space Complexity:O(N)+O(N)+O(N+E)
