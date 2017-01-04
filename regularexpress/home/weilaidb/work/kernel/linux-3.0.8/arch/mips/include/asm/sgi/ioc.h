#define _SGI_IOC_H
struct sgioc_uart_regs ;
struct sgioc_keyb_regs ;
struct sgint_regs ;
#define SGINT_TIMER_CLOCK	1000000
#define SGINT_TCSAMP_COUNTER	((SGINT_TIMER_CLOCK / HZ) + 255)
extern u8 sgi_ioc_reset, sgi_ioc_write;
struct sgioc_regs ;
extern struct sgioc_regs *sgioc;
extern struct sgint_regs *sgint;
