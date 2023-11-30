#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int nameWidth = 10;
    const int ageWidth = 5;
    const int smallWordWidth = 20;

    cout << setw(10) << "Name" << setw(5) << "Age" << setw(20) << "Legnth test" << "\n";
    cout << setw(10) << "Brian" << setw(5) << "25" << setw(20) << "Hello setw Test" << "\n";
    cout << setw(10) << "Alex" << setw(5) << "29" << setw(20) << "Let's go Spurs!" << "\n";
    cout << setw(nameWidth) << "김범준" << setw(ageWidth) << "75" << setw(smallWordWidth) << "반갑다 setw Test" << "\n";
    cout << setw(nameWidth) << "김형준" << setw(ageWidth) << "100" << setw(smallWordWidth) << "안녕setw Test" << "\n";


}
/*
      Name  Age         Legnth test
     Brian   25     Hello setw Test
      Alex   29     Let's go Spurs!
    김범준   75    반갑다 setw Test
    김형준  100       안녕setw Test

    std::setw(공백숫자) => 깔끔하게 정렬되게해서 좋은 기능인것같다.
*/