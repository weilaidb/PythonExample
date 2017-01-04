#define PSYCHO_IMAP_A_SLOT0	0x0c00UL
#define PSYCHO_IMAP_B_SLOT0	0x0c20UL
static unsigned long psycho_pcislot_imap_offset(unsigned long ino)
#define PSYCHO_OBIO_IMAP_BASE	0x1000UL
#define PSYCHO_ONBOARD_IRQ_BASE		0x20
#define psycho_onboard_imap_offset(__ino) \
(PSYCHO_OBIO_IMAP_BASE + (((__ino) & 0x1f) << 3))
#define PSYCHO_ICLR_A_SLOT0	0x1400UL
#define PSYCHO_ICLR_SCSI	0x1800UL
#define psycho_iclr_offset(ino)					      \
((ino & 0x20) ? (PSYCHO_ICLR_SCSI + (((ino) & 0x1f) << 3)) :  \
(PSYCHO_ICLR_A_SLOT0 + (((ino) & 0x1f)<<3)))
static unsigned int psycho_irq_build(struct device_node *dp,
unsigned int ino,
void *_data)
static void __init psycho_irq_trans_init(struct device_node *dp)
#define sabre_read(__reg) \
()
struct sabre_irq_data ;
#define SABRE_CONFIGSPACE	0x001000000UL
#define SABRE_WRSYNC		0x1c20UL
#define SABRE_CONFIG_BASE(CONFIG_SPACE)	\
(CONFIG_SPACE | (1UL << 24))
#define SABRE_CONFIG_ENCODE(BUS, DEVFN, REG)	\
(((unsigned long)(BUS)   << 16) |	\
((unsigned long)(DEVFN) << 8)  |	\
((unsigned long)(REG)))
static void sabre_wsync_handler(unsigned int ino, void *_arg1, void *_arg2)
#define SABRE_IMAP_A_SLOT0	0x0c00UL
#define SABRE_IMAP_B_SLOT0	0x0c20UL
#define SABRE_ICLR_A_SLOT0	0x1400UL
#define SABRE_ICLR_B_SLOT0	0x1480UL
#define SABRE_ICLR_SCSI		0x1800UL
#define SABRE_ICLR_ETH		0x1808UL
#define SABRE_ICLR_BPP		0x1810UL
#define SABRE_ICLR_AU_REC	0x1818UL
#define SABRE_ICLR_AU_PLAY	0x1820UL
#define SABRE_ICLR_PFAIL	0x1828UL
#define SABRE_ICLR_KMS		0x1830UL
#define SABRE_ICLR_FLPY		0x1838UL
#define SABRE_ICLR_SHW		0x1840UL
#define SABRE_ICLR_KBD		0x1848UL
#define SABRE_ICLR_MS		0x1850UL
#define SABRE_ICLR_SER		0x1858UL
#define SABRE_ICLR_UE		0x1870UL
#define SABRE_ICLR_CE		0x1878UL
#define SABRE_ICLR_PCIERR	0x1880UL
static unsigned long sabre_pcislot_imap_offset(unsigned long ino)
#define SABRE_OBIO_IMAP_BASE	0x1000UL
#define SABRE_ONBOARD_IRQ_BASE	0x20
#define sabre_onboard_imap_offset(__ino) \
(SABRE_OBIO_IMAP_BASE + (((__ino) & 0x1f) << 3))
#define sabre_iclr_offset(ino)					      \
((ino & 0x20) ? (SABRE_ICLR_SCSI + (((ino) & 0x1f) << 3)) :  \
(SABRE_ICLR_A_SLOT0 + (((ino) & 0x1f)<<3)))
static int sabre_device_needs_wsync(struct device_node *dp)
static unsigned int sabre_irq_build(struct device_node *dp,
unsigned int ino,
void *_data)
static void __init sabre_irq_trans_init(struct device_node *dp)
#define SCHIZO_IMAP_BASE	0x1000UL
#define SCHIZO_ICLR_BASE	0x1400UL
static unsigned long schizo_imap_offset(unsigned long ino)
static unsigned long schizo_iclr_offset(unsigned long ino)
static unsigned long schizo_ino_to_iclr(unsigned long pbm_regs,
unsigned int ino)
static unsigned long schizo_ino_to_imap(unsigned long pbm_regs,
unsigned int ino)
#define schizo_read(__reg) \
()
#define schizo_write(__reg, __val) \
__asm__ __volatile__("stxa %0, [%1] %2" \
: \
: "r" (__val), "r" (__reg), \
"i" (ASI_PHYS_BYPASS_EC_E) \
: "memory")
static void tomatillo_wsync_handler(unsigned int ino, void *_arg1, void *_arg2)
struct schizo_irq_data ;
static unsigned int schizo_irq_build(struct device_node *dp,
unsigned int ino,
void *_data)
static void __init __schizo_irq_trans_init(struct device_node *dp,
int is_tomatillo)
static void __init schizo_irq_trans_init(struct device_node *dp)
static void __init tomatillo_irq_trans_init(struct device_node *dp)
static unsigned int pci_sun4v_irq_build(struct device_node *dp,
unsigned int devino,
void *_data)
static void __init pci_sun4v_irq_trans_init(struct device_node *dp)
struct fire_irq_data ;
#define FIRE_IMAP_BASE	0x001000
#define FIRE_ICLR_BASE	0x001400
static unsigned long fire_imap_offset(unsigned long ino)
static unsigned long fire_iclr_offset(unsigned long ino)
static unsigned long fire_ino_to_iclr(unsigned long pbm_regs,
unsigned int ino)
static unsigned long fire_ino_to_imap(unsigned long pbm_regs,
unsigned int ino)
static unsigned int fire_irq_build(struct device_node *dp,
unsigned int ino,
void *_data)
static void __init fire_irq_trans_init(struct device_node *dp)
#define SYSIO_IMAP_SLOT0	0x2c00UL
#define SYSIO_IMAP_SLOT1	0x2c08UL
#define SYSIO_IMAP_SLOT2	0x2c10UL
#define SYSIO_IMAP_SLOT3	0x2c18UL
#define SYSIO_IMAP_SCSI		0x3000UL
#define SYSIO_IMAP_ETH		0x3008UL
#define SYSIO_IMAP_BPP		0x3010UL
#define SYSIO_IMAP_AUDIO	0x3018UL
#define SYSIO_IMAP_PFAIL	0x3020UL
#define SYSIO_IMAP_KMS		0x3028UL
#define SYSIO_IMAP_FLPY		0x3030UL
#define SYSIO_IMAP_SHW		0x3038UL
#define SYSIO_IMAP_KBD		0x3040UL
#define SYSIO_IMAP_MS		0x3048UL
#define SYSIO_IMAP_SER		0x3050UL
#define SYSIO_IMAP_TIM0		0x3060UL
#define SYSIO_IMAP_TIM1		0x3068UL
#define SYSIO_IMAP_UE		0x3070UL
#define SYSIO_IMAP_CE		0x3078UL
#define SYSIO_IMAP_SBERR	0x3080UL
#define SYSIO_IMAP_PMGMT	0x3088UL
#define SYSIO_IMAP_GFX		0x3090UL
#define SYSIO_IMAP_EUPA		0x3098UL
#define bogon     ((unsigned long) -1)
static unsigned long sysio_irq_offsets[] = ;
#undef bogon
#define NUM_SYSIO_OFFSETS ARRAY_SIZE(sysio_irq_offsets)
#define SYSIO_ICLR_UNUSED0	0x3400UL
#define SYSIO_ICLR_SLOT0	0x3408UL
#define SYSIO_ICLR_SLOT1	0x3448UL
#define SYSIO_ICLR_SLOT2	0x3488UL
#define SYSIO_ICLR_SLOT3	0x34c8UL
static unsigned long sysio_imap_to_iclr(unsigned long imap)
static unsigned int sbus_of_build_irq(struct device_node *dp,
unsigned int ino,
void *_data)
static void __init sbus_irq_trans_init(struct device_node *dp)
static unsigned int central_build_irq(struct device_node *dp,
unsigned int ino,
void *_data)
static void __init central_irq_trans_init(struct device_node *dp)
struct irq_trans ;
static struct irq_trans __initdata pci_irq_trans_table[] = ;
static unsigned int sun4v_vdev_irq_build(struct device_node *dp,
unsigned int devino,
void *_data)
static void __init sun4v_vdev_irq_trans_init(struct device_node *dp)
void __init irq_trans_init(struct device_node *dp)
