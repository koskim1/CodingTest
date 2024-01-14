#include <bits/stdc++.h>
using namespace std;

/*
인접행렬과 인접리스트의 차이

공간복잡도
- 인접행렬 : O(V^2)
- 인접리스트 : O(V+E)

// 인접행렬
bool adj[V][V];
// 인접리스트
vector<int> adj[V];

시간복잡도 : 간선 한개 찾기
- 인접행렬 : O(1)
- 인접리스트 : O(V)

// 인접행렬
for(int i=0; i<V; i++){
	for(int j=0; j<V; j++){
		if(a[i][j]){
		}
	}
}
// 인접리스트
for(int j=0; j<adj[i].size(); j++){
	cout << adj[i][j] << " ";
}

시간복잡도 : 모든 간선찾기
- 인접행렬 : O(V^2)
- 인접리스트 : O(V+E)

그래프가 희소할 때는 인접리스트, 조밀할때는 인접행렬이 좋다.

- 보통은 인접리스트를 스면 됨. 문제에서 sparse한 그래프가 많이 나옴.
- 다만, 문제 또는 코딩인터뷰에서 인접행렬로 주어진다면 그대로 인접행렬로 푸는 것이 좋다.
*/




int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


}