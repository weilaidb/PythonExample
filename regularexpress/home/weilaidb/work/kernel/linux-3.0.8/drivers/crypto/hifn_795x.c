#define dprintk(f, a...) 	printk(f, ##a)
#define dprintk(f, a...)	do  while (0)
static char hifn_pll_ref[sizeof("extNNN")] = "ext";
module_param_string(hifn_pll_ref, hifn_pll_ref, sizeof(hifn_pll_ref), 0444);
MODULE_PARM_DESC(hifn_pll_ref,
"PLL reference clock (pci[freq] or ext[freq], default ext)");
static atomic_t hifn_dev_number;
#define ACRYPTO_OP_DECRYPT	0
#define ACRYPTO_OP_ENCRYPT	1
#define ACRYPTO_OP_HMAC		2
#define ACRYPTO_OP_RNG		3
#define ACRYPTO_MODE_ECB		0
#define ACRYPTO_MODE_CBC		1
#define ACRYPTO_MODE_CFB		2
#define ACRYPTO_MODE_OFB		3
#define ACRYPTO_TYPE_AES_128	0
#define ACRYPTO_TYPE_AES_192	1
#define ACRYPTO_TYPE_AES_256	2
#define ACRYPTO_TYPE_3DES	3
#define ACRYPTO_TYPE_DES	4
#define PCI_VENDOR_ID_HIFN		0x13A3
#define PCI_DEVICE_ID_HIFN_7955		0x0020
#define	PCI_DEVICE_ID_HIFN_7956		0x001d
#define HIFN_BAR0_SIZE			0x1000
#define HIFN_BAR1_SIZE			0x2000
#define HIFN_BAR2_SIZE			0x8000
#define HIFN_DMA_CRA 			0x0C
#define HIFN_DMA_SDRA 			0x1C
#define HIFN_DMA_RRA			0x2C
#define HIFN_DMA_DDRA			0x3C
#define HIFN_DMA_STCTL			0x40
#define HIFN_DMA_INTREN 		0x44
#define HIFN_DMA_CFG1			0x48
#define HIFN_DMA_CFG2			0x6C
#define HIFN_CHIP_ID			0x98
#define	HIFN_0_PUDATA		0x00
#define	HIFN_0_PUCTRL		0x04
#define	HIFN_0_PUISR		0x08
#define	HIFN_0_PUCNFG		0x0c
#define	HIFN_0_PUIER		0x10
#define	HIFN_0_PUSTAT		0x14
#define	HIFN_0_FIFOSTAT		0x18
#define	HIFN_0_FIFOCNFG		0x1c
#define	HIFN_0_SPACESIZE	0x20
#define	HIFN_PUCTRL_CLRSRCFIFO	0x0010
#define	HIFN_PUCTRL_STOP	0x0008
#define	HIFN_PUCTRL_LOCKRAM	0x0004
#define	HIFN_PUCTRL_DMAENA	0x0002
#define	HIFN_PUCTRL_RESET	0x0001
#define	HIFN_PUISR_CMDINVAL	0x8000
#define	HIFN_PUISR_DATAERR	0x4000
#define	HIFN_PUISR_SRCFIFO	0x2000
#define	HIFN_PUISR_DSTFIFO	0x1000
#define	HIFN_PUISR_DSTOVER	0x0200
#define	HIFN_PUISR_SRCCMD	0x0080
#define	HIFN_PUISR_SRCCTX	0x0040
#define	HIFN_PUISR_SRCDATA	0x0020
#define	HIFN_PUISR_DSTDATA	0x0010
#define	HIFN_PUISR_DSTRESULT	0x0004
#define	HIFN_PUCNFG_DRAMMASK	0xe000
#define	HIFN_PUCNFG_DSZ_256K	0x0000
#define	HIFN_PUCNFG_DSZ_512K	0x2000
#define	HIFN_PUCNFG_DSZ_1M	0x4000
#define	HIFN_PUCNFG_DSZ_2M	0x6000
#define	HIFN_PUCNFG_DSZ_4M	0x8000
#define	HIFN_PUCNFG_DSZ_8M	0xa000
#define	HIFN_PUNCFG_DSZ_16M	0xc000
#define	HIFN_PUCNFG_DSZ_32M	0xe000
#define	HIFN_PUCNFG_DRAMREFRESH	0x1800
#define	HIFN_PUCNFG_DRFR_512	0x0000
#define	HIFN_PUCNFG_DRFR_256	0x0800
#define	HIFN_PUCNFG_DRFR_128	0x1000
#define	HIFN_PUCNFG_TCALLPHASES	0x0200
#define	HIFN_PUCNFG_TCDRVTOTEM	0x0100
#define	HIFN_PUCNFG_BIGENDIAN	0x0080
#define	HIFN_PUCNFG_BUS32	0x0040
#define	HIFN_PUCNFG_BUS16	0x0000
#define	HIFN_PUCNFG_CHIPID	0x0020
#define	HIFN_PUCNFG_DRAM	0x0010
#define	HIFN_PUCNFG_SRAM	0x0000
#define	HIFN_PUCNFG_COMPSING	0x0004
#define	HIFN_PUCNFG_ENCCNFG	0x0002
#define	HIFN_PUIER_CMDINVAL	0x8000
#define	HIFN_PUIER_DATAERR	0x4000
#define	HIFN_PUIER_SRCFIFO	0x2000
#define	HIFN_PUIER_DSTFIFO	0x1000
#define	HIFN_PUIER_DSTOVER	0x0200
#define	HIFN_PUIER_SRCCMD	0x0080
#define	HIFN_PUIER_SRCCTX	0x0040
#define	HIFN_PUIER_SRCDATA	0x0020
#define	HIFN_PUIER_DSTDATA	0x0010
#define	HIFN_PUIER_DSTRESULT	0x0004
#define	HIFN_PUSTAT_CMDINVAL	0x8000
#define	HIFN_PUSTAT_DATAERR	0x4000
#define	HIFN_PUSTAT_SRCFIFO	0x2000
#define	HIFN_PUSTAT_DSTFIFO	0x1000
#define	HIFN_PUSTAT_DSTOVER	0x0200
#define	HIFN_PUSTAT_SRCCMD	0x0080
#define	HIFN_PUSTAT_SRCCTX	0x0040
#define	HIFN_PUSTAT_SRCDATA	0x0020
#define	HIFN_PUSTAT_DSTDATA	0x0010
#define	HIFN_PUSTAT_DSTRESULT	0x0004
#define	HIFN_PUSTAT_CHIPREV	0x00ff
#define	HIFN_PUSTAT_CHIPENA	0xff00
#define	HIFN_PUSTAT_ENA_2	0x1100
#define	HIFN_PUSTAT_ENA_1	0x1000
#define	HIFN_PUSTAT_ENA_0	0x3000
#define	HIFN_PUSTAT_REV_2	0x0020
#define	HIFN_PUSTAT_REV_3	0x0030
#define	HIFN_FIFOSTAT_SRC	0x7f00
#define	HIFN_FIFOSTAT_DST	0x007f
#define	HIFN_FIFOCNFG_THRESHOLD	0x0400
#define	HIFN_1_DMA_CRAR		0x0c
#define	HIFN_1_DMA_SRAR		0x1c
#define	HIFN_1_DMA_RRAR		0x2c
#define	HIFN_1_DMA_DRAR		0x3c
#define	HIFN_1_DMA_CSR		0x40
#define	HIFN_1_DMA_IER		0x44
#define	HIFN_1_DMA_CNFG		0x48
#define	HIFN_1_PLL		0x4c
#define	HIFN_1_7811_RNGENA	0x60
#define	HIFN_1_7811_RNGCFG	0x64
#define	HIFN_1_7811_RNGDAT	0x68
#define	HIFN_1_7811_RNGSTS	0x6c
#define	HIFN_1_7811_MIPSRST	0x94
#define	HIFN_1_REVID		0x98
#define	HIFN_1_UNLOCK_SECRET1	0xf4
#define	HIFN_1_UNLOCK_SECRET2	0xfc
#define	HIFN_1_PUB_RESET	0x204
#define	HIFN_1_PUB_BASE		0x300
#define	HIFN_1_PUB_OPLEN	0x304
#define	HIFN_1_PUB_OP		0x308
#define	HIFN_1_PUB_STATUS	0x30c
#define	HIFN_1_PUB_IEN		0x310
#define	HIFN_1_RNG_CONFIG	0x314
#define	HIFN_1_RNG_DATA		0x318
#define	HIFN_1_PUB_MEM		0x400
#define	HIFN_1_PUB_MEMEND	0xbff
#define	HIFN_DMACSR_D_CTRLMASK	0xc0000000
#define	HIFN_DMACSR_D_CTRL_NOP	0x00000000
#define	HIFN_DMACSR_D_CTRL_DIS	0x40000000
#define	HIFN_DMACSR_D_CTRL_ENA	0x80000000
#define	HIFN_DMACSR_D_ABORT	0x20000000
#define	HIFN_DMACSR_D_DONE	0x10000000
#define	HIFN_DMACSR_D_LAST	0x08000000
#define	HIFN_DMACSR_D_WAIT	0x04000000
#define	HIFN_DMACSR_D_OVER	0x02000000
#define	HIFN_DMACSR_R_CTRL	0x00c00000
#define	HIFN_DMACSR_R_CTRL_NOP	0x00000000
#define	HIFN_DMACSR_R_CTRL_DIS	0x00400000
#define	HIFN_DMACSR_R_CTRL_ENA	0x00800000
#define	HIFN_DMACSR_R_ABORT	0x00200000
#define	HIFN_DMACSR_R_DONE	0x00100000
#define	HIFN_DMACSR_R_LAST	0x00080000
#define	HIFN_DMACSR_R_WAIT	0x00040000
#define	HIFN_DMACSR_R_OVER	0x00020000
#define	HIFN_DMACSR_S_CTRL	0x0000c000
#define	HIFN_DMACSR_S_CTRL_NOP	0x00000000
#define	HIFN_DMACSR_S_CTRL_DIS	0x00004000
#define	HIFN_DMACSR_S_CTRL_ENA	0x00008000
#define	HIFN_DMACSR_S_ABORT	0x00002000
#define	HIFN_DMACSR_S_DONE	0x00001000
#define	HIFN_DMACSR_S_LAST	0x00000800
#define	HIFN_DMACSR_S_WAIT	0x00000400
#define	HIFN_DMACSR_ILLW	0x00000200
#define	HIFN_DMACSR_ILLR	0x00000100
#define	HIFN_DMACSR_C_CTRL	0x000000c0
#define	HIFN_DMACSR_C_CTRL_NOP	0x00000000
#define	HIFN_DMACSR_C_CTRL_DIS	0x00000040
#define	HIFN_DMACSR_C_CTRL_ENA	0x00000080
#define	HIFN_DMACSR_C_ABORT	0x00000020
#define	HIFN_DMACSR_C_DONE	0x00000010
#define	HIFN_DMACSR_C_LAST	0x00000008
#define	HIFN_DMACSR_C_WAIT	0x00000004
#define	HIFN_DMACSR_PUBDONE	0x00000002
#define	HIFN_DMACSR_ENGINE	0x00000001
#define	HIFN_DMAIER_D_ABORT	0x20000000
#define	HIFN_DMAIER_D_DONE	0x10000000
#define	HIFN_DMAIER_D_LAST	0x08000000
#define	HIFN_DMAIER_D_WAIT	0x04000000
#define	HIFN_DMAIER_D_OVER	0x02000000
#define	HIFN_DMAIER_R_ABORT	0x00200000
#define	HIFN_DMAIER_R_DONE	0x00100000
#define	HIFN_DMAIER_R_LAST	0x00080000
#define	HIFN_DMAIER_R_WAIT	0x00040000
#define	HIFN_DMAIER_R_OVER	0x00020000
#define	HIFN_DMAIER_S_ABORT	0x00002000
#define	HIFN_DMAIER_S_DONE	0x00001000
#define	HIFN_DMAIER_S_LAST	0x00000800
#define	HIFN_DMAIER_S_WAIT	0x00000400
#define	HIFN_DMAIER_ILLW	0x00000200
#define	HIFN_DMAIER_ILLR	0x00000100
#define	HIFN_DMAIER_C_ABORT	0x00000020
#define	HIFN_DMAIER_C_DONE	0x00000010
#define	HIFN_DMAIER_C_LAST	0x00000008
#define	HIFN_DMAIER_C_WAIT	0x00000004
#define	HIFN_DMAIER_PUBDONE	0x00000002
#define	HIFN_DMAIER_ENGINE	0x00000001
#define	HIFN_DMACNFG_BIGENDIAN	0x10000000
#define	HIFN_DMACNFG_POLLFREQ	0x00ff0000
#define	HIFN_DMACNFG_UNLOCK	0x00000800
#define	HIFN_DMACNFG_POLLINVAL	0x00000700
#define	HIFN_DMACNFG_LAST	0x00000010
#define	HIFN_DMACNFG_MODE	0x00000004
#define	HIFN_DMACNFG_DMARESET	0x00000002
#define	HIFN_DMACNFG_MSTRESET	0x00000001
#define HIFN_PLL_REF_CLK_HBI	0x00000000
#define HIFN_PLL_REF_CLK_PLL	0x00000001
#define HIFN_PLL_BP		0x00000002
#define HIFN_PLL_PK_CLK_HBI	0x00000000
#define HIFN_PLL_PK_CLK_PLL	0x00000008
#define HIFN_PLL_PE_CLK_HBI	0x00000000
#define HIFN_PLL_PE_CLK_PLL	0x00000010
#define HIFN_PLL_RESERVED_1	0x00000400
#define HIFN_PLL_ND_SHIFT	11
#define HIFN_PLL_ND_MULT_2	0x00000000
#define HIFN_PLL_ND_MULT_4	0x00000800
#define HIFN_PLL_ND_MULT_6	0x00001000
#define HIFN_PLL_ND_MULT_8	0x00001800
#define HIFN_PLL_ND_MULT_10	0x00002000
#define HIFN_PLL_ND_MULT_12	0x00002800
#define HIFN_PLL_IS_1_8		0x00000000
#define HIFN_PLL_IS_9_12	0x00010000
#define HIFN_PLL_FCK_MAX	266
#define	HIFN_PUBRST_RESET	0x00000001
#define	HIFN_PUBBASE_ADDR	0x00003fff
#define	HIFN_PUBOPLEN_MOD_M	0x0000007f
#define	HIFN_PUBOPLEN_MOD_S	0
#define	HIFN_PUBOPLEN_EXP_M	0x0003ff80
#define	HIFN_PUBOPLEN_EXP_S	7
#define	HIFN_PUBOPLEN_RED_M	0x003c0000
#define	HIFN_PUBOPLEN_RED_S	18
#define	HIFN_PUBOP_AOFFSET_M	0x0000007f
#define	HIFN_PUBOP_AOFFSET_S	0
#define	HIFN_PUBOP_BOFFSET_M	0x00000f80
#define	HIFN_PUBOP_BOFFSET_S	7
#define	HIFN_PUBOP_MOFFSET_M	0x0003f000
#define	HIFN_PUBOP_MOFFSET_S	12
#define	HIFN_PUBOP_OP_MASK	0x003c0000
#define	HIFN_PUBOP_OP_NOP	0x00000000
#define	HIFN_PUBOP_OP_ADD	0x00040000
#define	HIFN_PUBOP_OP_ADDC	0x00080000
#define	HIFN_PUBOP_OP_SUB	0x000c0000
#define	HIFN_PUBOP_OP_SUBC	0x00100000
#define	HIFN_PUBOP_OP_MODADD	0x00140000
#define	HIFN_PUBOP_OP_MODSUB	0x00180000
#define	HIFN_PUBOP_OP_INCA	0x001c0000
#define	HIFN_PUBOP_OP_DECA	0x00200000
#define	HIFN_PUBOP_OP_MULT	0x00240000
#define	HIFN_PUBOP_OP_MODMULT	0x00280000
#define	HIFN_PUBOP_OP_MODRED	0x002c0000
#define	HIFN_PUBOP_OP_MODEXP	0x00300000
#define	HIFN_PUBSTS_DONE	0x00000001
#define	HIFN_PUBSTS_CARRY	0x00000002
#define	HIFN_PUBIEN_DONE	0x00000001
#define	HIFN_RNGCFG_ENA		0x00000001
#define HIFN_NAMESIZE			32
#define HIFN_MAX_RESULT_ORDER		5
#define	HIFN_D_CMD_RSIZE		24*1
#define	HIFN_D_SRC_RSIZE		80*1
#define	HIFN_D_DST_RSIZE		80*1
#define	HIFN_D_RES_RSIZE		24*1
#define HIFN_D_DST_DALIGN		4
#define HIFN_QUEUE_LENGTH		(HIFN_D_CMD_RSIZE - 1)
#define AES_MIN_KEY_SIZE		16
#define AES_MAX_KEY_SIZE		32
#define HIFN_DES_KEY_LENGTH		8
#define HIFN_3DES_KEY_LENGTH		24
#define HIFN_MAX_CRYPT_KEY_LENGTH	AES_MAX_KEY_SIZE
#define HIFN_IV_LENGTH			8
#define HIFN_AES_IV_LENGTH		16
#define	HIFN_MAX_IV_LENGTH		HIFN_AES_IV_LENGTH
#define HIFN_MAC_KEY_LENGTH		64
#define HIFN_MD5_LENGTH			16
#define HIFN_SHA1_LENGTH		20
#define HIFN_MAC_TRUNC_LENGTH		12
#define	HIFN_MAX_COMMAND		(8 + 8 + 8 + 64 + 260)
#define	HIFN_MAX_RESULT			(8 + 4 + 4 + 20 + 4)
#define HIFN_USED_RESULT		12
struct hifn_desc
;
struct hifn_dma ;
#define HIFN_FLAG_CMD_BUSY	(1<<0)
#define HIFN_FLAG_SRC_BUSY	(1<<1)
#define HIFN_FLAG_DST_BUSY	(1<<2)
#define HIFN_FLAG_RES_BUSY	(1<<3)
#define HIFN_FLAG_OLD_KEY	(1<<4)
#define HIFN_DEFAULT_ACTIVE_NUM	5
struct hifn_device
;
#define	HIFN_D_LENGTH			0x0000ffff
#define	HIFN_D_NOINVALID		0x01000000
#define	HIFN_D_MASKDONEIRQ		0x02000000
#define	HIFN_D_DESTOVER			0x04000000
#define	HIFN_D_OVER			0x08000000
#define	HIFN_D_LAST			0x20000000
#define	HIFN_D_JUMP			0x40000000
#define	HIFN_D_VALID			0x80000000
struct hifn_base_command
;
#define	HIFN_BASE_CMD_COMP		0x0100
#define	HIFN_BASE_CMD_PAD		0x0200
#define	HIFN_BASE_CMD_MAC		0x0400
#define	HIFN_BASE_CMD_CRYPT		0x0800
#define	HIFN_BASE_CMD_DECODE		0x2000
#define	HIFN_BASE_CMD_SRCLEN_M		0xc000
#define	HIFN_BASE_CMD_SRCLEN_S		14
#define	HIFN_BASE_CMD_DSTLEN_M		0x3000
#define	HIFN_BASE_CMD_DSTLEN_S		12
#define	HIFN_BASE_CMD_LENMASK_HI	0x30000
#define	HIFN_BASE_CMD_LENMASK_LO	0x0ffff
struct hifn_crypt_command
;
#define	HIFN_CRYPT_CMD_ALG_MASK		0x0003
#define	HIFN_CRYPT_CMD_ALG_DES		0x0000
#define	HIFN_CRYPT_CMD_ALG_3DES		0x0001
#define	HIFN_CRYPT_CMD_ALG_RC4		0x0002
#define	HIFN_CRYPT_CMD_ALG_AES		0x0003
#define	HIFN_CRYPT_CMD_MODE_MASK	0x0018
#define	HIFN_CRYPT_CMD_MODE_ECB		0x0000
#define	HIFN_CRYPT_CMD_MODE_CBC		0x0008
#define	HIFN_CRYPT_CMD_MODE_CFB		0x0010
#define	HIFN_CRYPT_CMD_MODE_OFB		0x0018
#define	HIFN_CRYPT_CMD_CLR_CTX		0x0040
#define	HIFN_CRYPT_CMD_KSZ_MASK		0x0600
#define	HIFN_CRYPT_CMD_KSZ_128		0x0000
#define	HIFN_CRYPT_CMD_KSZ_192		0x0200
#define	HIFN_CRYPT_CMD_KSZ_256		0x0400
#define	HIFN_CRYPT_CMD_NEW_KEY		0x0800
#define	HIFN_CRYPT_CMD_NEW_IV		0x1000
#define	HIFN_CRYPT_CMD_SRCLEN_M		0xc000
#define	HIFN_CRYPT_CMD_SRCLEN_S		14
struct hifn_mac_command
;
#define	HIFN_MAC_CMD_ALG_MASK		0x0001
#define	HIFN_MAC_CMD_ALG_SHA1		0x0000
#define	HIFN_MAC_CMD_ALG_MD5		0x0001
#define	HIFN_MAC_CMD_MODE_MASK		0x000c
#define	HIFN_MAC_CMD_MODE_HMAC		0x0000
#define	HIFN_MAC_CMD_MODE_SSL_MAC	0x0004
#define	HIFN_MAC_CMD_MODE_HASH		0x0008
#define	HIFN_MAC_CMD_MODE_FULL		0x0004
#define	HIFN_MAC_CMD_TRUNC		0x0010
#define	HIFN_MAC_CMD_RESULT		0x0020
#define	HIFN_MAC_CMD_APPEND		0x0040
#define	HIFN_MAC_CMD_SRCLEN_M		0xc000
#define	HIFN_MAC_CMD_SRCLEN_S		14
#define	HIFN_MAC_CMD_POS_IPSEC		0x0200
#define	HIFN_MAC_CMD_NEW_KEY		0x0800
struct hifn_comp_command
;
#define	HIFN_COMP_CMD_SRCLEN_M		0xc000
#define	HIFN_COMP_CMD_SRCLEN_S		14
#define	HIFN_COMP_CMD_ONE		0x0100
#define	HIFN_COMP_CMD_CLEARHIST		0x0010
#define	HIFN_COMP_CMD_UPDATEHIST	0x0008
#define	HIFN_COMP_CMD_LZS_STRIP0	0x0004
#define	HIFN_COMP_CMD_MPPC_RESTART	0x0004
#define	HIFN_COMP_CMD_ALG_MASK		0x0001
#define	HIFN_COMP_CMD_ALG_MPPC		0x0001
#define	HIFN_COMP_CMD_ALG_LZS		0x0000
struct hifn_base_result
;
#define	HIFN_BASE_RES_DSTOVERRUN	0x0200
#define	HIFN_BASE_RES_SRCLEN_M		0xc000
#define	HIFN_BASE_RES_SRCLEN_S		14
#define	HIFN_BASE_RES_DSTLEN_M		0x3000
#define	HIFN_BASE_RES_DSTLEN_S		12
struct hifn_comp_result
;
#define	HIFN_COMP_RES_LCB_M		0xff00
#define	HIFN_COMP_RES_LCB_S		8
#define	HIFN_COMP_RES_RESTART		0x0004
#define	HIFN_COMP_RES_ENDMARKER		0x0002
#define	HIFN_COMP_RES_SRC_NOTZERO	0x0001
struct hifn_mac_result
;
#define	HIFN_MAC_RES_MISCOMPARE		0x0002
#define	HIFN_MAC_RES_SRC_NOTZERO	0x0001
struct hifn_crypt_result
;
#define	HIFN_CRYPT_RES_SRC_NOTZERO	0x0001
#define	HIFN_POLL_FREQUENCY	0x1
#define	HIFN_POLL_SCALAR	0x0
#define	HIFN_MAX_SEGLEN 	0xffff
#define	HIFN_MAX_DMALEN		0x3ffff
struct hifn_crypto_alg
;
#define ASYNC_SCATTERLIST_CACHE	16
#define ASYNC_FLAGS_MISALIGNED	(1<<0)
struct hifn_cipher_walk
;
struct hifn_context
;
struct hifn_request_context
;
#define crypto_alg_to_hifn(a)	container_of(a, struct hifn_crypto_alg, alg)
static inline u32 hifn_read_0(struct hifn_device *dev, u32 reg)
static inline u32 hifn_read_1(struct hifn_device *dev, u32 reg)
static inline void hifn_write_0(struct hifn_device *dev, u32 reg, u32 val)
static inline void hifn_write_1(struct hifn_device *dev, u32 reg, u32 val)
static void hifn_wait_puc(struct hifn_device *dev)
static void hifn_reset_puc(struct hifn_device *dev)
static void hifn_stop_device(struct hifn_device *dev)
static void hifn_reset_dma(struct hifn_device *dev, int full)
static u32 hifn_next_signature(u_int32_t a, u_int cnt)
static struct pci2id  pci2id[] = ;
static int hifn_rng_data_present(struct hwrng *rng, int wait)
static int hifn_rng_data_read(struct hwrng *rng, u32 *data)
static int hifn_register_rng(struct hifn_device *dev)
static void hifn_unregister_rng(struct hifn_device *dev)
#define hifn_register_rng(dev)		0
#define hifn_unregister_rng(dev)
static int hifn_init_pubrng(struct hifn_device *dev)
static int hifn_enable_crypto(struct hifn_device *dev)
static void hifn_init_dma(struct hifn_device *dev)
static void hifn_init_pll(struct hifn_device *dev)
static void hifn_init_registers(struct hifn_device *dev)
static int hifn_setup_base_command(struct hifn_device *dev, u8 *buf,
unsigned dlen, unsigned slen, u16 mask, u8 snum)
static int hifn_setup_crypto_command(struct hifn_device *dev,
u8 *buf, unsigned dlen, unsigned slen,
u8 *key, int keylen, u8 *iv, int ivsize, u16 mode)
static int hifn_setup_cmd_desc(struct hifn_device *dev,
struct hifn_context *ctx, struct hifn_request_context *rctx,
void *priv, unsigned int nbytes)
static int hifn_setup_src_desc(struct hifn_device *dev, struct page *page,
unsigned int offset, unsigned int size, int last)
static void hifn_setup_res_desc(struct hifn_device *dev)
static void hifn_setup_dst_desc(struct hifn_device *dev, struct page *page,
unsigned offset, unsigned size, int last)
static int hifn_setup_dma(struct hifn_device *dev,
struct hifn_context *ctx, struct hifn_request_context *rctx,
struct scatterlist *src, struct scatterlist *dst,
unsigned int nbytes, void *priv)
static int hifn_cipher_walk_init(struct hifn_cipher_walk *w,
int num, gfp_t gfp_flags)
static void hifn_cipher_walk_exit(struct hifn_cipher_walk *w)
static int ablkcipher_add(unsigned int *drestp, struct scatterlist *dst,
unsigned int size, unsigned int *nbytesp)
static int hifn_cipher_walk(struct ablkcipher_request *req,
struct hifn_cipher_walk *w)
static int hifn_setup_session(struct ablkcipher_request *req)
static int hifn_test(struct hifn_device *dev, int encdec, u8 snum)
static int hifn_start_device(struct hifn_device *dev)
static int ablkcipher_get(void *saddr, unsigned int *srestp, unsigned int offset,
struct scatterlist *dst, unsigned int size, unsigned int *nbytesp)
static inline void hifn_complete_sa(struct hifn_device *dev, int i)
static void hifn_process_ready(struct ablkcipher_request *req, int error)
static void hifn_clear_rings(struct hifn_device *dev, int error)
static void hifn_work(struct work_struct *work)
static irqreturn_t hifn_interrupt(int irq, void *data)
static void hifn_flush(struct hifn_device *dev)
static int hifn_setkey(struct crypto_ablkcipher *cipher, const u8 *key,
unsigned int len)
static int hifn_handle_req(struct ablkcipher_request *req)
static int hifn_setup_crypto_req(struct ablkcipher_request *req, u8 op,
u8 type, u8 mode)
static int hifn_process_queue(struct hifn_device *dev)
static int hifn_setup_crypto(struct ablkcipher_request *req, u8 op,
u8 type, u8 mode)
static inline int hifn_encrypt_aes_ecb(struct ablkcipher_request *req)
static inline int hifn_encrypt_aes_cbc(struct ablkcipher_request *req)
static inline int hifn_encrypt_aes_cfb(struct ablkcipher_request *req)
static inline int hifn_encrypt_aes_ofb(struct ablkcipher_request *req)
static inline int hifn_decrypt_aes_ecb(struct ablkcipher_request *req)
static inline int hifn_decrypt_aes_cbc(struct ablkcipher_request *req)
static inline int hifn_decrypt_aes_cfb(struct ablkcipher_request *req)
static inline int hifn_decrypt_aes_ofb(struct ablkcipher_request *req)
static inline int hifn_encrypt_des_ecb(struct ablkcipher_request *req)
static inline int hifn_encrypt_des_cbc(struct ablkcipher_request *req)
static inline int hifn_encrypt_des_cfb(struct ablkcipher_request *req)
static inline int hifn_encrypt_des_ofb(struct ablkcipher_request *req)
static inline int hifn_decrypt_des_ecb(struct ablkcipher_request *req)
static inline int hifn_decrypt_des_cbc(struct ablkcipher_request *req)
static inline int hifn_decrypt_des_cfb(struct ablkcipher_request *req)
static inline int hifn_decrypt_des_ofb(struct ablkcipher_request *req)
static inline int hifn_encrypt_3des_ecb(struct ablkcipher_request *req)
static inline int hifn_encrypt_3des_cbc(struct ablkcipher_request *req)
static inline int hifn_encrypt_3des_cfb(struct ablkcipher_request *req)
static inline int hifn_encrypt_3des_ofb(struct ablkcipher_request *req)
static inline int hifn_decrypt_3des_ecb(struct ablkcipher_request *req)
static inline int hifn_decrypt_3des_cbc(struct ablkcipher_request *req)
static inline int hifn_decrypt_3des_cfb(struct ablkcipher_request *req)
static inline int hifn_decrypt_3des_ofb(struct ablkcipher_request *req)
struct hifn_alg_template
;
static struct hifn_alg_template hifn_alg_templates[] = ;
static int hifn_cra_init(struct crypto_tfm *tfm)
static int hifn_alg_alloc(struct hifn_device *dev, struct hifn_alg_template *t)
static void hifn_unregister_alg(struct hifn_device *dev)
static int hifn_register_alg(struct hifn_device *dev)
static void hifn_tasklet_callback(unsigned long data)
static int __devinit hifn_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void __devexit hifn_remove(struct pci_dev *pdev)
static struct pci_device_id hifn_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, hifn_pci_tbl);
static struct pci_driver hifn_pci_driver = ;
static int __init hifn_init(void)
static void __exit hifn_fini(void)
module_init(hifn_init);
module_exit(hifn_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <johnpol@2ka.mipt.ru>");
MODULE_DESCRIPTION("Driver for HIFN 795x crypto accelerator chip.");
