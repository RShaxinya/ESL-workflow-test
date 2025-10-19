#include "vector_w.h"

Vector add(Vector a, Vector b){
return (Vector)(a.x+b.x,a.y+b.y,a.z+b.z)
}
Vector sub(Vector a, Vector b){
return (Vector)(a.x-b.x,a.y-b.y,a.z-b.z)
}
double dot(Vector a, Vector b,){
return a.x*b.x+a.y*b.y+a.z*b.z;
}
