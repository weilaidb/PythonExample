#define _INTELFB_H
#define INTELFB_VERSION			"0.9.6"
#define INTELFB_MODULE_NAME		"intelfb"
#define SUPPORTED_CHIPSETS		"830M/845G/852GM/855GM/865G/915G/915GM/945G/945GM/945GME/965G/965GM"
#define DEBUG				0
#define VERBOSE				0
#define REGDUMP				0
#define DETECT_VGA_CLASS_ONLY		1
#define ALLOCATE_FOR_PANNING		1
#define PREFERRED_MODE			"1024x768-32@70"
#define INTELFB_FB_ACQUIRED                 1
#define INTELFB_MMIO_ACQUIRED               2
#define PCI_DEVICE_ID_INTEL_830M	0x3577
#define PCI_DEVICE_ID_INTEL_845G	0x2562
#define PCI_DEVICE_ID_INTEL_85XGM	0x3582
#define PCI_DEVICE_ID_INTEL_854		0x358E
#define PCI_DEVICE_ID_INTEL_865G	0x2572
#define PCI_DEVICE_ID_INTEL_915G	0x2582
#define PCI_DEVICE_ID_INTEL_915GM	0x2592
#define PCI_DEVICE_ID_INTEL_945G	0x2772
#define PCI_DEVICE_ID_INTEL_945GM	0x27A2
#define PCI_DEVICE_ID_INTEL_945GME	0x27AE
#define PCI_DEVICE_ID_INTEL_965G	0x29A2
#define PCI_DEVICE_ID_INTEL_965GM	0x2A02
#define INTEL_REG_SIZE			0x80000
#define STRIDE_ALIGNMENT		16
#define STRIDE_ALIGNMENT_I9XX		64
#define PALETTE_8_ENTRIES		256
#define KB(x)			((x) * 1024)
#define MB(x)			((x) * 1024 * 1024)
#define BtoKB(x)		((x) / 1024)
#define BtoMB(x)		((x) / 1024 / 1024)
#define GTT_PAGE_SIZE           KB(4)
#define ROUND_UP_TO(x, y)	(((x) + (y) - 1) / (y) * (y))
#define ROUND_DOWN_TO(x, y)	((x) / (y) * (y))
#define ROUND_UP_TO_PAGE(x)	ROUND_UP_TO((x), GTT_PAGE_SIZE)
#define ROUND_DOWN_TO_PAGE(x)	ROUND_DOWN_TO((x), GTT_PAGE_SIZE)
#define PFX			INTELFB_MODULE_NAME ": "
#define ERR_MSG(fmt, args...)	printk(KERN_ERR PFX fmt, ## args)
#define WRN_MSG(fmt, args...)	printk(KERN_WARNING PFX fmt, ## args)
#define NOT_MSG(fmt, args...)	printk(KERN_NOTICE PFX fmt, ## args)
#define INF_MSG(fmt, args...)	printk(KERN_INFO PFX fmt, ## args)
#if DEBUG
#define DBG_MSG(fmt, args...)	printk(KERN_DEBUG PFX fmt, ## args)
#define DBG_MSG(fmt, args...)	while (0) printk(fmt, ## args)
#define GET_DINFO(info)		(info)->par
#define ACCEL(d, i)                                                     \
((d)->accel && !(d)->ring_lockup &&                             \
((i)->var.accel_flags & FB_ACCELF_TEXT))
#define NOACCEL_CHIPSET(d)						\
(0)
#define FIXED_MODE(d) ((d)->fixed_mode)
#define RINGBUFFER_SIZE		KB(64)
#define HW_CURSOR_SIZE		KB(4)
#define AGP_PHYSICAL_MEMORY     2
#define MAX_OUTPUTS 6
#define INTELFB_OUTPUT_UNUSED 0
#define INTELFB_OUTPUT_ANALOG 1
#define INTELFB_OUTPUT_DVO 2
#define INTELFB_OUTPUT_SDVO 3
#define INTELFB_OUTPUT_LVDS 4
#define INTELFB_OUTPUT_TVOUT 5
#define INTELFB_DVO_CHIP_NONE 0
#define INTELFB_DVO_CHIP_LVDS 1
#define INTELFB_DVO_CHIP_TMDS 2
#define INTELFB_DVO_CHIP_TVOUT 4
#define INTELFB_OUTPUT_PIPE_NC  0
#define INTELFB_OUTPUT_PIPE_A   1
#define INTELFB_OUTPUT_PIPE_B   2
enum intel_chips ;
struct intelfb_hwstate ;
struct intelfb_heap_data ;
struct intelfb_i2c_chan ;
struct intelfb_output_rec ;
struct intelfb_vsync ;
struct intelfb_info ;
#define IS_I9XX(dinfo) (((dinfo)->chipset == INTEL_915G) ||	\
((dinfo)->chipset == INTEL_915GM) ||	\
((dinfo)->chipset == INTEL_945G) ||	\
((dinfo)->chipset == INTEL_945GM) ||	\
((dinfo)->chipset == INTEL_945GME) ||	\
((dinfo)->chipset == INTEL_965G) ||	\
((dinfo)->chipset == INTEL_965GM))
extern int intelfb_var_to_depth(const struct fb_var_screeninfo *var);
extern void intelfb_create_i2c_busses(struct intelfb_info *dinfo);
extern void intelfb_delete_i2c_busses(struct intelfb_info *dinfo);
