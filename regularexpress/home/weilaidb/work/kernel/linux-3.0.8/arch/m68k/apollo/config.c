u_long sio01_physaddr;
u_long sio23_physaddr;
u_long rtc_physaddr;
u_long pica_physaddr;
u_long picb_physaddr;
u_long cpuctrl_physaddr;
u_long timer_physaddr;
u_long apollo_model;
extern void dn_sched_init(irq_handler_t handler);
extern void dn_init_IRQ(void);
extern unsigned long dn_gettimeoffset(void);
extern int dn_dummy_hwclk(int, struct rtc_time *);
extern int dn_dummy_set_clock_mmss(unsigned long);
extern void dn_dummy_reset(void);
static void dn_heartbeat(int on);
static irqreturn_t dn_timer_int(int irq,void *);
static void dn_get_model(char *model);
static const char *apollo_models[] = ;
int apollo_parse_bootinfo(const struct bi_record *record)
void dn_setup_model(void)
int dn_serial_console_wait_key(struct console *co)
void dn_serial_console_write (struct console *co, const char *str,unsigned int count)
void dn_serial_print (const char *str)
void __init config_apollo(void)
irqreturn_t dn_timer_int(int irq, void *dev_id)
void dn_sched_init(irq_handler_t timer_routine)
unsigned long dn_gettimeoffset(void)
int dn_dummy_hwclk(int op, struct rtc_time *t)
int dn_dummy_set_clock_mmss(unsigned long nowtime)
void dn_dummy_reset(void)
void dn_dummy_waitbut(void)
static void dn_get_model(char *model)
static int dn_cpuctrl=0xff00;
static void dn_heartbeat(int on)
