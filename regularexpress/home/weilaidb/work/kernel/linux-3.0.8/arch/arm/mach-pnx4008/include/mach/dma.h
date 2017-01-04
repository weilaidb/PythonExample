#define __ASM_ARCH_DMA_H
#define MAX_DMA_CHANNELS	8
#define DMAC_BASE		IO_ADDRESS(PNX4008_DMA_CONFIG_BASE)
#define DMAC_INT_STAT		(DMAC_BASE + 0x0000)
#define DMAC_INT_TC_STAT	(DMAC_BASE + 0x0004)
#define DMAC_INT_TC_CLEAR	(DMAC_BASE + 0x0008)
#define DMAC_INT_ERR_STAT	(DMAC_BASE + 0x000c)
#define DMAC_INT_ERR_CLEAR	(DMAC_BASE + 0x0010)
#define DMAC_SOFT_SREQ		(DMAC_BASE + 0x0024)
#define DMAC_CONFIG		(DMAC_BASE + 0x0030)
#define DMAC_Cx_SRC_ADDR(c)	(DMAC_BASE + 0x0100 + (c) * 0x20)
#define DMAC_Cx_DEST_ADDR(c)	(DMAC_BASE + 0x0104 + (c) * 0x20)
#define DMAC_Cx_LLI(c)		(DMAC_BASE + 0x0108 + (c) * 0x20)
#define DMAC_Cx_CONTROL(c)	(DMAC_BASE + 0x010c + (c) * 0x20)
#define DMAC_Cx_CONFIG(c)	(DMAC_BASE + 0x0110 + (c) * 0x20)
enum ;
enum ;
enum ;
enum ;
enum ;
struct pnx4008_dma_ch_ctrl ;
struct pnx4008_dma_ch_config ;
struct pnx4008_dma_ll ;
struct pnx4008_dma_config ;
extern struct pnx4008_dma_ll *pnx4008_alloc_ll_entry(dma_addr_t *);
extern void pnx4008_free_ll_entry(struct pnx4008_dma_ll *, dma_addr_t);
extern void pnx4008_free_ll(u32 ll_dma, struct pnx4008_dma_ll *);
extern int pnx4008_request_channel(char *, int,
void (*)(int, int, void *),
void *);
extern void pnx4008_free_channel(int);
extern int pnx4008_config_dma(int, int, int);
extern int pnx4008_dma_pack_control(const struct pnx4008_dma_ch_ctrl *,
unsigned long *);
extern int pnx4008_dma_parse_control(unsigned long,
struct pnx4008_dma_ch_ctrl *);
extern int pnx4008_dma_pack_config(const struct pnx4008_dma_ch_config *,
unsigned long *);
extern int pnx4008_dma_parse_config(unsigned long,
struct pnx4008_dma_ch_config *);
extern int pnx4008_config_channel(int, struct pnx4008_dma_config *);
extern int pnx4008_channel_get_config(int, struct pnx4008_dma_config *);
extern int pnx4008_dma_ch_enable(int);
extern int pnx4008_dma_ch_disable(int);
extern int pnx4008_dma_ch_enabled(int);
extern void pnx4008_dma_split_head_entry(struct pnx4008_dma_config *,
struct pnx4008_dma_ch_ctrl *);
extern void pnx4008_dma_split_ll_entry(struct pnx4008_dma_ll *,
struct pnx4008_dma_ch_ctrl *);
