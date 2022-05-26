// #include<bits/stdc++.h>
// using namespace std;



// void addEdge(vector<int> adj[], int v, int u){
// 	adj[v].push_back(u);
// 	adj[u].push_back(v);
// }

// void printGraph(vector<int> adj[], int v){
// 	for (int i = 0; i < v; ++i)
// 	{
// 		for(int x:adj[i]){
// 			cout<<x<<" ";
// 		}
// 		cout<<endl;
// 	}
// }

// void BFS(vector<int> adj[], int v, int s){
// 	bool visited[v+1];
// 	for (int i = 0; i < v; ++i)
// 	{
// 		visited[i]=false;
// 	}

// 	queue<int> q;
// 	visited[s] = true;
// 	q.push(s);
// 	while(q.empty()==false){
// 		int u = q.front();
// 		q.pop();
// 		cout<<u<<" ";
// 		for (int v:adj[u])
// 		{
// 			if(visited[v]==false){
// 				visited[v]=true;
// 				q.push(v);
// 			}
// 		}
// 	}
// }

// int main(){
// 	int v = 4;
// 	vector<int> adj[v];
// 	addEdge(adj, 0,1);
// 	addEdge(adj, 0,2);
// 	addEdge(adj, 2,1);
// 	addEdge(adj, 3,1);
// 	printGraph(adj, v);

// 	BFS(adj, v, 0);

// }

// #include <bits/stdc++.h>
// using namespace std;


// void addEdge(vector<int> adj[], int x, int y){
// 	adj[x].push_back(y);
// 	adj[y].push_back(x);
// }

// void printGraph(vector<int> adj[],int n, int s){
// 	for(int i=0;i<n;i++){
// 		for(auto u:adj[i]){
// 			cout<<u<<" ";
// 		}
// 		cout<<"\n";
// 	}
// }

// void BFS(vector<int> adj[], int n, int s){
// 	bool visited[n];
// 	for(int i=0;i<n;i++){
// 		visited[i]=false;
// 	}

// 	queue<int> q;
// 	visited[s]=true;
// 	q.push(s);
// 	while(!q.empty()){
// 		int u = q.front();
// 		q.pop();
// 		cout<<u<<" ";
// 		for(auto i:adj[u]){
// 			if(visited[i]==false){
// 				visited[i]=true;
// 				q.push(i);
// 			}
// 		}
// 	}
// }

// int main(){
// 	int n, m;
// 	cin>>n>>m;
// 	vector<int> adj[n];
// 	int x,y;
// 	for(int i=0;i<m;i++){
// 		cin>>x>>y;
// 		addEdge(adj, x,y);
// 	}

// 	printGraph(adj, n, 0);
// 	BFS(adj, n, 0);
// }

#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int>adj[],int s,int n){
    bool visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    queue<int>q;
    
    q.push(s);
    visited[s]=true;
    //cout<<s<<"starting node"<<endl;
    while(!q.empty()){
       // cout<<s<<"starting node"<<endl;
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(auto i:adj[node]){
            if(visited[i]==false){
                visited[i]=true;
                q.push(i);
            }
        }
    }
   
   
     }


void addEdge(vector<int>adj[],int x,int y){
    adj[x].push_back(y);
    adj[y].push_back(x);

}
void printGraph(vector<int> adj[],int n, int s){
for(int i=0;i<n;i++){
for(auto u:adj[i]){
cout<<u<<" ";
}
cout<<"\n";
}
}

int main(){
    int n,m;
    // cout<<"enter the node and edge"<<endl;
    cin>>n>>m;//n-node,m-edge
    vector<int>adj[n];
    // cout<<"enter the node of the edge"<<endl;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj,x,y);
       }
    int s;
    // cout<<"enter the starting node"<<endl;
    cin>>s;
    printGraph(adj, n, s);
    bfs(adj,s,n);

return 0;

}
