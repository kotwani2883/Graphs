//Dijkstra's Algorithm-Greedy
//Shortest Path in Undirected Graphs
//Priority Queue of pair<dist,node> as we have diffrent weights and not as unit weights
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,source;
	cin>>n>>m;
	vector<pair<int,int>>g[n+1];//Adjacency List for Graph
	int a,b,wt;
	for(int i=0;i<m;i++){
		cin>>a>>b>>wt;
		g[a].push_back({b,wt});
		g[b].push_back({a,wt});
	}
	cin>>source;
	
	//Dijkstra's Algorithm begins from here
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>pq;//Declared pq as min heap
	vector<int>distTo(n+1,INT_MAX);
	
	distTo[source]=0;
	pq.push_back(make_pair(0,source));//(dist,node)
	
	while(!pq.empty()){
		int dist=pr.top().first;
		int prev=pq.top().second;
		pq.pop();
		
		vector<pair<int,int>>::iterator it;
		for(it=g[prev].begin();it!=g[prev].end();it++){
			int next=it->first;
			int nextDist=it->second;
			if(distTo[next]>dist+nextDist){
				distTo[next]=dist+nextDist;
				pq.push({distTo[next],next});
			}
		}
	}
	cout<<"The distances from source "<<source<<" are: \n";
	for(int i=1;;i<=n;i++)
	cout<<distTo[i]<<" ";
	cout<<endl;
	return 0;
}
//Time Complexity:O(N+E)logN
//Space Complexity:O(N)+O(N)+O(N)
