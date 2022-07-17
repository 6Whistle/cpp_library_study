#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(void){
    string first{"first"};
    string second{"second"};

    auto minInt = min({3, 1, 4, 100, -5});

    //std::min()
    cout << "std::min(2000, 2002): " << min(2000, 2002) << endl;
    cout << "std::min(first, second): " << min(first, second) << endl;  
    cout << "std::min({3, 1, 4, 100, -5}): " << min({3, 1, 4, 100, -5}) << endl;  
    cout << "std::min(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}): " 
    << min(-10, -5, [](int a, int b){return abs(a) < abs(b);}) << endl << endl;     //abs() 함수 : 절대값

    //std::max()
    cout << "std::max(2000, 2002): " << max(2000, 2002) << endl;
    cout << "std::max(first, second): " << max(first, second) << endl;  
    cout << "std::max({3, 1, 4, 100, -5}): " << max({3, 1, 4, 100, -5}) << endl;  
    cout << "std::max(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}): " 
    << max(-10, -5, [](int a, int b){return abs(a) < abs(b);}) << endl << endl;

    //std::minmax() :: pair 컨테이너에 결과 저장

    auto pairInt = minmax(2000, 2002);
    auto pairStr = minmax(first, second);
    auto pairSeq = minmax({3, 1, 4, 100, -5});
    auto pairAbs = minmax({3, 1, 4, 100, -5}, [](int a, int b){return abs(a) < abs(b);});   //람다식 활용

    cout << "pairInt: " << pairInt.first << ", " << pairInt.second << endl;
    cout << "pairStr: " << pairStr.first << ", " << pairStr.second << endl;
    cout << "pairSeq: " << pairSeq.first << ", " << pairSeq.second << endl;
    cout << "pairAbs: " << pairAbs.first << ", " << pairAbs.second << endl;

    return 0;
}