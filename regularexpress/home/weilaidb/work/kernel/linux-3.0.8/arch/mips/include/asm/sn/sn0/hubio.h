#define	_ASM_SGI_SN_SN0_HUBIO_H
#define IIO_WIDGET		IIO_WID
#define IIO_WIDGET_STAT		IIO_WSTAT
#define IIO_WIDGET_CTRL		IIO_WCR
#define IIO_WIDGET_TOUT		IIO_WRTO
#define IIO_WIDGET_FLUSH	IIO_WTFR
#define IIO_PROTECT		IIO_ILAPR
#define IIO_PROTECT_OVRRD	IIO_ILAPO
#define IIO_OUTWIDGET_ACCESS	IIO_IOWA
#define IIO_INWIDGET_ACCESS	IIO_IIWA
#define IIO_INDEV_ERR_MASK	IIO_IIDEM
#define IIO_LLP_CSR		IIO_ILCSR
#define IIO_LLP_LOG		IIO_ILLR
#define IIO_XTALKCC_TOUT	IIO_IXCC
#define IIO_XTALKTT_TOUT	IIO_IXTT
#define IIO_IO_ERR_CLR		IIO_IECLR
#define IIO_BTE_CRB_CNT         IIO_IBCN
#define IIO_LLP_CSR_IS_UP		0x00002000
#define	IIO_LLP_CSR_LLP_STAT_MASK	0x00003000
#define	IIO_LLP_CSR_LLP_STAT_SHFT	12
#define IIO_PROTECT_OVRRD_KEY	0x53474972756c6573ull
#define IIO_BTE_STAT_0		IIO_IBLS_0
#define IIO_BTE_SRC_0		IIO_IBSA_0
#define IIO_BTE_DEST_0		IIO_IBDA_0
#define IIO_BTE_CTRL_0		IIO_IBCT_0
#define IIO_BTE_NOTIFY_0 	IIO_IBNA_0
#define IIO_BTE_INT_0		IIO_IBIA_0
#define IIO_BTE_OFF_0		0
#define IIO_BTE_OFF_1	IIO_IBLS_1 - IIO_IBLS_0
#define BTEOFF_STAT		0
#define BTEOFF_SRC		(IIO_BTE_SRC_0 - IIO_BTE_STAT_0)
#define BTEOFF_DEST		(IIO_BTE_DEST_0 - IIO_BTE_STAT_0)
#define BTEOFF_CTRL		(IIO_BTE_CTRL_0 - IIO_BTE_STAT_0)
#define BTEOFF_NOTIFY		(IIO_BTE_NOTIFY_0 - IIO_BTE_STAT_0)
#define BTEOFF_INT		(IIO_BTE_INT_0 - IIO_BTE_STAT_0)
#define IIO_BASE	0x400000
#define IIO_BASE_BTE0	0x410000
#define IIO_BASE_BTE1	0x420000
#define IIO_BASE_PERF	0x430000
#define IIO_PERF_CNT	0x430008
#define IO_PERF_SETS	32
#define IIO_WID		0x400000
#define IIO_WSTAT	0x400008
#define IIO_WCR		0x400020
#define	IIO_WSTAT_ECRAZY	(1ULL << 32)
#define	IIO_WSTAT_TXRETRY	(1ULL << 9)
#define	IIO_WSTAT_TXRETRY_MASK	(0x7F)
#define	IIO_WSTAT_TXRETRY_SHFT	(16)
#define	IIO_WSTAT_TXRETRY_CNT(w)	(((w) >> IIO_WSTAT_TXRETRY_SHFT) & \
IIO_WSTAT_TXRETRY_MASK)
#define IIO_ILAPR	0x400100
#define IIO_ILAPO	0x400108
#define IIO_IOWA	0x400110
#define IIO_IIWA	0x400118
#define IIO_IIDEM	0x400120
#define IIO_ILCSR	0x400128
#define IIO_ILLR	0x400130
#define IIO_IIDSR	0x400138
#define IIO_IIBUSERR	0x1400208
#define IIO_IIDSR_SENT_SHIFT	28
#define IIO_IIDSR_SENT_MASK	0x10000000
#define IIO_IIDSR_ENB_SHIFT	24
#define IIO_IIDSR_ENB_MASK	0x01000000
#define IIO_IIDSR_NODE_SHIFT	8
#define IIO_IIDSR_NODE_MASK	0x0000ff00
#define IIO_IIDSR_LVL_SHIFT	0
#define IIO_IIDSR_LVL_MASK	0x0000003f
#define IIO_IGFX_0	0x400140
#define IIO_IGFX_1	0x400148
#define IIO_IGFX_W_NUM_BITS	4
#define IIO_IGFX_W_NUM_MASK	((1<<IIO_IGFX_W_NUM_BITS)-1)
#define IIO_IGFX_W_NUM_SHIFT	0
#define IIO_IGFX_N_NUM_BITS	9
#define IIO_IGFX_N_NUM_MASK	((1<<IIO_IGFX_N_NUM_BITS)-1)
#define IIO_IGFX_N_NUM_SHIFT	4
#define IIO_IGFX_P_NUM_BITS	1
#define IIO_IGFX_P_NUM_MASK	((1<<IIO_IGFX_P_NUM_BITS)-1)
#define IIO_IGFX_P_NUM_SHIFT	16
#define IIO_IGFX_VLD_BITS	1
#define IIO_IGFX_VLD_MASK	((1<<IIO_IGFX_VLD_BITS)-1)
#define IIO_IGFX_VLD_SHIFT	20
#define IIO_IGFX_INIT(widget, node, cpu, valid)				(\
(((widget) & IIO_IGFX_W_NUM_MASK) << IIO_IGFX_W_NUM_SHIFT) |	 \
(((node)   & IIO_IGFX_N_NUM_MASK) << IIO_IGFX_N_NUM_SHIFT) |	 \
(((cpu)    & IIO_IGFX_P_NUM_MASK) << IIO_IGFX_P_NUM_SHIFT) |	 \
(((valid)  & IIO_IGFX_VLD_MASK)   << IIO_IGFX_VLD_SHIFT)	 )
#define IIO_SCRATCH_REG0	0x400150
#define	IIO_SCRATCH_REG1	0x400158
#define IIO_SCRATCH_MASK	0x0000000f00f11fff
#define IIO_SCRATCH_BIT0_0	0x0000000800000000
#define IIO_SCRATCH_BIT0_1	0x0000000400000000
#define IIO_SCRATCH_BIT0_2	0x0000000200000000
#define IIO_SCRATCH_BIT0_3	0x0000000100000000
#define IIO_SCRATCH_BIT0_4	0x0000000000800000
#define IIO_SCRATCH_BIT0_5	0x0000000000400000
#define IIO_SCRATCH_BIT0_6	0x0000000000200000
#define IIO_SCRATCH_BIT0_7	0x0000000000100000
#define IIO_SCRATCH_BIT0_8	0x0000000000010000
#define IIO_SCRATCH_BIT0_9	0x0000000000001000
#define IIO_SCRATCH_BIT0_R	0x0000000000000fff
#define IIO_NUM_ITTES	7
#define HUB_NUM_BIG_WINDOW	IIO_NUM_ITTES - 1
#define SWIN0_BIGWIN		HUB_NUM_BIG_WINDOW
#define ILCSR_WARM_RESET	0x100
typedef union hubii_wid_u  hubii_wid_t;
typedef union hubii_wcr_u  hubii_wcr_t;
#define	iwcr_dir_con	wcr_fields_s.wcr_dir_con
typedef union hubii_wstat_u  hubii_wstat_t;
typedef union hubii_ilcsr_u  hubii_ilcsr_t;
typedef union hubii_iowa_u  hubii_iowa_t;
typedef union hubii_iiwa_u  hubii_iiwa_t;
typedef union	hubii_illr_u  hubii_illr_t;
typedef union io_perf_sel  io_perf_sel_t;
typedef union io_perf_cnt  io_perf_cnt_t;
#define LNK_STAT_WORKING	0x2
#define IIO_LLP_CB_MAX	0xffff
#define IIO_LLP_SN_MAX	0xffff
#define	IIO_NUM_IPRBS	(9)
#define IIO_IOPRB_0	0x400198
#define IIO_IOPRB_8	0x4001a0
#define IIO_IOPRB_9	0x4001a8
#define IIO_IOPRB_A	0x4001b0
#define IIO_IOPRB_B	0x4001b8
#define IIO_IOPRB_C	0x4001c0
#define IIO_IOPRB_D	0x4001c8
#define IIO_IOPRB_E	0x4001d0
#define IIO_IOPRB_F	0x4001d8
#define IIO_IXCC	0x4001e0
#define IIO_IXTCC	IIO_IXCC
#define IIO_IMEM	0x4001e8
#define IIO_IXTT	0x4001f0
#define IIO_IECLR	0x4001f8
#define IIO_IBCN        0x400200
#define IIO_IMEM_W0ESD  0x1
#define IIO_IMEM_B0ESD  (1 << 4)
#define IIO_IMEM_B1ESD  (1 << 8)
#define IIO_IPCA	0x400300
#define IIO_NUM_PRTES	8
#define IIO_PRTE_0	0x400308
#define IIO_PRTE(_x)	(IIO_PRTE_0 + (8 * (_x)))
#define	IIO_WIDPRTE(x)	IIO_PRTE(((x) - 8))
#define IIO_IPDR	0x400388
#define IIO_ICDR	0x400390
#define IIO_IFDR	0x400398
#define IIO_IIAP	0x4003a0
#define IIO_IMMR	IIO_IIAP
#define IIO_ICMR	0x4003a8
#define IIO_ICCR	0x4003b0
#define IIO_ICTO	0x4003b8
#define IIO_ICTP	0x4003c0
#define IIO_ICMR_PC_VLD_SHFT	36
#define IIO_ICMR_PC_VLD_MASK	(0x7fffUL << IIO_ICMR_PC_VLD_SHFT)
#define IIO_ICMR_CRB_VLD_SHFT	20
#define IIO_ICMR_CRB_VLD_MASK	(0x7fffUL << IIO_ICMR_CRB_VLD_SHFT)
#define IIO_ICMR_FC_CNT_SHFT	16
#define IIO_ICMR_FC_CNT_MASK	(0xf << IIO_ICMR_FC_CNT_SHFT)
#define IIO_ICMR_C_CNT_SHFT	4
#define IIO_ICMR_C_CNT_MASK	(0xf << IIO_ICMR_C_CNT_SHFT)
#define IIO_ICMR_P_CNT_SHFT	0
#define IIO_ICMR_P_CNT_MASK	(0xf << IIO_ICMR_P_CNT_SHFT)
#define IIO_ICMR_PRECISE	(1UL << 52)
#define IIO_ICMR_CLR_RPPD	(1UL << 13)
#define IIO_ICMR_CLR_RQPD	(1UL << 12)
#define	IIO_IPDR_PND	(1 << 4)
#define	IIO_ICDR_PND	(1 << 4)
#define	IIO_ICCR_PENDING	(0x10000)
#define	IIO_ICCR_CMD_MASK	(0xFF)
#define	IIO_ICCR_CMD_SHFT	(7)
#define	IIO_ICCR_CMD_NOP	(0x0)
#define	IIO_ICCR_CMD_WAKE	(0x100)
#define	IIO_ICCR_CMD_TIMEOUT	(0x200)
#define	IIO_ICCR_CMD_EJECT	(0x400)
#define	IIO_ICCR_CMD_FLUSH	(0x800)
#define IIO_NUM_CRBS		15
#define IIO_NUM_NORMAL_CRBS     12
#define IIO_NUM_PC_CRBS 	4
#define IIO_ICRB_OFFSET		8
#define IIO_ICRB_0		0x400400
#define IIO_ICRB_A(_x)	(IIO_ICRB_0 + (4 * IIO_ICRB_OFFSET * (_x)))
#define IIO_ICRB_B(_x)  (IIO_ICRB_A(_x) + 1*IIO_ICRB_OFFSET)
#define IIO_ICRB_C(_x)	(IIO_ICRB_A(_x) + 2*IIO_ICRB_OFFSET)
#define IIO_ICRB_D(_x)  (IIO_ICRB_A(_x) + 3*IIO_ICRB_OFFSET)
typedef union icrba_u  icrba_t;
typedef union h1_icrba_u  h1_icrba_t;
#define ICRBN_A_CERR_SHFT	54
#define ICRBN_A_ERR_MASK	0x3ff
#define	IIO_ICRB_ADDR_SHFT	2
#define	IIO_ICRB_ECODE_DERR	0
#define	IIO_ICRB_ECODE_PERR	1
#define	IIO_ICRB_ECODE_WERR	2
#define	IIO_ICRB_ECODE_AERR	3
#define	IIO_ICRB_ECODE_PWERR	4
#define	IIO_ICRB_ECODE_PRERR	5
#define	IIO_ICRB_ECODE_TOUT	6
#define	IIO_ICRB_ECODE_XTERR	7
typedef union icrbb_u  icrbb_t;
typedef union h1_icrbb_u  h1_icrbb_t;
#define	b_imsgtype	icrbb_field_s.imsgtype
#define	b_btenum	icrbb_field_s.btenum
#define	b_cohtrans	icrbb_field_s.cohtrans
#define	b_xtsize	icrbb_field_s.xtsize
#define	b_srcnode	icrbb_field_s.srcnode
#define	b_srcinit	icrbb_field_s.srcinit
#define	b_imsgtype	icrbb_field_s.imsgtype
#define	b_imsg		icrbb_field_s.imsg
#define	b_initiator	icrbb_field_s.initiator
#define	IIO_ICRB_XTSIZE_DW	0
#define	IIO_ICRB_XTSIZE_32	1
#define	IIO_ICRB_XTSIZE_128	2
#define	IIO_ICRB_PROC0		0
#define	IIO_ICRB_PROC1		1
#define	IIO_ICRB_GB_REQ		2
#define	IIO_ICRB_IO_REQ		3
#define	IIO_ICRB_IMSGT_XTALK	0
#define	IIO_ICRB_IMSGT_BTE	1
#define	IIO_ICRB_IMSGT_SN0NET	2
#define	IIO_ICRB_IMSGT_CRB	3
#define	IIO_ICRB_INIT_XTALK	0
#define	IIO_ICRB_INIT_BTE0	0x1
#define	IIO_ICRB_INIT_SN0NET	0x2
#define	IIO_ICRB_INIT_CRB	0x3
#define	IIO_ICRB_INIT_BTE1	0x5
#define	IIO_ICRB_REQ_DWRD	0
#define	IIO_ICRB_REQ_QCLRD	1
#define	IIO_ICRB_REQ_BLKRD	2
#define	IIO_ICRB_REQ_RSHU	6
#define	IIO_ICRB_REQ_REXU	7
#define	IIO_ICRB_REQ_RDEX	8
#define	IIO_ICRB_REQ_WINC	9
#define	IIO_ICRB_REQ_BWINV	10
#define	IIO_ICRB_REQ_PIORD	11
#define	IIO_ICRB_REQ_PIOWR	12
#define	IIO_ICRB_REQ_PRDM	13
#define	IIO_ICRB_REQ_PWRM	14
#define	IIO_ICRB_REQ_PTPWR	15
#define	IIO_ICRB_REQ_WB		16
#define	IIO_ICRB_REQ_DEX	17
typedef union icrbc_s  icrbc_t;
#define	c_pricnt	icrbc_field_s.pricnt
#define	c_pripsc	icrbc_field_s.pripsc
#define	c_bteop		icrbc_field_s.bteop
#define	c_bteaddr	icrbc_field_s.push_be
#define c_benable 	icrbc_field_s.push_be
#define	c_suppl		icrbc_field_s.suppl
#define	c_barrop	icrbc_field_s.barrop
#define	c_doresp	icrbc_field_s.doresp
#define	c_gbr	icrbc_field_s.gbr
typedef union icrbd_s  icrbd_t;
#define	icrbd_toutvld	icrbd_field_s.toutvld
#define	icrbd_ctxtvld	icrbd_field_s.ctxtvld
#define	icrbd_context	icrbd_field_s.context
typedef union hubii_ifdr_u  hubii_ifdr_t;
#define IIO_IBLS_0	0x410000
#define IIO_IBSA_0	0x410008
#define IIO_IBDA_0	0x410010
#define IIO_IBCT_0	0x410018
#define IIO_IBNA_0	0x410020
#define IIO_IBNR_0	IIO_IBNA_0
#define IIO_IBIA_0	0x410028
#define IIO_IBLS_1	0x420000
#define IIO_IBSA_1	0x420008
#define IIO_IBDA_1	0x420010
#define IIO_IBCT_1	0x420018
#define IIO_IBNA_1	0x420020
#define IIO_IBNR_1	IIO_IBNA_1
#define IIO_IBIA_1	0x420028
#define IIO_IPCR	0x430000
#define IIO_IPPR	0x430008
#define IECLR_BTE1		(1 << 18)
#define IECLR_BTE0		(1 << 17)
#define IECLR_CRAZY		(1 << 16)
#define IECLR_PRB_F		(1 << 15)
#define IECLR_PRB_E		(1 << 14)
#define IECLR_PRB_D		(1 << 13)
#define IECLR_PRB_C		(1 << 12)
#define IECLR_PRB_B		(1 << 11)
#define IECLR_PRB_A		(1 << 10)
#define IECLR_PRB_9		(1 << 9)
#define IECLR_PRB_8		(1 << 8)
#define IECLR_PRB_0		(1 << 0)
typedef union iprte_a  iprte_a_t;
#define	iprte_valid	iprte_fields.valid
#define	iprte_timeout	iprte_fields.timeout
#define	iprte_srcnode	iprte_fields.srcnode
#define	iprte_init	iprte_fields.initiator
#define	iprte_addr	iprte_fields.addr
#define	IPRTE_ADDRSHFT	3
typedef union iprb_u  iprb_t;
#define iprb_regval	reg_value
#define	iprb_error	iprb_fields_s.error
#define	iprb_ovflow	iprb_fields_s.ovflow
#define	iprb_ff		iprb_fields_s.fire_and_forget
#define	iprb_mode	iprb_fields_s.mode
#define	iprb_bnakctr	iprb_fields_s.bnakctr
#define	iprb_anakctr	iprb_fields_s.anakctr
#define	iprb_xtalkctr	iprb_fields_s.xtalkctr
#define	IPRB_MODE_NORMAL	(0)
#define	IPRB_MODE_COLLECT_A	(1)
#define	IPRB_MODE_SERVICE_A	(2)
#define	IPRB_MODE_SERVICE_B	(3)
typedef union icrbp_a  icrbp_a_t;
#define ICRBP_A_CERR_SHFT	54
#define ICRBP_A_ERR_MASK	0x3ff
typedef union hubii_idsr  hubii_idsr_t;
#define IBLS_BUSY		(0x1 << 20)
#define IBLS_ERROR_SHFT		16
#define IBLS_ERROR		(0x1 << IBLS_ERROR_SHFT)
#define IBLS_LENGTH_MASK	0xffff
#define IBCT_POISON		(0x1 << 8)
#define IBCT_NOTIFY		(0x1 << 4)
#define IBCT_ZFIL_MODE		(0x1 << 0)
#define IBIA_LEVEL_SHFT		16
#define IBIA_LEVEL_MASK		(0x7f << IBIA_LEVEL_SHFT)
#define IBIA_NODE_ID_SHFT	0
#define IBIA_NODE_ID_MASK	(0x1ff)
#define HUB_NUM_WIDGET		9
#define HUB_WIDGET_ID_MIN	0x8
#define HUB_WIDGET_ID_MAX	0xf
#define HUB_WIDGET_PART_NUM	0xc101
#define MAX_HUBS_PER_XBOW	2
#define IIO_WCR_WID_GET(nasid)	(REMOTE_HUB_L(nasid, III_WCR) & 0xf)
#define IIO_WST_ERROR_MASK	(UINT64_CAST 1 << 32)
#define       HUBII_XBOW_CREDIT       3
#define	      HUBII_XBOW_REV2_CREDIT  4
