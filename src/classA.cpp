#include "classA.hpp"

int classA::get() {
    return _a;
}

void classA::set(int x) {
    _a = x;
}

void classA::throwable() {}
