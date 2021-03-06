#define __CVMX_PCI_DEFS_H__
#define CVMX_PCI_BAR1_INDEXX(offset) (0x0000000000000100ull + ((offset) & 31) * 4)
#define CVMX_PCI_BIST_REG (0x00000000000001C0ull)
#define CVMX_PCI_CFG00 (0x0000000000000000ull)
#define CVMX_PCI_CFG01 (0x0000000000000004ull)
#define CVMX_PCI_CFG02 (0x0000000000000008ull)
#define CVMX_PCI_CFG03 (0x000000000000000Cull)
#define CVMX_PCI_CFG04 (0x0000000000000010ull)
#define CVMX_PCI_CFG05 (0x0000000000000014ull)
#define CVMX_PCI_CFG06 (0x0000000000000018ull)
#define CVMX_PCI_CFG07 (0x000000000000001Cull)
#define CVMX_PCI_CFG08 (0x0000000000000020ull)
#define CVMX_PCI_CFG09 (0x0000000000000024ull)
#define CVMX_PCI_CFG10 (0x0000000000000028ull)
#define CVMX_PCI_CFG11 (0x000000000000002Cull)
#define CVMX_PCI_CFG12 (0x0000000000000030ull)
#define CVMX_PCI_CFG13 (0x0000000000000034ull)
#define CVMX_PCI_CFG15 (0x000000000000003Cull)
#define CVMX_PCI_CFG16 (0x0000000000000040ull)
#define CVMX_PCI_CFG17 (0x0000000000000044ull)
#define CVMX_PCI_CFG18 (0x0000000000000048ull)
#define CVMX_PCI_CFG19 (0x000000000000004Cull)
#define CVMX_PCI_CFG20 (0x0000000000000050ull)
#define CVMX_PCI_CFG21 (0x0000000000000054ull)
#define CVMX_PCI_CFG22 (0x0000000000000058ull)
#define CVMX_PCI_CFG56 (0x00000000000000E0ull)
#define CVMX_PCI_CFG57 (0x00000000000000E4ull)
#define CVMX_PCI_CFG58 (0x00000000000000E8ull)
#define CVMX_PCI_CFG59 (0x00000000000000ECull)
#define CVMX_PCI_CFG60 (0x00000000000000F0ull)
#define CVMX_PCI_CFG61 (0x00000000000000F4ull)
#define CVMX_PCI_CFG62 (0x00000000000000F8ull)
#define CVMX_PCI_CFG63 (0x00000000000000FCull)
#define CVMX_PCI_CNT_REG (0x00000000000001B8ull)
#define CVMX_PCI_CTL_STATUS_2 (0x000000000000018Cull)
#define CVMX_PCI_DBELL_X(offset) (0x0000000000000080ull + ((offset) & 3) * 8)
#define CVMX_PCI_DMA_CNT0 CVMX_PCI_DMA_CNTX(0)
#define CVMX_PCI_DMA_CNT1 CVMX_PCI_DMA_CNTX(1)
#define CVMX_PCI_DMA_CNTX(offset) (0x00000000000000A0ull + ((offset) & 1) * 8)
#define CVMX_PCI_DMA_INT_LEV0 CVMX_PCI_DMA_INT_LEVX(0)
#define CVMX_PCI_DMA_INT_LEV1 CVMX_PCI_DMA_INT_LEVX(1)
#define CVMX_PCI_DMA_INT_LEVX(offset) (0x00000000000000A4ull + ((offset) & 1) * 8)
#define CVMX_PCI_DMA_TIME0 CVMX_PCI_DMA_TIMEX(0)
#define CVMX_PCI_DMA_TIME1 CVMX_PCI_DMA_TIMEX(1)
#define CVMX_PCI_DMA_TIMEX(offset) (0x00000000000000B0ull + ((offset) & 1) * 4)
#define CVMX_PCI_INSTR_COUNT0 CVMX_PCI_INSTR_COUNTX(0)
#define CVMX_PCI_INSTR_COUNT1 CVMX_PCI_INSTR_COUNTX(1)
#define CVMX_PCI_INSTR_COUNT2 CVMX_PCI_INSTR_COUNTX(2)
#define CVMX_PCI_INSTR_COUNT3 CVMX_PCI_INSTR_COUNTX(3)
#define CVMX_PCI_INSTR_COUNTX(offset) (0x0000000000000084ull + ((offset) & 3) * 8)
#define CVMX_PCI_INT_ENB (0x0000000000000038ull)
#define CVMX_PCI_INT_ENB2 (0x00000000000001A0ull)
#define CVMX_PCI_INT_SUM (0x0000000000000030ull)
#define CVMX_PCI_INT_SUM2 (0x0000000000000198ull)
#define CVMX_PCI_MSI_RCV (0x00000000000000F0ull)
#define CVMX_PCI_PKTS_SENT0 CVMX_PCI_PKTS_SENTX(0)
#define CVMX_PCI_PKTS_SENT1 CVMX_PCI_PKTS_SENTX(1)
#define CVMX_PCI_PKTS_SENT2 CVMX_PCI_PKTS_SENTX(2)
#define CVMX_PCI_PKTS_SENT3 CVMX_PCI_PKTS_SENTX(3)
#define CVMX_PCI_PKTS_SENTX(offset) (0x0000000000000040ull + ((offset) & 3) * 16)
#define CVMX_PCI_PKTS_SENT_INT_LEV0 CVMX_PCI_PKTS_SENT_INT_LEVX(0)
#define CVMX_PCI_PKTS_SENT_INT_LEV1 CVMX_PCI_PKTS_SENT_INT_LEVX(1)
#define CVMX_PCI_PKTS_SENT_INT_LEV2 CVMX_PCI_PKTS_SENT_INT_LEVX(2)
#define CVMX_PCI_PKTS_SENT_INT_LEV3 CVMX_PCI_PKTS_SENT_INT_LEVX(3)
#define CVMX_PCI_PKTS_SENT_INT_LEVX(offset) (0x0000000000000048ull + ((offset) & 3) * 16)
#define CVMX_PCI_PKTS_SENT_TIME0 CVMX_PCI_PKTS_SENT_TIMEX(0)
#define CVMX_PCI_PKTS_SENT_TIME1 CVMX_PCI_PKTS_SENT_TIMEX(1)
#define CVMX_PCI_PKTS_SENT_TIME2 CVMX_PCI_PKTS_SENT_TIMEX(2)
#define CVMX_PCI_PKTS_SENT_TIME3 CVMX_PCI_PKTS_SENT_TIMEX(3)
#define CVMX_PCI_PKTS_SENT_TIMEX(offset) (0x000000000000004Cull + ((offset) & 3) * 16)
#define CVMX_PCI_PKT_CREDITS0 CVMX_PCI_PKT_CREDITSX(0)
#define CVMX_PCI_PKT_CREDITS1 CVMX_PCI_PKT_CREDITSX(1)
#define CVMX_PCI_PKT_CREDITS2 CVMX_PCI_PKT_CREDITSX(2)
#define CVMX_PCI_PKT_CREDITS3 CVMX_PCI_PKT_CREDITSX(3)
#define CVMX_PCI_PKT_CREDITSX(offset) (0x0000000000000044ull + ((offset) & 3) * 16)
#define CVMX_PCI_READ_CMD_6 (0x0000000000000180ull)
#define CVMX_PCI_READ_CMD_C (0x0000000000000184ull)
#define CVMX_PCI_READ_CMD_E (0x0000000000000188ull)
#define CVMX_PCI_READ_TIMEOUT (CVMX_ADD_IO_SEG(0x00011F00000000B0ull))
#define CVMX_PCI_SCM_REG (0x00000000000001A8ull)
#define CVMX_PCI_TSR_REG (0x00000000000001B0ull)
#define CVMX_PCI_WIN_RD_ADDR (0x0000000000000008ull)
#define CVMX_PCI_WIN_RD_DATA (0x0000000000000020ull)
#define CVMX_PCI_WIN_WR_ADDR (0x0000000000000000ull)
#define CVMX_PCI_WIN_WR_DATA (0x0000000000000010ull)
#define CVMX_PCI_WIN_WR_MASK (0x0000000000000018ull)
union cvmx_pci_bar1_indexx ;
union cvmx_pci_bist_reg ;
union cvmx_pci_cfg00 ;
union cvmx_pci_cfg01 ;
union cvmx_pci_cfg02 ;
union cvmx_pci_cfg03 ;
union cvmx_pci_cfg04 ;
union cvmx_pci_cfg05 ;
union cvmx_pci_cfg06 ;
union cvmx_pci_cfg07 ;
union cvmx_pci_cfg08 ;
union cvmx_pci_cfg09 ;
union cvmx_pci_cfg10 ;
union cvmx_pci_cfg11 ;
union cvmx_pci_cfg12 ;
union cvmx_pci_cfg13 ;
union cvmx_pci_cfg15 ;
union cvmx_pci_cfg16 ;
union cvmx_pci_cfg17 ;
union cvmx_pci_cfg18 ;
union cvmx_pci_cfg19 ;
union cvmx_pci_cfg20 ;
union cvmx_pci_cfg21 ;
union cvmx_pci_cfg22 ;
union cvmx_pci_cfg56 ;
union cvmx_pci_cfg57 ;
union cvmx_pci_cfg58 ;
union cvmx_pci_cfg59 ;
union cvmx_pci_cfg60 ;
union cvmx_pci_cfg61 ;
union cvmx_pci_cfg62 ;
union cvmx_pci_cfg63 ;
union cvmx_pci_cnt_reg ;
union cvmx_pci_ctl_status_2 ;
union cvmx_pci_dbellx ;
union cvmx_pci_dma_cntx ;
union cvmx_pci_dma_int_levx ;
union cvmx_pci_dma_timex ;
union cvmx_pci_instr_countx ;
union cvmx_pci_int_enb ;
union cvmx_pci_int_enb2 ;
union cvmx_pci_int_sum ;
union cvmx_pci_int_sum2 ;
union cvmx_pci_msi_rcv ;
union cvmx_pci_pkt_creditsx ;
union cvmx_pci_pkts_sentx ;
union cvmx_pci_pkts_sent_int_levx ;
union cvmx_pci_pkts_sent_timex ;
union cvmx_pci_read_cmd_6 ;
union cvmx_pci_read_cmd_c ;
union cvmx_pci_read_cmd_e ;
union cvmx_pci_read_timeout ;
union cvmx_pci_scm_reg ;
union cvmx_pci_tsr_reg ;
union cvmx_pci_win_rd_addr ;
union cvmx_pci_win_rd_data ;
union cvmx_pci_win_wr_addr ;
union cvmx_pci_win_wr_data ;
union cvmx_pci_win_wr_mask ;
