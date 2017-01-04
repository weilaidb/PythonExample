#define _SGI_NEWPORT_H
typedef volatile unsigned int npireg_t;
union npfloat ;
typedef union npfloat npfreg_t;
union np_dcb ;
struct newport_rexregs ;
struct newport_cregs ;
struct newport_regs ;
typedef struct  newport_ctx;
#define VC2_REGADDR_INDEX      0x00000000
#define VC2_REGADDR_IREG       0x00000010
#define VC2_REGADDR_RAM        0x00000030
#define VC2_PROTOCOL           (NPORT_DMODE_EASACK | 0x00800000 | 0x00040000)
#define VC2_VLINET_ADDR        0x000
#define VC2_VFRAMET_ADDR       0x400
#define VC2_CGLYPH_ADDR        0x500
#define VC2_IREG_VENTRY        0x00
#define VC2_IREG_CENTRY        0x01
#define VC2_IREG_CURSX         0x02
#define VC2_IREG_CURSY         0x03
#define VC2_IREG_CCURSX        0x04
#define VC2_IREG_DENTRY        0x05
#define VC2_IREG_SLEN          0x06
#define VC2_IREG_RADDR         0x07
#define VC2_IREG_VFPTR         0x08
#define VC2_IREG_VLSPTR        0x09
#define VC2_IREG_VLIR          0x0a
#define VC2_IREG_VLCTR         0x0b
#define VC2_IREG_CTPTR         0x0c
#define VC2_IREG_WCURSY        0x0d
#define VC2_IREG_DFPTR         0x0e
#define VC2_IREG_DLTPTR        0x0f
#define VC2_IREG_CONTROL       0x10
#define VC2_IREG_CONFIG        0x20
static inline void newport_vc2_set(struct newport_regs *regs,
unsigned char vc2ireg,
unsigned short val)
static inline unsigned short newport_vc2_get(struct newport_regs *regs,
unsigned char vc2ireg)
#define VC2_CTRL_EVIRQ     0x0001
#define VC2_CTRL_EDISP     0x0002
#define VC2_CTRL_EVIDEO    0x0004
#define VC2_CTRL_EDIDS     0x0008
#define VC2_CTRL_ECURS     0x0010
#define VC2_CTRL_EGSYNC    0x0020
#define VC2_CTRL_EILACE    0x0040
#define VC2_CTRL_ECDISP    0x0080
#define VC2_CTRL_ECCURS    0x0100
#define VC2_CTRL_ECG64     0x0200
#define VC2_CTRL_GLSEL     0x0400
#define NCMAP_REGADDR_AREG   0x00000000
#define NCMAP_REGADDR_ALO    0x00000000
#define NCMAP_REGADDR_AHI    0x00000010
#define NCMAP_REGADDR_PBUF   0x00000020
#define NCMAP_REGADDR_CREG   0x00000030
#define NCMAP_REGADDR_SREG   0x00000040
#define NCMAP_REGADDR_RREG   0x00000060
#define NCMAP_PROTOCOL       (0x00008000 | 0x00040000 | 0x00800000)
static __inline__ void newport_cmap_setaddr(struct newport_regs *regs,
unsigned short addr)
static __inline__ void newport_cmap_setrgb(struct newport_regs *regs,
unsigned char red,
unsigned char green,
unsigned char blue)
#define BUSY_TIMEOUT 100000
static __inline__ int newport_wait(struct newport_regs *regs)
static __inline__ int newport_bfwait(struct newport_regs *regs)
#define DCB_DATAWIDTH_4 0x0
#define DCB_DATAWIDTH_1 0x1
#define DCB_DATAWIDTH_2 0x2
#define DCB_DATAWIDTH_3 0x3
#define DCB_ENDATAPACK   (1 << 2)
#define DCB_ENCRSINC     (1 << 3)
#define DCB_CRS_SHIFT    4
#define DCB_ADDR_SHIFT   7
#define DCB_VC2          (0 <<  DCB_ADDR_SHIFT)
#define DCB_CMAP_ALL     (1 <<  DCB_ADDR_SHIFT)
#define DCB_CMAP0        (2 <<  DCB_ADDR_SHIFT)
#define DCB_CMAP1        (3 <<  DCB_ADDR_SHIFT)
#define DCB_XMAP_ALL     (4 <<  DCB_ADDR_SHIFT)
#define DCB_XMAP0        (5 <<  DCB_ADDR_SHIFT)
#define DCB_XMAP1        (6 <<  DCB_ADDR_SHIFT)
#define DCB_BT445        (7 <<  DCB_ADDR_SHIFT)
#define DCB_VCC1         (8 <<  DCB_ADDR_SHIFT)
#define DCB_VAB1         (9 <<  DCB_ADDR_SHIFT)
#define DCB_LG3_BDVERS0  (10 << DCB_ADDR_SHIFT)
#define DCB_LG3_ICS1562  (11 << DCB_ADDR_SHIFT)
#define DCB_RESERVED     (15 << DCB_ADDR_SHIFT)
#define DCB_ENSYNCACK    (1 << 11)
#define DCB_ENASYNCACK   (1 << 12)
#define DCB_CSWIDTH_SHIFT 13
#define DCB_CSHOLD_SHIFT  18
#define DCB_CSSETUP_SHIFT 23
#   define XM9_CRS_CONFIG            (0 << DCB_CRS_SHIFT)
#       define XM9_PUPMODE           (1 << 0)
#       define XM9_ODD_PIXEL         (1 << 1)
#       define XM9_8_BITPLANES       (1 << 2)
#       define XM9_SLOW_DCB          (1 << 3)
#       define XM9_VIDEO_RGBMAP_MASK (3 << 4)
#       define XM9_EXPRESS_VIDEO     (1 << 6)
#       define XM9_VIDEO_OPTION      (1 << 7)
#   define XM9_CRS_REVISION          (1 << DCB_CRS_SHIFT)
#   define XM9_CRS_FIFO_AVAIL        (2 << DCB_CRS_SHIFT)
#       define XM9_FIFO_0_AVAIL      0
#       define XM9_FIFO_1_AVAIL      1
#       define XM9_FIFO_2_AVAIL      3
#       define XM9_FIFO_3_AVAIL      2
#       define XM9_FIFO_FULL         XM9_FIFO_0_AVAIL
#       define XM9_FIFO_EMPTY        XM9_FIFO_3_AVAIL
#   define XM9_CRS_CURS_CMAP_MSB     (3 << DCB_CRS_SHIFT)
#   define XM9_CRS_PUP_CMAP_MSB      (4 << DCB_CRS_SHIFT)
#   define XM9_CRS_MODE_REG_DATA     (5 << DCB_CRS_SHIFT)
#   define XM9_CRS_MODE_REG_INDEX    (7 << DCB_CRS_SHIFT)
#define DCB_CYCLES(setup,hold,width)                \
((hold << DCB_CSHOLD_SHIFT)  |    \
(setup << DCB_CSSETUP_SHIFT)|    \
(width << DCB_CSWIDTH_SHIFT))
#define W_DCB_XMAP9_PROTOCOL       DCB_CYCLES (2, 1, 0)
#define WSLOW_DCB_XMAP9_PROTOCOL   DCB_CYCLES (5, 5, 0)
#define WAYSLOW_DCB_XMAP9_PROTOCOL DCB_CYCLES (12, 12, 0)
#define R_DCB_XMAP9_PROTOCOL       DCB_CYCLES (2, 1, 3)
static __inline__ void
xmap9FIFOWait (struct newport_regs *rex)
static __inline__ void
xmap9SetModeReg (struct newport_regs *rex, unsigned int modereg, unsigned int data24, int cfreq)
#define BT445_PROTOCOL		DCB_CYCLES(1,1,3)
#define BT445_CSR_ADDR_REG	(0 << DCB_CRS_SHIFT)
#define BT445_CSR_REVISION	(2 << DCB_CRS_SHIFT)
#define BT445_REVISION_REG	0x01
