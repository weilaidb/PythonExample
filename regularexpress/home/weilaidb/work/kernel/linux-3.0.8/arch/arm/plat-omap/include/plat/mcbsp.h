#define __ASM_ARCH_OMAP_MCBSP_H
#define OMAP_MCBSP_PLATFORM_DEVICE(port_nr)		\
static struct platform_device omap_mcbsp##port_nr =
#define MCBSP_CONFIG_TYPE2	0x2
#define MCBSP_CONFIG_TYPE3	0x3
#define MCBSP_CONFIG_TYPE4	0x4
#define OMAP7XX_MCBSP1_BASE	0xfffb1000
#define OMAP7XX_MCBSP2_BASE	0xfffb1800
#define OMAP1510_MCBSP1_BASE	0xe1011800
#define OMAP1510_MCBSP2_BASE	0xfffb1000
#define OMAP1510_MCBSP3_BASE	0xe1017000
#define OMAP1610_MCBSP1_BASE	0xe1011800
#define OMAP1610_MCBSP2_BASE	0xfffb1000
#define OMAP1610_MCBSP3_BASE	0xe1017000
#define OMAP_MCBSP_REG_DRR2	0x00
#define OMAP_MCBSP_REG_DRR1	0x02
#define OMAP_MCBSP_REG_DXR2	0x04
#define OMAP_MCBSP_REG_DXR1	0x06
#define OMAP_MCBSP_REG_DRR	0x02
#define OMAP_MCBSP_REG_DXR	0x06
#define OMAP_MCBSP_REG_SPCR2	0x08
#define OMAP_MCBSP_REG_SPCR1	0x0a
#define OMAP_MCBSP_REG_RCR2	0x0c
#define OMAP_MCBSP_REG_RCR1	0x0e
#define OMAP_MCBSP_REG_XCR2	0x10
#define OMAP_MCBSP_REG_XCR1	0x12
#define OMAP_MCBSP_REG_SRGR2	0x14
#define OMAP_MCBSP_REG_SRGR1	0x16
#define OMAP_MCBSP_REG_MCR2	0x18
#define OMAP_MCBSP_REG_MCR1	0x1a
#define OMAP_MCBSP_REG_RCERA	0x1c
#define OMAP_MCBSP_REG_RCERB	0x1e
#define OMAP_MCBSP_REG_XCERA	0x20
#define OMAP_MCBSP_REG_XCERB	0x22
#define OMAP_MCBSP_REG_PCR0	0x24
#define OMAP_MCBSP_REG_RCERC	0x26
#define OMAP_MCBSP_REG_RCERD	0x28
#define OMAP_MCBSP_REG_XCERC	0x2A
#define OMAP_MCBSP_REG_XCERD	0x2C
#define OMAP_MCBSP_REG_RCERE	0x2E
#define OMAP_MCBSP_REG_RCERF	0x30
#define OMAP_MCBSP_REG_XCERE	0x32
#define OMAP_MCBSP_REG_XCERF	0x34
#define OMAP_MCBSP_REG_RCERG	0x36
#define OMAP_MCBSP_REG_RCERH	0x38
#define OMAP_MCBSP_REG_XCERG	0x3A
#define OMAP_MCBSP_REG_XCERH	0x3C
#define OMAP_MCBSP_REG_XCCR	0x00
#define OMAP_MCBSP_REG_RCCR	0x00
#define OMAP_MCBSP_REG_DRR2	0x00
#define OMAP_MCBSP_REG_DRR1	0x04
#define OMAP_MCBSP_REG_DXR2	0x08
#define OMAP_MCBSP_REG_DXR1	0x0C
#define OMAP_MCBSP_REG_DRR	0x00
#define OMAP_MCBSP_REG_DXR	0x08
#define OMAP_MCBSP_REG_SPCR2	0x10
#define OMAP_MCBSP_REG_SPCR1	0x14
#define OMAP_MCBSP_REG_RCR2	0x18
#define OMAP_MCBSP_REG_RCR1	0x1C
#define OMAP_MCBSP_REG_XCR2	0x20
#define OMAP_MCBSP_REG_XCR1	0x24
#define OMAP_MCBSP_REG_SRGR2	0x28
#define OMAP_MCBSP_REG_SRGR1	0x2C
#define OMAP_MCBSP_REG_MCR2	0x30
#define OMAP_MCBSP_REG_MCR1	0x34
#define OMAP_MCBSP_REG_RCERA	0x38
#define OMAP_MCBSP_REG_RCERB	0x3C
#define OMAP_MCBSP_REG_XCERA	0x40
#define OMAP_MCBSP_REG_XCERB	0x44
#define OMAP_MCBSP_REG_PCR0	0x48
#define OMAP_MCBSP_REG_RCERC	0x4C
#define OMAP_MCBSP_REG_RCERD	0x50
#define OMAP_MCBSP_REG_XCERC	0x54
#define OMAP_MCBSP_REG_XCERD	0x58
#define OMAP_MCBSP_REG_RCERE	0x5C
#define OMAP_MCBSP_REG_RCERF	0x60
#define OMAP_MCBSP_REG_XCERE	0x64
#define OMAP_MCBSP_REG_XCERF	0x68
#define OMAP_MCBSP_REG_RCERG	0x6C
#define OMAP_MCBSP_REG_RCERH	0x70
#define OMAP_MCBSP_REG_XCERG	0x74
#define OMAP_MCBSP_REG_XCERH	0x78
#define OMAP_MCBSP_REG_SYSCON	0x8C
#define OMAP_MCBSP_REG_THRSH2	0x90
#define OMAP_MCBSP_REG_THRSH1	0x94
#define OMAP_MCBSP_REG_IRQST	0xA0
#define OMAP_MCBSP_REG_IRQEN	0xA4
#define OMAP_MCBSP_REG_WAKEUPEN	0xA8
#define OMAP_MCBSP_REG_XCCR	0xAC
#define OMAP_MCBSP_REG_RCCR	0xB0
#define OMAP_MCBSP_REG_XBUFFSTAT	0xB4
#define OMAP_MCBSP_REG_RBUFFSTAT	0xB8
#define OMAP_MCBSP_REG_SSELCR	0xBC
#define OMAP_ST_REG_REV		0x00
#define OMAP_ST_REG_SYSCONFIG	0x10
#define OMAP_ST_REG_IRQSTATUS	0x18
#define OMAP_ST_REG_IRQENABLE	0x1C
#define OMAP_ST_REG_SGAINCR	0x24
#define OMAP_ST_REG_SFIRCR	0x28
#define OMAP_ST_REG_SSELCR	0x2C
#define RRST			0x0001
#define RRDY			0x0002
#define RFULL			0x0004
#define RSYNC_ERR		0x0008
#define RINTM(value)		((value)<<4)
#define ABIS			0x0040
#define DXENA			0x0080
#define CLKSTP(value)		((value)<<11)
#define RJUST(value)		((value)<<13)
#define ALB			0x8000
#define DLB			0x8000
#define XRST		0x0001
#define XRDY		0x0002
#define XEMPTY		0x0004
#define XSYNC_ERR	0x0008
#define XINTM(value)	((value)<<4)
#define GRST		0x0040
#define FRST		0x0080
#define SOFT		0x0100
#define FREE		0x0200
#define CLKRP		0x0001
#define CLKXP		0x0002
#define FSRP		0x0004
#define FSXP		0x0008
#define DR_STAT		0x0010
#define DX_STAT		0x0020
#define CLKS_STAT	0x0040
#define SCLKME		0x0080
#define CLKRM		0x0100
#define CLKXM		0x0200
#define FSRM		0x0400
#define FSXM		0x0800
#define RIOEN		0x1000
#define XIOEN		0x2000
#define IDLE_EN		0x4000
#define RWDLEN1(value)		((value)<<5)
#define RFRLEN1(value)		((value)<<8)
#define XWDLEN1(value)		((value)<<5)
#define XFRLEN1(value)		((value)<<8)
#define RDATDLY(value)		(value)
#define RFIG			0x0004
#define RCOMPAND(value)		((value)<<3)
#define RWDLEN2(value)		((value)<<5)
#define RFRLEN2(value)		((value)<<8)
#define RPHASE			0x8000
#define XDATDLY(value)		(value)
#define XFIG			0x0004
#define XCOMPAND(value)		((value)<<3)
#define XWDLEN2(value)		((value)<<5)
#define XFRLEN2(value)		((value)<<8)
#define XPHASE			0x8000
#define CLKGDV(value)		(value)
#define FWID(value)		((value)<<8)
#define FPER(value)		(value)
#define FSGM			0x1000
#define CLKSM			0x2000
#define CLKSP			0x4000
#define GSYNC			0x8000
#define RMCM			0x0001
#define RCBLK(value)		((value)<<2)
#define RPABLK(value)		((value)<<5)
#define RPBBLK(value)		((value)<<7)
#define XMCM(value)		(value)
#define XCBLK(value)		((value)<<2)
#define XPABLK(value)		((value)<<5)
#define XPBBLK(value)		((value)<<7)
#define EXTCLKGATE		0x8000
#define PPCONNECT		0x4000
#define DXENDLY(value)		((value)<<12)
#define XFULL_CYCLE		0x0800
#define DILB			0x0020
#define XDMAEN			0x0008
#define XDISABLE		0x0001
#define RFULL_CYCLE		0x0800
#define RDMAEN			0x0008
#define RDISABLE		0x0001
#define CLOCKACTIVITY(value)	((value)<<8)
#define SIDLEMODE(value)	((value)<<3)
#define ENAWAKEUP		0x0004
#define SOFTRST			0x0002
#define SIDETONEEN		0x0400
#define ST_AUTOIDLE		0x0001
#define ST_CH1GAIN(value)	((value<<16))
#define ST_CH0GAIN(value)	(value)
#define ST_FIRCOEFF(value)	(value)
#define ST_COEFFWRDONE		0x0004
#define ST_COEFFWREN		0x0002
#define ST_SIDETONEEN		0x0001
#define MCBSP_DMA_MODE_ELEMENT		0
#define MCBSP_DMA_MODE_THRESHOLD	1
#define MCBSP_DMA_MODE_FRAME		2
#define XEMPTYEOFEN		0x4000
#define XRDYEN			0x0400
#define XEOFEN			0x0200
#define XFSXEN			0x0100
#define XSYNCERREN		0x0080
#define RRDYEN			0x0008
#define REOFEN			0x0004
#define RFSREN			0x0002
#define RSYNCERREN		0x0001
#define CLKR_SRC_CLKR		0
#define CLKR_SRC_CLKX		1
#define FSR_SRC_FSR		0
#define FSR_SRC_FSX		1
#define MCBSP_CLKS_PRCM_SRC	0
#define MCBSP_CLKS_PAD_SRC	1
struct omap_mcbsp_reg_cfg ;
typedef enum  omap_mcbsp_id;
typedef int __bitwise omap_mcbsp_io_type_t;
#define OMAP_MCBSP_IRQ_IO ((__force omap_mcbsp_io_type_t) 1)
#define OMAP_MCBSP_POLL_IO ((__force omap_mcbsp_io_type_t) 2)
typedef enum  omap_mcbsp_word_length;
typedef enum  omap_mcbsp_clk_polarity;
typedef enum  omap_mcbsp_fs_polarity;
typedef enum  omap_mcbsp_clk_stp_mode;
typedef enum  omap_mcbsp_spi_mode;
struct omap_mcbsp_spi_cfg ;
struct omap_mcbsp_ops ;
struct omap_mcbsp_platform_data ;
struct omap_mcbsp_st_data ;
struct omap_mcbsp ;
struct omap_mcbsp_dev_attr ;
extern struct omap_mcbsp **mcbsp_ptr;
extern int omap_mcbsp_count, omap_mcbsp_cache_size;
#define omap_mcbsp_check_valid_id(id)	(id < omap_mcbsp_count)
#define id_to_mcbsp_ptr(id)		mcbsp_ptr[id];
int omap_mcbsp_init(void);
void omap_mcbsp_register_board_cfg(struct resource *res, int res_count,
struct omap_mcbsp_platform_data *config, int size);
void omap_mcbsp_config(unsigned int id, const struct omap_mcbsp_reg_cfg * config);
void omap_mcbsp_set_tx_threshold(unsigned int id, u16 threshold);
void omap_mcbsp_set_rx_threshold(unsigned int id, u16 threshold);
u16 omap_mcbsp_get_max_tx_threshold(unsigned int id);
u16 omap_mcbsp_get_max_rx_threshold(unsigned int id);
u16 omap_mcbsp_get_fifo_size(unsigned int id);
u16 omap_mcbsp_get_tx_delay(unsigned int id);
u16 omap_mcbsp_get_rx_delay(unsigned int id);
int omap_mcbsp_get_dma_op_mode(unsigned int id);
static inline void omap_mcbsp_set_tx_threshold(unsigned int id, u16 threshold)
static inline void omap_mcbsp_set_rx_threshold(unsigned int id, u16 threshold)
static inline u16 omap_mcbsp_get_max_tx_threshold(unsigned int id)
static inline u16 omap_mcbsp_get_max_rx_threshold(unsigned int id)
static inline u16 omap_mcbsp_get_fifo_size(unsigned int id)
static inline u16 omap_mcbsp_get_tx_delay(unsigned int id)
static inline u16 omap_mcbsp_get_rx_delay(unsigned int id)
static inline int omap_mcbsp_get_dma_op_mode(unsigned int id)
int omap_mcbsp_request(unsigned int id);
void omap_mcbsp_free(unsigned int id);
void omap_mcbsp_start(unsigned int id, int tx, int rx);
void omap_mcbsp_stop(unsigned int id, int tx, int rx);
void omap_mcbsp_xmit_word(unsigned int id, u32 word);
u32 omap_mcbsp_recv_word(unsigned int id);
int omap_mcbsp_xmit_buffer(unsigned int id, dma_addr_t buffer, unsigned int length);
int omap_mcbsp_recv_buffer(unsigned int id, dma_addr_t buffer, unsigned int length);
int omap_mcbsp_spi_master_xmit_word_poll(unsigned int id, u32 word);
int omap_mcbsp_spi_master_recv_word_poll(unsigned int id, u32 * word);
extern int omap2_mcbsp_set_clks_src(u8 id, u8 fck_src_id);
void omap_mcbsp_set_spi_mode(unsigned int id, const struct omap_mcbsp_spi_cfg * spi_cfg);
int omap_mcbsp_pollread(unsigned int id, u16 * buf);
int omap_mcbsp_pollwrite(unsigned int id, u16 buf);
int omap_mcbsp_set_io_type(unsigned int id, omap_mcbsp_io_type_t io_type);
void omap2_mcbsp1_mux_clkr_src(u8 mux);
void omap2_mcbsp1_mux_fsr_src(u8 mux);
int omap_mcbsp_dma_ch_params(unsigned int id, unsigned int stream);
int omap_mcbsp_dma_reg_params(unsigned int id, unsigned int stream);
int omap_st_set_chgain(unsigned int id, int channel, s16 chgain);
int omap_st_get_chgain(unsigned int id, int channel, s16 *chgain);
int omap_st_enable(unsigned int id);
int omap_st_disable(unsigned int id);
int omap_st_is_enabled(unsigned int id);
static inline int omap_st_set_chgain(unsigned int id, int channel,
s16 chgain)
static inline int omap_st_get_chgain(unsigned int id, int channel,
s16 *chgain)
static inline int omap_st_enable(unsigned int id)
static inline int omap_st_disable(unsigned int id)
static inline int omap_st_is_enabled(unsigned int id)
