#include "stdafx.h"
#include <iostream>

using namespace std;

struct Human
{
    virtual void show() {}
};

struct Mom
{
    virtual void show() {}
};

struct Dad
{
    virtual void show() {}
};

struct Child : public Mom, public Dad
{
    Child()
    {
        Mom::show();
        Dad::show();
    }
};

int main()
{
    return 0;
}