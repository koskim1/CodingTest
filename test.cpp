#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1004];
int visited[1004];

// 왼쪽노드 -> 오른쪽노드 -> 자신
void postOrder(int here) {
    if (visited[here] == 0) {
        if (adj[here].size() == 1)postOrder(adj[here][0]);
        if (adj[here].size() == 2) {
            postOrder(adj[here][0]);
            postOrder(adj[here][1]);
        }
        visited[here] = 1;
        cout << here << ' ';
    }
}

// 자신 -> 왼쪽노드 -> 오른쪽노드
void preOrder(int here) {
    if (visited[here] == 0) {
        visited[here] = 1;
        cout << here << ' ';
        if (adj[here].size() == 1)preOrder(adj[here][0]);
        if (adj[here].size() == 2) {
            preOrder(adj[here][0]);
            preOrder(adj[here][1]);
        }
    }
}

// 왼쪽노드 -> 자신 -> 오른쪽 노드
void inOrder(int here) {
    if (visited[here] == 0) {
        if (adj[here].size() == 1) {
            inOrder(adj[here][0]);
            visited[here] = 1;
            cout << here << ' ';
        }
        else if (adj[here].size() == 2) {
            inOrder(adj[here][0]);

            visited[here] = 1;
            cout << here << ' ';

            inOrder(adj[here][1]);
        }
        else {
            visited[here] = 1;
            cout << here << ' ';
        }
    }
}

int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    int root = 1;
    cout << "\n 트리순회 : postOrder \n";
    postOrder(root); memset(visited, 0, sizeof(visited));
    cout << "\n 트리순회 : preOrder \n";
    preOrder(root); memset(visited, 0, sizeof(visited));
    cout << "\n 트리순회 : inOrder \n";
    inOrder(root);


}

/*
 트리순회 : postOrder
 4 5 2 3 1
 트리순회 : preOrder
 1 2 4 5 3
 트리순회 : inOrder
 4 2 5 1 3
*/