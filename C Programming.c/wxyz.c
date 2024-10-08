#include <stdio.h>
main()
{
        int n, data[100], i, j, temp;
        printf("Enter your input for n:");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
                scanf("%d", &data[i]);
        for (i = 0; i < n-1; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                        if (data[i] > data[j])
                        {
                                temp = data[i];
                                data[i] = data[j];
                                data[j] = temp;
                        }
                }
        }

