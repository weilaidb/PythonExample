#define __LANGWELL_UDC_H
#define	CAP_REG_OFFSET		0x0
#define	OP_REG_OFFSET		0x28
#define	DMA_ADDR_INVALID	(~(dma_addr_t)0)
#define	DQH_ALIGNMENT		2048
#define	DTD_ALIGNMENT		64
#define	DMA_BOUNDARY		4096
#define	EP0_MAX_PKT_SIZE	64
#define EP_DIR_IN		1
#define EP_DIR_OUT		0
#define FLUSH_TIMEOUT		1000
#define RESET_TIMEOUT		1000
#define SETUPSTAT_TIMEOUT	100
#define PRIME_TIMEOUT		100
struct langwell_cap_regs  __attribute__ ((packed));
struct langwell_op_regs  __attribute__ ((packed));
