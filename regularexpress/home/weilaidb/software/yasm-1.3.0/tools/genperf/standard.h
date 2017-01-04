#define STANDARD
typedef  unsigned long  int  ub4;
#define UB4BITS 32
typedef  unsigned short int  ub2;
#define UB2MAXVAL 0xffff
typedef  unsigned       char ub1;
#define UB1MAXVAL 0xff
typedef                 int  word;
#define bis(target,mask)  ((target) |=  (mask))
#define bic(target,mask)  ((target) &= ~(mask))
#define bit(target,mask)  ((target) &   (mask))
# define align(a) (((ub4)a+(sizeof(void *)-1))&(~(sizeof(void *)-1)))
#define FALSE 0
#define TRUE 1
