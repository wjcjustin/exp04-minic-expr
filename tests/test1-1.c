int get_one()
{
    return 1;
}

int deepWhileBr()
{
    int a, b, c;
    a = 2;
    b = 2;
    c = a + b;
    while (c < 75) {
        int d;
        d = 42;
        if (c < 100) {
            c = c + d;
            if (c > 99) {
                int e;
                e = d * 2;
                if (get_one() == 1) {
                    c = e * 2;
                }
            }
        }
    }
    return (c);
}

// void putint(int k);

int main()
{
    int p;
    p = 2;
    p = deepWhileBr();
    putint(p);
    return 0;
}