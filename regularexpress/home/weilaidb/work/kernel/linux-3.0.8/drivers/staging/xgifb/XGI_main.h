#define _XGIFB_MAIN
#define XGIFAIL(x) do  while (0)
#define VER_MAJOR                 0
#define VER_MINOR                 8
#define VER_LEVEL                 1
#define DRIVER_DESC  "XGI Volari Frame Buffer Module Version 0.8.1"
#define PCI_VENDOR_ID_XG          0x18CA
#define PCI_DEVICE_ID_XG_40      0x040
#define PCI_DEVICE_ID_XG_41      0x041
#define PCI_DEVICE_ID_XG_42      0x042
#define PCI_DEVICE_ID_XG_20      0x020
#define PCI_DEVICE_ID_XG_27      0x027
#define XGI_IOTYPE1 void __iomem
#define XGI_IOTYPE2 __iomem
#define XGIINITSTATIC static
static DEFINE_PCI_DEVICE_TABLE(xgifb_pci_table) = ;
MODULE_DEVICE_TABLE(pci, xgifb_pci_table);
#define FB_ACCEL_XGI_GLAMOUR_2  40
#define FB_ACCEL_XGI_XABRE      41
#define MAX_ROM_SCAN              0x10000
#define SEQ_ADR                   0x14
#define SEQ_DATA                  0x15
#define DAC_ADR                   0x18
#define DAC_DATA                  0x19
#define CRTC_ADR                  0x24
#define CRTC_DATA                 0x25
#define DAC2_ADR                  (0x16-0x30)
#define DAC2_DATA                 (0x17-0x30)
#define VB_PART1_ADR              (0x04-0x30)
#define VB_PART1_DATA             (0x05-0x30)
#define VB_PART2_ADR              (0x10-0x30)
#define VB_PART2_DATA             (0x11-0x30)
#define VB_PART3_ADR              (0x12-0x30)
#define VB_PART3_DATA             (0x13-0x30)
#define VB_PART4_ADR              (0x14-0x30)
#define VB_PART4_DATA             (0x15-0x30)
#define XGISR			  XGI_Pr.P3c4
#define XGICR                     XGI_Pr.P3d4
#define XGIDACA                   XGI_Pr.P3c8
#define XGIDACD                   XGI_Pr.P3c9
#define XGIPART1                  XGI_Pr.Part1Port
#define XGIPART2                  XGI_Pr.Part2Port
#define XGIPART3                  XGI_Pr.Part3Port
#define XGIPART4                  XGI_Pr.Part4Port
#define XGIPART5                  XGI_Pr.Part5Port
#define XGIDAC2A                  XGIPART5
#define XGIDAC2D                  (XGIPART5 + 1)
#define XGIMISCR                  (XGI_Pr.RelIO + 0x1c)
#define XGIINPSTAT		  (XGI_Pr.RelIO + 0x2a)
#define IND_XGI_PASSWORD          0x05
#define IND_XGI_COLOR_MODE        0x06
#define IND_XGI_RAMDAC_CONTROL    0x07
#define IND_XGI_DRAM_SIZE         0x14
#define IND_XGI_SCRATCH_REG_16    0x16
#define IND_XGI_SCRATCH_REG_17    0x17
#define IND_XGI_SCRATCH_REG_1A    0x1A
#define IND_XGI_MODULE_ENABLE     0x1E
#define IND_XGI_PCI_ADDRESS_SET   0x20
#define IND_XGI_TURBOQUEUE_ADR    0x26
#define IND_XGI_TURBOQUEUE_SET    0x27
#define IND_XGI_POWER_ON_TRAP     0x38
#define IND_XGI_POWER_ON_TRAP2    0x39
#define IND_XGI_CMDQUEUE_SET      0x26
#define IND_XGI_CMDQUEUE_THRESHOLD  0x27
#define IND_XGI_SCRATCH_REG_CR30  0x30
#define IND_XGI_SCRATCH_REG_CR31  0x31
#define IND_XGI_SCRATCH_REG_CR32  0x32
#define IND_XGI_SCRATCH_REG_CR33  0x33
#define IND_XGI_LCD_PANEL         0x36
#define IND_XGI_SCRATCH_REG_CR37  0x37
#define IND_XGI_AGP_IO_PAD        0x48
#define IND_BRI_DRAM_STATUS       0x63
#define MMIO_QUEUE_PHYBASE        0x85C0
#define MMIO_QUEUE_WRITEPORT      0x85C4
#define MMIO_QUEUE_READPORT       0x85C8
#define IND_XGI_CRT2_WRITE_ENABLE_300 0x24
#define IND_XGI_CRT2_WRITE_ENABLE_315 0x2F
#define XGI_PASSWORD              0x86
#define XGI_INTERLACED_MODE       0x20
#define XGI_8BPP_COLOR_MODE       0x0
#define XGI_15BPP_COLOR_MODE      0x1
#define XGI_16BPP_COLOR_MODE      0x2
#define XGI_32BPP_COLOR_MODE      0x4
#define XGI_DRAM_SIZE_MASK     0xF0
#define XGI_DRAM_SIZE_1MB      0x00
#define XGI_DRAM_SIZE_2MB      0x01
#define XGI_DRAM_SIZE_4MB      0x02
#define XGI_DRAM_SIZE_8MB      0x03
#define XGI_DRAM_SIZE_16MB     0x04
#define XGI_DRAM_SIZE_32MB     0x05
#define XGI_DRAM_SIZE_64MB     0x06
#define XGI_DRAM_SIZE_128MB    0x07
#define XGI_DRAM_SIZE_256MB    0x08
#define XGI_DATA_BUS_MASK      0x02
#define XGI_DATA_BUS_64        0x00
#define XGI_DATA_BUS_128       0x01
#define XGI_DUAL_CHANNEL_MASK  0x0C
#define XGI_SINGLE_CHANNEL_1_RANK 0x0
#define XGI_SINGLE_CHANNEL_2_RANK 0x1
#define XGI_ASYM_DDR		  0x02
#define XGI_DUAL_CHANNEL_1_RANK	  0x3
#define XGI550_DRAM_SIZE_MASK     0x3F
#define XGI550_DRAM_SIZE_4MB      0x00
#define XGI550_DRAM_SIZE_8MB      0x01
#define XGI550_DRAM_SIZE_16MB     0x03
#define XGI550_DRAM_SIZE_24MB     0x05
#define XGI550_DRAM_SIZE_32MB     0x07
#define XGI550_DRAM_SIZE_64MB     0x0F
#define XGI550_DRAM_SIZE_96MB     0x17
#define XGI550_DRAM_SIZE_128MB    0x1F
#define XGI550_DRAM_SIZE_256MB    0x3F
#define XGI_SCRATCH_REG_1A_MASK   0x10
#define XGI_ENABLE_2D             0x40
#define XGI_MEM_MAP_IO_ENABLE     0x01
#define XGI_PCI_ADDR_ENABLE       0x80
#define XGI_SIMULTANEOUS_VIEW_ENABLE  0x01
#define XGI_MODE_SELECT_CRT2      0x02
#define XGI_VB_OUTPUT_COMPOSITE   0x04
#define XGI_VB_OUTPUT_SVIDEO      0x08
#define XGI_VB_OUTPUT_SCART       0x10
#define XGI_VB_OUTPUT_LCD         0x20
#define XGI_VB_OUTPUT_CRT2        0x40
#define XGI_VB_OUTPUT_HIVISION    0x80
#define XGI_VB_OUTPUT_DISABLE     0x20
#define XGI_DRIVER_MODE           0x40
#define XGI_VB_COMPOSITE          0x01
#define XGI_VB_SVIDEO             0x02
#define XGI_VB_SCART              0x04
#define XGI_VB_LCD                0x08
#define XGI_VB_CRT2               0x10
#define XGI_CRT1                  0x20
#define XGI_VB_HIVISION           0x40
#define XGI_VB_YPBPR              0x80
#define XGI_VB_TV		  (XGI_VB_COMPOSITE | XGI_VB_SVIDEO | \
XGI_VB_SCART | XGI_VB_HIVISION|XGI_VB_YPBPR)
#define XGI_EXTERNAL_CHIP_MASK		   0x0E
#define XGI_EXTERNAL_CHIP_XGI301           0x01
#define XGI_EXTERNAL_CHIP_LVDS             0x02
#define XGI_EXTERNAL_CHIP_TRUMPION         0x03
#define XGI_EXTERNAL_CHIP_LVDS_CHRONTEL    0x04
#define XGI_EXTERNAL_CHIP_CHRONTEL         0x05
#define XGI310_EXTERNAL_CHIP_LVDS          0x02
#define XGI310_EXTERNAL_CHIP_LVDS_CHRONTEL 0x03
#define XGI_AGP_2X                0x20
#define BRI_DRAM_SIZE_MASK        0x70
#define BRI_DRAM_SIZE_2MB         0x00
#define BRI_DRAM_SIZE_4MB         0x01
#define BRI_DRAM_SIZE_8MB         0x02
#define BRI_DRAM_SIZE_16MB        0x03
#define BRI_DRAM_SIZE_32MB        0x04
#define BRI_DRAM_SIZE_64MB        0x05
#define SR_BUFFER_SIZE            5
#define CR_BUFFER_SIZE            5
static struct fb_info *fb_info;
static int    video_type = FB_TYPE_PACKED_PIXELS;
static struct fb_var_screeninfo default_var = ;
static struct fb_fix_screeninfo XGIfb_fix = ;
static char myid[20];
static u32 pseudo_palette[17];
static int XGIfb_off = 0;
static int XGIfb_crt1off = 0;
static int XGIfb_forcecrt1 = -1;
static int XGIfb_userom = 0;
static int XGIfb_registered;
static int XGIfb_tvmode = 0;
static int XGIfb_pdc = 0;
static int enable_dstn = 0;
static int XGIfb_ypan = -1;
static int XGIfb_CRT2_write_enable = 0;
static int XGIfb_crt2type = -1;
static int XGIfb_tvplug = -1;
static unsigned char XGIfb_detectedpdc = 0;
static unsigned char XGIfb_detectedlcda = 0xff;
static struct xgi_hw_device_info XGIhw_ext;
static struct vb_device_info  XGI_Pr;
#define MD_XGI300 1
#define MD_XGI315 2
static struct _XGIbios_mode  XGIbios_mode[] = ;
static int xgifb_mode_idx = 1;
static int xgifb_mode_idx = -1;
static u8  XGIfb_mode_no  = 0;
static u8  XGIfb_rate_idx = 0;
static const unsigned short XGI300paneltype[] = ;
static const unsigned short XGI310paneltype[] = ;
static const struct _XGI_crt2type  XGI_crt2type[] = ;
static const struct _XGI_tvtype  XGI_tvtype[] = ;
static const struct _XGI_vrate  XGIfb_vrate[] = ;
static const struct _chswtable  mychswtable[] = ;
static const struct _XGI_TV_filter  XGI_TV_filter[] = ;
static int           filter = -1;
static unsigned char filter_tb;
