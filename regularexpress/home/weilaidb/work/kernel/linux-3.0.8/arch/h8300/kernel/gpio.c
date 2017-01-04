#define _(addr) (volatile unsigned char *)(addr)
#if defined(CONFIG_H83007) || defined(CONFIG_H83068)
static volatile unsigned char *ddrs[] = ;
#define MAX_PORT 11
#if defined(CONFIG_H83002) || defined(CONFIG_H8048)
static volatile unsigned char *ddrs[] = ;
#define MAX_PORT 11
#if defined(CONFIG_H8S2678)
static volatile unsigned char *ddrs[] = ;
#define MAX_PORT 17
#undef _
#if !defined(P1DDR)
#error Unsuppoted CPU Selection
static struct  gpio_regs[MAX_PORT];
extern char *_platform_gpio_table(int length);
int h8300_reserved_gpio(int port, unsigned int bits)
int h8300_free_gpio(int port, unsigned int bits)
int h8300_set_gpio_dir(int port_bit,int dir)
int h8300_get_gpio_dir(int port_bit)
#if defined(CONFIG_PROC_FS)
static char *port_status(int portno)
static int gpio_proc_read(char *buf, char **start, off_t offset,
int len, int *unused_i, void *unused_v)
static __init int register_proc(void)
__initcall(register_proc);
void __init h8300_gpio_init(void)
