#define _S390_DELAY_H
void __ndelay(unsigned long long nsecs);
void __udelay(unsigned long long usecs);
void udelay_simple(unsigned long long usecs);
void __delay(unsigned long loops);
#define ndelay(n) __ndelay((unsigned long long) (n))
#define udelay(n) __udelay((unsigned long long) (n))
#define mdelay(n) __udelay((unsigned long long) (n) * 1000)
