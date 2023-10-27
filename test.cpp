#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
string a[] = { "박신희", "김형준", "최승원" };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        mp.insert({ a[i], i + 1 });;
        mp[a[i]] = i + 1;
    }
    /*
        mp에 해당키가 없다면 0으로 초기화되어 할당됨.(int의 경우)
        만약 mp에 해당 키가 없는지 확인하고 싶고
        초깃값으로 0으로 할당되지 않아야 되는 상황이라면
        find를 써야함
    */
    cout << mp["kundol"] << "\n";
    //대괄호로 수정가능.
    mp["kundol"] = 4;
    cout << mp.size() << "\n";
    cout << mp["kundol"] << "\n";
    mp.erase("kundol");
    auto it = mp.find("kundol");
    if (it == mp.end()) {
        cout << "못찾겠네 꾀꼬리\n";
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
### 맵을 쓸 때 주의할 점

다음 코드처럼 map의 경우 해당 인덱스에 참조만 해도 맵의 요소가 생기게 됩니다.

만약 map에 해당 키에 해당하는 요소가 없다면 0 또는 빈문자열로 초기화가 되어 할당됩니다. (int는 0, char은 빈 문자열로 할당됩니다.)

할당하고 싶지 않아돟 대괄호[]로 참조할경우 자동으로 요소가 추가가 되기 때문에 조심해야 합니다.

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
맵에 요소가 있는지 없는지를 확인하고 맵에 요소를 할당하는 로직은 다음처럼 구축할 수 있습니다.

cpp
#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
map<string, string> mp2;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // if(mp에 1이라는 key에 요소가 있나?)
    if (mp[1] == 0) {
        mp[1] = 2;
    }
    for (auto i : mp) cout << i.first << " " << i.second;

}
/*
* 1 2


** 다만 앞의 코드는 문제에서 해당 키에 0이 아닌 값이 들어갈 때 활용이 가능합니다.* *

이미 if문 안에 mp[1] == 0을 해버린 순간 mp[1] = 0이 할당 되어버리기 때문입니다.
*/


/*
만약 문제에서 0이 들어가는 것을 비교하기 귀찮다면 다음 코드를 기반으로 작성하면 됩니다.

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
