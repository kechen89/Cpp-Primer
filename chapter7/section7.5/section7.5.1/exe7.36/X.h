#ifndef X_H
#define X_H

struct X{
    X (int i, int j): base(i), rem(base % j){}  // warning: field 'base' is uninitialized when used here [-Wuninitialized]
    int rem, base;
};

#endif

