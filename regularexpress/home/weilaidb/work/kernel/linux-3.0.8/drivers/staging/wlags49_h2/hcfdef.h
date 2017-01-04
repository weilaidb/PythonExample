#define HCFDEFC_H 1
#define HCF_MAGIC				0x7D37
#define	PLUG_DATA_OFFSET        0x00000800
#define INI_TICK_INI			0x00040000L
#define IO_IN					0
#define IO_OUT					1
#define DO_ASSERT				( assert_ifbp->IFB_Magic != HCF_MAGIC && assert_ifbp->IFB_Magic == HCF_MAGIC )
#define NT_ASSERT				0x0000
#define NEVER_TESTED			MERGE_2( 0xEFFE, 0xFEEF )
#define SE_ASSERT				0x5EFF
#define DHF_FILE_NAME_OFFSET	10000
#define MMD_FILE_NAME_OFFSET	20000
#define HCF_TRACE_ACTION		0x0000
#define HCF_TRACE_CNTL			0x0001
#define HCF_TRACE_DMA_RX_GET	0x0002
#define HCF_TRACE_DMA_RX_PUT	0x0003
#define HCF_TRACE_DMA_TX_GET	0x0004
#define HCF_TRACE_DMA_TX_PUT	0x0005
#define HCF_TRACE_GET_INFO		0x0006
#define HCF_TRACE_PUT_INFO		0x0007
#define HCF_TRACE_RCV_MSG		0x0008
#define HCF_TRACE_SEND_MSG		0x0009
#define HCF_TRACE_SERVICE_NIC	0x000A
#define HCF_TRACE_ACTION_KLUDGE	0x0010
#define HCF_TRACE_STRIO			0x0020
#define HCF_TRACE_ALLOC			0X0021
#define HCF_TRACE_DL			0X0023
#define HCF_TRACE_ISR_INFO		0X0024
#define HCF_TRACE_CALIBRATE		0x0026
#define HCF_TRACE_CMD_CPL 		0x0040
#define HCF_TRACE_CMD_EXE		0x0041
#define HCF_TRACE_GET_FID		0x0042
#define HCF_TRACE_GET_FRAG		0x0043
#define HCF_TRACE_INIT			0x0044
#define HCF_TRACE_PUT_FRAG		0x0045
#define HCF_TRACE_SETUP_BAP		0x0046
#define	HCF_TRACE_EXIT 			0x8000
#define BAP_1					HREG_DATA_1
#define 	HFS_STAT_MSG_TYPE	0xE000
#define 	HFS_STAT_MIC_KEY_ID	0x1800
#define 	HFS_STAT_1042		0x2000
#define 	HFS_STAT_TUNNEL		0x4000
#define 	HFS_STAT_WMP_MSG	0x6000
#if (HCF_TYPE) & HCF_TYPE_WPA
#define 	HFS_STAT_MIC		0x0010
#define HREG_IO_RANGE			0x80
#define HREG_CMD				0x00
#define 	HCMD_CMD_CODE			0x3F
#define HREG_PARAM_0			0x02
#define HREG_PARAM_1			0x04
#define HREG_PARAM_2			0x06
#define HREG_STAT				0x08
#define 	HREG_STAT_CMD_CODE		0x003F
#define		HREG_STAT_DIAG_ERR		0x0100
#define		HREG_STAT_INQUIRE_ERR	0x0500
#define 	HREG_STAT_CMD_RESULT	0x7F00
#define HREG_RESP_0				0x0A
#define HREG_RESP_1				0x0C
#define HREG_RESP_2				0x0E
#define HREG_INFO_FID			0x10
#define HREG_RX_FID				0x20
#define HREG_ALLOC_FID  		0x22
#define HREG_TX_COMPL_FID  		0x24
#define 	HREG_OFFSET_ERR			0x4000
#define HREG_SELECT_1			0x1A
#define HREG_OFFSET_1			0x1E
#define HREG_DATA_1				0x38
#define HREG_EV_STAT			0x30
#define HREG_INT_EN				0x32
#define HREG_EV_ACK				0x34
#define    HREG_EV_TICK				0x8000
#define    HREG_EV_INFO_DROP		0x2000
#if (HCF_TYPE) & HCF_TYPE_HII5
#define    HREG_EV_ACK_REG_READY	0x0000
#define    HREG_EV_ACK_REG_READY	0x1000
#if (HCF_SLEEP) & ( HCF_CDS | HCF_DDS )
#define    HREG_EV_SLEEP_REQ		0x0800
#define    HREG_EV_SLEEP_REQ		0x0000
#if HCF_DMA
#define    HREG_EV_RDMAD			0x0200
#define    HREG_EV_TDMAD			0x0100
#define    HREG_EV_FW_DMA			0x0460
#define    HREG_EV_FW_DMA			0x0000
#define    HREG_EV_INFO				0x0080
#define    HREG_EV_CMD				0x0010
#define    HREG_EV_ALLOC			0x0008
#define    HREG_EV_TX_EXC			0x0004
#define    HREG_EV_TX				0x0002
#define    HREG_EV_RX				0x0001
#define    HREG_EV_TX_EXT 			( (HCF_EXT) & (HCF_EXT_INT_TX_EX | HCF_EXT_INT_TICK ) )
#if HCF_EXT_INT_TX_EX != HREG_EV_TX_EXC
err: these values should match;
#if HCF_EXT_INT_TICK != HREG_EV_TICK
err: these values should match;
#define HREG_SW_0				0x28
#define HREG_SW_1				0x2A
#define HREG_SW_2				0x2C
#define HREG_IO					0x12
#define		HREG_IO_SRESET			0x0001
#define		HREG_IO_WAKEUP_ASYNC	0x0002
#define		HREG_IO_WOKEN_UP		0x0004
#define HREG_CNTL				0x14
#define		HREG_CNTL_AUX_ENA_STAT	0xC000
#define		HREG_CNTL_AUX_DIS_STAT	0x0000
#define		HREG_CNTL_AUX_ENA_CNTL	0x8000
#define		HREG_CNTL_AUX_DIS_CNTL	0x4000
#define		HREG_CNTL_AUX_DSD		0x2000
#define		HREG_CNTL_AUX_ENA		(HREG_CNTL_AUX_ENA_CNTL | HREG_CNTL_AUX_DIS_CNTL )
#define HREG_SPARE				0x16
#define HREG_AUX_PAGE			0x3A
#define HREG_AUX_OFFSET			0x3C
#define HREG_AUX_DATA			0x3E
#if HCF_DMA
#define HREG_DMA_CTRL						0x0040
#define HREG_TXDMA_PTR32					0x0044
#define HREG_TXDMA_PRIO_PTR32				0x0048
#define HREG_TXDMA_HIPRIO_PTR32				0x004C
#define HREG_RXDMA_PTR32					0x0050
#define HREG_CARDDETECT_1					0x007C
#define HREG_CARDDETECT_2					0x007E
#define HREG_FREETIMER						0x0058
#define HREG_DMA_RX_CNT						0x0026
#define HREG_DMA_CTRL_RXHWEN				0x80000000
#define HREG_DMA_CTRL_RXRESET				0x40000000
#define HREG_DMA_CTRL_RXBAP1				BIT29
#define HREG_DMA_CTRL_RX_STALLED			BIT28
#define HREG_DMA_CTRL_RXAUTOACK_DMADONE		BIT27
#define HREG_DMA_CTRL_RXAUTOACK_INFO		BIT26
#define HREG_DMA_CTRL_RXAUTOACK_DMAEN		0x02000000
#define HREG_DMA_CTRL_RXAUTOACK_RX			0x01000000
#define HREG_DMA_CTRL_RX_BUSY				BIT23
#define HREG_DMA_CTRL_RX_MODE_SINGLE_PACKET	0x00010000
#define HREG_DMA_CTRL_RX_MODE_MULTI_PACKET	0x00020000
#define HREG_DMA_CTRL_TXHWEN				0x8000
#define HREG_DMA_CTRL_TXRESET				0x4000
#define HREG_DMA_CTRL_TXBAP1				BIT13
#define HREG_DMA_CTRL_TXAUTOACK_DMADONE		BIT11
#define HREG_DMA_CTRL_TXAUTOACK_DMAEN		0x00000400
#define HREG_DMA_CTRL_TXAUTOACK_DMAALLOC	0x00000200
#define HREG_DMA_CTRL_TXAUTOACK_TX			0x00000100
#define HREG_DMA_CTRL_TX_BUSY				BIT7
#define HREG_DMA_CTRL_TX_MODE_SINGLE_PACKET	BIT0
#define HREG_DMA_CTRL_TX_MODE_MULTI_PACKET	0x00000002
#define DMA_CTRLSTAT_GO (HREG_DMA_CTRL_RXHWEN | HREG_DMA_CTRL_RX_MODE_MULTI_PACKET | \
HREG_DMA_CTRL_RXAUTOACK_DMAEN | HREG_DMA_CTRL_RXAUTOACK_RX | \
HREG_DMA_CTRL_TXHWEN | \
HREG_DMA_CTRL_TX_MODE_MULTI_PACKET | HREG_DMA_CTRL_TXAUTOACK_DMAEN |\
HREG_DMA_CTRL_TXAUTOACK_DMAALLOC)
#define DMA_CTRLSTAT_RESET (HREG_DMA_CTRL_RXHWEN | HREG_DMA_CTRL_RXRESET | HREG_DMA_CTRL_TXHWEN | HREG_DMA_CTRL_TXRESET)
#define DESC_DMA_OWNED     		0x8000
#define DESC_SOP   			 	0x8000
#define DESC_EOP   			 	0x4000
#define DMA_RX				0
#define DMA_TX				1
#define 	HCMD_BUSY			0x8000
#define HCMD_INI				0x0000
#define HCMD_ENABLE				HCF_CNTL_ENABLE
#define HCMD_DISABLE			HCF_CNTL_DISABLE
#define HCMD_CONNECT			HCF_CNTL_CONNECT
#define HCMD_EXECUTE			0x0004
#define HCMD_DISCONNECT			HCF_CNTL_DISCONNECT
#define HCMD_SLEEP				0x0006
#define HCMD_CONTINUE			HCF_CNTL_CONTINUE
#define 	HCMD_RETRY			0x0100
#define HCMD_ALLOC				0x000A
#define HCMD_TX					0x000B
#define 	HCMD_RECL			0x0100
#define HCMD_INQUIRE			0x0011
#define HCMD_ACCESS				0x0021
#define 	HCMD_ACCESS_WRITE	0x0100
#define HCMD_PROGRAM			0x0022
#define HCMD_READ_MIF			0x0030
#define HCMD_WRITE_MIF			0x0031
#define HCMD_THESEUS			0x0038
#define 	HCMD_STARTPREAMBLE  0x0E00
#define 	HCMD_STOP			0x0F00
#define CFG_DRV_ACT_RANGES_PRI_3_BOTTOM	1
#define CFG_DRV_ACT_RANGES_PRI_3_TOP	1
#define CFG_DRV_ACT_RANGES_HSI_4_BOTTOM	1
#define CFG_DRV_ACT_RANGES_HSI_4_TOP	1
#define CFG_DRV_ACT_RANGES_HSI_5_BOTTOM	1
#define CFG_DRV_ACT_RANGES_HSI_5_TOP	1
#if (HCF_TYPE) & HCF_TYPE_WPA
#define CFG_DRV_ACT_RANGES_APF_1_BOTTOM	16
#define CFG_DRV_ACT_RANGES_APF_1_TOP    16
#define CFG_DRV_ACT_RANGES_APF_1_BOTTOM	1
#define CFG_DRV_ACT_RANGES_APF_1_TOP    1
#define CFG_DRV_ACT_RANGES_APF_2_BOTTOM	2
#define CFG_DRV_ACT_RANGES_APF_2_TOP    2
#define CFG_DRV_ACT_RANGES_APF_3_BOTTOM	1
#define CFG_DRV_ACT_RANGES_APF_3_TOP    1
#define CFG_DRV_ACT_RANGES_APF_4_BOTTOM	1
#define CFG_DRV_ACT_RANGES_APF_4_TOP    1
#if (HCF_TYPE) & HCF_TYPE_HII5
#define CFG_DRV_ACT_RANGES_STA_2_BOTTOM	6
#define CFG_DRV_ACT_RANGES_STA_2_TOP    6
#define CFG_DRV_ACT_RANGES_STA_2_BOTTOM	1
#define CFG_DRV_ACT_RANGES_STA_2_TOP    2
#define CFG_DRV_ACT_RANGES_STA_3_BOTTOM	1
#define CFG_DRV_ACT_RANGES_STA_3_TOP    1
#define CFG_DRV_ACT_RANGES_STA_4_BOTTOM	1
#define CFG_DRV_ACT_RANGES_STA_4_TOP    1
#if defined HCF_CFG_PRI_1_TOP || defined HCF_CFG_PRI_1_BOTTOM
err: PRI_1 not supported for H-I;
#if defined HCF_CFG_PRI_2_TOP || defined HCF_CFG_PRI_2_BOTTOM
err: PRI_2 not supported for H-I;
#if HCF_CFG_PRI_3_TOP == 0 || \
CFG_DRV_ACT_RANGES_PRI_3_BOTTOM <= HCF_CFG_PRI_3_TOP && HCF_CFG_PRI_3_TOP <= CFG_DRV_ACT_RANGES_PRI_3_TOP
#undef CFG_DRV_ACT_RANGES_PRI_3_TOP
#define CFG_DRV_ACT_RANGES_PRI_3_TOP	HCF_CFG_PRI_3_TOP
err: ;
#if CFG_DRV_ACT_RANGES_PRI_3_BOTTOM <= HCF_CFG_PRI_3_BOTTOM && HCF_CFG_PRI_3_BOTTOM <= CFG_DRV_ACT_RANGES_PRI_3_TOP
#undef CFG_DRV_ACT_RANGES_PRI_3_BOTTOM
#define CFG_DRV_ACT_RANGES_PRI_3_BOTTOM	HCF_CFG_PRI_3_BOTTOM
err: ;
#if defined HCF_CFG_HSI_0_TOP || defined HCF_CFG_HSI_0_BOTTOM
err: HSI_0 not supported for H-I;
#if defined HCF_CFG_HSI_1_TOP || defined HCF_CFG_HSI_1_BOTTOM
err: HSI_1 not supported for H-I;
#if defined HCF_CFG_HSI_2_TOP || defined HCF_CFG_HSI_2_BOTTOM
err: HSI_2 not supported for H-I;
#if defined HCF_CFG_HSI_3_TOP || defined HCF_CFG_HSI_3_BOTTOM
err: HSI_3 not supported for H-I;
#if HCF_CFG_HSI_4_TOP == 0 || \
CFG_DRV_ACT_RANGES_HSI_4_BOTTOM <= CF_CFG_HSI_4_TOP && HCF_CFG_HSI_4_TOP <= CFG_DRV_ACT_RANGES_HSI_4_TOP
#undef CFG_DRV_ACT_RANGES_HSI_4_TOP
#define CFG_DRV_ACT_RANGES_HSI_4_TOP	HCF_CFG_HSI_4_TOP
err: ;
#if CFG_DRV_ACT_RANGES_HSI_4_BOTTOM <= HCF_CFG_HSI_4_BOTTOM && HCF_CFG_HSI_4_BOTTOM <= CFG_DRV_ACT_RANGES_HSI_4_TOP
#undef CFG_DRV_ACT_RANGES_HSI_4_BOTTOM
#define CFG_DRV_ACT_RANGES_HSI_4_BOTTOM	HCF_CFG_HSI_4_BOTTOM
err: ;
#if HCF_CFG_HSI_5_TOP == 0 || \
CFG_DRV_ACT_RANGES_HSI_5_BOTTOM <= CF_CFG_HSI_5_TOP && HCF_CFG_HSI_5_TOP <= CFG_DRV_ACT_RANGES_HSI_5_TOP
#undef CFG_DRV_ACT_RANGES_HSI_5_TOP
#define CFG_DRV_ACT_RANGES_HSI_5_TOP	HCF_CFG_HSI_5_TOP
err: ;
#if CFG_DRV_ACT_RANGES_HSI_5_BOTTOM <= HCF_CFG_HSI_5_BOTTOM && HCF_CFG_HSI_5_BOTTOM <= CFG_DRV_ACT_RANGES_HSI_5_TOP
#undef CFG_DRV_ACT_RANGES_HSI_5_BOTTOM
#define CFG_DRV_ACT_RANGES_HSI_5_BOTTOM	HCF_CFG_HSI_5_BOTTOM
err: ;
#if defined HCF_CFG_APF_1_TOP || defined HCF_CFG_APF_1_BOTTOM
err: APF_1 not supported for H-I;
#if HCF_CFG_APF_2_TOP == 0 || \
CFG_DRV_ACT_RANGES_APF_2_BOTTOM <= HCF_CFG_APF_2_TOP && HCF_CFG_APF_2_TOP <= CFG_DRV_ACT_RANGES_APF_2_TOP
#undef CFG_DRV_ACT_RANGES_APF_2_TOP
#define CFG_DRV_ACT_RANGES_APF_2_TOP	HCF_CFG_APF_2_TOP
err: ;
#if CFG_DRV_ACT_RANGES_APF_2_BOTTOM <= HCF_CFG_APF_2_BOTTOM && HCF_CFG_APF_2_BOTTOM <= CFG_DRV_ACT_RANGES_APF_2_TOP
#undef CFG_DRV_ACT_RANGES_APF_2_BOTTOM
#define CFG_DRV_ACT_RANGES_APF_2_BOTTOM	HCF_CFG_APF_2_BOTTOM
err: ;
#if defined HCF_CFG_STA_1_TOP || defined HCF_CFG_STA_1_BOTTOM
err: STA_1 not supported for H-I;
#if HCF_CFG_STA_2_TOP == 0 || \
CFG_DRV_ACT_RANGES_STA_2_BOTTOM <= HCF_CFG_STA_2_TOP && HCF_CFG_STA_2_TOP <= CFG_DRV_ACT_RANGES_STA_2_TOP
#undef CFG_DRV_ACT_RANGES_STA_2_TOP
#define CFG_DRV_ACT_RANGES_STA_2_TOP	HCF_CFG_STA_2_TOP
err: ;
#if CFG_DRV_ACT_RANGES_STA_2_BOTTOM <= HCF_CFG_STA_2_BOTTOM && HCF_CFG_STA_2_BOTTOM <= CFG_DRV_ACT_RANGES_STA_2_TOP
#undef CFG_DRV_ACT_RANGES_STA_2_BOTTOM
#define CFG_DRV_ACT_RANGES_STA_2_BOTTOM	HCF_CFG_STA_2_BOTTOM
err: ;
#if defined MSF_WAIT
err: MSF should no longer supply this macro;
#define MSF_WAIT(x) 																			\
#define MSF_WAIT(x)
#define LOF(x) 			(sizeof(x)/sizeof(hcf_16)-1)
#define MUL_BY_2( x )	( (x) << 1 )
#define DIV_BY_2( x )	( (x) >> 1 )
#define MERGE_2( hw, lw )	( ( ((hcf_32)(hw)) << 16 ) | ((hcf_16)(lw)) )
#if ! defined HCF_STATIC
#define		  HCF_STATIC	static
#if ( (HCF_TYPE) & HCF_TYPE_HII5 ) == 0
#define DAWA_ACK( mask)
#define DAWA_ZERO_FID(reg) OPW( reg, 0 );
#define DAWA_ACK( mask)   OPW( HREG_EV_ACK, mask );
#define DAWA_ZERO_FID(reg)
#if (HCF_TYPE) & HCF_TYPE_WPA
#define	CALC_RX_MIC( p, len ) calc_mic_rx_frag( ifbp, p, len )
#define	CALC_TX_MIC( p, len ) calc_mic_tx_frag( ifbp, p, len )
#define IF_SSN(x)  x
#define IF_NOT_SSN(x)
#define	CALC_RX_MIC( p, len )
#define	CALC_TX_MIC( p, len )
#define MIC_RX_RTN( mic, dw )
#define MIC_TX_RTN( mic, dw )
#define IF_SSN(x)
#define IF_NOT_SSN(x) x
#if HCF_TALLIES & HCF_TALLIES_HCF
#define IF_TALLY(x)  x
#define IF_TALLY(x)
#if HCF_DMA
#define IF_DMA(x)			x
#define IF_NOT_DMA(x)
#define IF_USE_DMA(x) 		if (   ifbp->IFB_CntlOpt & USE_DMA  ) x
#define IF_NOT_USE_DMA(x)	if ( !(ifbp->IFB_CntlOpt & USE_DMA) ) x
#define IF_DMA(x)
#define IF_NOT_DMA(x)		x
#define IF_USE_DMA(x)
#define IF_NOT_USE_DMA(x) 	x
#define IPW(x) ((hcf_16)IN_PORT_WORD( ifbp->IFB_IOBase + (x) ) )
#define OPW(x, y) OUT_PORT_WORD( ifbp->IFB_IOBase + (x), y )
#if HCF_PROT_TIME == 0
#define PROT_CNT_INI
#define IF_PROT_TIME(x)
#if defined HCF_YIELD
#define HCF_WAIT_WHILE( x ) while ( (x) && (HCF_YIELD) );
#define HCF_WAIT_WHILE( x ) while ( x );
#define PROT_CNT_INI 	hcf_32 prot_cnt = ifbp->IFB_TickIni;
#define IF_PROT_TIME(x)	x
#if defined HCF_YIELD
#define HCF_WAIT_WHILE( x ) while ( prot_cnt && (x) && (HCF_YIELD) ) prot_cnt--;
#define HCF_WAIT_WHILE( x ) while ( prot_cnt && (x) )
#if defined HCF_EX_INT
;? out dated checking
err: you used an invalid bitmask;
#if HCF_EX_INT_TX_OK != HFS_TX_CNTL_TX_OK || HFS_TX_CNTL_TX_OK != HREG_EV_TX_OK
;? out dated checking
err: someone redefined these macros while the implemenation assumes they are equal;
#if HCF_EX_INT_TX_EX != HFS_TX_CNTL_TX_EX || HFS_TX_CNTL_TX_EX != HREG_EV_TX_EX
;? out dated checking
err: someone redefined these macros while the implemenation assumes they are equal;
#if HCF_ASSERT
#define HCFASSERT(x,q)
#define MMDASSERT(x,q)
#define HCFLOGENTRY( where, what ) 														\
#define HCFLOGEXIT( where ) 															\
#define HCFASSERT( x, q )
#define MMDASSERT( x, q )
#define HCFLOGENTRY( where, what )
#define HCFLOGEXIT( where )
#if HCF_INT_ON
#define HCFASSERT_INT HCFASSERT( ifbp->IFB_IntOffCnt != 0xFFFF, ifbp->IFB_IntOffCnt )
#define HCFASSERT_INT
#if defined HCF_TRACE
#define HCFTRACE(ifbp, where )
#define HCFTRACEVALUE(ifbp, what )
#define HCFTRACE(ifbp, where )
#define HCFTRACEVALUE(ifbp, what )
#if HCF_BIG_ENDIAN
#define BE_PAR(x)				,x
#define BE_PAR(x)
#if HCF_ASSERT
extern IFBP BASED assert_ifbp;
EXTERN_C void		 mdd_assert			(IFBP ifbp, unsigned int line_number, hcf_32 q );
#if ! ( (HCF_IO) & HCF_IO_32BITS )
#undef OUT_PORT_STRING_32
#undef IN_PORT_STRING_32
