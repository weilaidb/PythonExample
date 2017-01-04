#define _ASM_DBDMA_H_
struct dbdma_regs ;
#define RUN	0x8000
#define PAUSE	0x4000
#define FLUSH	0x2000
#define WAKE	0x1000
#define DEAD	0x0800
#define ACTIVE	0x0400
#define BT	0x0100
#define DEVSTAT	0x00ff
struct dbdma_cmd ;
#define OUTPUT_MORE	0
#define OUTPUT_LAST	0x1000
#define INPUT_MORE	0x2000
#define INPUT_LAST	0x3000
#define STORE_WORD	0x4000
#define LOAD_WORD	0x5000
#define DBDMA_NOP	0x6000
#define DBDMA_STOP	0x7000
#define KEY_STREAM0	0
#define KEY_STREAM1	0x100
#define KEY_STREAM2	0x200
#define KEY_STREAM3	0x300
#define KEY_REGS	0x500
#define KEY_SYSTEM	0x600
#define KEY_DEVICE	0x700
#define INTR_NEVER	0
#define INTR_IFSET	0x10
#define INTR_IFCLR	0x20
#define INTR_ALWAYS	0x30
#define BR_NEVER	0
#define BR_IFSET	0x4
#define BR_IFCLR	0x8
#define BR_ALWAYS	0xc
#define WAIT_NEVER	0
#define WAIT_IFSET	1
#define WAIT_IFCLR	2
#define WAIT_ALWAYS	3
#define DBDMA_ALIGN(x)	(((unsigned long)(x) + sizeof(struct dbdma_cmd) - 1) \
& -sizeof(struct dbdma_cmd))
#define DBDMA_DO_STOP(regs) do  while(0)
#define DBDMA_DO_RESET(regs) do  while(0)
