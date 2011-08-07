
#include <stdio.h>

extern "C"
{
    class A
    {
        int m_i;

    public:
        A()
        {
            m_i = 0;
        }

        operator int()
        {
            return m_i++ & 1;
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
