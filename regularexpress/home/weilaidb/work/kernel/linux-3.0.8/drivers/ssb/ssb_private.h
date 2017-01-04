#define LINUX_SSB_PRIVATE_H_
#define PFX	"ssb: "
# define ssb_printk(fmt, x...)	do  while (0)
# define ssb_printk		printk
# define ssb_dprintk(fmt, x...)	ssb_printk(fmt , ##x)
# define ssb_dprintk(fmt, x...)	do  while (0)
# define SSB_WARN_ON(x)		WARN_ON(x)
# define SSB_BUG_ON(x)		BUG_ON(x)
static inline int __ssb_do_nothing(int x)
# define SSB_WARN_ON(x)		__ssb_do_nothing(unlikely(!!(x)))
# define SSB_BUG_ON(x)		__ssb_do_nothing(unlikely(!!(x)))
extern int ssb_pci_switch_core(struct ssb_bus *bus,
struct ssb_device *dev);
extern int ssb_pci_switch_coreidx(struct ssb_bus *bus,
u8 coreidx);
extern int ssb_pci_xtal(struct ssb_bus *bus, u32 what,
int turn_on);
extern int ssb_pci_get_invariants(struct ssb_bus *bus,
struct ssb_init_invariants *iv);
extern void ssb_pci_exit(struct ssb_bus *bus);
extern int ssb_pci_init(struct ssb_bus *bus);
extern const struct ssb_bus_ops ssb_pci_ops;
static inline int ssb_pci_switch_core(struct ssb_bus *bus,
struct ssb_device *dev)
static inline int ssb_pci_switch_coreidx(struct ssb_bus *bus,
u8 coreidx)
static inline int ssb_pci_xtal(struct ssb_bus *bus, u32 what,
int turn_on)
static inline void ssb_pci_exit(struct ssb_bus *bus)
static inline int ssb_pci_init(struct ssb_bus *bus)
extern int ssb_pcmcia_switch_core(struct ssb_bus *bus,
struct ssb_device *dev);
extern int ssb_pcmcia_switch_coreidx(struct ssb_bus *bus,
u8 coreidx);
extern int ssb_pcmcia_switch_segment(struct ssb_bus *bus,
u8 seg);
extern int ssb_pcmcia_get_invariants(struct ssb_bus *bus,
struct ssb_init_invariants *iv);
extern int ssb_pcmcia_hardware_setup(struct ssb_bus *bus);
extern void ssb_pcmcia_exit(struct ssb_bus *bus);
extern int ssb_pcmcia_init(struct ssb_bus *bus);
extern const struct ssb_bus_ops ssb_pcmcia_ops;
static inline int ssb_pcmcia_switch_core(struct ssb_bus *bus,
struct ssb_device *dev)
static inline int ssb_pcmcia_switch_coreidx(struct ssb_bus *bus,
u8 coreidx)
static inline int ssb_pcmcia_switch_segment(struct ssb_bus *bus,
u8 seg)
static inline int ssb_pcmcia_hardware_setup(struct ssb_bus *bus)
static inline void ssb_pcmcia_exit(struct ssb_bus *bus)
static inline int ssb_pcmcia_init(struct ssb_bus *bus)
extern int ssb_sdio_get_invariants(struct ssb_bus *bus,
struct ssb_init_invariants *iv);
extern u32 ssb_sdio_scan_read32(struct ssb_bus *bus, u16 offset);
extern int ssb_sdio_switch_core(struct ssb_bus *bus, struct ssb_device *dev);
extern int ssb_sdio_scan_switch_coreidx(struct ssb_bus *bus, u8 coreidx);
extern int ssb_sdio_hardware_setup(struct ssb_bus *bus);
extern void ssb_sdio_exit(struct ssb_bus *bus);
extern int ssb_sdio_init(struct ssb_bus *bus);
extern const struct ssb_bus_ops ssb_sdio_ops;
static inline u32 ssb_sdio_scan_read32(struct ssb_bus *bus, u16 offset)
static inline int ssb_sdio_switch_core(struct ssb_bus *bus,
struct ssb_device *dev)
static inline int ssb_sdio_scan_switch_coreidx(struct ssb_bus *bus, u8 coreidx)
static inline int ssb_sdio_hardware_setup(struct ssb_bus *bus)
static inline void ssb_sdio_exit(struct ssb_bus *bus)
static inline int ssb_sdio_init(struct ssb_bus *bus)
extern const char *ssb_core_name(u16 coreid);
extern int ssb_bus_scan(struct ssb_bus *bus,
unsigned long baseaddr);
extern void ssb_iounmap(struct ssb_bus *ssb);
extern
ssize_t ssb_attr_sprom_show(struct ssb_bus *bus, char *buf,
int (*sprom_read)(struct ssb_bus *bus, u16 *sprom));
extern
ssize_t ssb_attr_sprom_store(struct ssb_bus *bus,
const char *buf, size_t count,
int (*sprom_check_crc)(const u16 *sprom, size_t size),
int (*sprom_write)(struct ssb_bus *bus, const u16 *sprom));
extern int ssb_fill_sprom_with_fallback(struct ssb_bus *bus,
struct ssb_sprom *out);
extern u32 ssb_calc_clock_rate(u32 plltype, u32 n, u32 m);
extern struct ssb_bus *ssb_pci_dev_to_bus(struct pci_dev *pdev);
int ssb_for_each_bus_call(unsigned long data,
int (*func)(struct ssb_bus *bus, unsigned long data));
extern struct ssb_bus *ssb_pcmcia_dev_to_bus(struct pcmcia_device *pdev);
struct ssb_freeze_context ;
extern int ssb_devices_freeze(struct ssb_bus *bus, struct ssb_freeze_context *ctx);
extern int ssb_devices_thaw(struct ssb_freeze_context *ctx);
extern int __init b43_pci_ssb_bridge_init(void);
extern void __exit b43_pci_ssb_bridge_exit(void);
static inline int b43_pci_ssb_bridge_init(void)
static inline void b43_pci_ssb_bridge_exit(void)
