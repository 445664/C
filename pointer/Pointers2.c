#include<stdio.h>

// int *m()
// {
//     int *p = 2000;
//     return p;
// }

int main()
{
    int i = 20;
    void *p = &i;

    printf("%u\n", (int *)p);

    return 0;
}
// 1]
// void main()
// {
// 	int num= -555;
// 	char *p=&num;
// 	printf("%d\n",*p);
// }
//o/p:- -43



// 2]
// void main()
// {
// 	int num= -555;
// 	unsigned char *p=&num;
// 	printf("%d\n",*p);
// }
// o/p:- 213



// 3]
// void main()
// {
// 	short int num= -268;
// 	char *p=&num;
// 	printf("%d\n",*p);
// }
// o/p:- -12



// 4]
// void main()
// {
// 	short int num= -268;
// 	unsigned char *p=&num;
// 	printf("%d\n",*p);
// }
// o/p: 244



// 5]
// void main()
// {
// 	int num= -258;
// 	unsigned char *p=&num;
// 	printf("%d\n",*p+250);
// }
// o/p: 504



// 6]
// void main()
// {
// 	int num= -339;
// 	char *p=&num;
// 	printf("%d\n",*p+256);
// }
// o/p: 173



// 7]
// void main()
// {
// int num=400;
// char *p=&num;
// printf("%d\n",*p);
// printf("%o\n",*p);
// printf("%x\n",*p);
// }
// o/p: -112
//      37777777620
//      ffffff90



// 8]
// void main()
// {
// int num=400;
// unsigned char *p=&num;
// printf("%d\n",*p);
// printf("%o\n",*p);
// printf("%x\n",*p);
// }
// o/p: 144
//      220
//      90




// 9]
// void main()
// {
// short int num=0xABCD;
// char *p=&num;
// printf("%d\n",*p);
// printf("%o\n",*p);
// printf("%x\n",*p);
// }
// q/p: -51
//      37777777715
//      ffffffcd




// 10]
// void main()
// {
// short int num=0xABCD;
// unsigned char *p=&num;
// printf("%d\n",*p);
// printf("%o\n",*p);
// printf("%x\n",*p);
// }
// o/p: 205
//      315
//      cd



// 11]
// void main()
// {
// int num=0xABCDEF;
// short int *p=&num;
// *p=390;
// char *q=&num;
// *q=64;
// printf("%d\n",*p);
// printf("%d\n",*q);
// printf("%X\n",num);
// }
// o/p: 320
//      64
//      AB0140



// 12]
// void main()
// {
// int num=034567;
// char *p=&num;
// *p=300;
// printf("%d\n",*p);
// printf("%o\n",num);
// }
// o/p: 44
//      34454




// 13]
// void main()
// {
// int i=300,j=400,k=500,l;
// char *p=&i,*q=&j,*r=&k;
// l=(*p=256)&&(*q+=25)||(*r=384);
// printf("*p=%d *q=%d *r=%d l=%d\n",*p,*q,*r,l);
// }
// o/p: *p=0 *q=-112 *r=-128 l=1



// 14]
// void main()
// {
// int num= -300;
// unsigned char *p=&num;
// printf("%d\n",*p);
// printf("%o\n",*p);
// printf("%x\n",*p);
// }
// O/P: 212
//     324
//     d4


// 15]
// void main()
// {
// int num= -530;
// char *p=&num;
// printf("%d\n",*p);
// *p=*p^1<<7;
// printf("%d",*p);
// }
// O/P: -18
//      110



// 16]
// void main()
// {
// int num= -530;
// short int *p=&num;
// *p=*p>>5;
// char *q=&num;
// printf("%d\n",*q);
// }
// o/p: -17



// 17]
// void main()
// {
// int num= -530;
// short int *p = &num;
// *p=*p&0xff00;
// char *q = &num;
// printf("%d\n",*q);
// num=num>>8;
// printf("%d\n",*q);
// }
// o/p: 0
//      -3



