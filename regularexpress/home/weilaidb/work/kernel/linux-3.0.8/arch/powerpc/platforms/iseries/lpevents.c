struct hvlpevent_queue hvlpevent_queue __attribute__((__section__(".data")));
DEFINE_PER_CPU(unsigned long[HvLpEvent_Type_NumTypes], hvlpevent_counts);
static char *event_types[HvLpEvent_Type_NumTypes] = ;
static LpEventHandler lpEventHandler[HvLpEvent_Type_NumTypes];
static unsigned lpEventHandlerPaths[HvLpEvent_Type_NumTypes];
static struct HvLpEvent * get_next_hvlpevent(void)
static unsigned long spread_lpevents = NR_CPUS;
int hvlpevent_is_pending(void)
static void hvlpevent_clear_valid(struct HvLpEvent * event)
void process_hvlpevents(void)
static int set_spread_lpevents(char *str)
__setup("spread_lpevents=", set_spread_lpevents);
void __init setup_hvlpevent_queue(void)
int HvLpEvent_registerHandler(HvLpEvent_Type eventType, LpEventHandler handler)
EXPORT_SYMBOL(HvLpEvent_registerHandler);
int HvLpEvent_unregisterHandler(HvLpEvent_Type eventType)
EXPORT_SYMBOL(HvLpEvent_unregisterHandler);
int HvLpEvent_openPath(HvLpEvent_Type eventType, HvLpIndex lpIndex)
int HvLpEvent_closePath(HvLpEvent_Type eventType, HvLpIndex lpIndex)
static int proc_lpevents_show(struct seq_file *m, void *v)
static int proc_lpevents_open(struct inode *inode, struct file *file)
static const struct file_operations proc_lpevents_operations = ;
static int __init proc_lpevents_init(void)
__initcall(proc_lpevents_init);
