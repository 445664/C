
// //1) 
// #include <stdio.h >
//  int main()
//  {
//   int *p = 10;
//   printf(“ %u\n”, (unsigned int)p);
//   printf(“ %d\n”,*p); //this will give segmentation fault

//  }

//2)
 #include <stdio.h>
 int main()
 {
 int *ptr, a = 10;
 ptr = &a;
 *ptr += 1;
 printf("%d,%d\n", *ptr, a);
 }
