MODULE_AUTHOR("Comedi <comedi@comedi.org>");
MODULE_DESCRIPTION("Comedi command support for NI general-purpose counters");
MODULE_LICENSE("GPL");
static void ni_tio_configure_dma(struct ni_gpct *counter, short enable,
short read_not_write)
static int ni_tio_input_inttrig(struct comedi_device *dev,
struct comedi_subdevice *s,
unsigned int trignum)
static int ni_tio_input_cmd(struct ni_gpct *counter, struct comedi_async *async)
static int ni_tio_output_cmd(struct ni_gpct *counter,
struct comedi_async *async)
static int ni_tio_cmd_setup(struct ni_gpct *counter, struct comedi_async *async)
int ni_tio_cmd(struct ni_gpct *counter, struct comedi_async *async)
EXPORT_SYMBOL_GPL(ni_tio_cmd);
int ni_tio_cmdtest(struct ni_gpct *counter, struct comedi_cmd *cmd)
EXPORT_SYMBOL_GPL(ni_tio_cmdtest);
int ni_tio_cancel(struct ni_gpct *counter)
EXPORT_SYMBOL_GPL(ni_tio_cancel);
static int should_ack_gate(struct ni_gpct *counter)
void ni_tio_acknowledge_and_confirm(struct ni_gpct *counter, int *gate_error,
int *tc_error, int *perm_stale_data,
int *stale_data)
EXPORT_SYMBOL_GPL(ni_tio_acknowledge_and_confirm);
void ni_tio_handle_interrupt(struct ni_gpct *counter,
struct comedi_subdevice *s)
EXPORT_SYMBOL_GPL(ni_tio_handle_interrupt);
void ni_tio_set_mite_channel(struct ni_gpct *counter,
struct mite_channel *mite_chan)
EXPORT_SYMBOL_GPL(ni_tio_set_mite_channel);
static int __init ni_tiocmd_init_module(void)
module_init(ni_tiocmd_init_module);
static void __exit ni_tiocmd_cleanup_module(void)
module_exit(ni_tiocmd_cleanup_module);
