static unsigned char __iomem *vrtc_virt_base;
unsigned char vrtc_cmos_read(unsigned char reg)
EXPORT_SYMBOL_GPL(vrtc_cmos_read);
void vrtc_cmos_write(unsigned char val, unsigned char reg)
EXPORT_SYMBOL_GPL(vrtc_cmos_write);
unsigned long vrtc_get_time(void)
int vrtc_set_mmss(unsigned long nowtime)
void __init mrst_rtc_init(void)
static struct resource vrtc_resources[] = ;
static struct platform_device vrtc_device = ;
static int __init mrst_device_create(void)
module_init(mrst_device_create);
