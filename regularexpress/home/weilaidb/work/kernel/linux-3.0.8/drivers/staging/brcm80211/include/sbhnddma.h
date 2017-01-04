#define	_sbhnddma_h_
typedef volatile struct  dma32regs_t;
typedef volatile struct  dma32regp_t;
typedef volatile struct  dma32diag_t;
typedef volatile struct  dma32dd_t;
#define	D32RINGALIGN_BITS	12
#define	D32MAXRINGSZ		(1 << D32RINGALIGN_BITS)
#define	D32RINGALIGN		(1 << D32RINGALIGN_BITS)
#define	D32MAXDD	(D32MAXRINGSZ / sizeof (dma32dd_t))
#define	XC_XE		((u32)1 << 0)
#define	XC_SE		((u32)1 << 1)
#define	XC_LE		((u32)1 << 2)
#define	XC_FL		((u32)1 << 4)
#define	XC_PD		((u32)1 << 11)
#define	XC_AE		((u32)3 << 16)
#define	XC_AE_SHIFT	16
#define	XP_LD_MASK	0xfff
#define	XS_CD_MASK	0x0fff
#define	XS_XS_MASK	0xf000
#define	XS_XS_SHIFT	12
#define	XS_XS_DISABLED	0x0000
#define	XS_XS_ACTIVE	0x1000
#define	XS_XS_IDLE	0x2000
#define	XS_XS_STOPPED	0x3000
#define	XS_XS_SUSP	0x4000
#define	XS_XE_MASK	0xf0000
#define	XS_XE_SHIFT	16
#define	XS_XE_NOERR	0x00000
#define	XS_XE_DPE	0x10000
#define	XS_XE_DFU	0x20000
#define	XS_XE_BEBR	0x30000
#define	XS_XE_BEDA	0x40000
#define	XS_AD_MASK	0xfff00000
#define	XS_AD_SHIFT	20
#define	RC_RE		((u32)1 << 0)
#define	RC_RO_MASK	0xfe
#define	RC_RO_SHIFT	1
#define	RC_FM		((u32)1 << 8)
#define	RC_SH		((u32)1 << 9)
#define	RC_OC		((u32)1 << 10)
#define	RC_PD		((u32)1 << 11)
#define	RC_AE		((u32)3 << 16)
#define	RC_AE_SHIFT	16
#define	RP_LD_MASK	0xfff
#define	RS_CD_MASK	0x0fff
#define	RS_RS_MASK	0xf000
#define	RS_RS_SHIFT	12
#define	RS_RS_DISABLED	0x0000
#define	RS_RS_ACTIVE	0x1000
#define	RS_RS_IDLE	0x2000
#define	RS_RS_STOPPED	0x3000
#define	RS_RE_MASK	0xf0000
#define	RS_RE_SHIFT	16
#define	RS_RE_NOERR	0x00000
#define	RS_RE_DPE	0x10000
#define	RS_RE_DFO	0x20000
#define	RS_RE_BEBW	0x30000
#define	RS_RE_BEDA	0x40000
#define	RS_AD_MASK	0xfff00000
#define	RS_AD_SHIFT	20
#define	FA_OFF_MASK	0xffff
#define	FA_SEL_MASK	0xf0000
#define	FA_SEL_SHIFT	16
#define	FA_SEL_XDD	0x00000
#define	FA_SEL_XDP	0x10000
#define	FA_SEL_RDD	0x40000
#define	FA_SEL_RDP	0x50000
#define	FA_SEL_XFD	0x80000
#define	FA_SEL_XFP	0x90000
#define	FA_SEL_RFD	0xc0000
#define	FA_SEL_RFP	0xd0000
#define	FA_SEL_RSD	0xe0000
#define	FA_SEL_RSP	0xf0000
#define	CTRL_BC_MASK	0x00001fff
#define	CTRL_AE		((u32)3 << 16)
#define	CTRL_AE_SHIFT	16
#define	CTRL_PARITY	((u32)3 << 18)
#define	CTRL_EOT	((u32)1 << 28)
#define	CTRL_IOC	((u32)1 << 29)
#define	CTRL_EOF	((u32)1 << 30)
#define	CTRL_SOF	((u32)1 << 31)
#define	CTRL_CORE_MASK	0x0ff00000
typedef volatile struct  dma64regs_t;
typedef volatile struct  dma64regp_t;
typedef volatile struct  dma64diag_t;
typedef volatile struct  dma64dd_t;
#define D64RINGALIGN_BITS	13
#define	D64MAXRINGSZ		(1 << D64RINGALIGN_BITS)
#define	D64RINGALIGN		(1 << D64RINGALIGN_BITS)
#define	D64MAXDD	(D64MAXRINGSZ / sizeof (dma64dd_t))
#define	D64_XC_XE		0x00000001
#define	D64_XC_SE		0x00000002
#define	D64_XC_LE		0x00000004
#define	D64_XC_FL		0x00000010
#define	D64_XC_PD		0x00000800
#define	D64_XC_AE		0x00030000
#define	D64_XC_AE_SHIFT		16
#define	D64_XP_LD_MASK		0x00000fff
#define	D64_XS0_CD_MASK		0x00001fff
#define	D64_XS0_XS_MASK		0xf0000000
#define	D64_XS0_XS_SHIFT		28
#define	D64_XS0_XS_DISABLED	0x00000000
#define	D64_XS0_XS_ACTIVE	0x10000000
#define	D64_XS0_XS_IDLE		0x20000000
#define	D64_XS0_XS_STOPPED	0x30000000
#define	D64_XS0_XS_SUSP		0x40000000
#define	D64_XS1_AD_MASK		0x00001fff
#define	D64_XS1_XE_MASK		0xf0000000
#define	D64_XS1_XE_SHIFT		28
#define	D64_XS1_XE_NOERR	0x00000000
#define	D64_XS1_XE_DPE		0x10000000
#define	D64_XS1_XE_DFU		0x20000000
#define	D64_XS1_XE_DTE		0x30000000
#define	D64_XS1_XE_DESRE	0x40000000
#define	D64_XS1_XE_COREE	0x50000000
#define	D64_RC_RE		0x00000001
#define	D64_RC_RO_MASK		0x000000fe
#define	D64_RC_RO_SHIFT		1
#define	D64_RC_FM		0x00000100
#define	D64_RC_SH		0x00000200
#define	D64_RC_OC		0x00000400
#define	D64_RC_PD		0x00000800
#define	D64_RC_AE		0x00030000
#define	D64_RC_AE_SHIFT		16
#define DMA_CTRL_PEN		(1 << 0)
#define DMA_CTRL_ROC		(1 << 1)
#define DMA_CTRL_RXMULTI	(1 << 2)
#define DMA_CTRL_UNFRAMED	(1 << 3)
#define	D64_RP_LD_MASK		0x00000fff
#define	D64_RS0_CD_MASK		0x00001fff
#define	D64_RS0_RS_MASK		0xf0000000
#define	D64_RS0_RS_SHIFT		28
#define	D64_RS0_RS_DISABLED	0x00000000
#define	D64_RS0_RS_ACTIVE	0x10000000
#define	D64_RS0_RS_IDLE		0x20000000
#define	D64_RS0_RS_STOPPED	0x30000000
#define	D64_RS0_RS_SUSP		0x40000000
#define	D64_RS1_AD_MASK		0x0001ffff
#define	D64_RS1_RE_MASK		0xf0000000
#define	D64_RS1_RE_SHIFT		28
#define	D64_RS1_RE_NOERR	0x00000000
#define	D64_RS1_RE_DPO		0x10000000
#define	D64_RS1_RE_DFU		0x20000000
#define	D64_RS1_RE_DTE		0x30000000
#define	D64_RS1_RE_DESRE	0x40000000
#define	D64_RS1_RE_COREE	0x50000000
#define	D64_FA_OFF_MASK		0xffff
#define	D64_FA_SEL_MASK		0xf0000
#define	D64_FA_SEL_SHIFT	16
#define	D64_FA_SEL_XDD		0x00000
#define	D64_FA_SEL_XDP		0x10000
#define	D64_FA_SEL_RDD		0x40000
#define	D64_FA_SEL_RDP		0x50000
#define	D64_FA_SEL_XFD		0x80000
#define	D64_FA_SEL_XFP		0x90000
#define	D64_FA_SEL_RFD		0xc0000
#define	D64_FA_SEL_RFP		0xd0000
#define	D64_FA_SEL_RSD		0xe0000
#define	D64_FA_SEL_RSP		0xf0000
#define D64_CTRL_COREFLAGS	0x0ff00000
#define	D64_CTRL1_EOT		((u32)1 << 28)
#define	D64_CTRL1_IOC		((u32)1 << 29)
#define	D64_CTRL1_EOF		((u32)1 << 30)
#define	D64_CTRL1_SOF		((u32)1 << 31)
#define	D64_CTRL2_BC_MASK	0x00007fff
#define	D64_CTRL2_AE		0x00030000
#define	D64_CTRL2_AE_SHIFT	16
#define D64_CTRL2_PARITY	0x00040000
#define	D64_CTRL_CORE_MASK	0x0ff00000
#define D64_RX_FRM_STS_LEN	0x0000ffff
#define D64_RX_FRM_STS_OVFL	0x00800000
#define D64_RX_FRM_STS_DSCRCNT	0x0f000000
#define D64_RX_FRM_STS_DATATYPE	0xf0000000
typedef volatile struct  dma_rxh_t;
