#include <stdio.h>
#include "pair.h"

int main() 
{
    TPair<int, int> p1(3, 4);
    TPair<int, int> p2(0, 3);
    if (p1>p2)
        p1.swap(p2);
    if (p1 == p2)
        p2 = p1;
    return 0;
}