#define _ASM_X86_UV_UV_IRQ_H
struct uv_IO_APIC_route_entry ;
enum ;
extern int uv_irq_2_mmr_info(int, unsigned long *, int *);
extern int uv_setup_irq(char *, int, int, unsigned long, int);
extern void uv_teardown_irq(unsigned int);
