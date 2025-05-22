int faaa()
{
    return 10;
}

int main()
{
    int a = 1;
    if (!!faaa() && 1 != 2) {
        a = 2;
    }
    return a;
}
