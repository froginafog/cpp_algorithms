//selection sort
#include <stdio.h>

void swap(int * n1, int * n2);

int main()
{
	int a[] = {5, 3, 6, 1, 4, 2};
	int i;
	int j;
	int num_items = sizeof(a)/sizeof(a[0]);
	int j_min;

    printf("a = ");
    for(int k = 0; k < num_items; k++)
    {
        printf("   %d   ", a[k]);
    }
    printf("\n------------------------------------------------\n");

    printf("notation:\n");
    printf("i: (), j: [], j_min: {}");

    printf("\n------------------------------------------------\n");

	for(i = 0; i < num_items - 1; i++)
	{
        j_min = i;
        for(j = i + 1; j < num_items; j++)
        {
            printf("i = %d, j = %d, j_min = %d\n", i, j, j_min);
            printf("a = ");
            for(int k = 0; k < num_items; k++)
            {
                if(k == i && k == j_min)
                {
                    printf(" {(%d)} ", a[k]);
                    continue;
                }
                if(k == i && k != j_min)
                {
                    printf("  (%d)  ", a[k]);
                    continue;
                }
                if(k == j_min && k != i)
                {
                    printf("  {%d}  ", a[k]);
                    continue;
                }
                if(k == j)
                {
                    printf("  [%d]  ", a[k]);
                    continue;
                }
                printf("   %d   ", a[k]);

            }

            printf("\n");

            if(a[j] < a[j_min])
            {
                printf("%d < %d is true", a[j], a[j_min]);
            }
            else
            {
                printf("%d < %d is false", a[j], a[j_min]);
            }

            printf("\n------------------------------------------------\n");

            if(a[j] < a[j_min])
            {
                j_min = j;
            }
        }
        if(j_min != i)
        {
            swap(&a[i], &a[j_min]);
            printf("swap(a[%d], a[%d]) = ", i, j_min);
            printf("swap(%d, %d)\n", a[i], a[j_min]);
        }
        printf("a = ");
        for(int k = 0; k < num_items; k++)
        {
            printf("   %d   ", a[k]);
        }
        printf("\n------------------------------------------------\n");
	}
}

void swap(int * n1, int * n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

/*
a =   5  3  6  1  4  2
a =   1  2  3  4  5  6
*/

