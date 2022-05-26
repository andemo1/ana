#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[], int x, int y){
	adj[x].push_back(y);
	adj[y].push_back(x);
}


void printGraph(vector<int> adj[], int n){
	for(int i=0;i<n;i++){
		for(auto u:adj[i]){
			cout<<u<<" ";
		}
		cout<<"\n";
	}
}


// void DFSREC(vector<int>adj[], int s, bool visited[]){
// 	visited[s]=true;
// 	cout<<s<<" ";
// 	for(auto u:adj[s])
// 		if(visited[u]==false)
// 			DFSREC(adj,u,visited);
// }

// void DFS(vector<int> adj[], int n, int s){
// 	bool visited[n];
// 	for(int i=0;i<n;i++)
// 		visited[i]=false;
// 	DFSREC(adj,s,visited);
// }

void DFSREC(vector<int> adj[], int s, bool visited[]){
	visited[s] = true;
	cout<<s<<" ";
	for(auto u: adj[s]){
		if(visited[u]==false)
			DFSREC(adj, u, visited);
	}
}

void DFS(vector<int> adj[], int n, int s){
	bool visited[n];
	for(int i=0;i<n;i++)
		visited[i] = false;
	
	DFSREC(adj, s, visited);	
}


int main(){
	int n,m;
	// cout<<"Enter number of vertices and edges of the graph:\n";
	cin>>n>>m;
	int x,y;
	vector<int> adj[n];
	for(int i=0;i<m;i++){
		// cout<<"Enter " <<i+1<< " edge:";
		cin>>x>>y;
		addEdge(adj, x,y);
	}
	printGraph(adj,n);
	DFS(adj, n, 0);


}