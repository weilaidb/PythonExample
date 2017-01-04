struct bw_stats_struct  bw_stats;
static void print_summary(uint32_t status, uint32_t l2_err,
uint32_t memio_err)
void check_bus_watcher(void)
static int bw_print_buffer(char *page, struct bw_stats_struct *stats)
static int bw_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data)
static void create_proc_decoder(struct bw_stats_struct *stats)
static irqreturn_t sibyte_bw_int(int irq, void *data)
int __init sibyte_bus_watcher(void)
__initcall(sibyte_bus_watcher);
