#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 0, min = 0, max = 0, k = 0, num = 0, i = 0, j = 0;
  double ran = 0.0, a = 0.0, sum = 0.0;
  double* mas1;
  double* mas2;
  double* mas3;
  printf("enter elements ");
  scanf_s("%d", &n);
  mas1 = (double*)malloc(n * sizeof(double)); 
  mas2 = (double*)malloc(n * sizeof(double));
  mas3 = (double*)malloc(n * sizeof(double));
  printf("enter min ");
  scanf_s("%d", &min);
  printf("enter max ");
  scanf_s("%d", &max);
  for (i = 1; i <= n; i++)
  {
    mas3[i] = 0 + i;
	mas1[i] = (double)rand() / RAND_MAX * ((double)max - (double)min) + (double)min;
    a = ((double)mas1[i] - (int)mas1[i]) * 1000000;
    printf("ran = %lf, num = %.0lf, drob = %.0lf\n", (double)mas1[i], mas3[i], a);
  }
  
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
  	if ((int)mas2[j] == i)
  	  mas2[j] = 0;
    }
  }
  for (i = 1; i <= n; i++)
  {
    if (mas2[i] == 0)
      sum = sum - mas1[i];
    else
      sum = sum + mas1[i];
  }
  printf("sum = %lf", sum);
 
  free(mas1);
  free(mas2);
  return 0;
}
