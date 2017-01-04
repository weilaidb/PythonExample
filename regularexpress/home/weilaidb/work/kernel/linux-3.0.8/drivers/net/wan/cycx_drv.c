#define	MOD_VERSION	0
#define	MOD_RELEASE	6
MODULE_AUTHOR("Arnaldo Carvalho de Melo");
MODULE_DESCRIPTION("Cyclom 2x Sync Card Driver");
MODULE_LICENSE("GPL");
static int load_cyc2x(struct cycx_hw *hw, struct cycx_firmware *cfm, u32 len);
static void cycx_bootcfg(struct cycx_hw *hw);
static int reset_cyc2x(void __iomem *addr);
static int detect_cyc2x(void __iomem *addr);
static int get_option_index(const long *optlist, long optval);
static u16 checksum(u8 *buf, u32 len);
#define wait_cyc(addr) cycx_exec(addr + CMD_OFFSET)
static const char modname[] = "cycx_drv";
static const char fullname[] = "Cyclom 2X Support Module";
static const char copyright[] = "(c) 1998-2003 Arnaldo Carvalho de Melo "
"<acme@conectiva.com.br>";
static const long cyc2x_dpmbase_options[] = ;
static const long cycx_2x_irq_options[]  = ;
static int __init cycx_drv_init(void)
static void cycx_drv_cleanup(void)
EXPORT_SYMBOL(cycx_setup);
int cycx_setup(struct cycx_hw *hw, void *cfm, u32 len, unsigned long dpmbase)
EXPORT_SYMBOL(cycx_down);
int cycx_down(struct cycx_hw *hw)
static void cycx_inten(struct cycx_hw *hw)
EXPORT_SYMBOL(cycx_intr);
void cycx_intr(struct cycx_hw *hw)
EXPORT_SYMBOL(cycx_exec);
int cycx_exec(void __iomem *addr)
EXPORT_SYMBOL(cycx_peek);
int cycx_peek(struct cycx_hw *hw, u32 addr, void *buf, u32 len)
EXPORT_SYMBOL(cycx_poke);
int cycx_poke(struct cycx_hw *hw, u32 addr, void *buf, u32 len)
static int memory_exists(void __iomem *addr)
static void reset_load(void __iomem *addr, u8 *buffer, u32 cnt)
static int buffer_load(void __iomem *addr, u8 *buffer, u32 cnt)
static void cycx_start(void __iomem *addr)
static void cycx_reset_boot(void __iomem *addr, u8 *code, u32 len)
static int cycx_data_boot(void __iomem *addr, u8 *code, u32 len)
static int cycx_code_boot(void __iomem *addr, u8 *code, u32 len)
static int load_cyc2x(struct cycx_hw *hw, struct cycx_firmware *cfm, u32 len)
static void cycx_bootcfg(struct cycx_hw *hw)
static int detect_cyc2x(void __iomem *addr)
static int get_option_index(const long *optlist, long optval)
static int reset_cyc2x(void __iomem *addr)
static u16 checksum(u8 *buf, u32 len)
module_init(cycx_drv_init);
module_exit(cycx_drv_cleanup);
