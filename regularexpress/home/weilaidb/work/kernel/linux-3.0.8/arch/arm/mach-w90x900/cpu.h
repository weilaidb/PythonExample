#define IODESC_ENT(y)                                  \
#define NUC900_8250PORT(name)					\
#define NUC900PDID	W90X900_VA_GCR
#define NUC910_CPUID	0x02900910
#define NUC920_CPUID	0x02900920
#define NUC950_CPUID	0x02900950
#define NUC960_CPUID	0x02900960
extern void nuc900_clock_source(struct device *dev, unsigned char *src);
extern void nuc900_init_clocks(void);
extern void nuc900_map_io(struct map_desc *mach_desc, int mach_size);
extern void nuc900_board_init(struct platform_device **device, int size);
extern struct platform_device nuc900_serial_device;
extern struct platform_device nuc900_device_fmi;
extern struct platform_device nuc900_device_kpi;
extern struct platform_device nuc900_device_rtc;
extern struct platform_device nuc900_device_ts;
extern struct platform_device nuc900_device_lcd;
