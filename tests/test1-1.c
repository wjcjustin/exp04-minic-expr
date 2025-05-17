int main()
{
    int a, b, c;
    a = 1 > 2;
    b = 2 < 3;
    c = 3 == 4;
    if (a)
        a = 11;
    else
        a = 22;
    if (1)
        b = c;
    return a;
}