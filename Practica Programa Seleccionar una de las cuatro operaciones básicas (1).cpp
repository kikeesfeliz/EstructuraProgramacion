//flores hernandez jesus javier

#include "stdio.h"
main()
{
      float n1,n2,c;
      int op;
      printf ("primer numero");
      scanf ("%d", &n1);
      printf ("segundo numero");
      scanf("%d", &n2);
      puts("1. suma");
      puts("2. resta");
      puts("3. multiplicacion");
      puts("4. divicion");
      printf("selecciona una aopcion ");
      scanf("%d", &op);
      
      switch (op)
      {
                case 1 : c = n1 + n2;
                break;
                case 2 : c = n1 - n2;
                break;
                case 3 : c = n1 * n2;
                break;
                case 4 : c = n1 / n2;
                break;
            
       }
                printf("\nresultado %10.2i", c);
}
      
