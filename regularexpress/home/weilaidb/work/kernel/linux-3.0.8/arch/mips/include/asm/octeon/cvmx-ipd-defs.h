#define __CVMX_IPD_DEFS_H__
#define CVMX_IPD_1ST_MBUFF_SKIP (CVMX_ADD_IO_SEG(0x00014F0000000000ull))
#define CVMX_IPD_1st_NEXT_PTR_BACK (CVMX_ADD_IO_SEG(0x00014F0000000150ull))
#define CVMX_IPD_2nd_NEXT_PTR_BACK (CVMX_ADD_IO_SEG(0x00014F0000000158ull))
#define CVMX_IPD_BIST_STATUS (CVMX_ADD_IO_SEG(0x00014F00000007F8ull))
#define CVMX_IPD_BP_PRT_RED_END (CVMX_ADD_IO_SEG(0x00014F0000000328ull))
#define CVMX_IPD_CLK_COUNT (CVMX_ADD_IO_SEG(0x00014F0000000338ull))
#define CVMX_IPD_CTL_STATUS (CVMX_ADD_IO_SEG(0x00014F0000000018ull))
#define CVMX_IPD_INT_ENB (CVMX_ADD_IO_SEG(0x00014F0000000160ull))
#define CVMX_IPD_INT_SUM (CVMX_ADD_IO_SEG(0x00014F0000000168ull))
#define CVMX_IPD_NOT_1ST_MBUFF_SKIP (CVMX_ADD_IO_SEG(0x00014F0000000008ull))
#define CVMX_IPD_PACKET_MBUFF_SIZE (CVMX_ADD_IO_SEG(0x00014F0000000010ull))
#define CVMX_IPD_PKT_PTR_VALID (CVMX_ADD_IO_SEG(0x00014F0000000358ull))
#define CVMX_IPD_PORTX_BP_PAGE_CNT(offset) (CVMX_ADD_IO_SEG(0x00014F0000000028ull) + ((offset) & 63) * 8)
#define CVMX_IPD_PORTX_BP_PAGE_CNT2(offset) (CVMX_ADD_IO_SEG(0x00014F0000000368ull) + ((offset) & 63) * 8 - 8*36)
#define CVMX_IPD_PORTX_BP_PAGE_CNT3(offset) (CVMX_ADD_IO_SEG(0x00014F00000003D0ull) + ((offset) & 63) * 8 - 8*40)
#define CVMX_IPD_PORT_BP_COUNTERS2_PAIRX(offset) (CVMX_ADD_IO_SEG(0x00014F0000000388ull) + ((offset) & 63) * 8 - 8*36)
#define CVMX_IPD_PORT_BP_COUNTERS3_PAIRX(offset) (CVMX_ADD_IO_SEG(0x00014F00000003B0ull) + ((offset) & 63) * 8 - 8*40)
#define CVMX_IPD_PORT_BP_COUNTERS_PAIRX(offset) (CVMX_ADD_IO_SEG(0x00014F00000001B8ull) + ((offset) & 63) * 8)
#define CVMX_IPD_PORT_QOS_INTX(offset) (CVMX_ADD_IO_SEG(0x00014F0000000808ull) + ((offset) & 7) * 8)
#define CVMX_IPD_PORT_QOS_INT_ENBX(offset) (CVMX_ADD_IO_SEG(0x00014F0000000848ull) + ((offset) & 7) * 8)
#define CVMX_IPD_PORT_QOS_X_CNT(offset) (CVMX_ADD_IO_SEG(0x00014F0000000888ull) + ((offset) & 511) * 8)
#define CVMX_IPD_PRC_HOLD_PTR_FIFO_CTL (CVMX_ADD_IO_SEG(0x00014F0000000348ull))
#define CVMX_IPD_PRC_PORT_PTR_FIFO_CTL (CVMX_ADD_IO_SEG(0x00014F0000000350ull))
#define CVMX_IPD_PTR_COUNT (CVMX_ADD_IO_SEG(0x00014F0000000320ull))
#define CVMX_IPD_PWP_PTR_FIFO_CTL (CVMX_ADD_IO_SEG(0x00014F0000000340ull))
#define CVMX_IPD_QOS0_RED_MARKS CVMX_IPD_QOSX_RED_MARKS(0)
#define CVMX_IPD_QOS1_RED_MARKS CVMX_IPD_QOSX_RED_MARKS(1)
#define CVMX_IPD_QOS2_RED_MARKS CVMX_IPD_QOSX_RED_MARKS(2)
#define CVMX_IPD_QOS3_RED_MARKS CVMX_IPD_QOSX_RED_MARKS(3)
#define CVMX_IPD_QOS4_RED_MARKS CVMX_IPD_QOSX_RED_MARKS(4)
#define CVMX_IPD_QOS5_RED_MARKS CVMX_IPD_QOSX_RED_MARKS(5)
#define CVMX_IPD_QOS6_RED_MARKS CVMX_IPD_QOSX_RED_MARKS(6)
#define CVMX_IPD_QOS7_RED_MARKS CVMX_IPD_QOSX_RED_MARKS(7)
#define CVMX_IPD_QOSX_RED_MARKS(offset) (CVMX_ADD_IO_SEG(0x00014F0000000178ull) + ((offset) & 7) * 8)
#define CVMX_IPD_QUE0_FREE_PAGE_CNT (CVMX_ADD_IO_SEG(0x00014F0000000330ull))
#define CVMX_IPD_RED_PORT_ENABLE (CVMX_ADD_IO_SEG(0x00014F00000002D8ull))
#define CVMX_IPD_RED_PORT_ENABLE2 (CVMX_ADD_IO_SEG(0x00014F00000003A8ull))
#define CVMX_IPD_RED_QUE0_PARAM CVMX_IPD_RED_QUEX_PARAM(0)
#define CVMX_IPD_RED_QUE1_PARAM CVMX_IPD_RED_QUEX_PARAM(1)
#define CVMX_IPD_RED_QUE2_PARAM CVMX_IPD_RED_QUEX_PARAM(2)
#define CVMX_IPD_RED_QUE3_PARAM CVMX_IPD_RED_QUEX_PARAM(3)
#define CVMX_IPD_RED_QUE4_PARAM CVMX_IPD_RED_QUEX_PARAM(4)
#define CVMX_IPD_RED_QUE5_PARAM CVMX_IPD_RED_QUEX_PARAM(5)
#define CVMX_IPD_RED_QUE6_PARAM CVMX_IPD_RED_QUEX_PARAM(6)
#define CVMX_IPD_RED_QUE7_PARAM CVMX_IPD_RED_QUEX_PARAM(7)
#define CVMX_IPD_RED_QUEX_PARAM(offset) (CVMX_ADD_IO_SEG(0x00014F00000002E0ull) + ((offset) & 7) * 8)
#define CVMX_IPD_SUB_PORT_BP_PAGE_CNT (CVMX_ADD_IO_SEG(0x00014F0000000148ull))
#define CVMX_IPD_SUB_PORT_FCS (CVMX_ADD_IO_SEG(0x00014F0000000170ull))
#define CVMX_IPD_SUB_PORT_QOS_CNT (CVMX_ADD_IO_SEG(0x00014F0000000800ull))
#define CVMX_IPD_WQE_FPA_QUEUE (CVMX_ADD_IO_SEG(0x00014F0000000020ull))
#define CVMX_IPD_WQE_PTR_VALID (CVMX_ADD_IO_SEG(0x00014F0000000360ull))
union cvmx_ipd_1st_mbuff_skip ;
union cvmx_ipd_1st_next_ptr_back ;
union cvmx_ipd_2nd_next_ptr_back ;
union cvmx_ipd_bist_status ;
union cvmx_ipd_bp_prt_red_end ;
union cvmx_ipd_clk_count ;
union cvmx_ipd_ctl_status ;
union cvmx_ipd_int_enb ;
union cvmx_ipd_int_sum ;
union cvmx_ipd_not_1st_mbuff_skip ;
union cvmx_ipd_packet_mbuff_size ;
union cvmx_ipd_pkt_ptr_valid ;
union cvmx_ipd_portx_bp_page_cnt ;
union cvmx_ipd_portx_bp_page_cnt2 ;
union cvmx_ipd_portx_bp_page_cnt3 ;
union cvmx_ipd_port_bp_counters2_pairx ;
union cvmx_ipd_port_bp_counters3_pairx ;
union cvmx_ipd_port_bp_counters_pairx ;
union cvmx_ipd_port_qos_x_cnt ;
union cvmx_ipd_port_qos_intx ;
union cvmx_ipd_port_qos_int_enbx ;
union cvmx_ipd_prc_hold_ptr_fifo_ctl ;
union cvmx_ipd_prc_port_ptr_fifo_ctl ;
union cvmx_ipd_ptr_count ;
union cvmx_ipd_pwp_ptr_fifo_ctl ;
union cvmx_ipd_qosx_red_marks ;
union cvmx_ipd_que0_free_page_cnt ;
union cvmx_ipd_red_port_enable ;
union cvmx_ipd_red_port_enable2 ;
union cvmx_ipd_red_quex_param ;
union cvmx_ipd_sub_port_bp_page_cnt ;
union cvmx_ipd_sub_port_fcs ;
union cvmx_ipd_sub_port_qos_cnt ;
union cvmx_ipd_wqe_fpa_queue ;
union cvmx_ipd_wqe_ptr_valid ;
