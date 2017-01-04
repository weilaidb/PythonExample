#define __ASM_XTENSA_S6000_DMAC_H
#define S6_DMA_INTSTAT0		0x000
#define S6_DMA_INTSTAT1		0x004
#define S6_DMA_INTENABLE0	0x008
#define S6_DMA_INTENABLE1	0x00C
#define S6_DMA_INTRAW0		0x010
#define S6_DMA_INTRAW1		0x014
#define S6_DMA_INTCLEAR0	0x018
#define S6_DMA_INTCLEAR1	0x01C
#define S6_DMA_INTSET0		0x020
#define S6_DMA_INTSET1		0x024
#define S6_DMA_INT0_UNDER		0
#define S6_DMA_INT0_OVER		16
#define S6_DMA_INT1_CHANNEL		0
#define S6_DMA_INT1_MASTER		16
#define S6_DMA_INT1_MASTER_MASK			7
#define S6_DMA_TERMCNTIRQSTAT	0x028
#define S6_DMA_TERMCNTIRQCLR	0x02C
#define S6_DMA_TERMCNTIRQSET	0x030
#define S6_DMA_PENDCNTIRQSTAT	0x034
#define S6_DMA_PENDCNTIRQCLR	0x038
#define S6_DMA_PENDCNTIRQSET	0x03C
#define S6_DMA_LOWWMRKIRQSTAT	0x040
#define S6_DMA_LOWWMRKIRQCLR	0x044
#define S6_DMA_LOWWMRKIRQSET	0x048
#define S6_DMA_MASTERERRINFO	0x04C
#define S6_DMA_MASTERERR_CHAN(n)	(4*(n))
#define S6_DMA_MASTERERR_CHAN_MASK		0xF
#define S6_DMA_DESCRFIFO0	0x050
#define S6_DMA_DESCRFIFO1	0x054
#define S6_DMA_DESCRFIFO2	0x058
#define S6_DMA_DESCRFIFO2_AUTODISABLE	24
#define S6_DMA_DESCRFIFO3	0x05C
#define S6_DMA_MASTER0START	0x060
#define S6_DMA_MASTER0END	0x064
#define S6_DMA_MASTER1START	0x068
#define S6_DMA_MASTER1END	0x06C
#define S6_DMA_NEXTFREE		0x070
#define S6_DMA_NEXTFREE_CHAN		0
#define S6_DMA_NEXTFREE_CHAN_MASK	0x1F
#define S6_DMA_NEXTFREE_ENA		16
#define S6_DMA_NEXTFREE_ENA_MASK	((1 << 16) - 1)
#define S6_DMA_DPORTCTRLGRP(p)	((p) * 4 + 0x074)
#define S6_DMA_DPORTCTRLGRP_FRAMEREP	0
#define S6_DMA_DPORTCTRLGRP_NRCHANS	1
#define S6_DMA_DPORTCTRLGRP_NRCHANS_1		0
#define S6_DMA_DPORTCTRLGRP_NRCHANS_3		1
#define S6_DMA_DPORTCTRLGRP_NRCHANS_4		2
#define S6_DMA_DPORTCTRLGRP_NRCHANS_2		3
#define S6_DMA_DPORTCTRLGRP_ENA		31
#define DMA_CHNL(dmac, n)	((dmac) + 0x1000 + (n) * 0x100)
#define DMA_INDEX_CHNL(addr)	(((addr) >> 8) & 0xF)
#define DMA_MASK_DMAC(addr)	((addr) & 0xFFFF0000)
#define S6_DMA_CHNCTRL		0x000
#define S6_DMA_CHNCTRL_ENABLE		0
#define S6_DMA_CHNCTRL_PAUSE		1
#define S6_DMA_CHNCTRL_PRIO		2
#define S6_DMA_CHNCTRL_PRIO_MASK		3
#define S6_DMA_CHNCTRL_PERIPHXFER	4
#define S6_DMA_CHNCTRL_PERIPHENA	5
#define S6_DMA_CHNCTRL_SRCINC		6
#define S6_DMA_CHNCTRL_DSTINC		7
#define S6_DMA_CHNCTRL_BURSTLOG		8
#define S6_DMA_CHNCTRL_BURSTLOG_MASK		7
#define S6_DMA_CHNCTRL_DESCFIFODEPTH	12
#define S6_DMA_CHNCTRL_DESCFIFODEPTH_MASK	0x1F
#define S6_DMA_CHNCTRL_DESCFIFOFULL	17
#define S6_DMA_CHNCTRL_BWCONSEL		18
#define S6_DMA_CHNCTRL_BWCONENA		19
#define S6_DMA_CHNCTRL_PENDGCNTSTAT	20
#define S6_DMA_CHNCTRL_PENDGCNTSTAT_MASK	0x3F
#define S6_DMA_CHNCTRL_LOWWMARK		26
#define S6_DMA_CHNCTRL_LOWWMARK_MASK		0xF
#define S6_DMA_CHNCTRL_TSTAMP		30
#define S6_DMA_TERMCNTNB	0x004
#define S6_DMA_TERMCNTNB_MASK			0xFFFF
#define S6_DMA_TERMCNTTMO	0x008
#define S6_DMA_TERMCNTSTAT	0x00C
#define S6_DMA_TERMCNTSTAT_MASK		0xFF
#define S6_DMA_CMONCHUNK	0x010
#define S6_DMA_SRCSKIP		0x014
#define S6_DMA_DSTSKIP		0x018
#define S6_DMA_CUR_SRC		0x024
#define S6_DMA_CUR_DST		0x028
#define S6_DMA_TIMESTAMP	0x030
#define S6_DPDMA_CHAN(stream, channel)	(4 * (stream) + (channel))
#define S6_DPDMA_NB	16
#define S6_HIFDMA_GMACTX	0
#define S6_HIFDMA_GMACRX	1
#define S6_HIFDMA_I2S0		2
#define S6_HIFDMA_I2S1		3
#define S6_HIFDMA_EGIB		4
#define S6_HIFDMA_PCITX		5
#define S6_HIFDMA_PCIRX		6
#define S6_HIFDMA_NB	7
#define S6_NIDMA_NB	4
#define S6_LMSDMA_NB	12
#define S6_DMAC_NB	4
#define S6_DMAC_INDEX(dmac)	(((unsigned)(dmac) >> 18) % S6_DMAC_NB)
struct s6dmac_ctrl ;
extern struct s6dmac_ctrl s6dmac_ctrl[S6_DMAC_NB];
static inline int s6dmac_fifo_full(u32 dmac, int chan)
static inline int s6dmac_termcnt_irq(u32 dmac, int chan)
static inline int s6dmac_pendcnt_irq(u32 dmac, int chan)
static inline int s6dmac_lowwmark_irq(u32 dmac, int chan)
static inline u32 s6dmac_pending_count(u32 dmac, int chan)
static inline void s6dmac_set_terminal_count(u32 dmac, int chan, u32 n)
static inline u32 s6dmac_get_terminal_count(u32 dmac, int chan)
static inline u32 s6dmac_timestamp(u32 dmac, int chan)
static inline u32 s6dmac_cur_src(u32 dmac, int chan)
static inline u32 s6dmac_cur_dst(u32 dmac, int chan)
static inline void s6dmac_disable_chan(u32 dmac, int chan)
static inline void s6dmac_set_stride_skip(u32 dmac, int chan,
int comchunk,
int srcskip, int dstskip)
static inline void s6dmac_enable_chan(u32 dmac, int chan,
int prio,
int periphxfer,
int srcinc, int dstinc,
int comchunk,
int srcskip, int dstskip,
int burstsize,
int bandwidthconserve,
int lowwmark,
int timestamp,
int enable)
static inline unsigned _dmac_addr_index(u32 dmac)
static inline void _s6dmac_disable_error_irqs(u32 dmac, u32 mask)
static inline int s6dmac_request_chan(u32 dmac, int chan,
int prio,
int periphxfer,
int srcinc, int dstinc,
int comchunk,
int srcskip, int dstskip,
int burstsize,
int bandwidthconserve,
int lowwmark,
int timestamp,
int enable)
static inline void s6dmac_put_fifo(u32 dmac, int chan,
u32 src, u32 dst, u32 size)
static inline u32 s6dmac_channel_enabled(u32 dmac, int chan)
static inline void s6dmac_dp_setup_group(u32 dmac, int port,
int nrch, int frrep)
static inline void s6dmac_dp_switch_group(u32 dmac, int port, int enable)
extern void s6dmac_put_fifo_cache(u32 dmac, int chan,
u32 src, u32 dst, u32 size);
extern void s6dmac_disable_error_irqs(u32 dmac, u32 mask);
extern u32 s6dmac_int_sources(u32 dmac, u32 channel);
extern void s6dmac_release_chan(u32 dmac, int chan);
