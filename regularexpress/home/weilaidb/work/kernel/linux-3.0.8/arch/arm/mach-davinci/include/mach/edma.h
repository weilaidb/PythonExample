#define EDMA_H_
struct edmacc_param ;
#define CCINT0_INTERRUPT     16
#define CCERRINT_INTERRUPT   17
#define TCERRINT0_INTERRUPT   18
#define TCERRINT1_INTERRUPT   19
#define SAM		BIT(0)
#define DAM		BIT(1)
#define SYNCDIM		BIT(2)
#define STATIC		BIT(3)
#define EDMA_FWID	(0x07 << 8)
#define TCCMODE		BIT(11)
#define EDMA_TCC(t)	((t) << 12)
#define TCINTEN		BIT(20)
#define ITCINTEN	BIT(21)
#define TCCHEN		BIT(22)
#define ITCCHEN		BIT(23)
#define TRWORD (0x7<<2)
#define PAENTRY (0x1ff<<5)
#define DAVINCI_DMA_MCBSP_TX              2
#define DAVINCI_DMA_MCBSP_RX              3
#define DAVINCI_DMA_VPSS_HIST             4
#define DAVINCI_DMA_VPSS_H3A              5
#define DAVINCI_DMA_VPSS_PRVU             6
#define DAVINCI_DMA_VPSS_RSZ              7
#define DAVINCI_DMA_IMCOP_IMXINT          8
#define DAVINCI_DMA_IMCOP_VLCDINT         9
#define DAVINCI_DMA_IMCO_PASQINT         10
#define DAVINCI_DMA_IMCOP_DSQINT         11
#define DAVINCI_DMA_SPI_SPIX             16
#define DAVINCI_DMA_SPI_SPIR             17
#define DAVINCI_DMA_UART0_URXEVT0        18
#define DAVINCI_DMA_UART0_UTXEVT0        19
#define DAVINCI_DMA_UART1_URXEVT1        20
#define DAVINCI_DMA_UART1_UTXEVT1        21
#define DAVINCI_DMA_UART2_URXEVT2        22
#define DAVINCI_DMA_UART2_UTXEVT2        23
#define DAVINCI_DMA_MEMSTK_MSEVT         24
#define DAVINCI_DMA_MMCRXEVT             26
#define DAVINCI_DMA_MMCTXEVT             27
#define DAVINCI_DMA_I2C_ICREVT           28
#define DAVINCI_DMA_I2C_ICXEVT           29
#define DAVINCI_DMA_GPIO_GPINT0          32
#define DAVINCI_DMA_GPIO_GPINT1          33
#define DAVINCI_DMA_GPIO_GPINT2          34
#define DAVINCI_DMA_GPIO_GPINT3          35
#define DAVINCI_DMA_GPIO_GPINT4          36
#define DAVINCI_DMA_GPIO_GPINT5          37
#define DAVINCI_DMA_GPIO_GPINT6          38
#define DAVINCI_DMA_GPIO_GPINT7          39
#define DAVINCI_DMA_GPIO_GPBNKINT0       40
#define DAVINCI_DMA_GPIO_GPBNKINT1       41
#define DAVINCI_DMA_GPIO_GPBNKINT2       42
#define DAVINCI_DMA_GPIO_GPBNKINT3       43
#define DAVINCI_DMA_GPIO_GPBNKINT4       44
#define DAVINCI_DMA_TIMER0_TINT0         48
#define DAVINCI_DMA_TIMER1_TINT1         49
#define DAVINCI_DMA_TIMER2_TINT2         50
#define DAVINCI_DMA_TIMER3_TINT3         51
#define DAVINCI_DMA_PWM0                 52
#define DAVINCI_DMA_PWM1                 53
#define DAVINCI_DMA_PWM2                 54
#define EDMA_DA830_NUM_DMACH		32
#define EDMA_DA830_NUM_TCC		32
#define EDMA_DA830_NUM_PARAMENTRY	128
#define EDMA_DA830_NUM_EVQUE		2
#define EDMA_DA830_NUM_TC		2
#define EDMA_DA830_CHMAP_EXIST		0
#define EDMA_DA830_NUM_REGIONS		4
#define DA830_DMACH2EVENT_MAP0		0x000FC03Fu
#define DA830_DMACH2EVENT_MAP1		0x00000000u
#define DA830_EDMA_ARM_OWN		0x30FFCCFFu
#define DMA_COMPLETE 1
#define DMA_CC_ERROR 2
#define DMA_TC1_ERROR 3
#define DMA_TC2_ERROR 4
enum address_mode ;
enum fifo_width ;
enum dma_event_q ;
enum sync_dimension ;
#define EDMA_CTLR_CHAN(ctlr, chan)	(((ctlr) << 16) | (chan))
#define EDMA_CTLR(i)			((i) >> 16)
#define EDMA_CHAN_SLOT(i)		((i) & 0xffff)
#define EDMA_CHANNEL_ANY		-1
#define EDMA_SLOT_ANY			-1
#define EDMA_CONT_PARAMS_ANY		 1001
#define EDMA_CONT_PARAMS_FIXED_EXACT	 1002
#define EDMA_CONT_PARAMS_FIXED_NOT_EXACT 1003
#define EDMA_MAX_CC               2
int edma_alloc_channel(int channel,
void (*callback)(unsigned channel, u16 ch_status, void *data),
void *data, enum dma_event_q);
void edma_free_channel(unsigned channel);
int edma_alloc_slot(unsigned ctlr, int slot);
void edma_free_slot(unsigned slot);
int edma_alloc_cont_slots(unsigned ctlr, unsigned int id, int slot, int count);
int edma_free_cont_slots(unsigned slot, int count);
void edma_set_src(unsigned slot, dma_addr_t src_port,
enum address_mode mode, enum fifo_width);
void edma_set_dest(unsigned slot, dma_addr_t dest_port,
enum address_mode mode, enum fifo_width);
void edma_get_position(unsigned slot, dma_addr_t *src, dma_addr_t *dst);
void edma_set_src_index(unsigned slot, s16 src_bidx, s16 src_cidx);
void edma_set_dest_index(unsigned slot, s16 dest_bidx, s16 dest_cidx);
void edma_set_transfer_params(unsigned slot, u16 acnt, u16 bcnt, u16 ccnt,
u16 bcnt_rld, enum sync_dimension sync_mode);
void edma_link(unsigned from, unsigned to);
void edma_unlink(unsigned from);
void edma_write_slot(unsigned slot, const struct edmacc_param *params);
void edma_read_slot(unsigned slot, struct edmacc_param *params);
int edma_start(unsigned channel);
void edma_stop(unsigned channel);
void edma_clean_channel(unsigned channel);
void edma_clear_event(unsigned channel);
void edma_pause(unsigned channel);
void edma_resume(unsigned channel);
struct edma_rsv_info ;
struct edma_soc_info ;
