#define _ASM_POWERPC_PS3STOR_H_
struct ps3_storage_region ;
struct ps3_storage_device ;
static inline struct ps3_storage_device *to_ps3_storage_device(struct device *dev)
extern int ps3stor_setup(struct ps3_storage_device *dev,
irq_handler_t handler);
extern void ps3stor_teardown(struct ps3_storage_device *dev);
extern u64 ps3stor_read_write_sectors(struct ps3_storage_device *dev, u64 lpar,
u64 start_sector, u64 sectors,
int write);
extern u64 ps3stor_send_command(struct ps3_storage_device *dev, u64 cmd,
u64 arg1, u64 arg2, u64 arg3, u64 arg4);
