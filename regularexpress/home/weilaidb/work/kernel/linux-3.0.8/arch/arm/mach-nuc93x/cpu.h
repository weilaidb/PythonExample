#define IODESC_ENT(y)					\
#define NUC93X_8250PORT(name)					\
#define NUC93XPDID	NUC93X_VA_GCR
#define NUC932_CPUID	0x29550091
extern void nuc93x_clock_source(struct device *dev, unsigned char *src);
extern void nuc93x_init_clocks(void);
extern void nuc93x_map_io(struct map_desc *mach_desc, int mach_size);
extern void nuc93x_board_init(struct platform_device **device, int size);
extern struct platform_device nuc93x_serial_device;
