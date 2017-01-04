#define _CRYSTALHD_HW_H_
#define DMA_ENGINE_CNT		2
#define MAX_PIB_Q_DEPTH		64
#define MIN_PIB_Q_DEPTH		2
#define WR_POINTER_OFF		4
#define ASPM_L1_ENABLE		(BC_BIT(27))
#define FW_CMD_BUFF_SZ		64
#define TS_Host2CpuSnd		0x00000100
#define Hst2CpuMbx1		0x00100F00
#define Cpu2HstMbx1		0x00100F04
#define MbxStat1		0x00100F08
#define Stream2Host_Intr_Sts	0x00100F24
#define C011_RET_SUCCESS	0x0
#define TS_StreamAFIFOStatus	0x0010044C
#define TS_StreamBFIFOStatus	0x0010084C
#define UartSelectA		0x00100300
#define UartSelectB		0x00100304
#define BSVS_UART_DEC_NONE	0x00
#define BSVS_UART_DEC_OUTER	0x01
#define BSVS_UART_DEC_INNER	0x02
#define BSVS_UART_STREAM	0x03
#define REG_DecCA_RegCinCTL	0xa00
#define REG_DecCA_RegCinBase	0xa0c
#define REG_DecCA_RegCinEnd	0xa10
#define REG_DecCA_RegCinWrPtr	0xa04
#define REG_DecCA_RegCinRdPtr	0xa08
#define REG_Dec_TsUser0Base	0x100864
#define REG_Dec_TsUser0Rdptr	0x100868
#define REG_Dec_TsUser0Wrptr	0x10086C
#define REG_Dec_TsUser0End	0x100874
#define REG_Dec_TsAudCDB2Base	0x10036c
#define REG_Dec_TsAudCDB2Rdptr  0x100378
#define REG_Dec_TsAudCDB2Wrptr  0x100374
#define REG_Dec_TsAudCDB2End	0x100370
#define SDRAM_PARAM		0x00040804
#define SDRAM_PRECHARGE		0x000408B0
#define SDRAM_EXT_MODE		0x000408A4
#define SDRAM_MODE		0x000408A0
#define SDRAM_REFRESH		0x00040890
#define SDRAM_REF_PARAM		0x00040808
#define DecHt_PllACtl		0x34000C
#define DecHt_PllBCtl		0x340010
#define DecHt_PllCCtl		0x340014
#define DecHt_PllDCtl		0x340034
#define DecHt_PllECtl		0x340038
#define AUD_DSP_MISC_SOFT_RESET	0x00240104
#define AIO_MISC_PLL_RESET	0x0026000C
#define PCIE_CLK_REQ_REG	0xDC
#define	PCI_CLK_REQ_ENABLE	(BC_BIT(8))
#define BC_FWIMG_ST_ADDR	0x00000000
#define rotr32_1(x, n)		(((x) >> n) | ((x) << (32 - n)))
#define bswap_32_1(x)		((rotr32_1((x), 24) & 0x00ff00ff) | (rotr32_1((x), 8) & 0xff00ff00))
#define DecHt_HostSwReset	0x340000
#define BC_DRAM_FW_CFG_ADDR	0x001c2000
union addr_64 ;
union intr_mask_reg ;
union link_misc_perst_deco_ctrl ;
union link_misc_perst_clk_ctrl ;
union link_misc_perst_decoder_ctrl ;
union desc_low_addr_reg ;
struct dma_descriptor ;
struct dma_desc_mem ;
enum list_sts ;
struct tx_dma_pkt ;
struct crystalhd_rx_dma_pkt ;
struct crystalhd_hw_stats ;
struct crystalhd_hw ;
#define CLOCK_PRESET 175
#define DMA_START_BIT		MISC1_TX_SW_DESC_LIST_CTRL_STS_TX_DMA_RUN_STOP_MASK
#define GET_RX_INTR_MASK (INTR_INTR_STATUS_L1_UV_RX_DMA_ERR_INTR_MASK |		\
INTR_INTR_STATUS_L1_UV_RX_DMA_DONE_INTR_MASK |	\
INTR_INTR_STATUS_L1_Y_RX_DMA_ERR_INTR_MASK |		\
INTR_INTR_STATUS_L1_Y_RX_DMA_DONE_INTR_MASK |		\
INTR_INTR_STATUS_L0_UV_RX_DMA_ERR_INTR_MASK |		\
INTR_INTR_STATUS_L0_UV_RX_DMA_DONE_INTR_MASK |	\
INTR_INTR_STATUS_L0_Y_RX_DMA_ERR_INTR_MASK |		\
INTR_INTR_STATUS_L0_Y_RX_DMA_DONE_INTR_MASK)
#define GET_Y0_ERR_MSK (MISC1_Y_RX_ERROR_STATUS_RX_L0_OVERRUN_ERROR_MASK |		\
MISC1_Y_RX_ERROR_STATUS_RX_L0_UNDERRUN_ERROR_MASK |		\
MISC1_Y_RX_ERROR_STATUS_RX_L0_DESC_TX_ABORT_ERRORS_MASK |	\
MISC1_Y_RX_ERROR_STATUS_RX_L0_FIFO_FULL_ERRORS_MASK)
#define GET_UV0_ERR_MSK (MISC1_UV_RX_ERROR_STATUS_RX_L0_OVERRUN_ERROR_MASK |		\
MISC1_UV_RX_ERROR_STATUS_RX_L0_UNDERRUN_ERROR_MASK |		\
MISC1_UV_RX_ERROR_STATUS_RX_L0_DESC_TX_ABORT_ERRORS_MASK |	\
MISC1_UV_RX_ERROR_STATUS_RX_L0_FIFO_FULL_ERRORS_MASK)
#define GET_Y1_ERR_MSK (MISC1_Y_RX_ERROR_STATUS_RX_L1_OVERRUN_ERROR_MASK |		\
MISC1_Y_RX_ERROR_STATUS_RX_L1_UNDERRUN_ERROR_MASK |		\
MISC1_Y_RX_ERROR_STATUS_RX_L1_DESC_TX_ABORT_ERRORS_MASK |	\
MISC1_Y_RX_ERROR_STATUS_RX_L1_FIFO_FULL_ERRORS_MASK)
#define GET_UV1_ERR_MSK	(MISC1_UV_RX_ERROR_STATUS_RX_L1_OVERRUN_ERROR_MASK |		\
MISC1_UV_RX_ERROR_STATUS_RX_L1_UNDERRUN_ERROR_MASK |		\
MISC1_UV_RX_ERROR_STATUS_RX_L1_DESC_TX_ABORT_ERRORS_MASK |	\
MISC1_UV_RX_ERROR_STATUS_RX_L1_FIFO_FULL_ERRORS_MASK)
enum BC_STATUS crystalhd_download_fw(struct crystalhd_adp *adp,
void *buffer, uint32_t sz);
enum BC_STATUS crystalhd_do_fw_cmd(struct crystalhd_hw *hw, struct BC_FW_CMD *fw_cmd);
bool crystalhd_hw_interrupt(struct crystalhd_adp *adp, struct crystalhd_hw *hw);
enum BC_STATUS crystalhd_hw_open(struct crystalhd_hw *, struct crystalhd_adp *);
enum BC_STATUS crystalhd_hw_close(struct crystalhd_hw *);
enum BC_STATUS crystalhd_hw_setup_dma_rings(struct crystalhd_hw *);
enum BC_STATUS crystalhd_hw_free_dma_rings(struct crystalhd_hw *);
enum BC_STATUS crystalhd_hw_post_tx(struct crystalhd_hw *hw, struct crystalhd_dio_req *ioreq,
hw_comp_callback call_back,
wait_queue_head_t *cb_event,
uint32_t *list_id, uint8_t data_flags);
enum BC_STATUS crystalhd_hw_pause(struct crystalhd_hw *hw);
enum BC_STATUS crystalhd_hw_unpause(struct crystalhd_hw *hw);
enum BC_STATUS crystalhd_hw_suspend(struct crystalhd_hw *hw);
enum BC_STATUS crystalhd_hw_cancel_tx(struct crystalhd_hw *hw, uint32_t list_id);
enum BC_STATUS crystalhd_hw_add_cap_buffer(struct crystalhd_hw *hw,
struct crystalhd_dio_req *ioreq, bool en_post);
enum BC_STATUS crystalhd_hw_get_cap_buffer(struct crystalhd_hw *hw,
struct BC_PIC_INFO_BLOCK *pib,
struct crystalhd_dio_req **ioreq);
enum BC_STATUS crystalhd_hw_stop_capture(struct crystalhd_hw *hw);
enum BC_STATUS crystalhd_hw_start_capture(struct crystalhd_hw *hw);
void crystalhd_hw_stats(struct crystalhd_hw *hw, struct crystalhd_hw_stats *stats);
enum BC_STATUS crystalhd_hw_set_core_clock(struct crystalhd_hw *);
