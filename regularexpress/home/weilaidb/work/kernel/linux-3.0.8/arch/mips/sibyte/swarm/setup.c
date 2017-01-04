#if defined(CONFIG_SIBYTE_BCM1x55) || defined(CONFIG_SIBYTE_BCM1x80)
#elif defined(CONFIG_SIBYTE_SB1250) || defined(CONFIG_SIBYTE_BCM112X)
#error invalid SiByte board configuration
#if defined(CONFIG_SIBYTE_BCM1x55) || defined(CONFIG_SIBYTE_BCM1x80)
extern void bcm1480_setup(void);
#elif defined(CONFIG_SIBYTE_SB1250) || defined(CONFIG_SIBYTE_BCM112X)
extern void sb1250_setup(void);
#error invalid SiByte board configuration
extern int xicor_probe(void);
extern int xicor_set_time(unsigned long);
extern unsigned long xicor_get_time(void);
extern int m41t81_probe(void);
extern int m41t81_set_time(unsigned long);
extern unsigned long m41t81_get_time(void);
const char *get_system_type(void)
int swarm_be_handler(struct pt_regs *regs, int is_fixup)
enum swarm_rtc_type ;
enum swarm_rtc_type swarm_rtc_type;
void read_persistent_clock(struct timespec *ts)
int rtc_mips_set_time(unsigned long sec)
void __init plat_mem_setup(void)
#undef LEDS_PHYS
#define LEDS_PHYS MLEDS_PHYS
void setleds(char *str)
