#include <stdio.h>
#include <math.h>

int main() {
  int x, y, n, mx, my;
  scanf("%d %d %d", &x, &y, &n);  
  
  for(int i=1; i<n+1; i++){
  	mx = i%x;
  	my = i%y;

  	if (mx == 0 && my == 0) {
	    printf("%s\n", "FizzBuzz");
	} else if (mx == 0) {
	  	printf("%s\n", "Fizz");
	} else if (my == 0) {
	  	printf("%s\n", "Buzz");
	} else {
		printf("%d\n", i);
	}
  }
  return 0;
}