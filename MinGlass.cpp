
int solution(int N, int K)
{
    int div = N;
    int count = 0;
    while (1)
    {
        int qu = K / div;
        if (qu > 0)
        {
            K = K - div;
            count++;
        }
        div--;
        if (div < 1 || K < 1)
            break;
    }
    if (K >= 1)
        return -1;
    else
        return count;
}
