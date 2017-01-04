static void increment_scan_progress(struct comedi_subdevice *subd,
unsigned int num_bytes)
unsigned int cfc_write_array_to_buffer(struct comedi_subdevice *subd,
void *data, unsigned int num_bytes)
EXPORT_SYMBOL(cfc_write_array_to_buffer);
unsigned int cfc_read_array_from_buffer(struct comedi_subdevice *subd,
void *data, unsigned int num_bytes)
EXPORT_SYMBOL(cfc_read_array_from_buffer);
unsigned int cfc_handle_events(struct comedi_device *dev,
struct comedi_subdevice *subd)
EXPORT_SYMBOL(cfc_handle_events);
MODULE_AUTHOR("Frank Mori Hess <fmhess@users.sourceforge.net>");
MODULE_DESCRIPTION("Shared functions for Comedi low-level drivers");
MODULE_LICENSE("GPL");
static int __init comedi_fc_init_module(void)
static void __exit comedi_fc_cleanup_module(void)
module_init(comedi_fc_init_module);
module_exit(comedi_fc_cleanup_module);
