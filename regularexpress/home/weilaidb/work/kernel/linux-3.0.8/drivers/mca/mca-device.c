unsigned char mca_device_read_stored_pos(struct mca_device *mca_dev, int reg)
EXPORT_SYMBOL(mca_device_read_stored_pos);
unsigned char mca_device_read_pos(struct mca_device *mca_dev, int reg)
EXPORT_SYMBOL(mca_device_read_pos);
void mca_device_write_pos(struct mca_device *mca_dev, int reg,
unsigned char byte)
EXPORT_SYMBOL(mca_device_write_pos);
int mca_device_transform_irq(struct mca_device *mca_dev, int irq)
EXPORT_SYMBOL(mca_device_transform_irq);
int mca_device_transform_ioport(struct mca_device *mca_dev, int port)
EXPORT_SYMBOL(mca_device_transform_ioport);
void *mca_device_transform_memory(struct mca_device *mca_dev, void *mem)
EXPORT_SYMBOL(mca_device_transform_memory);
int mca_device_claimed(struct mca_device *mca_dev)
EXPORT_SYMBOL(mca_device_claimed);
void mca_device_set_claim(struct mca_device *mca_dev, int val)
EXPORT_SYMBOL(mca_device_set_claim);
enum MCA_AdapterStatus mca_device_status(struct mca_device *mca_dev)
EXPORT_SYMBOL(mca_device_status);
void mca_device_set_name(struct mca_device *mca_dev, const char *name)
EXPORT_SYMBOL(mca_device_set_name);
