#define _SVGA_REG_H_
#define PCI_VENDOR_ID_VMWARE            0x15AD
#define PCI_DEVICE_ID_VMWARE_SVGA2      0x0405
#define SVGA_CURSOR_ON_HIDE            0x0
#define SVGA_CURSOR_ON_SHOW            0x1
#define SVGA_CURSOR_ON_REMOVE_FROM_FB  0x2
#define SVGA_CURSOR_ON_RESTORE_TO_FB   0x3
#define SVGA_FB_MAX_TRACEABLE_SIZE      0x1000000
#define SVGA_MAX_PSEUDOCOLOR_DEPTH      8
#define SVGA_MAX_PSEUDOCOLORS           (1 << SVGA_MAX_PSEUDOCOLOR_DEPTH)
#define SVGA_NUM_PALETTE_REGS           (3 * SVGA_MAX_PSEUDOCOLORS)
#define SVGA_MAGIC         0x900000UL
#define SVGA_MAKE_ID(ver)  (SVGA_MAGIC << 8 | (ver))
#define SVGA_VERSION_2     2
#define SVGA_ID_2          SVGA_MAKE_ID(SVGA_VERSION_2)
#define SVGA_VERSION_1     1
#define SVGA_ID_1          SVGA_MAKE_ID(SVGA_VERSION_1)
#define SVGA_VERSION_0     0
#define SVGA_ID_0          SVGA_MAKE_ID(SVGA_VERSION_0)
#define SVGA_ID_INVALID    0xFFFFFFFF
#define SVGA_INDEX_PORT         0x0
#define SVGA_VALUE_PORT         0x1
#define SVGA_BIOS_PORT          0x2
#define SVGA_IRQSTATUS_PORT     0x8
#define SVGA_IRQFLAG_ANY_FENCE            0x1
#define SVGA_IRQFLAG_FIFO_PROGRESS        0x2
#define SVGA_IRQFLAG_FENCE_GOAL           0x4
enum ;
#define SVGA_GMR_NULL         ((uint32) -1)
#define SVGA_GMR_FRAMEBUFFER  ((uint32) -2)
typedef
struct SVGAGuestMemDescriptor  SVGAGuestMemDescriptor;
typedef
struct SVGAGuestPtr  SVGAGuestPtr;
typedef
struct SVGAGMRImageFormat  SVGAGMRImageFormat;
typedef
struct SVGAColorBGRX  SVGAColorBGRX;
typedef
struct SVGASignedRect  SVGASignedRect;
typedef
struct SVGASignedPoint  SVGASignedPoint;
#define SVGA_CAP_NONE               0x00000000
#define SVGA_CAP_RECT_COPY          0x00000002
#define SVGA_CAP_CURSOR             0x00000020
#define SVGA_CAP_CURSOR_BYPASS      0x00000040
#define SVGA_CAP_CURSOR_BYPASS_2    0x00000080
#define SVGA_CAP_8BIT_EMULATION     0x00000100
#define SVGA_CAP_ALPHA_CURSOR       0x00000200
#define SVGA_CAP_3D                 0x00004000
#define SVGA_CAP_EXTENDED_FIFO      0x00008000
#define SVGA_CAP_MULTIMON           0x00010000
#define SVGA_CAP_PITCHLOCK          0x00020000
#define SVGA_CAP_IRQMASK            0x00040000
#define SVGA_CAP_DISPLAY_TOPOLOGY   0x00080000
#define SVGA_CAP_GMR                0x00100000
#define SVGA_CAP_TRACES             0x00200000
enum ;
#define SVGA_FIFO_EXTENDED_MANDATORY_REGS  (SVGA_FIFO_3D_CAPS_LAST + 1)
#define SVGA_FIFO_CAP_NONE                  0
#define SVGA_FIFO_CAP_FENCE             (1<<0)
#define SVGA_FIFO_CAP_ACCELFRONT        (1<<1)
#define SVGA_FIFO_CAP_PITCHLOCK         (1<<2)
#define SVGA_FIFO_CAP_VIDEO             (1<<3)
#define SVGA_FIFO_CAP_CURSOR_BYPASS_3   (1<<4)
#define SVGA_FIFO_CAP_ESCAPE            (1<<5)
#define SVGA_FIFO_CAP_RESERVE           (1<<6)
#define SVGA_FIFO_CAP_SCREEN_OBJECT     (1<<7)
#define SVGA_FIFO_FLAG_NONE                 0
#define SVGA_FIFO_FLAG_ACCELFRONT       (1<<0)
#define SVGA_FIFO_FLAG_RESERVED        (1<<31)
#define SVGA_FIFO_RESERVED_UNKNOWN      0xffffffff
#define SVGA_NUM_OVERLAY_UNITS 32
#define SVGA_VIDEO_FLAG_COLORKEY        0x0001
enum ;
typedef struct SVGAOverlayUnit  SVGAOverlayUnit;
#define SVGA_SCREEN_HAS_ROOT    (1 << 0)
#define SVGA_SCREEN_IS_PRIMARY  (1 << 1)
#define SVGA_SCREEN_FULLSCREEN_HINT (1 << 2)
typedef
struct SVGAScreenObject  SVGAScreenObject;
typedef enum  SVGAFifoCmdId;
#define SVGA_CMD_MAX_ARGS           64
typedef
struct  SVGAFifoCmdUpdate;
typedef
struct  SVGAFifoCmdRectCopy;
typedef
struct  SVGAFifoCmdDefineCursor;
typedef
struct  SVGAFifoCmdDefineAlphaCursor;
typedef
struct  SVGAFifoCmdUpdateVerbose;
#define  SVGA_ROP_COPY                    0x03
typedef
struct  SVGAFifoCmdFrontRopFill;
typedef
struct  SVGAFifoCmdFence;
typedef
struct  SVGAFifoCmdEscape;
typedef
struct  SVGAFifoCmdDefineScreen;
typedef
struct  SVGAFifoCmdDestroyScreen;
typedef
struct  SVGAFifoCmdDefineGMRFB;
typedef
struct  SVGAFifoCmdBlitGMRFBToScreen;
typedef
struct  SVGAFifoCmdBlitScreenToGMRFB;
typedef
struct  SVGAFifoCmdAnnotationFill;
typedef
struct  SVGAFifoCmdAnnotationCopy;
