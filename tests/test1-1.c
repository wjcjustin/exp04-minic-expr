int main()
{
    int a;
    a = 1;
    while (a < 100) {
        a = a + 1;
        if (a == 70) {
            continue;
        }
        if (a > 90) {
            break;
        }
    }
}