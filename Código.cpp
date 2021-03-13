#include <stdio.h>

int main()
{ int a[10], b[10], INDICE, c[20], IMPAR=1, PAR=2;
 for (INDICE=1; INDICE<=10; INDICE++)
 { printf("valor vetor a(%d): ", INDICE);
 scanf("%d",&a[INDICE]);
 c[IMPAR]=a[INDICE];
 IMPAR=IMPAR+2;
 }
 for (INDICE=1;INDICE<=10; INDICE++)
 { printf("valor vetor b(%d): ", INDICE);
 scanf("%d",&b[INDICE]);
 c[PAR]=b[INDICE];
 PAR=PAR+2;
 }
 INDICE=1;
 IMPAR=1;
 PAR=2;
 for(INDICE=1;INDICE<=10; INDICE++) {
       printf("\n vetor c(%d) = %d", IMPAR, c[IMPAR]);
       printf("\n vetor c(%d) = %d", PAR, c[PAR]);
       IMPAR=IMPAR+2;
       PAR=PAR+2;
      }
 return(0);
}
