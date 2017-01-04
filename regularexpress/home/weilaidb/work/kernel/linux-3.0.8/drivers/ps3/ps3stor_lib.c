static struct ps3_flash_workaround  ps3_flash_workaround;
static int ps3stor_open_hv_device(struct ps3_system_bus_device *sbd)
static int ps3stor_close_hv_device(struct ps3_system_bus_device *sbd)
static int ps3stor_probe_access(struct ps3_storage_device *dev)
int ps3stor_setup(struct ps3_storage_device *dev, irq_handler_t handler)
EXPORT_SYMBOL_GPL(ps3stor_setup);
void ps3stor_teardown(struct ps3_storage_device *dev)
EXPORT_SYMBOL_GPL(ps3stor_teardown);
u64 ps3stor_read_write_sectors(struct ps3_storage_device *dev, u64 lpar,
u64 start_sector, u64 sectors, int write)
EXPORT_SYMBOL_GPL(ps3stor_read_write_sectors);
u64 ps3stor_send_command(struct ps3_storage_device *dev, u64 cmd, u64 arg1,
u64 arg2, u64 arg3, u64 arg4)
EXPORT_SYMBOL_GPL(ps3stor_send_command);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PS3 Storage Bus Library");
MODULE_AUTHOR("Sony Corporation");
