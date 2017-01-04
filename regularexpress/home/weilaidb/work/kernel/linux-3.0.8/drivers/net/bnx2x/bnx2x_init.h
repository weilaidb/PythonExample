#define BNX2X_INIT_H
#define STORM_INTMEM_SIZE_E1		0x5800
#define STORM_INTMEM_SIZE_E1H		0x10000
#define STORM_INTMEM_SIZE(bp) ((CHIP_IS_E1(bp) ? STORM_INTMEM_SIZE_E1 : \
STORM_INTMEM_SIZE_E1H) / 4)
#define OP_RD			0x1
#define OP_WR			0x2
#define OP_IW			0x3
#define OP_SW			0x4
#define OP_SI			0x5
#define OP_ZR			0x6
#define OP_ZP			0x7
#define OP_WR_64		0x8
#define OP_WB			0x9
#define OP_WR_EMUL		0xa
#define OP_WR_FPGA		0xb
#define OP_WR_ASIC		0xc
#define COMMON_STAGE		0
#define PORT0_STAGE		1
#define PORT1_STAGE		2
#define FUNC0_STAGE		3
#define FUNC1_STAGE		4
#define FUNC2_STAGE		5
#define FUNC3_STAGE		6
#define FUNC4_STAGE		7
#define FUNC5_STAGE		8
#define FUNC6_STAGE		9
#define FUNC7_STAGE		10
#define STAGE_IDX_MAX		11
#define STAGE_START		0
#define STAGE_END		1
#define PRS_BLOCK		0
#define SRCH_BLOCK		1
#define TSDM_BLOCK		2
#define TCM_BLOCK		3
#define BRB1_BLOCK		4
#define TSEM_BLOCK		5
#define PXPCS_BLOCK		6
#define EMAC0_BLOCK		7
#define EMAC1_BLOCK		8
#define DBU_BLOCK		9
#define MISC_BLOCK		10
#define DBG_BLOCK		11
#define NIG_BLOCK		12
#define MCP_BLOCK		13
#define UPB_BLOCK		14
#define CSDM_BLOCK		15
#define USDM_BLOCK		16
#define CCM_BLOCK		17
#define UCM_BLOCK		18
#define USEM_BLOCK		19
#define CSEM_BLOCK		20
#define XPB_BLOCK		21
#define DQ_BLOCK		22
#define TIMERS_BLOCK		23
#define XSDM_BLOCK		24
#define QM_BLOCK		25
#define PBF_BLOCK		26
#define XCM_BLOCK		27
#define XSEM_BLOCK		28
#define CDU_BLOCK		29
#define DMAE_BLOCK		30
#define PXP_BLOCK		31
#define CFC_BLOCK		32
#define HC_BLOCK		33
#define PXP2_BLOCK		34
#define MISC_AEU_BLOCK		35
#define PGLUE_B_BLOCK		36
#define IGU_BLOCK		37
#define ATC_BLOCK		38
#define QM_4PORT_BLOCK		39
#define XSEM_4PORT_BLOCK		40
#define BLOCK_OPS_IDX(block, stage, end) \
(2*(((block)*STAGE_IDX_MAX) + (stage)) + (end))
struct raw_op ;
struct op_read ;
struct op_write ;
struct op_string_write ;
struct op_zero ;
union init_op ;
#define INITOP_SET		0
#define INITOP_CLEAR		1
#define INITOP_INIT		2
struct ilt_line ;
struct ilt_client_info ;
struct bnx2x_ilt ;
struct src_ent ;
#define BLOCK_PRTY_INFO(block, en_mask, m1, m1h, m2) \
#define BLOCK_PRTY_INFO_0(block, en_mask, m1, m1h, m2) \
#define BLOCK_PRTY_INFO_1(block, en_mask, m1, m1h, m2) \
static const struct  bnx2x_blocks_parity_data[] = ;
#define MISC_AEU_ENABLE_MCP_PRTY_BITS	\
(AEU_INPUTS_ATTN_BITS_MCP_LATCHED_ROM_PARITY | \
AEU_INPUTS_ATTN_BITS_MCP_LATCHED_UMP_RX_PARITY | \
AEU_INPUTS_ATTN_BITS_MCP_LATCHED_UMP_TX_PARITY | \
AEU_INPUTS_ATTN_BITS_MCP_LATCHED_SCPAD_PARITY)
static const u32 mcp_attn_ctl_regs[] = ;
static inline void bnx2x_set_mcp_parity(struct bnx2x *bp, u8 enable)
static inline u32 bnx2x_parity_reg_mask(struct bnx2x *bp, int idx)
static inline void bnx2x_disable_blocks_parity(struct bnx2x *bp)
static inline void bnx2x_clear_blocks_parity(struct bnx2x *bp)
static inline void bnx2x_enable_blocks_parity(struct bnx2x *bp)
