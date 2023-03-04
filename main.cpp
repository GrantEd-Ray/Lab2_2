#include <iostream>
#include "new_string.h"

void f(const mt::String& s)
{
    s.Print();
}

int main() {
    mt::String s1("Hello, world!");
    mt::String s2("test");

    s2 = s1;
    s2.Print();

    return 0;
}