// 18]
// void main()
// {
// short int num=420;
// char *p=&num;
// printf("%d",*(unsigned char *)p);
// }
// o/p: 164



// 19]
// void main()
// {
// int num=0;
// char *p=&num;
// *p|=0xAb;
// short int *q=&num;;
// *q+=250;
// printf("*p=%d *q=%d\n",*p,*q);
// }
// o/p: -91
//      421



// 20]
// void main()
// {
// int num=256;
// char *p=&num;
// *p=*p+0x287;
// printf("%d\n",*p);
// printf("%d\n",num);
// }
// o/p: -121
//       391



// 21]
// void main()
// {
// int num=451;
// short int *p=&num;
// *p=*p&0xF0F0;
// *p=*p>>8;
// *p|=32;
// char *q=&num;
// printf("%d\n",*p);
// printf("%d\n",*q);
// }
// o/p : 32
//       32



// 22]
// void main()
// {
// unsigned int num= -333;
// char *p=&num;
// printf("%d",*p);
// }
// o/p : -77




// 23]
// void main()
// {
// unsigned int num= -333;
// unsigned char *p=&num;
// printf("%d",*p);
// }
// o/p: 179


// 24]
// void main()
// {
// int num= -333;
// char *p=&num;
// *p=*p+333;
// printf("%d\n",*p);
// }
// o/p: 0



// 25]
// void main()
// {
// int num=0;
// char *p=&num;
// num=num-300;
// printf("%d\n",*p);
// }
// o/p: -44



// 26]
// void main()
// {
// int num=0777;
// char *p=num;
// printf("%d\n",*p);
// }
// o/p: -1



// 27]
// void main()
// {
// int num=0777;
// char *p=&num;
// printf("%d\n",*p+389);
// }
// o/p: 388



// 28]
// void main()
// {
// int num=256;
// char *p=&num;
// if(*p);
// *p=*p+128;
// *p=390;
// printf("%d\n",*p);
// }
// o/p: -122



// 29]
// void main()
// {
// short int num=120;
// while(*p>0)
// *p=*p+1;
// printf("%d\n",*(unsigned char *)p);
// }
// o/p: compilation error (p undclared)



// 30]
// void main()
// {
// int num=0xFFAA;
// unsigned char *p=&num;
// *p=333;
// printf("%hd\n",*(short int *)p);
// } 
// o/p: -179



// 31]
// void main()
// {
// short int num=410;
// short int *p=&num;
// char ch=*p&7<<4;
// printf("%d\n",ch);
// }
// o/p: 420



// 32]
// void main()
// {
// int num= -260;
// unsigned char *p=&num;
// printf("%d\n",*p);
// }
// o/p: 252



// 33]
// void main()
// {
// int num=0;
// char *p=&num;
// short int *q=&num;
// *p|=0xF0;
// printf("%d",*p);
// printf("%d",*q);
// }
// o/p: -16 240



// 34]
// void main()
// {
// int num=125;
// int *p=&num;
// *p=((*p<<5)&(0770))>>4;
// printf("%d\n",*p);
// }
// o/p: 26



// 35]
// void main()
// {
// int num=0;
// int *p=&num;
// *p='A';
// *p|=(*p<<8)|'B';
// printf("%o\n",*p);
// }

// 36]
// void main()
// {
// int num=357;
// short int *p=&num;
// int j=++*p;
// printf("%d\n",j);
// j=(*p)++;
// printf("%d\n",j);
// printf("%d\n",*p);
// }

// 37]
// void main()
// {
// int num=32;
// short int *p=&num;
// char *q=&num;
// *q=1<<6;
// *p^=0xfff0;
// printf("%d\n",*p);
// printf("%d\n",*q);
// }

// 38]
// void main()
// {
// short int num=256;
// char *p=&num;
// *p='A';
// *p|=1<<5;
// printf("%d\n",*p);
// printf("%d\n",num);
// }
 

