
#include <bits/stdc++.h>
using namespace std;

void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow
	, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n){
	if(col==n){
		ans.push_back(board);
		return;
	}

	for(int row=0;row<n;row++){
		if(leftRow[row]==0 && upperDiagonal[n-1+col-row]==0 && lowerDiagonal[row+col]==0){
			board[row][col] = 'Q';
			leftRow[row] = 1;
			upperDiagonal[n-1+col-row]=1;
			lowerDiagonal[col+row] = 1;
			solve(col+1, board, ans, leftRow, upperDiagonal, lowerDiagonal, n);
			board[row][col] = '.';
			leftRow[row] = 0;
			lowerDiagonal[row+col] = 0;
			upperDiagonal[n-1+col-row] = 0;

		}
	}
}

void printAns(vector<vector<string>> &ans){
	for(auto i: ans){
		for(auto j:i){
			cout<<j<<"\n";
		}
		cout<<"\n";
	}
}

int main(){
	int n;
	cin>>n;
	vector<vector<string>> ans;
	vector<string> board(n);
	string s(n, '.');
	for(int i=0;i<n;i++)
		board[i]=s;

	vector<int> leftRow(n,0), upperDiagonal(2*n-1,0), lowerDiagonal(2*n-1,0);
	solve(0, board, ans, leftRow, upperDiagonal, lowerDiagonal, n);
	printAns(ans);
	cout<<ans.size();

}
// #include <bits/stdc++.h>
// using namespace std;

// void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow
// 	, vector<int> &lowerDiagonal, vector<int> &upperDiagonal, int n){

// 	if(col==n){
// 		ans.push_back(board);
// 		return;
// 	}

// 	for(int row = 0;row<n;row++){
// 		if(leftRow[row]==0 && upperDiagonal[n-1+col-row]==0 && lowerDiagonal[col+row]==0){
// 			board[row][col] = 'Q';
// 			leftRow[row] = 1;
// 			upperDiagonal[n-1+col-row] = 1;
// 			lowerDiagonal[col+row] = 1;
// 			solve(col+1, board, ans, leftRow, lowerDiagonal, upperDiagonal,n);
// 			board[row][col] = '.';
// 			leftRow[row] = 0;
// 			upperDiagonal[n-1+col-row] = 0;
// 			lowerDiagonal[col+row] = 0;
// 		}
// 	}
// }

// void printBoard(vector<vector<string>> &ans){
// 	for(auto i:ans)
// 		for(auto j: i){
// 			cout<<j<<" "<<endl;
// 		}
// 		cout<<endl;
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	vector<vector<string>> ans;
// 	string s(n, '.');
// 	vector<string> board(n);
// 	for(int i=0;i<n;i++){
// 		board[i]=s;
// 	}

// 	vector<int> leftRow(n,0), lowerDiagonal(2*n-1,0), upperDiagonal(2*n-1,0);
// 	solve(0, board, ans, leftRow, lowerDiagonal, upperDiagonal,n);
// 	printBoard(ans);
// }