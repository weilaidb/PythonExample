#define _VMWGFX_REG_H_
#define VMWGFX_INDEX_PORT     0x0
#define VMWGFX_VALUE_PORT     0x1
#define VMWGFX_IRQSTATUS_PORT 0x8
struct svga_guest_mem_descriptor ;
struct svga_fifo_cmd_fence ;
#define SVGA_SYNC_GENERIC         1
#define SVGA_SYNC_FIFOFULL        2
