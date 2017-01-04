static unsigned char dma_bits[] = ;
static unsigned char irq_bits[] = ;
static unsigned char sb_irq_bits[] = ;
static unsigned char sb_dma_bits[] = ;
int      	pas_translate_code = 0;
static int      pas_intr_mask;
static int      pas_irq;
static int      pas_sb_base;
DEFINE_SPINLOCK(pas_lock);
static int	joystick;
static int 	joystick = 1;
static int 	symphony = 1;
static int 	symphony;
static int	broken_bus_clock = 1;
static int	broken_bus_clock;
static struct address_info cfg;
static struct address_info cfg2;
char            pas_model = 0;
static char    *pas_model_names[] = ;
extern void     mix_write(unsigned char data, int ioaddr);
unsigned char pas_read(int ioaddr)
void pas_write(unsigned char data, int ioaddr)
static irqreturn_t pasintr(int irq, void *dev_id)
int pas_set_intr(int mask)
int pas_remove_intr(int mask)
static int __init config_pas_hw(struct address_info *hw_config)
static int __init detect_pas_hw(struct address_info *hw_config)
static void __init attach_pas_card(struct address_info *hw_config)
static inline int __init probe_pas(struct address_info *hw_config)
static void __exit unload_pas(struct address_info *hw_config)
static int __initdata io	= -1;
static int __initdata irq	= -1;
static int __initdata dma	= -1;
static int __initdata dma16	= -1;
static int __initdata sb_io	= 0;
static int __initdata sb_irq	= -1;
static int __initdata sb_dma	= -1;
static int __initdata sb_dma16	= -1;
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(dma, int, 0);
module_param(dma16, int, 0);
module_param(sb_io, int, 0);
module_param(sb_irq, int, 0);
module_param(sb_dma, int, 0);
module_param(sb_dma16, int, 0);
module_param(joystick, bool, 0);
module_param(symphony, bool, 0);
module_param(broken_bus_clock, bool, 0);
MODULE_LICENSE("GPL");
static int __init init_pas2(void)
static void __exit cleanup_pas2(void)
module_init(init_pas2);
module_exit(cleanup_pas2);
static int __init setup_pas2(char *str)
__setup("pas2=", setup_pas2);
