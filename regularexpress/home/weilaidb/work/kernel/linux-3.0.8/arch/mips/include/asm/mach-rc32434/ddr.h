#define _ASM_RC32434_DDR_H_
struct ddr_ram ;
#define DDR0_PHYS_ADDR		0x18018000
#define DDR_MASK		0xffff0000
#define DDR0_BASE_MSK		DDR_MASK
#define DDR1_BASE_MSK		DDR_MASK
#define RC32434_DDR0_ATA_BIT		5
#define RC32434_DDR0_ATA_MSK		0x000000E0
#define RC32434_DDR0_DBW_BIT		8
#define RC32434_DDR0_DBW_MSK		0x00000100
#define RC32434_DDR0_WR_BIT		9
#define RC32434_DDR0_WR_MSK		0x00000600
#define RC32434_DDR0_PS_BIT		11
#define RC32434_DDR0_PS_MSK		0x00001800
#define RC32434_DDR0_DTYPE_BIT		13
#define RC32434_DDR0_DTYPE_MSK		0x0000e000
#define RC32434_DDR0_RFC_BIT		16
#define RC32434_DDR0_RFC_MSK		0x000f0000
#define RC32434_DDR0_RP_BIT		20
#define RC32434_DDR0_RP_MSK		0x00300000
#define RC32434_DDR0_AP_BIT		22
#define RC32434_DDR0_AP_MSK		0x00400000
#define RC32434_DDR0_RCD_BIT		23
#define RC32434_DDR0_RCD_MSK		0x01800000
#define RC32434_DDR0_CL_BIT		25
#define RC32434_DDR0_CL_MSK		0x06000000
#define RC32434_DDR0_DBM_BIT		27
#define RC32434_DDR0_DBM_MSK		0x08000000
#define RC32434_DDR0_SDS_BIT		28
#define RC32434_DDR0_SDS_MSK		0x10000000
#define RC32434_DDR0_ATP_BIT		29
#define RC32434_DDR0_ATP_MSK		0x60000000
#define RC32434_DDR0_RE_BIT		31
#define RC32434_DDR0_RE_MSK		0x80000000
#define RC32434_DDRC_MSK(x)		BIT_TO_MASK(x)
#define RC32434_DDRC_CES_BIT		0
#define RC32434_DDRC_ACE_BIT		1
#define RC32434_DCST_MSK(x)		BIT_TO_MASK(x)
#define RC32434_DCST_CS_BIT		0
#define RC32434_DCST_CS_MSK		0x00000003
#define RC32434_DCST_WE_BIT		2
#define RC32434_DCST_RAS_BIT		3
#define RC32434_DCST_CAS_BIT		4
#define RC32434_DSCT_CKE_BIT		5
#define RC32434_DSCT_BA_BIT		6
#define RC32434_DSCT_BA_MSK		0x000000c0
#define RC32434_QSC_DM_BIT		0
#define RC32434_QSC_DM_MSK		0x00000003
#define RC32434_QSC_DQSBS_BIT		2
#define RC32434_QSC_DQSBS_MSK		0x000000fc
#define RC32434_QSC_DB_BIT		8
#define RC32434_QSC_DB_MSK		0x00000100
#define RC32434_QSC_DBSP_BIT		9
#define RC32434_QSC_DBSP_MSK		0x01fffe00
#define RC32434_QSC_BDP_BIT		25
#define RC32434_QSC_BDP_MSK		0x7e000000
#define RC32434_LLC_EAO_BIT		0
#define RC32434_LLC_EAO_MSK		0x00000001
#define RC32434_LLC_EO_BIT		1
#define RC32434_LLC_EO_MSK		0x0000003e
#define RC32434_LLC_FS_BIT		6
#define RC32434_LLC_FS_MSK		0x000000c0
#define RC32434_LLC_AS_BIT		8
#define RC32434_LLC_AS_MSK		0x00000700
#define RC32434_LLC_SP_BIT		11
#define RC32434_LLC_SP_MSK		0x001ff800
#define RC32434_LLFC_MSK(x)		BIT_TO_MASK(x)
#define RC32434_LLFC_MEN_BIT		0
#define RC32434_LLFC_EAN_BIT		1
#define RC32434_LLFC_FF_BIT		2
#define RC32434_DLLTA_ADDR_BIT		2
#define RC32434_DLLTA_ADDR_MSK		0xfffffffc
#define RC32434_DLLED_MSK(x)		BIT_TO_MASK(x)
#define RC32434_DLLED_DBE_BIT		0
#define RC32434_DLLED_DTE_BIT		1