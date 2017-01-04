#define __CVMX_MIO_DEFS_H__
#define CVMX_MIO_BOOT_BIST_STAT (CVMX_ADD_IO_SEG(0x00011800000000F8ull))
#define CVMX_MIO_BOOT_COMP (CVMX_ADD_IO_SEG(0x00011800000000B8ull))
#define CVMX_MIO_BOOT_DMA_CFGX(offset) (CVMX_ADD_IO_SEG(0x0001180000000100ull) + ((offset) & 3) * 8)
#define CVMX_MIO_BOOT_DMA_INTX(offset) (CVMX_ADD_IO_SEG(0x0001180000000138ull) + ((offset) & 3) * 8)
#define CVMX_MIO_BOOT_DMA_INT_ENX(offset) (CVMX_ADD_IO_SEG(0x0001180000000150ull) + ((offset) & 3) * 8)
#define CVMX_MIO_BOOT_DMA_TIMX(offset) (CVMX_ADD_IO_SEG(0x0001180000000120ull) + ((offset) & 3) * 8)
#define CVMX_MIO_BOOT_ERR (CVMX_ADD_IO_SEG(0x00011800000000A0ull))
#define CVMX_MIO_BOOT_INT (CVMX_ADD_IO_SEG(0x00011800000000A8ull))
#define CVMX_MIO_BOOT_LOC_ADR (CVMX_ADD_IO_SEG(0x0001180000000090ull))
#define CVMX_MIO_BOOT_LOC_CFGX(offset) (CVMX_ADD_IO_SEG(0x0001180000000080ull) + ((offset) & 1) * 8)
#define CVMX_MIO_BOOT_LOC_DAT (CVMX_ADD_IO_SEG(0x0001180000000098ull))
#define CVMX_MIO_BOOT_PIN_DEFS (CVMX_ADD_IO_SEG(0x00011800000000C0ull))
#define CVMX_MIO_BOOT_REG_CFGX(offset) (CVMX_ADD_IO_SEG(0x0001180000000000ull) + ((offset) & 7) * 8)
#define CVMX_MIO_BOOT_REG_TIMX(offset) (CVMX_ADD_IO_SEG(0x0001180000000040ull) + ((offset) & 7) * 8)
#define CVMX_MIO_BOOT_THR (CVMX_ADD_IO_SEG(0x00011800000000B0ull))
#define CVMX_MIO_FUS_BNK_DATX(offset) (CVMX_ADD_IO_SEG(0x0001180000001520ull) + ((offset) & 3) * 8)
#define CVMX_MIO_FUS_DAT0 (CVMX_ADD_IO_SEG(0x0001180000001400ull))
#define CVMX_MIO_FUS_DAT1 (CVMX_ADD_IO_SEG(0x0001180000001408ull))
#define CVMX_MIO_FUS_DAT2 (CVMX_ADD_IO_SEG(0x0001180000001410ull))
#define CVMX_MIO_FUS_DAT3 (CVMX_ADD_IO_SEG(0x0001180000001418ull))
#define CVMX_MIO_FUS_EMA (CVMX_ADD_IO_SEG(0x0001180000001550ull))
#define CVMX_MIO_FUS_PDF (CVMX_ADD_IO_SEG(0x0001180000001420ull))
#define CVMX_MIO_FUS_PLL (CVMX_ADD_IO_SEG(0x0001180000001580ull))
#define CVMX_MIO_FUS_PROG (CVMX_ADD_IO_SEG(0x0001180000001510ull))
#define CVMX_MIO_FUS_PROG_TIMES (CVMX_ADD_IO_SEG(0x0001180000001518ull))
#define CVMX_MIO_FUS_RCMD (CVMX_ADD_IO_SEG(0x0001180000001500ull))
#define CVMX_MIO_FUS_READ_TIMES (CVMX_ADD_IO_SEG(0x0001180000001570ull))
#define CVMX_MIO_FUS_REPAIR_RES0 (CVMX_ADD_IO_SEG(0x0001180000001558ull))
#define CVMX_MIO_FUS_REPAIR_RES1 (CVMX_ADD_IO_SEG(0x0001180000001560ull))
#define CVMX_MIO_FUS_REPAIR_RES2 (CVMX_ADD_IO_SEG(0x0001180000001568ull))
#define CVMX_MIO_FUS_SPR_REPAIR_RES (CVMX_ADD_IO_SEG(0x0001180000001548ull))
#define CVMX_MIO_FUS_SPR_REPAIR_SUM (CVMX_ADD_IO_SEG(0x0001180000001540ull))
#define CVMX_MIO_FUS_UNLOCK (CVMX_ADD_IO_SEG(0x0001180000001578ull))
#define CVMX_MIO_FUS_WADR (CVMX_ADD_IO_SEG(0x0001180000001508ull))
#define CVMX_MIO_GPIO_COMP (CVMX_ADD_IO_SEG(0x00011800000000C8ull))
#define CVMX_MIO_NDF_DMA_CFG (CVMX_ADD_IO_SEG(0x0001180000000168ull))
#define CVMX_MIO_NDF_DMA_INT (CVMX_ADD_IO_SEG(0x0001180000000170ull))
#define CVMX_MIO_NDF_DMA_INT_EN (CVMX_ADD_IO_SEG(0x0001180000000178ull))
#define CVMX_MIO_PLL_CTL (CVMX_ADD_IO_SEG(0x0001180000001448ull))
#define CVMX_MIO_PLL_SETTING (CVMX_ADD_IO_SEG(0x0001180000001440ull))
#define CVMX_MIO_PTP_CLOCK_CFG (CVMX_ADD_IO_SEG(0x0001070000000F00ull))
#define CVMX_MIO_PTP_CLOCK_COMP (CVMX_ADD_IO_SEG(0x0001070000000F18ull))
#define CVMX_MIO_PTP_CLOCK_HI (CVMX_ADD_IO_SEG(0x0001070000000F10ull))
#define CVMX_MIO_PTP_CLOCK_LO (CVMX_ADD_IO_SEG(0x0001070000000F08ull))
#define CVMX_MIO_PTP_EVT_CNT (CVMX_ADD_IO_SEG(0x0001070000000F28ull))
#define CVMX_MIO_PTP_TIMESTAMP (CVMX_ADD_IO_SEG(0x0001070000000F20ull))
#define CVMX_MIO_RST_BOOT (CVMX_ADD_IO_SEG(0x0001180000001600ull))
#define CVMX_MIO_RST_CFG (CVMX_ADD_IO_SEG(0x0001180000001610ull))
#define CVMX_MIO_RST_CTLX(offset) (CVMX_ADD_IO_SEG(0x0001180000001618ull) + ((offset) & 1) * 8)
#define CVMX_MIO_RST_DELAY (CVMX_ADD_IO_SEG(0x0001180000001608ull))
#define CVMX_MIO_RST_INT (CVMX_ADD_IO_SEG(0x0001180000001628ull))
#define CVMX_MIO_RST_INT_EN (CVMX_ADD_IO_SEG(0x0001180000001630ull))
#define CVMX_MIO_TWSX_INT(offset) (CVMX_ADD_IO_SEG(0x0001180000001010ull) + ((offset) & 1) * 512)
#define CVMX_MIO_TWSX_SW_TWSI(offset) (CVMX_ADD_IO_SEG(0x0001180000001000ull) + ((offset) & 1) * 512)
#define CVMX_MIO_TWSX_SW_TWSI_EXT(offset) (CVMX_ADD_IO_SEG(0x0001180000001018ull) + ((offset) & 1) * 512)
#define CVMX_MIO_TWSX_TWSI_SW(offset) (CVMX_ADD_IO_SEG(0x0001180000001008ull) + ((offset) & 1) * 512)
#define CVMX_MIO_UART2_DLH (CVMX_ADD_IO_SEG(0x0001180000000488ull))
#define CVMX_MIO_UART2_DLL (CVMX_ADD_IO_SEG(0x0001180000000480ull))
#define CVMX_MIO_UART2_FAR (CVMX_ADD_IO_SEG(0x0001180000000520ull))
#define CVMX_MIO_UART2_FCR (CVMX_ADD_IO_SEG(0x0001180000000450ull))
#define CVMX_MIO_UART2_HTX (CVMX_ADD_IO_SEG(0x0001180000000708ull))
#define CVMX_MIO_UART2_IER (CVMX_ADD_IO_SEG(0x0001180000000408ull))
#define CVMX_MIO_UART2_IIR (CVMX_ADD_IO_SEG(0x0001180000000410ull))
#define CVMX_MIO_UART2_LCR (CVMX_ADD_IO_SEG(0x0001180000000418ull))
#define CVMX_MIO_UART2_LSR (CVMX_ADD_IO_SEG(0x0001180000000428ull))
#define CVMX_MIO_UART2_MCR (CVMX_ADD_IO_SEG(0x0001180000000420ull))
#define CVMX_MIO_UART2_MSR (CVMX_ADD_IO_SEG(0x0001180000000430ull))
#define CVMX_MIO_UART2_RBR (CVMX_ADD_IO_SEG(0x0001180000000400ull))
#define CVMX_MIO_UART2_RFL (CVMX_ADD_IO_SEG(0x0001180000000608ull))
#define CVMX_MIO_UART2_RFW (CVMX_ADD_IO_SEG(0x0001180000000530ull))
#define CVMX_MIO_UART2_SBCR (CVMX_ADD_IO_SEG(0x0001180000000620ull))
#define CVMX_MIO_UART2_SCR (CVMX_ADD_IO_SEG(0x0001180000000438ull))
#define CVMX_MIO_UART2_SFE (CVMX_ADD_IO_SEG(0x0001180000000630ull))
#define CVMX_MIO_UART2_SRR (CVMX_ADD_IO_SEG(0x0001180000000610ull))
#define CVMX_MIO_UART2_SRT (CVMX_ADD_IO_SEG(0x0001180000000638ull))
#define CVMX_MIO_UART2_SRTS (CVMX_ADD_IO_SEG(0x0001180000000618ull))
#define CVMX_MIO_UART2_STT (CVMX_ADD_IO_SEG(0x0001180000000700ull))
#define CVMX_MIO_UART2_TFL (CVMX_ADD_IO_SEG(0x0001180000000600ull))
#define CVMX_MIO_UART2_TFR (CVMX_ADD_IO_SEG(0x0001180000000528ull))
#define CVMX_MIO_UART2_THR (CVMX_ADD_IO_SEG(0x0001180000000440ull))
#define CVMX_MIO_UART2_USR (CVMX_ADD_IO_SEG(0x0001180000000538ull))
#define CVMX_MIO_UARTX_DLH(offset) (CVMX_ADD_IO_SEG(0x0001180000000888ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_DLL(offset) (CVMX_ADD_IO_SEG(0x0001180000000880ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_FAR(offset) (CVMX_ADD_IO_SEG(0x0001180000000920ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_FCR(offset) (CVMX_ADD_IO_SEG(0x0001180000000850ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_HTX(offset) (CVMX_ADD_IO_SEG(0x0001180000000B08ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_IER(offset) (CVMX_ADD_IO_SEG(0x0001180000000808ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_IIR(offset) (CVMX_ADD_IO_SEG(0x0001180000000810ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_LCR(offset) (CVMX_ADD_IO_SEG(0x0001180000000818ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_LSR(offset) (CVMX_ADD_IO_SEG(0x0001180000000828ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_MCR(offset) (CVMX_ADD_IO_SEG(0x0001180000000820ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_MSR(offset) (CVMX_ADD_IO_SEG(0x0001180000000830ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_RBR(offset) (CVMX_ADD_IO_SEG(0x0001180000000800ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_RFL(offset) (CVMX_ADD_IO_SEG(0x0001180000000A08ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_RFW(offset) (CVMX_ADD_IO_SEG(0x0001180000000930ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_SBCR(offset) (CVMX_ADD_IO_SEG(0x0001180000000A20ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_SCR(offset) (CVMX_ADD_IO_SEG(0x0001180000000838ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_SFE(offset) (CVMX_ADD_IO_SEG(0x0001180000000A30ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_SRR(offset) (CVMX_ADD_IO_SEG(0x0001180000000A10ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_SRT(offset) (CVMX_ADD_IO_SEG(0x0001180000000A38ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_SRTS(offset) (CVMX_ADD_IO_SEG(0x0001180000000A18ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_STT(offset) (CVMX_ADD_IO_SEG(0x0001180000000B00ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_TFL(offset) (CVMX_ADD_IO_SEG(0x0001180000000A00ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_TFR(offset) (CVMX_ADD_IO_SEG(0x0001180000000928ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_THR(offset) (CVMX_ADD_IO_SEG(0x0001180000000840ull) + ((offset) & 1) * 1024)
#define CVMX_MIO_UARTX_USR(offset) (CVMX_ADD_IO_SEG(0x0001180000000938ull) + ((offset) & 1) * 1024)
union cvmx_mio_boot_bist_stat ;
union cvmx_mio_boot_comp ;
union cvmx_mio_boot_dma_cfgx ;
union cvmx_mio_boot_dma_intx ;
union cvmx_mio_boot_dma_int_enx ;
union cvmx_mio_boot_dma_timx ;
union cvmx_mio_boot_err ;
union cvmx_mio_boot_int ;
union cvmx_mio_boot_loc_adr ;
union cvmx_mio_boot_loc_cfgx ;
union cvmx_mio_boot_loc_dat ;
union cvmx_mio_boot_pin_defs ;
union cvmx_mio_boot_reg_cfgx ;
union cvmx_mio_boot_reg_timx ;
union cvmx_mio_boot_thr ;
union cvmx_mio_fus_bnk_datx ;
union cvmx_mio_fus_dat0 ;
union cvmx_mio_fus_dat1 ;
union cvmx_mio_fus_dat2 ;
union cvmx_mio_fus_dat3 ;
union cvmx_mio_fus_ema ;
union cvmx_mio_fus_pdf ;
union cvmx_mio_fus_pll ;
union cvmx_mio_fus_prog ;
union cvmx_mio_fus_prog_times ;
union cvmx_mio_fus_rcmd ;
union cvmx_mio_fus_read_times ;
union cvmx_mio_fus_repair_res0 ;
union cvmx_mio_fus_repair_res1 ;
union cvmx_mio_fus_repair_res2 ;
union cvmx_mio_fus_spr_repair_res ;
union cvmx_mio_fus_spr_repair_sum ;
union cvmx_mio_fus_unlock ;
union cvmx_mio_fus_wadr ;
union cvmx_mio_gpio_comp ;
union cvmx_mio_ndf_dma_cfg ;
union cvmx_mio_ndf_dma_int ;
union cvmx_mio_ndf_dma_int_en ;
union cvmx_mio_pll_ctl ;
union cvmx_mio_pll_setting ;
union cvmx_mio_ptp_clock_cfg ;
union cvmx_mio_ptp_clock_comp ;
union cvmx_mio_ptp_clock_hi ;
union cvmx_mio_ptp_clock_lo ;
union cvmx_mio_ptp_evt_cnt ;
union cvmx_mio_ptp_timestamp ;
union cvmx_mio_rst_boot ;
union cvmx_mio_rst_cfg ;
union cvmx_mio_rst_ctlx ;
union cvmx_mio_rst_delay ;
union cvmx_mio_rst_int ;
union cvmx_mio_rst_int_en ;
union cvmx_mio_twsx_int ;
union cvmx_mio_twsx_sw_twsi ;
union cvmx_mio_twsx_sw_twsi_ext ;
union cvmx_mio_twsx_twsi_sw ;
union cvmx_mio_uartx_dlh ;
union cvmx_mio_uartx_dll ;
union cvmx_mio_uartx_far ;
union cvmx_mio_uartx_fcr ;
union cvmx_mio_uartx_htx ;
union cvmx_mio_uartx_ier ;
union cvmx_mio_uartx_iir ;
union cvmx_mio_uartx_lcr ;
union cvmx_mio_uartx_lsr ;
union cvmx_mio_uartx_mcr ;
union cvmx_mio_uartx_msr ;
union cvmx_mio_uartx_rbr ;
union cvmx_mio_uartx_rfl ;
union cvmx_mio_uartx_rfw ;
union cvmx_mio_uartx_sbcr ;
union cvmx_mio_uartx_scr ;
union cvmx_mio_uartx_sfe ;
union cvmx_mio_uartx_srr ;
union cvmx_mio_uartx_srt ;
union cvmx_mio_uartx_srts ;
union cvmx_mio_uartx_stt ;
union cvmx_mio_uartx_tfl ;
union cvmx_mio_uartx_tfr ;
union cvmx_mio_uartx_thr ;
union cvmx_mio_uartx_usr ;
union cvmx_mio_uart2_dlh ;
union cvmx_mio_uart2_dll ;
union cvmx_mio_uart2_far ;
union cvmx_mio_uart2_fcr ;
union cvmx_mio_uart2_htx ;
union cvmx_mio_uart2_ier ;
union cvmx_mio_uart2_iir ;
union cvmx_mio_uart2_lcr ;
union cvmx_mio_uart2_lsr ;
union cvmx_mio_uart2_mcr ;
union cvmx_mio_uart2_msr ;
union cvmx_mio_uart2_rbr ;
union cvmx_mio_uart2_rfl ;
union cvmx_mio_uart2_rfw ;
union cvmx_mio_uart2_sbcr ;
union cvmx_mio_uart2_scr ;
union cvmx_mio_uart2_sfe ;
union cvmx_mio_uart2_srr ;
union cvmx_mio_uart2_srt ;
union cvmx_mio_uart2_srts ;
union cvmx_mio_uart2_stt ;
union cvmx_mio_uart2_tfl ;
union cvmx_mio_uart2_tfr ;
union cvmx_mio_uart2_thr ;
union cvmx_mio_uart2_usr ;
