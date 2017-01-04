#define _SVGA_OVERLAY_H_
#define VMWARE_FOURCC_YV12 0x32315659
#define VMWARE_FOURCC_YUY2 0x32595559
#define VMWARE_FOURCC_UYVY 0x59565955
typedef enum  SVGAOverlayFormat;
#define SVGA_VIDEO_COLORKEY_MASK             0x00ffffff
#define SVGA_ESCAPE_VMWARE_VIDEO             0x00020000
#define SVGA_ESCAPE_VMWARE_VIDEO_SET_REGS    0x00020001
#define SVGA_ESCAPE_VMWARE_VIDEO_FLUSH       0x00020002
typedef
struct SVGAEscapeVideoSetRegs  SVGAEscapeVideoSetRegs;
typedef
struct SVGAEscapeVideoFlush  SVGAEscapeVideoFlush;
typedef
struct  SVGAFifoEscapeCmdVideoBase;
typedef
struct  SVGAFifoEscapeCmdVideoFlush;
typedef
struct  SVGAFifoEscapeCmdVideoSetRegs;
typedef
struct  SVGAFifoEscapeCmdVideoSetAllRegs;
static inline bool
VMwareVideoGetAttributes(const SVGAOverlayFormat format,
uint32 *width,
uint32 *height,
uint32 *size,
uint32 *pitches,
uint32 *offsets)
