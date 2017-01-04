#define __CVMX_AGL_DEFS_H__
#define CVMX_AGL_GMX_BAD_REG (CVMX_ADD_IO_SEG(0x00011800E0000518ull))
#define CVMX_AGL_GMX_BIST (CVMX_ADD_IO_SEG(0x00011800E0000400ull))
#define CVMX_AGL_GMX_DRV_CTL (CVMX_ADD_IO_SEG(0x00011800E00007F0ull))
#define CVMX_AGL_GMX_INF_MODE (CVMX_ADD_IO_SEG(0x00011800E00007F8ull))
#define CVMX_AGL_GMX_PRTX_CFG(offset) (CVMX_ADD_IO_SEG(0x00011800E0000010ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_ADR_CAM0(offset) (CVMX_ADD_IO_SEG(0x00011800E0000180ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_ADR_CAM1(offset) (CVMX_ADD_IO_SEG(0x00011800E0000188ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_ADR_CAM2(offset) (CVMX_ADD_IO_SEG(0x00011800E0000190ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_ADR_CAM3(offset) (CVMX_ADD_IO_SEG(0x00011800E0000198ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_ADR_CAM4(offset) (CVMX_ADD_IO_SEG(0x00011800E00001A0ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_ADR_CAM5(offset) (CVMX_ADD_IO_SEG(0x00011800E00001A8ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_ADR_CAM_EN(offset) (CVMX_ADD_IO_SEG(0x00011800E0000108ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_ADR_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800E0000100ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_DECISION(offset) (CVMX_ADD_IO_SEG(0x00011800E0000040ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_FRM_CHK(offset) (CVMX_ADD_IO_SEG(0x00011800E0000020ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_FRM_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800E0000018ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_FRM_MAX(offset) (CVMX_ADD_IO_SEG(0x00011800E0000030ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_FRM_MIN(offset) (CVMX_ADD_IO_SEG(0x00011800E0000028ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_IFG(offset) (CVMX_ADD_IO_SEG(0x00011800E0000058ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_INT_EN(offset) (CVMX_ADD_IO_SEG(0x00011800E0000008ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_INT_REG(offset) (CVMX_ADD_IO_SEG(0x00011800E0000000ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_JABBER(offset) (CVMX_ADD_IO_SEG(0x00011800E0000038ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_PAUSE_DROP_TIME(offset) (CVMX_ADD_IO_SEG(0x00011800E0000068ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_RX_INBND(offset) (CVMX_ADD_IO_SEG(0x00011800E0000060ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800E0000050ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_OCTS(offset) (CVMX_ADD_IO_SEG(0x00011800E0000088ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_OCTS_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800E0000098ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_OCTS_DMAC(offset) (CVMX_ADD_IO_SEG(0x00011800E00000A8ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_OCTS_DRP(offset) (CVMX_ADD_IO_SEG(0x00011800E00000B8ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_PKTS(offset) (CVMX_ADD_IO_SEG(0x00011800E0000080ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_PKTS_BAD(offset) (CVMX_ADD_IO_SEG(0x00011800E00000C0ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_PKTS_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800E0000090ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_PKTS_DMAC(offset) (CVMX_ADD_IO_SEG(0x00011800E00000A0ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_STATS_PKTS_DRP(offset) (CVMX_ADD_IO_SEG(0x00011800E00000B0ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RXX_UDD_SKP(offset) (CVMX_ADD_IO_SEG(0x00011800E0000048ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_RX_BP_DROPX(offset) (CVMX_ADD_IO_SEG(0x00011800E0000420ull) + ((offset) & 1) * 8)
#define CVMX_AGL_GMX_RX_BP_OFFX(offset) (CVMX_ADD_IO_SEG(0x00011800E0000460ull) + ((offset) & 1) * 8)
#define CVMX_AGL_GMX_RX_BP_ONX(offset) (CVMX_ADD_IO_SEG(0x00011800E0000440ull) + ((offset) & 1) * 8)
#define CVMX_AGL_GMX_RX_PRT_INFO (CVMX_ADD_IO_SEG(0x00011800E00004E8ull))
#define CVMX_AGL_GMX_RX_TX_STATUS (CVMX_ADD_IO_SEG(0x00011800E00007E8ull))
#define CVMX_AGL_GMX_SMACX(offset) (CVMX_ADD_IO_SEG(0x00011800E0000230ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_STAT_BP (CVMX_ADD_IO_SEG(0x00011800E0000520ull))
#define CVMX_AGL_GMX_TXX_APPEND(offset) (CVMX_ADD_IO_SEG(0x00011800E0000218ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_CLK(offset) (CVMX_ADD_IO_SEG(0x00011800E0000208ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800E0000270ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_MIN_PKT(offset) (CVMX_ADD_IO_SEG(0x00011800E0000240ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_PAUSE_PKT_INTERVAL(offset) (CVMX_ADD_IO_SEG(0x00011800E0000248ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_PAUSE_PKT_TIME(offset) (CVMX_ADD_IO_SEG(0x00011800E0000238ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_PAUSE_TOGO(offset) (CVMX_ADD_IO_SEG(0x00011800E0000258ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_PAUSE_ZERO(offset) (CVMX_ADD_IO_SEG(0x00011800E0000260ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_SOFT_PAUSE(offset) (CVMX_ADD_IO_SEG(0x00011800E0000250ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT0(offset) (CVMX_ADD_IO_SEG(0x00011800E0000280ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT1(offset) (CVMX_ADD_IO_SEG(0x00011800E0000288ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT2(offset) (CVMX_ADD_IO_SEG(0x00011800E0000290ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT3(offset) (CVMX_ADD_IO_SEG(0x00011800E0000298ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT4(offset) (CVMX_ADD_IO_SEG(0x00011800E00002A0ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT5(offset) (CVMX_ADD_IO_SEG(0x00011800E00002A8ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT6(offset) (CVMX_ADD_IO_SEG(0x00011800E00002B0ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT7(offset) (CVMX_ADD_IO_SEG(0x00011800E00002B8ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT8(offset) (CVMX_ADD_IO_SEG(0x00011800E00002C0ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STAT9(offset) (CVMX_ADD_IO_SEG(0x00011800E00002C8ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_STATS_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800E0000268ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TXX_THRESH(offset) (CVMX_ADD_IO_SEG(0x00011800E0000210ull) + ((offset) & 1) * 2048)
#define CVMX_AGL_GMX_TX_BP (CVMX_ADD_IO_SEG(0x00011800E00004D0ull))
#define CVMX_AGL_GMX_TX_COL_ATTEMPT (CVMX_ADD_IO_SEG(0x00011800E0000498ull))
#define CVMX_AGL_GMX_TX_IFG (CVMX_ADD_IO_SEG(0x00011800E0000488ull))
#define CVMX_AGL_GMX_TX_INT_EN (CVMX_ADD_IO_SEG(0x00011800E0000508ull))
#define CVMX_AGL_GMX_TX_INT_REG (CVMX_ADD_IO_SEG(0x00011800E0000500ull))
#define CVMX_AGL_GMX_TX_JAM (CVMX_ADD_IO_SEG(0x00011800E0000490ull))
#define CVMX_AGL_GMX_TX_LFSR (CVMX_ADD_IO_SEG(0x00011800E00004F8ull))
#define CVMX_AGL_GMX_TX_OVR_BP (CVMX_ADD_IO_SEG(0x00011800E00004C8ull))
#define CVMX_AGL_GMX_TX_PAUSE_PKT_DMAC (CVMX_ADD_IO_SEG(0x00011800E00004A0ull))
#define CVMX_AGL_GMX_TX_PAUSE_PKT_TYPE (CVMX_ADD_IO_SEG(0x00011800E00004A8ull))
#define CVMX_AGL_PRTX_CTL(offset) (CVMX_ADD_IO_SEG(0x00011800E0002000ull) + ((offset) & 1) * 8)
union cvmx_agl_gmx_bad_reg ;
union cvmx_agl_gmx_bist ;
union cvmx_agl_gmx_drv_ctl ;
union cvmx_agl_gmx_inf_mode ;
union cvmx_agl_gmx_prtx_cfg ;
union cvmx_agl_gmx_rxx_adr_cam0 ;
union cvmx_agl_gmx_rxx_adr_cam1 ;
union cvmx_agl_gmx_rxx_adr_cam2 ;
union cvmx_agl_gmx_rxx_adr_cam3 ;
union cvmx_agl_gmx_rxx_adr_cam4 ;
union cvmx_agl_gmx_rxx_adr_cam5 ;
union cvmx_agl_gmx_rxx_adr_cam_en ;
union cvmx_agl_gmx_rxx_adr_ctl ;
union cvmx_agl_gmx_rxx_decision ;
union cvmx_agl_gmx_rxx_frm_chk ;
union cvmx_agl_gmx_rxx_frm_ctl ;
union cvmx_agl_gmx_rxx_frm_max ;
union cvmx_agl_gmx_rxx_frm_min ;
union cvmx_agl_gmx_rxx_ifg ;
union cvmx_agl_gmx_rxx_int_en ;
union cvmx_agl_gmx_rxx_int_reg ;
union cvmx_agl_gmx_rxx_jabber ;
union cvmx_agl_gmx_rxx_pause_drop_time ;
union cvmx_agl_gmx_rxx_rx_inbnd ;
union cvmx_agl_gmx_rxx_stats_ctl ;
union cvmx_agl_gmx_rxx_stats_octs ;
union cvmx_agl_gmx_rxx_stats_octs_ctl ;
union cvmx_agl_gmx_rxx_stats_octs_dmac ;
union cvmx_agl_gmx_rxx_stats_octs_drp ;
union cvmx_agl_gmx_rxx_stats_pkts ;
union cvmx_agl_gmx_rxx_stats_pkts_bad ;
union cvmx_agl_gmx_rxx_stats_pkts_ctl ;
union cvmx_agl_gmx_rxx_stats_pkts_dmac ;
union cvmx_agl_gmx_rxx_stats_pkts_drp ;
union cvmx_agl_gmx_rxx_udd_skp ;
union cvmx_agl_gmx_rx_bp_dropx ;
union cvmx_agl_gmx_rx_bp_offx ;
union cvmx_agl_gmx_rx_bp_onx ;
union cvmx_agl_gmx_rx_prt_info ;
union cvmx_agl_gmx_rx_tx_status ;
union cvmx_agl_gmx_smacx ;
union cvmx_agl_gmx_stat_bp ;
union cvmx_agl_gmx_txx_append ;
union cvmx_agl_gmx_txx_clk ;
union cvmx_agl_gmx_txx_ctl ;
union cvmx_agl_gmx_txx_min_pkt ;
union cvmx_agl_gmx_txx_pause_pkt_interval ;
union cvmx_agl_gmx_txx_pause_pkt_time ;
union cvmx_agl_gmx_txx_pause_togo ;
union cvmx_agl_gmx_txx_pause_zero ;
union cvmx_agl_gmx_txx_soft_pause ;
union cvmx_agl_gmx_txx_stat0 ;
union cvmx_agl_gmx_txx_stat1 ;
union cvmx_agl_gmx_txx_stat2 ;
union cvmx_agl_gmx_txx_stat3 ;
union cvmx_agl_gmx_txx_stat4 ;
union cvmx_agl_gmx_txx_stat5 ;
union cvmx_agl_gmx_txx_stat6 ;
union cvmx_agl_gmx_txx_stat7 ;
union cvmx_agl_gmx_txx_stat8 ;
union cvmx_agl_gmx_txx_stat9 ;
union cvmx_agl_gmx_txx_stats_ctl ;
union cvmx_agl_gmx_txx_thresh ;
union cvmx_agl_gmx_tx_bp ;
union cvmx_agl_gmx_tx_col_attempt ;
union cvmx_agl_gmx_tx_ifg ;
union cvmx_agl_gmx_tx_int_en ;
union cvmx_agl_gmx_tx_int_reg ;
union cvmx_agl_gmx_tx_jam ;
union cvmx_agl_gmx_tx_lfsr ;
union cvmx_agl_gmx_tx_ovr_bp ;
union cvmx_agl_gmx_tx_pause_pkt_dmac ;
union cvmx_agl_gmx_tx_pause_pkt_type ;
union cvmx_agl_prtx_ctl ;
