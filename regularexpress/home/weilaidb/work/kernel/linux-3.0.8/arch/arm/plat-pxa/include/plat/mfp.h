#define __ASM_PLAT_MFP_H
#define mfp_to_gpio(m)	((m) % 256)
enum ;
typedef unsigned long mfp_cfg_t;
#define MFP_PIN(x)		((x) & 0x3ff)
#define MFP_AF0			(0x0 << 10)
#define MFP_AF1			(0x1 << 10)
#define MFP_AF2			(0x2 << 10)
#define MFP_AF3			(0x3 << 10)
#define MFP_AF4			(0x4 << 10)
#define MFP_AF5			(0x5 << 10)
#define MFP_AF6			(0x6 << 10)
#define MFP_AF7			(0x7 << 10)
#define MFP_AF_MASK		(0x7 << 10)
#define MFP_AF(x)		(((x) >> 10) & 0x7)
#define MFP_DS01X		(0x0 << 13)
#define MFP_DS02X		(0x1 << 13)
#define MFP_DS03X		(0x2 << 13)
#define MFP_DS04X		(0x3 << 13)
#define MFP_DS06X		(0x4 << 13)
#define MFP_DS08X		(0x5 << 13)
#define MFP_DS10X		(0x6 << 13)
#define MFP_DS13X		(0x7 << 13)
#define MFP_DS_MASK		(0x7 << 13)
#define MFP_DS(x)		(((x) >> 13) & 0x7)
#define MFP_LPM_DEFAULT		(0x0 << 16)
#define MFP_LPM_DRIVE_LOW	(0x1 << 16)
#define MFP_LPM_DRIVE_HIGH	(0x2 << 16)
#define MFP_LPM_PULL_LOW	(0x3 << 16)
#define MFP_LPM_PULL_HIGH	(0x4 << 16)
#define MFP_LPM_FLOAT		(0x5 << 16)
#define MFP_LPM_INPUT		(0x6 << 16)
#define MFP_LPM_STATE_MASK	(0x7 << 16)
#define MFP_LPM_STATE(x)	(((x) >> 16) & 0x7)
#define MFP_LPM_EDGE_NONE	(0x0 << 19)
#define MFP_LPM_EDGE_RISE	(0x1 << 19)
#define MFP_LPM_EDGE_FALL	(0x2 << 19)
#define MFP_LPM_EDGE_BOTH	(0x3 << 19)
#define MFP_LPM_EDGE_MASK	(0x3 << 19)
#define MFP_LPM_EDGE(x)		(((x) >> 19) & 0x3)
#define MFP_PULL_NONE		(0x0 << 21)
#define MFP_PULL_LOW		(0x1 << 21)
#define MFP_PULL_HIGH		(0x2 << 21)
#define MFP_PULL_BOTH		(0x3 << 21)
#define MFP_PULL_FLOAT		(0x4 << 21)
#define MFP_PULL_MASK		(0x7 << 21)
#define MFP_PULL(x)		(((x) >> 21) & 0x7)
#define MFP_CFG_DEFAULT		(MFP_AF0 | MFP_DS03X | MFP_LPM_DEFAULT |\
MFP_LPM_EDGE_NONE | MFP_PULL_NONE)
#define MFP_CFG(pin, af)		\
((MFP_CFG_DEFAULT & ~MFP_AF_MASK) |\
(MFP_PIN(MFP_PIN_##pin) | MFP_##af))
#define MFP_CFG_DRV(pin, af, drv)	\
((MFP_CFG_DEFAULT & ~(MFP_AF_MASK | MFP_DS_MASK)) |\
(MFP_PIN(MFP_PIN_##pin) | MFP_##af | MFP_##drv))
#define MFP_CFG_LPM(pin, af, lpm)	\
((MFP_CFG_DEFAULT & ~(MFP_AF_MASK | MFP_LPM_STATE_MASK)) |\
(MFP_PIN(MFP_PIN_##pin) | MFP_##af | MFP_LPM_##lpm))
#define MFP_CFG_X(pin, af, drv, lpm)	\
((MFP_CFG_DEFAULT & ~(MFP_AF_MASK | MFP_DS_MASK | MFP_LPM_STATE_MASK)) |\
(MFP_PIN(MFP_PIN_##pin) | MFP_##af | MFP_##drv | MFP_LPM_##lpm))
#if defined(CONFIG_PXA3xx) || defined(CONFIG_PXA95x) || defined(CONFIG_ARCH_MMP)
struct mfp_addr_map ;
#define MFP_ADDR_X(start, end, offset) \
#define MFP_ADDR(pin, offset) \
#define MFP_ADDR_END
void __init mfp_init_base(unsigned long mfpr_base);
void __init mfp_init_addr(struct mfp_addr_map *map);
unsigned long mfp_read(int mfp);
void mfp_write(int mfp, unsigned long mfpr_val);
void mfp_config(unsigned long *mfp_cfgs, int num);
void mfp_config_run(void);
void mfp_config_lpm(void);
