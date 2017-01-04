static int mpu;
static int joystick;
static unsigned char trix_read(int addr)
static void trix_write(int addr, int data)
static void download_boot(int base)
static int trix_set_wss_port(struct address_info *hw_config)
static int __init init_trix_wss(struct address_info *hw_config)
static int __init probe_trix_sb(struct address_info *hw_config)
static int __init probe_trix_mpu(struct address_info *hw_config)
static void __exit unload_trix_wss(struct address_info *hw_config)
static inline void __exit unload_trix_mpu(struct address_info *hw_config)
static inline void __exit unload_trix_sb(struct address_info *hw_config)
static struct address_info cfg;
static struct address_info cfg2;
static struct address_info cfg_mpu;
static int sb;
static int fw_load;
static int __initdata io	= -1;
static int __initdata irq	= -1;
static int __initdata dma	= -1;
static int __initdata dma2	= -1;
static int __initdata sb_io	= -1;
static int __initdata sb_dma	= -1;
static int __initdata sb_irq	= -1;
static int __initdata mpu_io	= -1;
static int __initdata mpu_irq	= -1;
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(dma, int, 0);
module_param(dma2, int, 0);
module_param(sb_io, int, 0);
module_param(sb_dma, int, 0);
module_param(sb_irq, int, 0);
module_param(mpu_io, int, 0);
module_param(mpu_irq, int, 0);
module_param(joystick, bool, 0);
static int __init init_trix(void)
static void __exit cleanup_trix(void)
module_init(init_trix);
module_exit(cleanup_trix);
static int __init setup_trix (char *str)
__setup("trix=", setup_trix);
MODULE_LICENSE("GPL");
