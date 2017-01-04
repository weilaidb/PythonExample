#define HCF_H 1
#define LOF(x) 			(sizeof(x)/sizeof(hcf_16)-1)
#define CNV_END_SHORT(w)  (hcf_16)( ((hcf_16)(w) & 0x00FF) << 8 | ((hcf_16)(w) & 0xFF00) >> 8 )
#define CNV_END_LONG(dw)  (hcf_32)( (dw >> 24) | ((dw >> 8) & 0xff00) | ((dw << 8) & 0xff0000) | (dw << 24) )
#if HCF_BIG_ENDIAN
#define CNV_LITTLE_TO_SHORT(w)	CNV_END_SHORT(w)
#define CNV_BIG_TO_SHORT(w)		(w)
#define CNV_LITTLE_TO_LONG(dw)	CNV_END_LONG(dw)
#define CNV_LONG_TO_LITTLE(dw)	CNV_END_LONG(dw)
#define CNV_LITTLE_TO_SHORT(w) 	(w)
#define CNV_BIG_TO_SHORT(w)		CNV_END_SHORT(w)
#define CNV_LITTLE_TO_LONG(dw)	(dw)
#define CNV_LONG_TO_LITTLE(dw)	(dw)
#if defined HCF_ALIGN && HCF_ALIGN > 1
#define CNV_SHORTP_TO_LITTLE(pw)	((hcf_16)(*(hcf_8 *)pw)) 			| ((hcf_16)(*((hcf_8 *)pw+1)) << 8)
#define CNV_LONGP_TO_LITTLE(pdw)	((hcf_32)(*(hcf_8 *)pdw)) 			| ((hcf_32)(*((hcf_8 *)pdw+1)) << 8) 	| \
((hcf_32)(*((hcf_8 *)pdw+2)) << 16) | ((hcf_32)(*((hcf_8 *)pdw+3)) << 24)
#define CNV_LONGP_TO_LITTLE(pdw)	(*(hcf_32 *)pdw)
#define CNV_SHORTP_TO_LITTLE(pw)	(*(hcf_16 *)pw)
#define CNV_SHORT_TO_LITTLE(w)	CNV_LITTLE_TO_SHORT(w)
#define CNV_SHORT_TO_BIG(w)		CNV_BIG_TO_SHORT(w)
#define HFS_STAT				0x0000
#define HFS_SWSUP				0x0006
#define HFS_Q_INFO				0x0006
#define HFS_RATE				0x0008
#define 	HFS_STAT_ERR		RX_STAT_ERR
#define HFS_TX_CNTL				0x0036
#define HFS_DAT_LEN				(HFS_ADDR_DEST - 2)
#define HFS_ADDR_DEST			0x003A
#define HFS_ADDR_SRC			(HFS_ADDR_DEST + 6)
#define HFS_LEN					(HFS_ADDR_SRC  + 6)
#define HFS_DAT					(HFS_LEN       + 2)
#define HFS_TYPE				(HFS_DAT       + 6)
#if HCF_BIG_ENDIAN
#define DESC_STRCT_CNT		0
#define DESC_STRCT_SIZE		1
#define DESC_STRCT_CNT		1
#define DESC_STRCT_SIZE		0
#define	BUF_CNT				buf_dim[DESC_STRCT_CNT]
#define	BUF_SIZE			buf_dim[DESC_STRCT_SIZE]
typedef struct DESC_STRCT  DESC_STRCT;
#define HCF_DASA_SIZE			12
#define DESC_CNT_MASK 			0x0FFF
#define GET_BUF_SIZE(descp)       ((descp)->BUF_SIZE)
#define GET_BUF_CNT(descp)        ((descp)->BUF_CNT)
#define SET_BUF_SIZE(descp, size) (descp)->BUF_SIZE = size;
#define SET_BUF_CNT(descp, count) (descp)->BUF_CNT = count;
typedef struct   CFG_HERMES_TALLIES_STRCT;
typedef struct   CFG_HCF_TALLIES_STRCT;
#if (HCF_TALLIES) & ( HCF_TALLIES_NIC | HCF_TALLIES_HCF )
#if (HCF_TALLIES) & HCF_TALLIES_NIC
#define		HCF_NIC_TAL_CNT	(sizeof(CFG_HERMES_TALLIES_STRCT)/ sizeof(hcf_32))
#define		HCF_NIC_TAL_CNT	0
#if (HCF_TALLIES) & HCF_TALLIES_HCF
#define		HCF_HCF_TAL_CNT	(sizeof(CFG_HCF_TALLIES_STRCT)   / sizeof(hcf_32))
#define		HCF_HCF_TAL_CNT	0
#define HCF_TOT_TAL_CNT ( HCF_NIC_TAL_CNT + HCF_NIC_TAL_CNT )
#define IFB_VERSION 0x0E
typedef struct   IFB_STRCT;
typedef IFB_STRCT*	IFBP;
EXTERN_C int		 hcf_action			(IFBP ifbp, hcf_16 cmd );
EXTERN_C int		 hcf_connect		(IFBP ifbp, hcf_io io_base );
#if (HCF_ENCAP) & HCF_ENC_SUP
EXTERN_C hcf_8 		 hcf_encap			(wci_bufp type );
EXTERN_C int		 hcf_get_info		(IFBP ifbp, LTVP ltvp );
EXTERN_C int		 hcf_service_nic	(IFBP ifbp, wci_bufp bufp, unsigned int len );
EXTERN_C int		 hcf_cntl			(IFBP ifbp, hcf_16 cmd );
EXTERN_C int		 hcf_put_info		(IFBP ifbp, LTVP ltvp );
EXTERN_C int		 hcf_rcv_msg		(IFBP ifbp, DESC_STRCT *descp, unsigned int offset );
EXTERN_C int		 hcf_send_msg       (IFBP ifbp, DESC_STRCT *dp, hcf_16 tx_cntl );
#if HCF_DMA
EXTERN_C void		 hcf_dma_tx_put 	(IFBP ifbp, DESC_STRCT *d, hcf_16 tx_cntl );
EXTERN_C DESC_STRCT* hcf_dma_tx_get		(IFBP ifbp );
EXTERN_C DESC_STRCT* hcf_dma_rx_get		(IFBP ifbp );
EXTERN_C void		 hcf_dma_rx_put		(IFBP ifbp, DESC_STRCT *d );
#if (HCF_ASSERT) & HCF_ASSERT_LNK_MSF_RTN
EXTERN_C void		 msf_assert	 		(unsigned int line_number, hcf_16 trace, hcf_32 qual );
