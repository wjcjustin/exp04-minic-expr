int defn(int a, int b)
{
    return a + b + 4;
}
int garr[4][5];
int garr2[7];
int main()
{
    int a, b[10][4][6], c = 1;
    a = 2;
    b[1][2][3] = b[1][1][1] + 1;
    a = defn(a[1][1], b[2][3][4]) + b[2][5][4] - garr2[0];

    return a;
}