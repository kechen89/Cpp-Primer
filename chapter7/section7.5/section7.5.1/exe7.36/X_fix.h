#ifndef X_FIX_H
#define X_FIX_H

struct X{
    X (int i, int j): base(i), rem(base % j){}  // warning: field 'base' is uninitialized when used here [-Wuninitialized]
    int base, rem;
};

#endif

