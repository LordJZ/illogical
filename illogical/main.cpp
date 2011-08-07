
#include <cstdio>

class A
{
public:
    int operator!()
    {
        //printf("op! called\n");
        return 1;
    }

    operator int()
    {
        //printf("op int called\n");
        return 1;
    }
};

#define ILLOGICAL(EXPR) { if (EXPR) printf("ILLOGICAL: true == " #EXPR ); else printf("logical: false == " #EXPR); }

int main()
{
    A a;
    ILLOGICAL(!a && a);

    getchar();
}
