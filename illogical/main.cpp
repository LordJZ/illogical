
#include <stdio.h>

extern "C"
{
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

    class B
    {
    public:
        B(__int64)
        {
        }

        int operator!=(B other)
        {
            return 1;
        }
    };

    #define ILLOGICAL(EXPR) { if (EXPR) printf("ILLOGICAL: true == " #EXPR "\n"); else printf("logical: false == " #EXPR "\n"); }

    int main()
    {
    #define int B

        A a;
        ILLOGICAL(!a && a);
        ILLOGICAL(int(42) != int(42));

        getchar();
        return 0;
    }
}
