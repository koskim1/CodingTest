#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
string a[] = { "�ڽ���", "������", "�ֽ¿�" };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        mp.insert({ a[i], i + 1 });;
        mp[a[i]] = i + 1;
    }
    /*
        mp�� �ش�Ű�� ���ٸ� 0���� �ʱ�ȭ�Ǿ� �Ҵ��.(int�� ���)
        ���� mp�� �ش� Ű�� ������ Ȯ���ϰ� �Ͱ�
        �ʱ갪���� 0���� �Ҵ���� �ʾƾ� �Ǵ� ��Ȳ�̶��
        find�� �����
    */
    cout << mp["kundol"] << "\n";
    //���ȣ�� ��������.
    mp["kundol"] = 4;
    cout << mp.size() << "\n";
    cout << mp["kundol"] << "\n";
    mp.erase("kundol");
    auto it = mp.find("kundol");
    if (it == mp.end()) {
        cout << "��ã�ڳ� �Ҳ���\n";
    }
    mp["kundol"] = 100;

    it = mp.find("kundol");
    if (it != mp.end()) {
        cout << (*it).first << " : " << (*it).second << '\n';
    }
    for (auto it : mp) {
        cout << (it).first << " : " << (it).second << "\n";
    }
    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " : " << (*it).second << "\n";
    }
    mp.clear();
}

/*
### ���� �� �� ������ ��

���� �ڵ�ó�� map�� ��� �ش� �ε����� ������ �ص� ���� ��Ұ� ����� �˴ϴ�.

���� map�� �ش� Ű�� �ش��ϴ� ��Ұ� ���ٸ� 0 �Ǵ� ���ڿ��� �ʱ�ȭ�� �Ǿ� �Ҵ�˴ϴ�. (int�� 0, char�� �� ���ڿ��� �Ҵ�˴ϴ�.)

�Ҵ��ϰ� ���� �ʾƉ� ���ȣ[]�� �����Ұ�� �ڵ����� ��Ұ� �߰��� �Ǳ� ������ �����ؾ� �մϴ�.

```cpp
#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
map<string, string> mp2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << mp[1] << '\n';
    cout << mp2["aaa"] << '\n';
    for (auto i : mp) cout << i.first << " " << i.second;
    cout << "\n";
    for (auto i : mp2) cout << i.first << " " << i.second;
}
/*
* 0
*
* 1 0
* aaa
*/

/*
�ʿ� ��Ұ� �ִ��� �������� Ȯ���ϰ� �ʿ� ��Ҹ� �Ҵ��ϴ� ������ ����ó�� ������ �� �ֽ��ϴ�.

cpp
#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
map<string, string> mp2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // if(mp�� 1�̶�� key�� ��Ұ� �ֳ�?)
    if (mp[1] == 0) {
        mp[1] = 2;
    }
    for (auto i : mp) cout << i.first << " " << i.second;

}
/*
* 1 2


** �ٸ� ���� �ڵ�� �������� �ش� Ű�� 0�� �ƴ� ���� �� �� Ȱ���� �����մϴ�.* *

�̹� if�� �ȿ� mp[1] == 0�� �ع��� ���� mp[1] = 0�� �Ҵ� �Ǿ������ �����Դϴ�.
*/


/*
���� �������� 0�� ���� ���� ���ϱ� �����ٸ� ���� �ڵ带 ������� �ۼ��ϸ� �˴ϴ�.

```cpp
#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
map<string, string> mp2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    if (mp.find(1) == mp.end()) {
        mp[1] = 2;
    }
    for (auto i : mp) cout << i.first << " " << i.second;
}
/*
* 1 2
*/
