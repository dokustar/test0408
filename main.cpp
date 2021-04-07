#include <iostream>
#include "dongha.h"

using namespace std;

int main() {
    cout << "WOW!" << endl;
    Dongha* me = new Dongha;

    me->setA(5);
    cout << me->getA() << endl;
    return 0;
}
