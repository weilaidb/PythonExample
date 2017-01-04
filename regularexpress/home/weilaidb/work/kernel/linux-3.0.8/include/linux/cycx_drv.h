#define	_CYCX_DRV_H
#define	CYCX_WINDOWSIZE	0x4000
#define	GEN_CYCX_INTR	0x02
#define	RST_ENABLE	0x04
#define	START_CPU	0x06
#define	RST_DISABLE	0x08
#define	FIXED_BUFFERS	0x08
#define	TEST_PATTERN	0xaa55
#define	CMD_OFFSET	0x20
#define CONF_OFFSET     0x0380
#define	RESET_OFFSET	0x3c00
#define	DATA_OFFSET	0x0100
#define	START_OFFSET	0x3ff0
struct cycx_hw ;
extern int cycx_setup(struct cycx_hw *hw, void *sfm, u32 len, unsigned long base);
extern int cycx_down(struct cycx_hw *hw);
extern int cycx_peek(struct cycx_hw *hw, u32 addr, void *buf, u32 len);
extern int cycx_poke(struct cycx_hw *hw, u32 addr, void *buf, u32 len);
extern int cycx_exec(void __iomem *addr);
extern void cycx_intr(struct cycx_hw *hw);
