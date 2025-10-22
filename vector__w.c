#include "vector_w.h"

Vector add(Vector a, Vector b){
Vector result  = (a.x+b.x,a.y+b.y,a.z+b.z);
return result ;
}
Vector sub(Vector a, Vector b){
Vector result = (a.x-b.x,a.y-b.y,a.z-b.z)
return result ;
}
double dot(Vector a, Vector b,){
return a.x*b.x+a.y*b.y+a.z*b.z;
}
Vector cross (Vector a, Vector b){ 
Vector result = {a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x};
return result;
}
