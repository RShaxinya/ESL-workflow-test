// Test application for 3D vectors
#include <stdio.h>
#include "Vector_w.h"

int main() {
    Vector3D a = {1, 2, 3};
    Vector3D b = {4, 5, 6};
    
    Vector3D sum = add(a, b);
    printf("Sum: (%.1f, %.1f, %.1f)\n", sum.x, sum.y, sum.z);
    
    float dot = dot_product(a, b);
    printf("Dot: %.1f\n", dot);
    
    return 0;
}
