//Disjoint Set
//Union By Rank and Path Compression

int parent[100000];
int rank[100000];

void makeSet(){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		rank[i]=0;
	}
}
int findPar(int node){
	if(node==parent[node])
	return node;
   return parent[node]=findPar(parent[node]);
}

void union(int u,int v){
	u=findPar(u);
	v=finrPAr(v);
	if(rank[u]<rank[v])
	parent[u]=v;
	else if(rank[v]<rank[u])
	parent[v]=u;
	else{
	parent[v]=u;
	rank[u]++;
    }
}
void main{
makeSet();
int m;
cin>>m;
while(m--){
	int u,v;
	union(u,v);
	//If 2 and 3 belong to same component or not
	//Find Parent if they are same they belong to same else belong to different componnent
	
}
}

//Time Complexity:O(4*Apha)

