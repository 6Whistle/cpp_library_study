#include <iostream>
#include <utility>
#include <vector>

int main(void){
    std::vector<int> myBigVec(1000000, 2011);
    
    /* Copy Semantics */
    std::vector<int> myVec1 = myBigVec;
    
    /* Move Semantics */
    //기존 RValue Reference
    std::vector<int> myVec2 = static_cast<std::remove_reference<decltype(myBigVec)>::type&&>(myBigVec);
    //std::move()
    std::vector<int> myVec3 = std::move(myBigVec);
}
