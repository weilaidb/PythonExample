static void (*old_machine_restart)(char *);
static void (*old_machine_halt)(void);
static void (*old_machine_power_off)(void);
static void do_machine_quiesce(void)
static void sclp_quiesce_handler(struct evbuf_header *evbuf)
static void sclp_quiesce_pm_event(struct sclp_register *reg,
enum sclp_pm_event sclp_pm_event)
static struct sclp_register sclp_quiesce_event = ;
static int __init sclp_quiesce_init(void)
module_init(sclp_quiesce_init);
