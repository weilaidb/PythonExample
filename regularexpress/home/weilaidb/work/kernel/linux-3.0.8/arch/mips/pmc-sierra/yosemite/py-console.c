struct yo_uartregs  yo_uregs_t;
#define iu_rbr u1.rbr
#define iu_thr u1.thr
#define iu_dll u1.dll
#define iu_ier u2.ier
#define iu_dlm u2.dlm
#define iu_iir u3.iir
#define iu_fcr u3.fcr
#define ssnop()		__asm__ __volatile__("sll	$0, $0, 1\n");
#define ssnop_4()	do  while (0)
#define IO_BASE_64	0x9000000000000000ULL
static unsigned char readb_outer_space(unsigned long long phys)
static void writeb_outer_space(unsigned long long phys, unsigned char c)
void prom_putchar(char c)
