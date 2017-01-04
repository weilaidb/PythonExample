#define _ASM_IA64_SN_SHUBIO_H
#define HUB_WIDGET_ID_MAX	0xf
#define IIO_NUM_ITTES		7
#define HUB_NUM_BIG_WINDOW	(IIO_NUM_ITTES - 1)
#define		IIO_WID			0x00400000
#define		IIO_WSTAT		0x00400008
#define		IIO_WCR			0x00400020
#define		IIO_ILAPR		0x00400100
#define		IIO_ILAPO		0x00400108
#define		IIO_IOWA		0x00400110
#define		IIO_IIWA		0x00400118
#define		IIO_IIDEM		0x00400120
#define		IIO_ILCSR		0x00400128
#define		IIO_ILLR		0x00400130
#define		IIO_IIDSR		0x00400138
#define		IIO_IGFX0		0x00400140
#define		IIO_IGFX1		0x00400148
#define		IIO_ISCR0		0x00400150
#define		IIO_ISCR1		0x00400158
#define		IIO_ITTE1		0x00400160
#define		IIO_ITTE2		0x00400168
#define		IIO_ITTE3		0x00400170
#define		IIO_ITTE4		0x00400178
#define		IIO_ITTE5		0x00400180
#define		IIO_ITTE6		0x00400188
#define		IIO_ITTE7		0x00400190
#define		IIO_IPRB0		0x00400198
#define		IIO_IPRB8		0x004001A0
#define		IIO_IPRB9		0x004001A8
#define		IIO_IPRBA		0x004001B0
#define		IIO_IPRBB		0x004001B8
#define		IIO_IPRBC		0x004001C0
#define		IIO_IPRBD		0x004001C8
#define		IIO_IPRBE		0x004001D0
#define		IIO_IPRBF		0x004001D8
#define		IIO_IXCC		0x004001E0
#define		IIO_IMEM		0x004001E8
#define		IIO_IXTT		0x004001F0
#define		IIO_IECLR		0x004001F8
#define		IIO_IBCR		0x00400200
#define		IIO_IXSM		0x00400208
#define		IIO_IXSS		0x00400210
#define		IIO_ILCT		0x00400218
#define		IIO_IIEPH1 		0x00400220
#define		IIO_IIEPH2 		0x00400228
#define		IIO_ISLAPR 		0x00400230
#define		IIO_ISLAPO 		0x00400238
#define		IIO_IWI			0x00400240
#define		IIO_IWEL		0x00400248
#define		IIO_IWC			0x00400250
#define		IIO_IWS			0x00400258
#define		IIO_IWEIM		0x00400260
#define		IIO_IPCA		0x00400300
#define		IIO_IPRTE0_A		0x00400308
#define		IIO_IPRTE1_A		0x00400310
#define		IIO_IPRTE2_A		0x00400318
#define		IIO_IPRTE3_A		0x00400320
#define		IIO_IPRTE4_A		0x00400328
#define		IIO_IPRTE5_A		0x00400330
#define		IIO_IPRTE6_A		0x00400338
#define		IIO_IPRTE7_A		0x00400340
#define		IIO_IPRTE0_B		0x00400348
#define		IIO_IPRTE1_B		0x00400350
#define		IIO_IPRTE2_B		0x00400358
#define		IIO_IPRTE3_B		0x00400360
#define		IIO_IPRTE4_B		0x00400368
#define		IIO_IPRTE5_B		0x00400370
#define		IIO_IPRTE6_B		0x00400378
#define		IIO_IPRTE7_B		0x00400380
#define		IIO_IPDR		0x00400388
#define		IIO_ICDR		0x00400390
#define		IIO_IFDR		0x00400398
#define		IIO_IIAP		0x004003A0
#define		IIO_ICMR		0x004003A8
#define		IIO_ICCR		0x004003B0
#define		IIO_ICTO		0x004003B8
#define		IIO_ICTP		0x004003C0
#define		IIO_ICRB0_A		0x00400400
#define		IIO_ICRB0_B		0x00400408
#define		IIO_ICRB0_C		0x00400410
#define		IIO_ICRB0_D		0x00400418
#define		IIO_ICRB0_E		0x00400420
#define		IIO_ICRB1_A		0x00400430
#define		IIO_ICRB1_B		0x00400438
#define		IIO_ICRB1_C		0x00400440
#define		IIO_ICRB1_D		0x00400448
#define		IIO_ICRB1_E		0x00400450
#define		IIO_ICRB2_A		0x00400460
#define		IIO_ICRB2_B		0x00400468
#define		IIO_ICRB2_C		0x00400470
#define		IIO_ICRB2_D		0x00400478
#define		IIO_ICRB2_E		0x00400480
#define		IIO_ICRB3_A		0x00400490
#define		IIO_ICRB3_B		0x00400498
#define		IIO_ICRB3_C		0x004004a0
#define		IIO_ICRB3_D		0x004004a8
#define		IIO_ICRB3_E		0x004004b0
#define		IIO_ICRB4_A		0x004004c0
#define		IIO_ICRB4_B		0x004004c8
#define		IIO_ICRB4_C		0x004004d0
#define		IIO_ICRB4_D		0x004004d8
#define		IIO_ICRB4_E		0x004004e0
#define		IIO_ICRB5_A		0x004004f0
#define		IIO_ICRB5_B		0x004004f8
#define		IIO_ICRB5_C		0x00400500
#define		IIO_ICRB5_D		0x00400508
#define		IIO_ICRB5_E		0x00400510
#define		IIO_ICRB6_A		0x00400520
#define		IIO_ICRB6_B		0x00400528
#define		IIO_ICRB6_C		0x00400530
#define		IIO_ICRB6_D		0x00400538
#define		IIO_ICRB6_E		0x00400540
#define		IIO_ICRB7_A		0x00400550
#define		IIO_ICRB7_B		0x00400558
#define		IIO_ICRB7_C		0x00400560
#define		IIO_ICRB7_D		0x00400568
#define		IIO_ICRB7_E		0x00400570
#define		IIO_ICRB8_A		0x00400580
#define		IIO_ICRB8_B		0x00400588
#define		IIO_ICRB8_C		0x00400590
#define		IIO_ICRB8_D		0x00400598
#define		IIO_ICRB8_E		0x004005a0
#define		IIO_ICRB9_A		0x004005b0
#define		IIO_ICRB9_B		0x004005b8
#define		IIO_ICRB9_C		0x004005c0
#define		IIO_ICRB9_D		0x004005c8
#define		IIO_ICRB9_E		0x004005d0
#define		IIO_ICRBA_A		0x004005e0
#define		IIO_ICRBA_B		0x004005e8
#define		IIO_ICRBA_C		0x004005f0
#define		IIO_ICRBA_D		0x004005f8
#define		IIO_ICRBA_E		0x00400600
#define		IIO_ICRBB_A		0x00400610
#define		IIO_ICRBB_B		0x00400618
#define		IIO_ICRBB_C		0x00400620
#define		IIO_ICRBB_D		0x00400628
#define		IIO_ICRBB_E		0x00400630
#define		IIO_ICRBC_A		0x00400640
#define		IIO_ICRBC_B		0x00400648
#define		IIO_ICRBC_C		0x00400650
#define		IIO_ICRBC_D		0x00400658
#define		IIO_ICRBC_E		0x00400660
#define		IIO_ICRBD_A		0x00400670
#define		IIO_ICRBD_B		0x00400678
#define		IIO_ICRBD_C		0x00400680
#define		IIO_ICRBD_D		0x00400688
#define		IIO_ICRBD_E		0x00400690
#define		IIO_ICRBE_A		0x004006a0
#define		IIO_ICRBE_B		0x004006a8
#define		IIO_ICRBE_C		0x004006b0
#define		IIO_ICRBE_D		0x004006b8
#define		IIO_ICRBE_E		0x004006c0
#define		IIO_ICSML		0x00400700
#define		IIO_ICSMM		0x00400708
#define		IIO_ICSMH		0x00400710
#define		IIO_IDBSS		0x00400718
#define		IIO_IBLS0		0x00410000
#define		IIO_IBSA0		0x00410008
#define		IIO_IBDA0		0x00410010
#define		IIO_IBCT0		0x00410018
#define		IIO_IBNA0		0x00410020
#define		IIO_IBIA0		0x00410028
#define		IIO_IBLS1		0x00420000
#define		IIO_IBSA1		0x00420008
#define		IIO_IBDA1		0x00420010
#define		IIO_IBCT1		0x00420018
#define		IIO_IBNA1		0x00420020
#define		IIO_IBIA1		0x00420028
#define		IIO_IPCR		0x00430000
#define		IIO_IPPR		0x00430008
typedef union ii_wid_u  ii_wid_u_t;
typedef union ii_wstat_u  ii_wstat_u_t;
typedef union ii_wcr_u  ii_wcr_u_t;
typedef union ii_ilapr_u  ii_ilapr_u_t;
typedef union ii_ilapo_u  ii_ilapo_u_t;
typedef union ii_iowa_u  ii_iowa_u_t;
typedef union ii_iiwa_u  ii_iiwa_u_t;
typedef union ii_iidem_u  ii_iidem_u_t;
typedef union ii_ilcsr_u  ii_ilcsr_u_t;
typedef union ii_illr_u  ii_illr_u_t;
typedef union ii_iidsr_u  ii_iidsr_u_t;
typedef union ii_igfx0_u  ii_igfx0_u_t;
typedef union ii_igfx1_u  ii_igfx1_u_t;
typedef union ii_iscr0_u  ii_iscr0_u_t;
typedef union ii_iscr1_u  ii_iscr1_u_t;
typedef union ii_itte1_u  ii_itte1_u_t;
typedef union ii_itte2_u  ii_itte2_u_t;
typedef union ii_itte3_u  ii_itte3_u_t;
typedef union ii_itte4_u  ii_itte4_u_t;
typedef union ii_itte5_u  ii_itte5_u_t;
typedef union ii_itte6_u  ii_itte6_u_t;
typedef union ii_itte7_u  ii_itte7_u_t;
typedef union ii_iprb0_u  ii_iprb0_u_t;
typedef union ii_iprb8_u  ii_iprb8_u_t;
typedef union ii_iprb9_u  ii_iprb9_u_t;
typedef union ii_iprba_u  ii_iprba_u_t;
typedef union ii_iprbb_u  ii_iprbb_u_t;
typedef union ii_iprbc_u  ii_iprbc_u_t;
typedef union ii_iprbd_u  ii_iprbd_u_t;
typedef union ii_iprbe_u  ii_iprbe_u_t;
typedef union ii_iprbf_u  ii_iprbf_u_t;
typedef union ii_ixcc_u  ii_ixcc_u_t;
typedef union ii_imem_u  ii_imem_u_t;
typedef union ii_ixtt_u  ii_ixtt_u_t;
typedef union ii_ieclr_u  ii_ieclr_u_t;
typedef union ii_ibcr_u  ii_ibcr_u_t;
typedef union ii_ixsm_u  ii_ixsm_u_t;
typedef union ii_ixss_u  ii_ixss_u_t;
typedef union ii_ilct_u  ii_ilct_u_t;
typedef union ii_iieph1_u  ii_iieph1_u_t;
typedef union ii_iieph2_u  ii_iieph2_u_t;
typedef union ii_islapr_u  ii_islapr_u_t;
typedef union ii_islapo_u  ii_islapo_u_t;
typedef union ii_iwi_u  ii_iwi_u_t;
typedef union ii_iwel_u  ii_iwel_u_t;
typedef union ii_iwc_u  ii_iwc_u_t;
typedef union ii_iws_u  ii_iws_u_t;
typedef union ii_iweim_u  ii_iweim_u_t;
typedef union ii_ipca_u  ii_ipca_u_t;
typedef union ii_iprte0a_u  ii_iprte0a_u_t;
typedef union ii_iprte1a_u  ii_iprte1a_u_t;
typedef union ii_iprte2a_u  ii_iprte2a_u_t;
typedef union ii_iprte3a_u  ii_iprte3a_u_t;
typedef union ii_iprte4a_u  ii_iprte4a_u_t;
typedef union ii_iprte5a_u  ii_iprte5a_u_t;
typedef union ii_iprte6a_u  ii_iprte6a_u_t;
typedef union ii_iprte7a_u  ii_iprte7a_u_t;
typedef union ii_iprte0b_u  ii_iprte0b_u_t;
typedef union ii_iprte1b_u  ii_iprte1b_u_t;
typedef union ii_iprte2b_u  ii_iprte2b_u_t;
typedef union ii_iprte3b_u  ii_iprte3b_u_t;
typedef union ii_iprte4b_u  ii_iprte4b_u_t;
typedef union ii_iprte5b_u  ii_iprte5b_u_t;
typedef union ii_iprte6b_u  ii_iprte6b_u_t;
typedef union ii_iprte7b_u  ii_iprte7b_u_t;
typedef union ii_ipdr_u  ii_ipdr_u_t;
typedef union ii_icdr_u  ii_icdr_u_t;
typedef union ii_ifdr_u  ii_ifdr_u_t;
typedef union ii_iiap_u  ii_iiap_u_t;
typedef union ii_icmr_u  ii_icmr_u_t;
typedef union ii_iccr_u  ii_iccr_u_t;
typedef union ii_icto_u  ii_icto_u_t;
typedef union ii_ictp_u  ii_ictp_u_t;
typedef union ii_icrb0_a_u  ii_icrb0_a_u_t;
typedef union ii_icrb0_b_u  ii_icrb0_b_u_t;
typedef union ii_icrb0_c_u  ii_icrb0_c_u_t;
typedef union ii_icrb0_d_u  ii_icrb0_d_u_t;
typedef union ii_icrb0_e_u  ii_icrb0_e_u_t;
typedef union ii_icsml_u  ii_icsml_u_t;
typedef union ii_icsmm_u  ii_icsmm_u_t;
typedef union ii_icsmh_u  ii_icsmh_u_t;
typedef union ii_idbss_u  ii_idbss_u_t;
typedef union ii_ibls0_u  ii_ibls0_u_t;
typedef union ii_ibsa0_u  ii_ibsa0_u_t;
typedef union ii_ibda0_u  ii_ibda0_u_t;
typedef union ii_ibct0_u  ii_ibct0_u_t;
typedef union ii_ibna0_u  ii_ibna0_u_t;
typedef union ii_ibia0_u  ii_ibia0_u_t;
typedef union ii_ibls1_u  ii_ibls1_u_t;
typedef union ii_ibsa1_u  ii_ibsa1_u_t;
typedef union ii_ibda1_u  ii_ibda1_u_t;
typedef union ii_ibct1_u  ii_ibct1_u_t;
typedef union ii_ibna1_u  ii_ibna1_u_t;
typedef union ii_ibia1_u  ii_ibia1_u_t;
typedef union ii_ipcr_u  ii_ipcr_u_t;
typedef union ii_ippr_u  ii_ippr_u_t;
#define IIO_WIDGET              IIO_WID
#define IIO_WIDGET_STAT         IIO_WSTAT
#define IIO_WIDGET_CTRL         IIO_WCR
#define IIO_PROTECT             IIO_ILAPR
#define IIO_PROTECT_OVRRD       IIO_ILAPO
#define IIO_OUTWIDGET_ACCESS    IIO_IOWA
#define IIO_INWIDGET_ACCESS     IIO_IIWA
#define IIO_INDEV_ERR_MASK      IIO_IIDEM
#define IIO_LLP_CSR             IIO_ILCSR
#define IIO_LLP_LOG             IIO_ILLR
#define IIO_XTALKCC_TOUT        IIO_IXCC
#define IIO_XTALKTT_TOUT        IIO_IXTT
#define IIO_IO_ERR_CLR          IIO_IECLR
#define IIO_IGFX_0 		IIO_IGFX0
#define IIO_IGFX_1 		IIO_IGFX1
#define IIO_IBCT_0		IIO_IBCT0
#define IIO_IBCT_1		IIO_IBCT1
#define IIO_IBLS_0		IIO_IBLS0
#define IIO_IBLS_1		IIO_IBLS1
#define IIO_IBSA_0		IIO_IBSA0
#define IIO_IBSA_1		IIO_IBSA1
#define IIO_IBDA_0		IIO_IBDA0
#define IIO_IBDA_1		IIO_IBDA1
#define IIO_IBNA_0		IIO_IBNA0
#define IIO_IBNA_1		IIO_IBNA1
#define IIO_IBIA_0		IIO_IBIA0
#define IIO_IBIA_1		IIO_IBIA1
#define IIO_IOPRB_0		IIO_IPRB0
#define IIO_PRTE_A(_x)		(IIO_IPRTE0_A + (8 * (_x)))
#define IIO_PRTE_B(_x)		(IIO_IPRTE0_B + (8 * (_x)))
#define IIO_NUM_PRTES		8
#define IIO_WIDPRTE_A(x)	IIO_PRTE_A(((x) - 8))
#define IIO_WIDPRTE_B(x)	IIO_PRTE_B(((x) - 8))
#define IIO_NUM_IPRBS 		9
#define IIO_LLP_CSR_IS_UP		0x00002000
#define IIO_LLP_CSR_LLP_STAT_MASK       0x00003000
#define IIO_LLP_CSR_LLP_STAT_SHFT       12
#define IIO_LLP_CB_MAX  0xffff
#define IIO_LLP_SN_MAX  0xffff
#define IIO_PROTECT_OVRRD_KEY   0x53474972756c6573ull
#define IIO_BTE_STAT_0          IIO_IBLS_0
#define IIO_BTE_SRC_0           IIO_IBSA_0
#define IIO_BTE_DEST_0          IIO_IBDA_0
#define IIO_BTE_CTRL_0          IIO_IBCT_0
#define IIO_BTE_NOTIFY_0        IIO_IBNA_0
#define IIO_BTE_INT_0           IIO_IBIA_0
#define IIO_BTE_OFF_0           0
#define IIO_BTE_OFF_1   	(IIO_IBLS_1 - IIO_IBLS_0)
#define BTEOFF_STAT             0
#define BTEOFF_SRC      	(IIO_BTE_SRC_0 - IIO_BTE_STAT_0)
#define BTEOFF_DEST     	(IIO_BTE_DEST_0 - IIO_BTE_STAT_0)
#define BTEOFF_CTRL     	(IIO_BTE_CTRL_0 - IIO_BTE_STAT_0)
#define BTEOFF_NOTIFY   	(IIO_BTE_NOTIFY_0 - IIO_BTE_STAT_0)
#define BTEOFF_INT      	(IIO_BTE_INT_0 - IIO_BTE_STAT_0)
#define IIO_BASE_BTE0   IIO_IBLS_0
#define IIO_BASE_BTE1   IIO_IBLS_1
#define IIO_IOPRB(_x)	(IIO_IOPRB_0 + ( ( (_x) < HUB_WIDGET_ID_MIN ? \
(_x) : \
(_x) - (HUB_WIDGET_ID_MIN-1)) << 3) )
#define IIO_IGFX_W_NUM_BITS	4
#define IIO_IGFX_W_NUM_MASK	((1<<IIO_IGFX_W_NUM_BITS)-1)
#define IIO_IGFX_W_NUM_SHIFT	0
#define IIO_IGFX_PI_NUM_BITS	1
#define IIO_IGFX_PI_NUM_MASK	((1<<IIO_IGFX_PI_NUM_BITS)-1)
#define IIO_IGFX_PI_NUM_SHIFT	4
#define IIO_IGFX_N_NUM_BITS	8
#define IIO_IGFX_N_NUM_MASK	((1<<IIO_IGFX_N_NUM_BITS)-1)
#define IIO_IGFX_N_NUM_SHIFT	5
#define IIO_IGFX_P_NUM_BITS	1
#define IIO_IGFX_P_NUM_MASK	((1<<IIO_IGFX_P_NUM_BITS)-1)
#define IIO_IGFX_P_NUM_SHIFT	16
#define IIO_IGFX_INIT(widget, pi, node, cpu)				(\
(((widget) & IIO_IGFX_W_NUM_MASK) << IIO_IGFX_W_NUM_SHIFT) |	 \
(((pi)     & IIO_IGFX_PI_NUM_MASK)<< IIO_IGFX_PI_NUM_SHIFT)|	 \
(((node)   & IIO_IGFX_N_NUM_MASK) << IIO_IGFX_N_NUM_SHIFT) |	 \
(((cpu)    & IIO_IGFX_P_NUM_MASK) << IIO_IGFX_P_NUM_SHIFT))
#define IIO_SCRATCH_REG0        IIO_ISCR0
#define IIO_SCRATCH_REG1        IIO_ISCR1
#define IIO_SCRATCH_MASK        0xffffffffffffffffUL
#define IIO_SCRATCH_BIT0_0      0x0000000000000001UL
#define IIO_SCRATCH_BIT0_1      0x0000000000000002UL
#define IIO_SCRATCH_BIT0_2      0x0000000000000004UL
#define IIO_SCRATCH_BIT0_3      0x0000000000000008UL
#define IIO_SCRATCH_BIT0_4      0x0000000000000010UL
#define IIO_SCRATCH_BIT0_5      0x0000000000000020UL
#define IIO_SCRATCH_BIT0_6      0x0000000000000040UL
#define IIO_SCRATCH_BIT0_7      0x0000000000000080UL
#define IIO_SCRATCH_BIT0_8      0x0000000000000100UL
#define IIO_SCRATCH_BIT0_9      0x0000000000000200UL
#define IIO_SCRATCH_BIT0_A      0x0000000000000400UL
#define IIO_SCRATCH_BIT1_0      0x0000000000000001UL
#define IIO_SCRATCH_BIT1_1      0x0000000000000002UL
#define IIO_NUM_ITTES   7
#define IIO_IMEM_W0ESD  0x1UL
#define IIO_IMEM_B0ESD	(1UL << 4)
#define IIO_IMEM_B1ESD	(1UL << 8)
#define HUB_NUM_BIG_WINDOW	(IIO_NUM_ITTES - 1)
#define SWIN0_BIGWIN            HUB_NUM_BIG_WINDOW
#define ILCSR_WARM_RESET        0x100
#define IIO_NUM_CRBS            15
#define IIO_NUM_PC_CRBS         4
#define IIO_ICRB_OFFSET         8
#define IIO_ICRB_0              IIO_ICRB0_A
#define IIO_ICRB_ADDR_SHFT	2
#define IIO_ICRB_A(_x)	((u64)(IIO_ICRB_0 + (6 * IIO_ICRB_OFFSET * (_x))))
#define IIO_ICRB_B(_x)	((u64)((char *)IIO_ICRB_A(_x) + 1*IIO_ICRB_OFFSET))
#define IIO_ICRB_C(_x)	((u64)((char *)IIO_ICRB_A(_x) + 2*IIO_ICRB_OFFSET))
#define IIO_ICRB_D(_x)	((u64)((char *)IIO_ICRB_A(_x) + 3*IIO_ICRB_OFFSET))
#define IIO_ICRB_E(_x)	((u64)((char *)IIO_ICRB_A(_x) + 4*IIO_ICRB_OFFSET))
#define TNUM_TO_WIDGET_DEV(_tnum)	(_tnum & 0x7)
#define IIO_ICRB_ECODE_DERR     0
#define IIO_ICRB_ECODE_PERR     1
#define IIO_ICRB_ECODE_WERR     2
#define IIO_ICRB_ECODE_AERR     3
#define IIO_ICRB_ECODE_PWERR    4
#define IIO_ICRB_ECODE_PRERR    5
#define IIO_ICRB_ECODE_TOUT     6
#define IIO_ICRB_ECODE_XTERR    7
#define IIO_ICRB_IMSGT_XTALK    0
#define IIO_ICRB_IMSGT_BTE      1
#define IIO_ICRB_IMSGT_SN1NET   2
#define IIO_ICRB_IMSGT_CRB      3
#define IIO_ICRB_INIT_XTALK     0
#define IIO_ICRB_INIT_BTE0      0x1
#define IIO_ICRB_INIT_SN1NET    0x2
#define IIO_ICRB_INIT_CRB       0x3
#define IIO_ICRB_INIT_BTE1      0x5
#define		   HUBII_XBOW_CREDIT       3
#define		   HUBII_XBOW_REV2_CREDIT  4
#define HUB_CREDIT 4
#define IIO_PRB_MULTI_ERR	(1LL << 63)
#define IIO_PRB_SPUR_RD		(1LL << 51)
#define IIO_PRB_SPUR_WR		(1LL << 50)
#define IIO_PRB_RD_TO		(1LL << 49)
#define IIO_PRB_ERROR		(1LL << 48)
#define IIO_ICMR_CRB_VLD_SHFT   20
#define IIO_ICMR_CRB_VLD_MASK	(0x7fffUL << IIO_ICMR_CRB_VLD_SHFT)
#define IIO_ICMR_FC_CNT_SHFT    16
#define IIO_ICMR_FC_CNT_MASK	(0xf << IIO_ICMR_FC_CNT_SHFT)
#define IIO_ICMR_C_CNT_SHFT     4
#define IIO_ICMR_C_CNT_MASK	(0xf << IIO_ICMR_C_CNT_SHFT)
#define IIO_ICMR_PRECISE	(1UL << 52)
#define IIO_ICMR_CLR_RPPD	(1UL << 13)
#define IIO_ICMR_CLR_RQPD	(1UL << 12)
#define IIO_IPDR_PND    	(1 << 4)
#define IIO_ICDR_PND    	(1 << 4)
#define IBLS_BUSY		(0x1UL << 20)
#define IBLS_ERROR_SHFT		16
#define IBLS_ERROR		(0x1UL << IBLS_ERROR_SHFT)
#define IBLS_LENGTH_MASK	0xffff
#define IBCT_POISON		(0x1UL << 8)
#define IBCT_NOTIFY		(0x1UL << 4)
#define IBCT_ZFIL_MODE		(0x1UL << 0)
#define IIEPH1_VALID		(1UL << 44)
#define IIEPH1_OVERRUN		(1UL << 40)
#define IIEPH1_ERR_TYPE_SHFT	32
#define IIEPH1_ERR_TYPE_MASK	0xf
#define IIEPH1_SOURCE_SHFT	20
#define IIEPH1_SOURCE_MASK	11
#define IIEPH1_SUPPL_SHFT	8
#define IIEPH1_SUPPL_MASK	11
#define IIEPH1_CMD_SHFT		0
#define IIEPH1_CMD_MASK		7
#define IIEPH2_TAIL		(1UL << 40)
#define IIEPH2_ADDRESS_SHFT	0
#define IIEPH2_ADDRESS_MASK	38
#define IIEPH1_ERR_SHORT_REQ	2
#define IIEPH1_ERR_SHORT_REPLY	3
#define IIEPH1_ERR_LONG_REQ	4
#define IIEPH1_ERR_LONG_REPLY	5
#define IECLR_PI1_FWD_INT	(1UL << 31)
#define IECLR_PI0_FWD_INT	(1UL << 30)
#define IECLR_SPUR_RD_HDR	(1UL << 29)
#define IECLR_BTE1		(1UL << 18)
#define IECLR_BTE0		(1UL << 17)
#define IECLR_CRAZY		(1UL << 16)
#define IECLR_PRB_F		(1UL << 15)
#define IECLR_PRB_E		(1UL << 14)
#define IECLR_PRB_D		(1UL << 13)
#define IECLR_PRB_C		(1UL << 12)
#define IECLR_PRB_B		(1UL << 11)
#define IECLR_PRB_A		(1UL << 10)
#define IECLR_PRB_9		(1UL << 9)
#define IECLR_PRB_8		(1UL << 8)
#define IECLR_PRB_0		(1UL << 0)
#define	IIO_ICCR_PENDING	0x10000
#define	IIO_ICCR_CMD_MASK	0xFF
#define	IIO_ICCR_CMD_SHFT	7
#define	IIO_ICCR_CMD_NOP	0x0
#define	IIO_ICCR_CMD_WAKE	0x100
#define	IIO_ICCR_CMD_TIMEOUT	0x200
#define	IIO_ICCR_CMD_EJECT	0x400
#define	IIO_ICCR_CMD_FLUSH	0x800
typedef ii_icrb0_a_u_t icrba_t;
#define a_sidn		ii_icrb0_a_fld_s.ia_sidn
#define a_tnum		ii_icrb0_a_fld_s.ia_tnum
#define a_addr          ii_icrb0_a_fld_s.ia_addr
#define a_valid         ii_icrb0_a_fld_s.ia_vld
#define a_iow           ii_icrb0_a_fld_s.ia_iow
#define a_regvalue	ii_icrb0_a_regval
typedef ii_icrb0_b_u_t icrbb_t;
#define b_use_old       ii_icrb0_b_fld_s.ib_use_old
#define b_imsgtype      ii_icrb0_b_fld_s.ib_imsgtype
#define b_imsg          ii_icrb0_b_fld_s.ib_imsg
#define b_initiator     ii_icrb0_b_fld_s.ib_init
#define b_exc           ii_icrb0_b_fld_s.ib_exc
#define b_ackcnt        ii_icrb0_b_fld_s.ib_ack_cnt
#define b_resp          ii_icrb0_b_fld_s.ib_resp
#define b_ack           ii_icrb0_b_fld_s.ib_ack
#define b_hold          ii_icrb0_b_fld_s.ib_hold
#define b_wb            ii_icrb0_b_fld_s.ib_wb
#define b_intvn         ii_icrb0_b_fld_s.ib_intvn
#define b_stall_ib      ii_icrb0_b_fld_s.ib_stall_ib
#define b_stall_int     ii_icrb0_b_fld_s.ib_stall__intr
#define b_stall_bte_0   ii_icrb0_b_fld_s.ib_stall__bte_0
#define b_stall_bte_1   ii_icrb0_b_fld_s.ib_stall__bte_1
#define b_error         ii_icrb0_b_fld_s.ib_error
#define b_ecode         ii_icrb0_b_fld_s.ib_errcode
#define b_lnetuce       ii_icrb0_b_fld_s.ib_ln_uce
#define b_mark          ii_icrb0_b_fld_s.ib_mark
#define b_xerr          ii_icrb0_b_fld_s.ib_xt_err
#define b_regvalue	ii_icrb0_b_regval
typedef ii_icrb0_c_u_t icrbc_t;
#define c_suppl         ii_icrb0_c_fld_s.ic_suppl
#define c_barrop        ii_icrb0_c_fld_s.ic_bo
#define c_doresp        ii_icrb0_c_fld_s.ic_resprqd
#define c_gbr           ii_icrb0_c_fld_s.ic_gbr
#define c_btenum        ii_icrb0_c_fld_s.ic_bte_num
#define c_cohtrans      ii_icrb0_c_fld_s.ic_ct
#define c_xtsize        ii_icrb0_c_fld_s.ic_size
#define c_source        ii_icrb0_c_fld_s.ic_source
#define c_regvalue	ii_icrb0_c_regval
typedef ii_icrb0_d_u_t icrbd_t;
#define d_sleep         ii_icrb0_d_fld_s.id_sleep
#define d_pricnt        ii_icrb0_d_fld_s.id_pr_cnt
#define d_pripsc        ii_icrb0_d_fld_s.id_pr_psc
#define d_bteop         ii_icrb0_d_fld_s.id_bte_op
#define d_bteaddr       ii_icrb0_d_fld_s.id_pa_be
#define d_benable       ii_icrb0_d_fld_s.id_pa_be
#define d_regvalue	ii_icrb0_d_regval
typedef ii_icrb0_e_u_t icrbe_t;
#define icrbe_ctxtvld   ii_icrb0_e_fld_s.ie_cvld
#define icrbe_toutvld   ii_icrb0_e_fld_s.ie_tvld
#define icrbe_context   ii_icrb0_e_fld_s.ie_context
#define icrbe_timeout   ii_icrb0_e_fld_s.ie_timeout
#define e_regvalue	ii_icrb0_e_regval
#define HUB_NUM_WIDGET          9
#define HUB_WIDGET_ID_MIN       0x8
#define HUB_WIDGET_ID_MAX       0xf
#define HUB_WIDGET_PART_NUM     0xc120
#define MAX_HUBS_PER_XBOW       2
#define iprb_t          ii_iprb0_u_t
#define iprb_regval     ii_iprb0_regval
#define iprb_mult_err	ii_iprb0_fld_s.i_mult_err
#define iprb_spur_rd	ii_iprb0_fld_s.i_spur_rd
#define iprb_spur_wr	ii_iprb0_fld_s.i_spur_wr
#define iprb_rd_to	ii_iprb0_fld_s.i_rd_to
#define iprb_ovflow     ii_iprb0_fld_s.i_of_cnt
#define iprb_error      ii_iprb0_fld_s.i_error
#define iprb_ff         ii_iprb0_fld_s.i_f
#define iprb_mode       ii_iprb0_fld_s.i_m
#define iprb_bnakctr    ii_iprb0_fld_s.i_nb
#define iprb_anakctr    ii_iprb0_fld_s.i_na
#define iprb_xtalkctr   ii_iprb0_fld_s.i_c
#define LNK_STAT_WORKING        0x2
#define IIO_WSTAT_ECRAZY	(1ULL << 32)
#define IIO_WSTAT_TXRETRY	(1ULL << 9)
#define IIO_WSTAT_TXRETRY_MASK  0x7F
#define IIO_WSTAT_TXRETRY_SHFT  16
#define IIO_WSTAT_TXRETRY_CNT(w)	(((w) >> IIO_WSTAT_TXRETRY_SHFT) & \
IIO_WSTAT_TXRETRY_MASK)
#define IO_PERF_SETS	32
#define IIO_IIWA_WIDGET(_w)	((u64)(1ULL << _w))
#define IIO_IOWA_WIDGET(_w)	((u64)(1ULL << _w))
#define IIO_IIDEM_WIDGETDEV_MASK(w, d)	((u64)(1ULL << (8 * ((w) - 8) + (d))))
#define IIO_IIDSR_SENT_SHIFT    28
#define IIO_IIDSR_SENT_MASK     0x30000000
#define IIO_IIDSR_ENB_SHIFT     24
#define IIO_IIDSR_ENB_MASK      0x01000000
#define IIO_IIDSR_NODE_SHIFT    9
#define IIO_IIDSR_NODE_MASK     0x000ff700
#define IIO_IIDSR_PI_ID_SHIFT   8
#define IIO_IIDSR_PI_ID_MASK    0x00000100
#define IIO_IIDSR_LVL_SHIFT     0
#define IIO_IIDSR_LVL_MASK      0x000000ff
#define IXTT_RRSP_TO_SHFT	55
#define IXTT_RRSP_TO_MASK	(0x1FULL << IXTT_RRSP_TO_SHFT)
#define IXTT_RRSP_PS_SHFT	32
#define IXTT_RRSP_PS_MASK	(0x7FFFFFULL << IXTT_RRSP_PS_SHFT)
#define IXTT_TAIL_TO_SHFT	0
#define IXTT_TAIL_TO_MASK	(0x3FFFFFFULL << IXTT_TAIL_TO_SHFT)
typedef union hubii_wcr_u  hubii_wcr_t;
#define iwcr_dir_con    wcr_fields_s.wcr_dir_con
typedef union io_perf_sel  io_perf_sel_t;
typedef union io_perf_cnt  io_perf_cnt_t;
typedef union iprte_a  iprte_a_t;
