#include <stdio.h>

int main()
{
  int array[100],n,c,d,swap;

  printf("Enter number of elements\n");
  scanf("%d",&n);

  printf("Enter %d integers\n", n);

  for (c=0;c<n;c++)
    scanf("%d", &array[c]);

  for (c=0;c<n-1;c++)
  {
    for (d=0; d<n-c-1;d++)
    {
      if (array[d]>array[d+1])
      {
        swap=array[d];
        array[d]=array[d+1];
        array[d+1]=swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c<n; c++)
  {
      printf("%d ", array[c]);
  }int max=array[c-1];
  for(int i=c-1;i<0;i--)
  {
      int q=0;
      if(array[i]>max)
      {
          max=array[i];
          q=1;
      }   if(q==1)
      break;
}
    printf("Second Largest number is %i",max);
  return 0;
}