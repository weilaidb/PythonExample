#define DRIVER_NAME "B2C2 FlexcopII/II(b)/III digital TV receiver chip"
#define DRIVER_AUTHOR "Patrick Boettcher <patrick.boettcher@desy.de"
#define DEBSTATUS ""
#define DEBSTATUS " (debugging is not enabled)"
int b2c2_flexcop_debug;
module_param_named(debug, b2c2_flexcop_debug,  int, 0644);
MODULE_PARM_DESC(debug,
"set debug level (1=info,2=tuner,4=i2c,8=ts,"
"16=sram,32=reg (|-able))."
DEBSTATUS);
#undef DEBSTATUS
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
flexcop_ibi_value ibi_zero;
static int flexcop_dvb_start_feed(struct dvb_demux_feed *dvbdmxfeed)
static int flexcop_dvb_stop_feed(struct dvb_demux_feed *dvbdmxfeed)
static int flexcop_dvb_init(struct flexcop_device *fc)
static void flexcop_dvb_exit(struct flexcop_device *fc)
void flexcop_pass_dmx_data(struct flexcop_device *fc, u8 *buf, u32 len)
EXPORT_SYMBOL(flexcop_pass_dmx_data);
void flexcop_pass_dmx_packets(struct flexcop_device *fc, u8 *buf, u32 no)
EXPORT_SYMBOL(flexcop_pass_dmx_packets);
static void flexcop_reset(struct flexcop_device *fc)
void flexcop_reset_block_300(struct flexcop_device *fc)
struct flexcop_device *flexcop_device_kmalloc(size_t bus_specific_len)
EXPORT_SYMBOL(flexcop_device_kmalloc);
void flexcop_device_kfree(struct flexcop_device *fc)
EXPORT_SYMBOL(flexcop_device_kfree);
int flexcop_device_initialize(struct flexcop_device *fc)
EXPORT_SYMBOL(flexcop_device_initialize);
void flexcop_device_exit(struct flexcop_device *fc)
EXPORT_SYMBOL(flexcop_device_exit);
static int flexcop_module_init(void)
static void flexcop_module_cleanup(void)
module_init(flexcop_module_init);
module_exit(flexcop_module_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_NAME);
MODULE_LICENSE("GPL");
