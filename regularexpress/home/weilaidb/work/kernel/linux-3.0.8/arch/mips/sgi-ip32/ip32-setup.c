extern void ip32_be_init(void);
extern void crime_init(void);
extern char o2meth_eaddr[8];
static inline unsigned char str2hexnum(unsigned char c)
static inline void str2eaddr(unsigned char *ea, unsigned char *str)
#define WAIT_MS 10
void __init plat_time_init(void)
void __init plat_mem_setup(void)
