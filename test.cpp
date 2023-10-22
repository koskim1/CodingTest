#include <bits/stdc++.h>
using namespace std;

/*
    정렬된 배열에서 어떤 값이 나오는 첫번째 지점 또는 초과하는 지점의 위치를 찾으려면 어케할까
    또한 이분탐색을 쉽게 함수로 구현하려면 어떻게 해야할까?

    lower_bound()와 upper_bound()는 이를 쉽게 해주는 함수이다.


*/

typedef long long ll;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* 
    vector<int> a{ 1,2,3,3,3,4 };
    cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << "\n";
    cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << "\n";
    */

    /*
        a.begin()은 왜 뺴는 걸까요?
        lower_bound(), upper_bound()는 해당 자료형으로부터 이터레이터를 반환합니다.
        따라서 몇번째를 추려내려면 이 이터레이터에서 begin()을 빼주어야 합니다.


        a.begin()을 빼는 이유는 인덱스를 계산하기 위해서입니다.

        // ChatGPT답변
        lower_bound 또는 upper_bound 함수가 반환하는 값은 요소의 위치를 나타내는 반복자(iterator)입니다.
        이 반복자는 컨테이너(여기서는 벡터) 내에서의 상대적인 위치를 가리키는데, 
        이 위치를 인덱스로 사용하려면 벡터의 시작 위치(a.begin())를 빼야 합니다. 
        인덱스는 보통 0에서 시작하며, 컨테이너 내 요소의 상대적인 위치를 나타냅니다.
    */

    // -----------------------------------------------------------------------

    //vector<int> a{ 1, 2, 3, 3, 3, 4 };
    //cout << &*lower_bound(a.begin(), a.end(), 3) << "\n";
    //cout << &*a.begin() << "\n";
    //cout << &*(a.begin() + 1) << "\n";

    /*
        lower_bound()로 나오는 이터레이터가 어떤 값을 갖는지 확인해봤다!
        바로 확인은 안되고 &*를 통해 확인할 수 있습니다.

        이런식으로 어떤 주소값을 반환하는 것을 알 수 있습니다.
        
        주소값끼리 -하게 되면 해당 주소값에서 몇번째에 이 요소가 들어있음을 반환하게 됩니다.

    */

    // ---------------------------------------------------------------------------
    // 다음 코드를 통해 lower_bound가 가리키는 요소를 출력할 수도 있습니다.

    vector<int> a{ 1,2,3,3,4,100 };
    cout << *lower_bound(a.begin(), a.end(), 100) << "\n";

    // 또한 이를 응용해서 숫자 3이 몇개 들어가 있는지도 확인할 수 있죠.
    cout << upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3) << "\n";

}