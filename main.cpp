#include <iostream>
#include "mana.h"

int main() {
//    mana m(50);
//    mana copy(m);
//    m.showValues();
//    copy.showValues();
    manaDeep m1(3);
    manaDeep copyM(3, m1);
    manaShallow m2(49);
    manaShallow copyM2(49,m2);
    m1.showValues();
    std::cout << "---------" << std::endl;
    copyM.showValues();
    std::cout << " " << std::endl;
    m2.showValues();
    std::cout << "---------" << std::endl;
    copyM2.showValues();
    // 1 = true
    // 0 = false;
    std::cout << "---------" << std::endl;
    std::cout << "Identical Deep? " << (m1 == copyM) << "\n";
    std::cout << "Identical Shallow? " << (m2 == copyM2);


//
//    std::cout << "Deep" << std::endl;
//    std::cout << "true or false: " << (m2 == copyM2);
}
