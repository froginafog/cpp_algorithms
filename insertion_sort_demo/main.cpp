//insertion sort
#include <stdio.h>

void swap(int * n1, int * n2);

//compare each ith element with the (i-1)th element
int main()
{
	int a[] = {5, 3, 6, 1, 4, 2};
	int i;
	int j;
	int num_items = sizeof(a)/sizeof(a[0]);

    printf("a = ");
    for(int k = 0; k < num_items; k++)
    {
        printf("%6d", a[k]);
    }
    printf("\n\n------------------------------------------------\n\n");

	for(i = 1; i < num_items; i++)
	{
        printf("i = %d:\n", i);
		j = i;
		while(j > 0 && a[j-1] > a[j])
		{
            //--------------------------------------------
            printf("a = ");
            for(int k = 0; k < num_items; k++)
            {
                if(k == j)
                {
                    printf(" <-> %d", a[k]);
                }
                else
                {
                    printf("%6d", a[k]);
                }
            }
            printf("\n");
            //--------------------------------------------
            swap(&a[j], &a[j-1]);
            //--------------------------------------------
            printf("a = ");
            for(int k = 0; k < num_items; k++)
            {
                printf("%6d", a[k]);
            }
            printf("\n");
            //--------------------------------------------
            j--;
		}
		printf("\n------------------------------------------------\n\n");
	}

    printf("a = ");
    for(int k = 0; k < num_items; k++)
    {

        printf("%6d", a[k]);
    }
    printf("\n");
}

void swap(int * n1, int * n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

/*
a =      5     3     6     1     4     2

------------------------------------------------

i = 1:
a =      5 <-> 3     6     1     4     2
a =      3     5     6     1     4     2

------------------------------------------------

i = 2:

------------------------------------------------

i = 3:
a =      3     5     6 <-> 1     4     2
a =      3     5     1     6     4     2
a =      3     5 <-> 1     6     4     2
a =      3     1     5     6     4     2
a =      3 <-> 1     5     6     4     2
a =      1     3     5     6     4     2

------------------------------------------------

i = 4:
a =      1     3     5     6 <-> 4     2
a =      1     3     5     4     6     2
a =      1     3     5 <-> 4     6     2
a =      1     3     4     5     6     2

------------------------------------------------

i = 5:
a =      1     3     4     5     6 <-> 2
a =      1     3     4     5     2     6
a =      1     3     4     5 <-> 2     6
a =      1     3     4     2     5     6
a =      1     3     4 <-> 2     5     6
a =      1     3     2     4     5     6
a =      1     3 <-> 2     4     5     6
a =      1     2     3     4     5     6

------------------------------------------------

a =      1     2     3     4     5     6
*/
