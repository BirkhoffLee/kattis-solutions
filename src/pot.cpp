#include <stdio.h>
#include <math.h>


int main() {
  int count, total=0;
  scanf("%d", &count);  
  
  for(int i=0; i<count; i++){
  	int num;
  	scanf("%d", &num);
  	int opow = num%10;
  	total += pow(round(num/10),opow);
  }

  printf("%d", total);
  return 0;
}

double round(double d)
{
  return floor(d + 0.5);
}
