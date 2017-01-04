#define CMD640_PREFETCH_MASKS 1
#define DRV_NAME "cmd640"
static int cmd640_vlb;
#define VID		0x00
#define DID		0x02
#define PCMD		0x04
#define   PCMD_ENA	0x01
#define PSTTS		0x06
#define REVID		0x08
#define PROGIF		0x09
#define SUBCL		0x0a
#define BASCL		0x0b
#define BaseA0		0x10
#define BaseA1		0x14
#define BaseA2		0x18
#define BaseA3		0x1c
#define INTLINE		0x3c
#define INPINE		0x3d
#define	CFR		0x50
#define   CFR_DEVREV		0x03
#define   CFR_IDE01INTR		0x04
#define	  CFR_DEVID		0x18
#define	  CFR_AT_VESA_078h	0x20
#define	  CFR_DSA1		0x40
#define	  CFR_DSA0		0x80
#define CNTRL		0x51
#define	  CNTRL_DIS_RA0		0x40
#define   CNTRL_DIS_RA1		0x80
#define	  CNTRL_ENA_2ND		0x08
#define	CMDTIM		0x52
#define	ARTTIM0		0x53
#define	DRWTIM0		0x54
#define ARTTIM1 	0x55
#define DRWTIM1		0x56
#define ARTTIM23	0x57
#define   ARTTIM23_DIS_RA2	0x04
#define   ARTTIM23_DIS_RA3	0x08
#define   ARTTIM23_IDE23INTR	0x10
#define DRWTIM23	0x58
#define BRST		0x59
static u8 prefetch_regs[4]  = ;
static u8 prefetch_masks[4] = ;
static u8 arttim_regs[4] = ;
static u8 drwtim_regs[4] = ;
static u8 setup_counts[4]    = ;
static u8 active_counts[4]   = ;
static u8 recovery_counts[4] = ;
static DEFINE_SPINLOCK(cmd640_lock);
static unsigned int cmd640_key;
static void (*__put_cmd640_reg)(u16 reg, u8 val);
static u8 (*__get_cmd640_reg)(u16 reg);
static unsigned int cmd640_chip_version;
static void put_cmd640_reg_pci1(u16 reg, u8 val)
static u8 get_cmd640_reg_pci1(u16 reg)
static void put_cmd640_reg_pci2(u16 reg, u8 val)
static u8 get_cmd640_reg_pci2(u16 reg)
static void put_cmd640_reg_vlb(u16 reg, u8 val)
static u8 get_cmd640_reg_vlb(u16 reg)
static u8 get_cmd640_reg(u16 reg)
static void put_cmd640_reg(u16 reg, u8 val)
static int __init match_pci_cmd640_device(void)
static int __init probe_for_cmd640_pci1(void)
static int __init probe_for_cmd640_pci2(void)
static int __init probe_for_cmd640_vlb(void)
static int __init secondary_port_responding(void)
static void cmd640_dump_regs(void)
static void __set_prefetch_mode(ide_drive_t *drive, int mode)
static void __init check_prefetch(ide_drive_t *drive, unsigned int index)
static void set_prefetch_mode(ide_drive_t *drive, unsigned int index, int mode)
static void display_clocks(unsigned int index)
static inline u8 pack_nibbles(u8 upper, u8 lower)
static void program_drive_counts(ide_drive_t *drive, unsigned int index)
static void cmd640_set_mode(ide_drive_t *drive, unsigned int index,
u8 pio_mode, unsigned int cycle_time)
static void cmd640_set_pio_mode(ide_hwif_t *hwif, ide_drive_t *drive)
static void __init cmd640_init_dev(ide_drive_t *drive)
static int cmd640_test_irq(ide_hwif_t *hwif)
static const struct ide_port_ops cmd640_port_ops = ;
static int pci_conf1(void)
static int pci_conf2(void)
static const struct ide_port_info cmd640_port_info __initdata = ;
static int cmd640x_init_one(unsigned long base, unsigned long ctl)
static int __init cmd640x_init(void)
module_param_named(probe_vlb, cmd640_vlb, bool, 0);
MODULE_PARM_DESC(probe_vlb, "probe for VLB version of CMD640 chipset");
module_init(cmd640x_init);
MODULE_LICENSE("GPL");
