#include "stdio.h"

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,size_t len) {
  size_t i;
  for( i=0;i<len;i++)
  printf("%.2x",start[i]);
  printf("\n");
}
void show_int(int x) {
  /* code */
  show_bytes((byte_pointer) &x,sizeof(int));
}

void show_float(float x/* arguments */) {
  /* code */
  show_bytes((byte_pointer) &x,sizeof(float));
}
void show_pointer(void *x){
  show_bytes( (byte_pointer) &x,sizeof(void *) );
}

int main()
{
  short x=12345;
  short mx = -x;
  show_bytes((byte_pointer) &x,sizeof(short));
  show_bytes((byte_pointer) &mx,sizeof(short));
  return 0;
}
