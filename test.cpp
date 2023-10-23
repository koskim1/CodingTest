#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 1; i <= 10; i++) v.push_back(i);
    for (int a : v) cout << a << " ";
    cout << "\n";
    v.pop_back();

    for (int a : v)cout << a << " ";
    cout << "\n";

    v.erase(v.begin(), v.begin() + 3);
    
    for (int a : v)cout << a << " ";
    cout << "\n";

    auto a = find(v.begin(), v.end(), 100);
    if (a == v.end()) cout << "not found" << "\n";

    fill(v.begin(), v.end(), 10);
    for (int a : v)cout << a << " ";
    cout << "\n";
    v.clear();
    cout << "�ƹ��͵� ������?\n";
    for (int a : v)cout << a << " ";    // ���� �ƹ��͵� ����
    cout << "\n";

    /*
        push_back()
        : vector�� �ڿ������� ��Ҹ� ���մϴ�. ����� push_back()�� ���� ����� �ϴ�
        emplace_back()�� �ֽ��ϴ�.

        pop_back()
        vector�� �� ���� ��Ҹ� ����ϴ�.

        erase()
        erase�� �� ��Ҹ� ����ٸ� erase(��ġ)�� �������� [from. to) �� ����� �ʹٸ�
        erase[from,to]�� ���� ����ϴ�.

        clear()
        vector�� ��� ��Ҹ� ����ϴ�.

        fill(from, to , value)
        vector���� value���� �Ҵ��ϰ� �ʹٸ� fill�� �Ἥ ä��ϴ�. ���� �̸� ~~ �� ������
        �ʱ�ȭ��� �θ��ϴ�. [from, to)������ value�� �ʱ�ȭ �ؾ��մϴ�.

        ������� for ����
        C++11���� ������� for������ �߰��Ǿ �̸� �� �� �ֽ��ϴ�. vector�� �� �� �ִ� ����
        �ƴϰ� ��ȸ�� �� �ִ� �����̳��� vector, Array, map � ��밡���մϴ�.
        ������ for(<�ش� �����̳ʿ� ����ִ� Ÿ��> �ӽú����� : �����̳� )

        ���ε��
        for(int a : v )
        �̴�
        for(int a = 0 ; a < v.size(); a++) v[a] �� ���� �ǹ��Դϴ�.
        
        vector�� �����Ҵ�
        vector��� �ؼ� ������ ũ�Ⱑ 0�� �� vector�� ����� �����Ҵ����� ��Ҹ� �߰��ϴ� ���� �ƴ�.
        ���ʿ� ũ�⸦ ���س��ų� �ش� ũ�⿡ ���� � ������ �ʱ�ȭ �س��� ������ ���� ����.
    */

    // 2���� �迭
    // vector�� �̿��� 2���� �迭�� ����� 3���� ����Դϴ�.
    vector<vector<int>> v;
    vector<vector<int>> v2(10, vector<int>(10, 0));
    vector<int> v3[10];

    for (int i = 0; i < 10; i++) {
        vector<int> temp;
        v.push_back(temp);
    }
}