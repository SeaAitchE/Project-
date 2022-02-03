#include <stdio.h>
#include <math.h>
int main()
{
    long long int num, temp = 0, temp1 = 0;
    int sum1 = 0, sum2 = 0, a = 1, b = 0, n = 0;
    printf("./credit\n");
    while (1)
    {
        printf("Number : ");
        scanf("%lld", &num);
        temp = num;
        temp1 = num;
        while (temp > 0)
        {
            n++;
            temp /= 10;
        }
        if (n <= 16)
            break;
        else
            printf("fooo\n");
    }
    int t = n - n / 2;
    int even[n / 2], odd[t];
    for (int i = 0; i < n / 2; i++)
    {
        temp = num / pow(10, a);
        even[i] = temp % 10 * 2;
        a += 2;
        if (even[i] >= 10)
            even[i] = even[i] - 9;
        sum1 += even[i];
    }
    for (int i = 0; i < t; i++)
    {
        temp = num / pow(10, b);
        odd[i] = temp % 10;
        b += 2;
        sum2 += odd[i];
    }
    int sum;
    sum = sum1 + sum2;
    int array[n];
    for (int i = 0; temp1 > 0; i++)
    {
        array[i] = temp1 % 10;
        temp1 /= 10;
    }
    int santa, balls;
    santa = array[n - 1] + array[n - 2];
    balls = array[n - 1];
    if (sum % 10 == 0)
    {
        if (sum % 10 == 0)
        {
            if (n == 15 && (santa == 34 || santa == 37))
            {
                printf("American Express\n");
            }
            else if (n == 16 && ((santa == 51) || temp1 / pow(10, 14) == 52 || santa == 53 || santa == 54 || santa == 55))
            {
                printf("MASTERCARD\n");
            }
            else if ((n == 13 && balls == 4) || (n == 16 && balls == 4))
            {
                printf("VISA\n");
            }
            else
                printf("INVALID\n");
        }
        else
            printf("fooo\n");
    }

    return 0;
}