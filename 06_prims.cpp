#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	int x,y,wt;
	vector<pair<int, int>> adj[n];
	for(int i=0;i<m;i++){
		cin>>x>>y>>wt;
		adj[x].push_back(make_pair(y,wt));
		adj[y].push_back(make_pair(x,wt));
	}

	int parent[n];
	int key[n];
	bool mstSet[n];

	for(int i=0;i<n;i++)
		key[i]=INT_MAX, mstSet[i]=false, parent[i]=-1;

	key[0]=0;
	parent[0] = -1;
	for(int i=0;i<n-1;i++){
		int mini = INT_MAX, u;
		for(int j = 0;j<n;j++){
			if(mstSet[j]==false && key[j]<mini){
				mini = key[j], u=j;
			}
		}

		mstSet[u] = true;

		for(auto it : adj[u]){
			int v = it.first;
			int weight = it.second;
			if(mstSet[v] == false && weight<key[v])
				parent[v] = u, key[v] = weight;
		}


	}

	for(int i=1;i<n;i++){
		cout<<parent[i]<<" -- "<< i <<"\n";
	}
}