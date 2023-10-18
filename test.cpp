#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    /*
    memcpy()�� �Ȱ��� ������ �ϴ� �Լ���. vector�� Array ��� ���� �� ����
    copy (InputIterator first, InputIterator last, OutputIterator result)

    ���� vector v�� ret���ٰ� �ű�� �ʹٸ� ������ ���� �ϸ� ��.
    v : ������ϴ� vector / ret : �����ϴ� vector
    copy(v.begin(), v.end(), ret.begin());

    */
    //------------------------------------------------------------------------------------------
    // vector<> ����
    //vector<int> v{ 1, 2, 3 };
    //vector<int> ret(3);
    //copy(v.begin(), v.end(), ret.begin());
    //cout << ret[1] << "\n";
    //ret[1] = 100;
    //cout << ret[1] << "\n";
    //cout << v[1] << "\n";
    // vector������ �������簡 �ż� ret�� �����ϴ��� v���� �ƹ��� ������ ����


    //------------------------------------------------------------------------------------------
    // array() ���� ( ���� ���� )
    int v[3] = { 1,2,3 };
    int ret[3];
    copy(v, v + 3, ret);
    cout << ret[1] << "\n";
    ret[1] = 100;
    cout << ret[1] << "\n";
    cout << v[1] << "\n";

    /*
    �̷ν� copy()�� vector�� Array�� ��� �������� �ΰ��� �� �� �ְ�
    memcpy()�� Array������ �������� vector������ ��������(������ ������)�� �̷������.
    */
}
