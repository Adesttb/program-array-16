#include <stdio.h>
main()
{
                int y;
                int hitung=0;
                int x[0];
                for(y=0;y<5;y++)
                {
                    hitung+=y;
                    x[y]=hitung;
                    printf("%3d - %3d\n",y,x[y]);
                }
    return 0;
}
