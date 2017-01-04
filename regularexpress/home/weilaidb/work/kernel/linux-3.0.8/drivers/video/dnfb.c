#define AP_IOBASE       0x3b0
#define AP_STATUS       isaIO2mem(AP_IOBASE+0)
#define AP_WRITE_ENABLE isaIO2mem(AP_IOBASE+0)
#define AP_DEVICE_ID    isaIO2mem(AP_IOBASE+1)
#define AP_ROP_1        isaIO2mem(AP_IOBASE+2)
#define AP_DIAG_MEM_REQ isaIO2mem(AP_IOBASE+4)
#define AP_CONTROL_0    isaIO2mem(AP_IOBASE+8)
#define AP_CONTROL_1    isaIO2mem(AP_IOBASE+0xa)
#define AP_CONTROL_3A   isaIO2mem(AP_IOBASE+0xe)
#define AP_CONTROL_2    isaIO2mem(AP_IOBASE+0xc)
#define FRAME_BUFFER_START 0x0FA0000
#define FRAME_BUFFER_LEN 0x40000
#define VECTOR_MODE 0x40
#define DBLT_MODE   0x80
#define NORMAL_MODE 0xE0
#define SHIFT_BITS  0x1F
#define AD_BLT      0x80
#define NORMAL      0x80
#define INVERSE     0x00
#define PIX_BLT     0x00
#define AD_HIBIT        0x40
#define ROP_EN          0x10
#define DST_EQ_SRC      0x00
#define nRESET_SYNC     0x08
#define SYNC_ENAB       0x02
#define BLANK_DISP      0x00
#define ENAB_DISP       0x01
#define NORM_CREG1      (nRESET_SYNC | SYNC_ENAB | ENAB_DISP)
#define S_DATA_1s   0x00
#define S_DATA_PIX  0x40
#define S_DATA_PLN  0xC0
#       define RESET_CREG 0x80
#define ROP(r2,r3,r0,r1) ( (U_SHORT)((r0)|((r1)<<4)|((r2)<<8)|((r3)<<12)) )
#define DEST_ZERO               0x0
#define SRC_AND_DEST    0x1
#define SRC_AND_nDEST   0x2
#define SRC                             0x3
#define nSRC_AND_DEST   0x4
#define DEST                    0x5
#define SRC_XOR_DEST    0x6
#define SRC_OR_DEST             0x7
#define SRC_NOR_DEST    0x8
#define SRC_XNOR_DEST   0x9
#define nDEST                   0xA
#define SRC_OR_nDEST    0xB
#define nSRC                    0xC
#define nSRC_OR_DEST    0xD
#define SRC_NAND_DEST   0xE
#define DEST_ONE                0xF
#define SWAP(A) ((A>>8) | ((A&0xff) <<8))
static int dnfb_blank(int blank, struct fb_info *info);
static void dnfb_copyarea(struct fb_info *info, const struct fb_copyarea *area);
static struct fb_ops dn_fb_ops = ;
struct fb_var_screeninfo dnfb_var __devinitdata = ;
static struct fb_fix_screeninfo dnfb_fix __devinitdata = ;
static int dnfb_blank(int blank, struct fb_info *info)
static
void dnfb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static int __devinit dnfb_probe(struct platform_device *dev)
static struct platform_driver dnfb_driver = ;
static struct platform_device dnfb_device = ;
int __init dnfb_init(void)
module_init(dnfb_init);
MODULE_LICENSE("GPL");
