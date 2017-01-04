void __init early_init_dt_add_memory_arch(u64 base, u64 size)
void * __init early_init_dt_alloc_memory_arch(u64 size, u64 align)
static int __init early_init_dt_scan_serial(unsigned long node,
const char *uname, int depth, void *data)
int __init early_uartlite_console(void)
static int __init early_init_dt_scan_serial_full(unsigned long node,
const char *uname, int depth, void *data)
int __init early_uart16550_console(void)
void __init early_init_devtree(void *params)
void __init early_init_dt_setup_initrd_arch(unsigned long start,
unsigned long end)
#if defined(CONFIG_DEBUG_FS) && defined(DEBUG)
static struct debugfs_blob_wrapper flat_dt_blob;
static int __init export_flat_device_tree(void)
device_initcall(export_flat_device_tree);
