struct mca_find_adapter_info ;
static int mca_find_adapter_callback(struct device *dev, void *data)
int mca_find_adapter(int id, int start)
EXPORT_SYMBOL(mca_find_adapter);
int mca_find_unused_adapter(int id, int start)
EXPORT_SYMBOL(mca_find_unused_adapter);
struct mca_find_device_by_slot_info ;
static int mca_find_device_by_slot_callback(struct device *dev, void *data)
struct mca_device *mca_find_device_by_slot(int slot)
unsigned char mca_read_stored_pos(int slot, int reg)
EXPORT_SYMBOL(mca_read_stored_pos);
unsigned char mca_read_pos(int slot, int reg)
EXPORT_SYMBOL(mca_read_pos);
void mca_write_pos(int slot, int reg, unsigned char byte)
EXPORT_SYMBOL(mca_write_pos);
void mca_set_adapter_name(int slot, char* name)
EXPORT_SYMBOL(mca_set_adapter_name);
int mca_mark_as_used(int slot)
EXPORT_SYMBOL(mca_mark_as_used);
void mca_mark_as_unused(int slot)
EXPORT_SYMBOL(mca_mark_as_unused);
