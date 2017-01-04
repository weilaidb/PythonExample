#define DRIVER_NAME "earth-pt1"
#define PT1_PAGE_SHIFT 12
#define PT1_PAGE_SIZE (1 << PT1_PAGE_SHIFT)
#define PT1_NR_UPACKETS 1024
#define PT1_NR_BUFS 511
struct pt1_buffer_page ;
struct pt1_table_page ;
struct pt1_buffer ;
struct pt1_table ;
#define PT1_NR_ADAPS 4
struct pt1_adapter;
struct pt1 ;
struct pt1_adapter ;
#define pt1_printk(level, pt1, format, arg...)	\
dev_printk(level, &(pt1)->pdev->dev, format, ##arg)
static void pt1_write_reg(struct pt1 *pt1, int reg, u32 data)
static u32 pt1_read_reg(struct pt1 *pt1, int reg)
static int pt1_nr_tables = 64;
module_param_named(nr_tables, pt1_nr_tables, int, 0);
static void pt1_increment_table_count(struct pt1 *pt1)
static void pt1_init_table_count(struct pt1 *pt1)
static void pt1_register_tables(struct pt1 *pt1, u32 first_pfn)
static void pt1_unregister_tables(struct pt1 *pt1)
static int pt1_sync(struct pt1 *pt1)
static u64 pt1_identify(struct pt1 *pt1)
static int pt1_unlock(struct pt1 *pt1)
static int pt1_reset_pci(struct pt1 *pt1)
static int pt1_reset_ram(struct pt1 *pt1)
static int pt1_do_enable_ram(struct pt1 *pt1)
static int pt1_enable_ram(struct pt1 *pt1)
static void pt1_disable_ram(struct pt1 *pt1)
static void pt1_set_stream(struct pt1 *pt1, int index, int enabled)
static void pt1_init_streams(struct pt1 *pt1)
static int pt1_filter(struct pt1 *pt1, struct pt1_buffer_page *page)
static int pt1_thread(void *data)
static void pt1_free_page(struct pt1 *pt1, void *page, dma_addr_t addr)
static void *pt1_alloc_page(struct pt1 *pt1, dma_addr_t *addrp, u32 *pfnp)
static void pt1_cleanup_buffer(struct pt1 *pt1, struct pt1_buffer *buf)
static int
pt1_init_buffer(struct pt1 *pt1, struct pt1_buffer *buf,  u32 *pfnp)
static void pt1_cleanup_table(struct pt1 *pt1, struct pt1_table *table)
static int
pt1_init_table(struct pt1 *pt1, struct pt1_table *table, u32 *pfnp)
static void pt1_cleanup_tables(struct pt1 *pt1)
static int pt1_init_tables(struct pt1 *pt1)
static int pt1_start_feed(struct dvb_demux_feed *feed)
static int pt1_stop_feed(struct dvb_demux_feed *feed)
static void
pt1_update_power(struct pt1 *pt1)
static int pt1_set_voltage(struct dvb_frontend *fe, fe_sec_voltage_t voltage)
static int pt1_sleep(struct dvb_frontend *fe)
static int pt1_wakeup(struct dvb_frontend *fe)
static void pt1_free_adapter(struct pt1_adapter *adap)
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
static struct pt1_adapter *
pt1_alloc_adapter(struct pt1 *pt1)
static void pt1_cleanup_adapters(struct pt1 *pt1)
static int pt1_init_adapters(struct pt1 *pt1)
static void pt1_cleanup_frontend(struct pt1_adapter *adap)
static int pt1_init_frontend(struct pt1_adapter *adap, struct dvb_frontend *fe)
static void pt1_cleanup_frontends(struct pt1 *pt1)
struct pt1_config ;
static const struct pt1_config pt1_configs[2] = ;
static const struct pt1_config pt2_configs[2] = ;
static int pt1_init_frontends(struct pt1 *pt1)
static void pt1_i2c_emit(struct pt1 *pt1, int addr, int busy, int read_enable,
int clock, int data, int next_addr)
static void pt1_i2c_write_bit(struct pt1 *pt1, int addr, int *addrp, int data)
static void pt1_i2c_read_bit(struct pt1 *pt1, int addr, int *addrp)
static void pt1_i2c_write_byte(struct pt1 *pt1, int addr, int *addrp, int data)
static void pt1_i2c_read_byte(struct pt1 *pt1, int addr, int *addrp, int last)
static void pt1_i2c_prepare(struct pt1 *pt1, int addr, int *addrp)
static void
pt1_i2c_write_msg(struct pt1 *pt1, int addr, int *addrp, struct i2c_msg *msg)
static void
pt1_i2c_read_msg(struct pt1 *pt1, int addr, int *addrp, struct i2c_msg *msg)
static int pt1_i2c_end(struct pt1 *pt1, int addr)
static void pt1_i2c_begin(struct pt1 *pt1, int *addrp)
static int pt1_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
static u32 pt1_i2c_func(struct i2c_adapter *adap)
static const struct i2c_algorithm pt1_i2c_algo = ;
static void pt1_i2c_wait(struct pt1 *pt1)
static void pt1_i2c_init(struct pt1 *pt1)
static void __devexit pt1_remove(struct pci_dev *pdev)
static int __devinit
pt1_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static struct pci_device_id pt1_id_table[] = ;
MODULE_DEVICE_TABLE(pci, pt1_id_table);
static struct pci_driver pt1_driver = ;
static int __init pt1_init(void)
static void __exit pt1_cleanup(void)
module_init(pt1_init);
module_exit(pt1_cleanup);
MODULE_AUTHOR("Takahito HIRANO <hiranotaka@zng.info>");
MODULE_DESCRIPTION("Earthsoft PT1/PT2 Driver");
MODULE_LICENSE("GPL");
