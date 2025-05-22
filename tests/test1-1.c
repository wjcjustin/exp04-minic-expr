int defn(int a[8][5][6], int b[][99][88][77])
{
    return a[1] + b + 4;
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