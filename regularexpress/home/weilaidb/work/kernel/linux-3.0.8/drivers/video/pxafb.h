#define __PXAFB_H__
struct pxafb_dma_descriptor ;
enum ;
enum ;
#define PALETTE_SIZE	(256 * 4)
#define CMD_BUFF_SIZE	(1024 * 50)
struct pxafb_dma_buff ;
enum ;
enum ;
#define NONSTD_TO_XPOS(x)	(((x) >> 0)  & 0x3ff)
#define NONSTD_TO_YPOS(x)	(((x) >> 10) & 0x3ff)
#define NONSTD_TO_PFOR(x)	(((x) >> 20) & 0x7)
struct pxafb_layer;
struct pxafb_layer_ops ;
struct pxafb_layer ;
struct pxafb_info ;
#define TO_INF(ptr,member) container_of(ptr,struct pxafb_info,member)
#define C_DISABLE		(0)
#define C_ENABLE		(1)
#define C_DISABLE_CLKCHANGE	(2)
#define C_ENABLE_CLKCHANGE	(3)
#define C_REENABLE		(4)
#define C_DISABLE_PM		(5)
#define C_ENABLE_PM		(6)
#define C_STARTUP		(7)
#define PXA_NAME	"PXA"
#define MIN_XRES	64
#define MIN_YRES	64
#define MAX_XRES	1024
#define MAX_YRES	1024
