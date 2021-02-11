#include<stdio.h>

int
main()

{
    int vet[5];
    int *p, ax, n, j, i, cont;
    p = vet;
    n = 5;
    cont = 0;
    /*
    printf("%d \n",*p);
    printf("%d \n",*(p+1));
    printf("%d \n",*(p+2));
    printf("%d \n",*(p+3));
    printf("%d \n",*(p+4));
    printf("%d \n",*(p+5));
    */
    while (cont<5)
    {
        printf("Digite o %d numero:\n", cont+1);
        scanf("%d",&vet[cont]);

        cont = cont+1;
    }




    for(i= 0; i<n; i++)
    {
        for (j = 0; j < n-1; j++)
        {
            if (*(p+j)>(*(p+j+1)))
            {
                ax = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = ax;
            }
        }

    }
    printf("\n");
    for(i= 0; i<n; i++)
    {
               printf("%d\n", vet[i] );


    }



}
