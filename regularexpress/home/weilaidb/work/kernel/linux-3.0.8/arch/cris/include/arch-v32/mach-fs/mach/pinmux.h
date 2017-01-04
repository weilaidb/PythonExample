#define _ASM_CRIS_ARCH_PINMUX_H
#define PORT_B 0
#define PORT_C 1
#define PORT_D 2
#define PORT_E 3
enum pin_mode ;
enum fixed_function ;
int crisv32_pinmux_init(void);
int crisv32_pinmux_alloc(int port, int first_pin, int last_pin, enum pin_mode);
int crisv32_pinmux_alloc_fixed(enum fixed_function function);
int crisv32_pinmux_dealloc(int port, int first_pin, int last_pin);
int crisv32_pinmux_dealloc_fixed(enum fixed_function function);
void crisv32_pinmux_dump(void);
