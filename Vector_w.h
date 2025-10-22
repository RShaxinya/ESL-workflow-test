#ifndef VECTOR_W
#degine VECTOR_W

typedef struct{
double x;
double y;
double z;
}Vector;

Vector add(Vector a,Vector b);
Vector sub(Vector a,Vector b);
double dot(Vector a,Vector b);

#endif
