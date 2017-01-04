#define DEBUG 1
struct header_iter ;
static struct trace_array *mmio_trace_array;
static bool overrun_detected;
static unsigned long prev_overruns;
static atomic_t dropped_count;
static void mmio_reset_data(struct trace_array *tr)
static int mmio_trace_init(struct trace_array *tr)
static void mmio_trace_reset(struct trace_array *tr)
static void mmio_trace_start(struct trace_array *tr)
static int mmio_print_pcidev(struct trace_seq *s, const struct pci_dev *dev)
static void destroy_header_iter(struct header_iter *hiter)
static void mmio_pipe_open(struct trace_iterator *iter)
static void mmio_close(struct trace_iterator *iter)
static unsigned long count_overruns(struct trace_iterator *iter)
static ssize_t mmio_read(struct trace_iterator *iter, struct file *filp,
char __user *ubuf, size_t cnt, loff_t *ppos)
static enum print_line_t mmio_print_rw(struct trace_iterator *iter)
static enum print_line_t mmio_print_map(struct trace_iterator *iter)
static enum print_line_t mmio_print_mark(struct trace_iterator *iter)
static enum print_line_t mmio_print_line(struct trace_iterator *iter)
static struct tracer mmio_tracer __read_mostly =
;
__init static int init_mmio_trace(void)
device_initcall(init_mmio_trace);
static void __trace_mmiotrace_rw(struct trace_array *tr,
struct trace_array_cpu *data,
struct mmiotrace_rw *rw)
void mmio_trace_rw(struct mmiotrace_rw *rw)
static void __trace_mmiotrace_map(struct trace_array *tr,
struct trace_array_cpu *data,
struct mmiotrace_map *map)
void mmio_trace_mapping(struct mmiotrace_map *map)
int mmio_trace_printk(const char *fmt, va_list args)
