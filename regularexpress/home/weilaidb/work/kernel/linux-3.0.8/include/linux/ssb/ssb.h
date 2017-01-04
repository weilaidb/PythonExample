#define LINUX_SSB_H_
struct pcmcia_device;
struct ssb_bus;
struct ssb_driver;
struct ssb_sprom ;
struct ssb_boardinfo ;
struct ssb_device;
struct ssb_bus_ops ;
#define SSB_DEV_CHIPCOMMON	0x800
#define SSB_DEV_ILINE20		0x801
#define SSB_DEV_SDRAM		0x803
#define SSB_DEV_PCI		0x804
#define SSB_DEV_MIPS		0x805
#define SSB_DEV_ETHERNET	0x806
#define SSB_DEV_V90		0x807
#define SSB_DEV_USB11_HOSTDEV	0x808
#define SSB_DEV_ADSL		0x809
#define SSB_DEV_ILINE100	0x80A
#define SSB_DEV_IPSEC		0x80B
#define SSB_DEV_PCMCIA		0x80D
#define SSB_DEV_INTERNAL_MEM	0x80E
#define SSB_DEV_MEMC_SDRAM	0x80F
#define SSB_DEV_EXTIF		0x811
#define SSB_DEV_80211		0x812
#define SSB_DEV_MIPS_3302	0x816
#define SSB_DEV_USB11_HOST	0x817
#define SSB_DEV_USB11_DEV	0x818
#define SSB_DEV_USB20_HOST	0x819
#define SSB_DEV_USB20_DEV	0x81A
#define SSB_DEV_SDIO_HOST	0x81B
#define SSB_DEV_ROBOSWITCH	0x81C
#define SSB_DEV_PARA_ATA	0x81D
#define SSB_DEV_SATA_XORDMA	0x81E
#define SSB_DEV_ETHERNET_GBIT	0x81F
#define SSB_DEV_PCIE		0x820
#define SSB_DEV_MIMO_PHY	0x821
#define SSB_DEV_SRAM_CTRLR	0x822
#define SSB_DEV_MINI_MACPHY	0x823
#define SSB_DEV_ARM_1176	0x824
#define SSB_DEV_ARM_7TDMI	0x825
#define SSB_VENDOR_BROADCOM	0x4243
struct __ssb_dev_wrapper ;
struct ssb_device ;
static inline
struct ssb_device * dev_to_ssb_dev(struct device *dev)
static inline
void ssb_set_drvdata(struct ssb_device *dev, void *data)
static inline
void * ssb_get_drvdata(struct ssb_device *dev)
void ssb_set_devtypedata(struct ssb_device *dev, void *data);
static inline
void * ssb_get_devtypedata(struct ssb_device *dev)
struct ssb_driver ;
#define drv_to_ssb_drv(_drv) container_of(_drv, struct ssb_driver, drv)
extern int __ssb_driver_register(struct ssb_driver *drv, struct module *owner);
static inline int ssb_driver_register(struct ssb_driver *drv)
extern void ssb_driver_unregister(struct ssb_driver *drv);
enum ssb_bustype ;
#define SSB_BOARDVENDOR_BCM	0x14E4
#define SSB_BOARDVENDOR_DELL	0x1028
#define SSB_BOARDVENDOR_HP	0x0E11
#define SSB_BOARD_BCM94306MP	0x0418
#define SSB_BOARD_BCM4309G	0x0421
#define SSB_BOARD_BCM4306CB	0x0417
#define SSB_BOARD_BCM4309MP	0x040C
#define SSB_BOARD_MP4318	0x044A
#define SSB_BOARD_BU4306	0x0416
#define SSB_BOARD_BU4309	0x040A
#define SSB_CHIPPACK_BCM4712S	1
#define SSB_CHIPPACK_BCM4712M	2
#define SSB_CHIPPACK_BCM4712L	0
struct ssb_bus ;
enum ssb_quirks ;
struct ssb_init_invariants ;
typedef int (*ssb_invariants_func_t)(struct ssb_bus *bus,
struct ssb_init_invariants *iv);
extern int ssb_bus_ssbbus_register(struct ssb_bus *bus,
unsigned long baseaddr,
ssb_invariants_func_t get_invariants);
extern int ssb_bus_pcibus_register(struct ssb_bus *bus,
struct pci_dev *host_pci);
extern int ssb_bus_pcmciabus_register(struct ssb_bus *bus,
struct pcmcia_device *pcmcia_dev,
unsigned long baseaddr);
extern int ssb_bus_sdiobus_register(struct ssb_bus *bus,
struct sdio_func *sdio_func,
unsigned int quirks);
extern void ssb_bus_unregister(struct ssb_bus *bus);
extern bool ssb_is_sprom_available(struct ssb_bus *bus);
extern int ssb_arch_register_fallback_sprom(
int (*sprom_callback)(struct ssb_bus *bus,
struct ssb_sprom *out));
extern int ssb_bus_suspend(struct ssb_bus *bus);
extern int ssb_bus_resume(struct ssb_bus *bus);
extern u32 ssb_clockspeed(struct ssb_bus *bus);
int ssb_device_is_enabled(struct ssb_device *dev);
void ssb_device_enable(struct ssb_device *dev, u32 core_specific_flags);
void ssb_device_disable(struct ssb_device *dev, u32 core_specific_flags);
static inline u8 ssb_read8(struct ssb_device *dev, u16 offset)
static inline u16 ssb_read16(struct ssb_device *dev, u16 offset)
static inline u32 ssb_read32(struct ssb_device *dev, u16 offset)
static inline void ssb_write8(struct ssb_device *dev, u16 offset, u8 value)
static inline void ssb_write16(struct ssb_device *dev, u16 offset, u16 value)
static inline void ssb_write32(struct ssb_device *dev, u16 offset, u32 value)
static inline void ssb_block_read(struct ssb_device *dev, void *buffer,
size_t count, u16 offset, u8 reg_width)
static inline void ssb_block_write(struct ssb_device *dev, const void *buffer,
size_t count, u16 offset, u8 reg_width)
extern u32 ssb_dma_translation(struct ssb_device *dev);
#define SSB_DMA_TRANSLATION_MASK	0xC0000000
#define SSB_DMA_TRANSLATION_SHIFT	30
static inline void __cold __ssb_dma_not_implemented(struct ssb_device *dev)
extern int ssb_pcihost_register(struct pci_driver *driver);
static inline void ssb_pcihost_unregister(struct pci_driver *driver)
static inline
void ssb_pcihost_set_power_state(struct ssb_device *sdev, pci_power_t state)
static inline void ssb_pcihost_unregister(struct pci_driver *driver)
static inline
void ssb_pcihost_set_power_state(struct ssb_device *sdev, pci_power_t state)
extern int ssb_bus_may_powerdown(struct ssb_bus *bus);
extern int ssb_bus_powerup(struct ssb_bus *bus, bool dynamic_pctl);
extern void ssb_commit_settings(struct ssb_bus *bus);
extern u32 ssb_admatch_base(u32 adm);
extern u32 ssb_admatch_size(u32 adm);
int ssb_pcibios_plat_dev_init(struct pci_dev *dev);
int ssb_pcibios_map_irq(const struct pci_dev *dev, u8 slot, u8 pin);
