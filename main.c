#include <stdio.h>
#include "vector_w.h"

int main(){
Vector a=(1,2,3);
Vector b=(4,5,6);

Vector sum=add(a,b);
printf("%.2f %.2f %.2f\n",sum.x,sum.y,sum.z);

double d = dot(a,b);
printf("%.2f\n",d);

Vector diff = sub(a,b);
printf("%.2f %.2f %.2f\n", diff.x, diff.y, diff.z);

return 0;
}
