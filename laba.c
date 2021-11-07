#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 0, min = 0, max = 0, i = 0, j = 0;
  double ran = 0.0, a = 0.0, sum = 0.0;
  double* masNum;
  double* masSum;
  printf("enter elements ");
  scanf_s("%d", &n);
  printf("enter min ");
  scanf_s("%d", &min);
  printf("enter max ");
  scanf_s("%d", &max);
  masNum = (double*)malloc(n * sizeof(double));
  masSum = (double*)malloc(n * sizeof(double));
  for (i = 1; i <= n; i++)
  {

    masSum[i] = (double)rand() / RAND_MAX * ((double)max - (double)min) + (double)min;
    a = ((double)masSum[i] - (int)masSum[i]) * 1000000;

  }


  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if ((int)masNum[j] == i)
        masNum[j] = 0;
    }
  }
  for (i = 1; i <= n; i++)
  {
    if (masNum[i] == 0)
      sum = sum - masSum[i];
    else
      sum = sum + masSum[i];
  }
  printf("sum = %lf", sum);

  free(masSum);
  free(masNum);
  return 0;
}
