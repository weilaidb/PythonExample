int __initdata init_ohci1394_dma_early;
struct ohci ;
static inline void reg_write(const struct ohci *ohci, int offset, u32 data)
static inline u32 reg_read(const struct ohci *ohci, int offset)
#define OHCI_LOOP_COUNT		100
static inline u8 __init get_phy_reg(struct ohci *ohci, u8 addr)
static inline void __init set_phy_reg(struct ohci *ohci, u8 addr, u8 data)
static inline void __init init_ohci1394_soft_reset(struct ohci *ohci)
#define OHCI1394_MAX_AT_REQ_RETRIES	0xf
#define OHCI1394_MAX_AT_RESP_RETRIES	0x2
#define OHCI1394_MAX_PHYS_RESP_RETRIES	0x8
static inline void __init init_ohci1394_initialize(struct ohci *ohci)
static inline void __init init_ohci1394_wait_for_busresets(struct ohci *ohci)
static inline void __init init_ohci1394_enable_physical_dma(struct ohci *ohci)
static inline void __init init_ohci1394_reset_and_init_dma(struct ohci *ohci)
static inline void __init init_ohci1394_controller(int num, int slot, int func)
void __init init_ohci1394_dma_on_all_controllers(void)
static int __init setup_ohci1394_dma(char *opt)
early_param("ohci1394_dma", setup_ohci1394_dma);
