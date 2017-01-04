void (*sun3x_putchar)(int);
int (*sun3x_getchar)(void);
int (*sun3x_mayget)(void);
int (*sun3x_mayput)(int);
void (*sun3x_prom_reboot)(void);
e_vector sun3x_prom_abort;
struct linux_romvec *romvec;
e_vector *sun3x_prom_vbr;
void sun3x_halt(void)
void sun3x_reboot(void)
static void sun3x_prom_write(struct console *co, const char *s,
unsigned int count)
static struct console sun3x_debug = ;
void __init sun3x_prom_init(void)
static int __init sun3x_debug_setup(char *arg)
early_param("debug", sun3x_debug_setup);
int prom_getintdefault(int node, char *property, int deflt)
int prom_getbool (int node, char *prop)
void prom_printf(char *fmt, ...)
void prom_halt (void)
unsigned char
prom_get_idprom(char *idbuf, int num_bytes)
