#define __CVMX_GMXX_DEFS_H__
#define CVMX_GMXX_BAD_REG(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000518ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_BIST(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000400ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_CLK_EN(block_id) \
CVMX_ADD_IO_SEG(0x00011800080007F0ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_HG2_CONTROL(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000550ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_INF_MODE(block_id) \
CVMX_ADD_IO_SEG(0x00011800080007F8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_NXA_ADR(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000510ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_PRTX_CBFC_CTL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000580ull + (((offset) & 0) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_PRTX_CFG(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000010ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_ADR_CAM0(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000180ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_ADR_CAM1(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000188ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_ADR_CAM2(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000190ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_ADR_CAM3(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000198ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_ADR_CAM4(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080001A0ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_ADR_CAM5(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080001A8ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_ADR_CAM_EN(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000108ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_ADR_CTL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000100ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_DECISION(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000040ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_FRM_CHK(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000020ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_FRM_CTL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000018ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_FRM_MAX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000030ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_FRM_MIN(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000028ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_IFG(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000058ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_INT_EN(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000008ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_INT_REG(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000000ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_JABBER(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000038ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_PAUSE_DROP_TIME(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000068ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_RX_INBND(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000060ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_CTL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000050ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_OCTS(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000088ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_OCTS_CTL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000098ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_OCTS_DMAC(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080000A8ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_OCTS_DRP(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080000B8ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_PKTS(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000080ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_PKTS_BAD(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080000C0ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_PKTS_CTL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000090ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_PKTS_DMAC(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080000A0ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_STATS_PKTS_DRP(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080000B0ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RXX_UDD_SKP(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000048ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_BP_DROPX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000420ull + (((offset) & 3) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_BP_OFFX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000460ull + (((offset) & 3) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_BP_ONX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000440ull + (((offset) & 3) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_HG2_STATUS(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000548ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_PASS_EN(block_id) \
CVMX_ADD_IO_SEG(0x00011800080005F8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_PASS_MAPX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000600ull + (((offset) & 15) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_PRTS(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000410ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_PRT_INFO(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004E8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_TX_STATUS(block_id) \
CVMX_ADD_IO_SEG(0x00011800080007E8ull + (((block_id) & 0) * 0x8000000ull))
#define CVMX_GMXX_RX_XAUI_BAD_COL(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000538ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_RX_XAUI_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000530ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_SMACX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000230ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_STAT_BP(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000520ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_APPEND(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000218ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_BURST(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000228ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_CBFC_XOFF(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080005A0ull + (((offset) & 0) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_CBFC_XON(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080005C0ull + (((offset) & 0) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_CLK(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000208ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_CTL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000270ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_MIN_PKT(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000240ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_PAUSE_PKT_INTERVAL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000248ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_PAUSE_PKT_TIME(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000238ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_PAUSE_TOGO(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000258ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_PAUSE_ZERO(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000260ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_SGMII_CTL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000300ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_SLOT(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000220ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_SOFT_PAUSE(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000250ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT0(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000280ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT1(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000288ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT2(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000290ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT3(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000298ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT4(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080002A0ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT5(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080002A8ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT6(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080002B0ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT7(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080002B8ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT8(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080002C0ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STAT9(offset, block_id) \
CVMX_ADD_IO_SEG(0x00011800080002C8ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_STATS_CTL(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000268ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TXX_THRESH(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000210ull + (((offset) & 3) * 2048) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_BP(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004D0ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_CLK_MSKX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000780ull + (((offset) & 1) * 8) + (((block_id) & 0) * 0x0ull))
#define CVMX_GMXX_TX_COL_ATTEMPT(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000498ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_CORRUPT(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004D8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_HG2_REG1(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000558ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_HG2_REG2(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000560ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_IFG(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000488ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_INT_EN(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000508ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_INT_REG(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000500ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_JAM(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000490ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_LFSR(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004F8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_OVR_BP(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004C8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_PAUSE_PKT_DMAC(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004A0ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_PAUSE_PKT_TYPE(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004A8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_PRTS(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000480ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_SPI_CTL(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004C0ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_SPI_DRAIN(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004E0ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_SPI_MAX(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004B0ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_SPI_ROUNDX(offset, block_id) \
CVMX_ADD_IO_SEG(0x0001180008000680ull + (((offset) & 31) * 8) + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_SPI_THRESH(block_id) \
CVMX_ADD_IO_SEG(0x00011800080004B8ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_TX_XAUI_CTL(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000528ull + (((block_id) & 1) * 0x8000000ull))
#define CVMX_GMXX_XAUI_EXT_LOOPBACK(block_id) \
CVMX_ADD_IO_SEG(0x0001180008000540ull + (((block_id) & 1) * 0x8000000ull))
union cvmx_gmxx_bad_reg ;
union cvmx_gmxx_bist ;
union cvmx_gmxx_clk_en ;
union cvmx_gmxx_hg2_control ;
union cvmx_gmxx_inf_mode ;
union cvmx_gmxx_nxa_adr ;
union cvmx_gmxx_prtx_cbfc_ctl ;
union cvmx_gmxx_prtx_cfg ;
union cvmx_gmxx_rxx_adr_cam0 ;
union cvmx_gmxx_rxx_adr_cam1 ;
union cvmx_gmxx_rxx_adr_cam2 ;
union cvmx_gmxx_rxx_adr_cam3 ;
union cvmx_gmxx_rxx_adr_cam4 ;
union cvmx_gmxx_rxx_adr_cam5 ;
union cvmx_gmxx_rxx_adr_cam_en ;
union cvmx_gmxx_rxx_adr_ctl ;
union cvmx_gmxx_rxx_decision ;
union cvmx_gmxx_rxx_frm_chk ;
union cvmx_gmxx_rxx_frm_ctl ;
union cvmx_gmxx_rxx_frm_max ;
union cvmx_gmxx_rxx_frm_min ;
union cvmx_gmxx_rxx_ifg ;
union cvmx_gmxx_rxx_int_en ;
union cvmx_gmxx_rxx_int_reg ;
union cvmx_gmxx_rxx_jabber ;
union cvmx_gmxx_rxx_pause_drop_time ;
union cvmx_gmxx_rxx_rx_inbnd ;
union cvmx_gmxx_rxx_stats_ctl ;
union cvmx_gmxx_rxx_stats_octs ;
union cvmx_gmxx_rxx_stats_octs_ctl ;
union cvmx_gmxx_rxx_stats_octs_dmac ;
union cvmx_gmxx_rxx_stats_octs_drp ;
union cvmx_gmxx_rxx_stats_pkts ;
union cvmx_gmxx_rxx_stats_pkts_bad ;
union cvmx_gmxx_rxx_stats_pkts_ctl ;
union cvmx_gmxx_rxx_stats_pkts_dmac ;
union cvmx_gmxx_rxx_stats_pkts_drp ;
union cvmx_gmxx_rxx_udd_skp ;
union cvmx_gmxx_rx_bp_dropx ;
union cvmx_gmxx_rx_bp_offx ;
union cvmx_gmxx_rx_bp_onx ;
union cvmx_gmxx_rx_hg2_status ;
union cvmx_gmxx_rx_pass_en ;
union cvmx_gmxx_rx_pass_mapx ;
union cvmx_gmxx_rx_prt_info ;
union cvmx_gmxx_rx_prts ;
union cvmx_gmxx_rx_tx_status ;
union cvmx_gmxx_rx_xaui_bad_col ;
union cvmx_gmxx_rx_xaui_ctl ;
union cvmx_gmxx_smacx ;
union cvmx_gmxx_stat_bp ;
union cvmx_gmxx_txx_append ;
union cvmx_gmxx_txx_burst ;
union cvmx_gmxx_txx_cbfc_xoff ;
union cvmx_gmxx_txx_cbfc_xon ;
union cvmx_gmxx_txx_clk ;
union cvmx_gmxx_txx_ctl ;
union cvmx_gmxx_txx_min_pkt ;
union cvmx_gmxx_txx_pause_pkt_interval ;
union cvmx_gmxx_txx_pause_pkt_time ;
union cvmx_gmxx_txx_pause_togo ;
union cvmx_gmxx_txx_pause_zero ;
union cvmx_gmxx_txx_sgmii_ctl ;
union cvmx_gmxx_txx_slot ;
union cvmx_gmxx_txx_soft_pause ;
union cvmx_gmxx_txx_stat0 ;
union cvmx_gmxx_txx_stat1 ;
union cvmx_gmxx_txx_stat2 ;
union cvmx_gmxx_txx_stat3 ;
union cvmx_gmxx_txx_stat4 ;
union cvmx_gmxx_txx_stat5 ;
union cvmx_gmxx_txx_stat6 ;
union cvmx_gmxx_txx_stat7 ;
union cvmx_gmxx_txx_stat8 ;
union cvmx_gmxx_txx_stat9 ;
union cvmx_gmxx_txx_stats_ctl ;
union cvmx_gmxx_txx_thresh ;
union cvmx_gmxx_tx_bp ;
union cvmx_gmxx_tx_clk_mskx ;
union cvmx_gmxx_tx_col_attempt ;
union cvmx_gmxx_tx_corrupt ;
union cvmx_gmxx_tx_hg2_reg1 ;
union cvmx_gmxx_tx_hg2_reg2 ;
union cvmx_gmxx_tx_ifg ;
union cvmx_gmxx_tx_int_en ;
union cvmx_gmxx_tx_int_reg ;
union cvmx_gmxx_tx_jam ;
union cvmx_gmxx_tx_lfsr ;
union cvmx_gmxx_tx_ovr_bp ;
union cvmx_gmxx_tx_pause_pkt_dmac ;
union cvmx_gmxx_tx_pause_pkt_type ;
union cvmx_gmxx_tx_prts ;
union cvmx_gmxx_tx_spi_ctl ;
union cvmx_gmxx_tx_spi_drain ;
union cvmx_gmxx_tx_spi_max ;
union cvmx_gmxx_tx_spi_roundx ;
union cvmx_gmxx_tx_spi_thresh ;
union cvmx_gmxx_tx_xaui_ctl ;
union cvmx_gmxx_xaui_ext_loopback ;
