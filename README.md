# Algorithms C++
# Minimum number of glasses required to fill K glasses in C++

## Question: There Are N Empty Glasses With A Capacity Of 1, 2, ..., N Liters (There Is Exactly One Glass Of Each Unique Capacity). You Want...

![image](https://github.com/vipinksaini/algorithms/assets/34277960/8ea09fee-190d-44e8-87d9-7f784753fc25)

Solution in C++:

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




