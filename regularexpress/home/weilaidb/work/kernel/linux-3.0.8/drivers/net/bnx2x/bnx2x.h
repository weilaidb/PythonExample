#define BNX2X_H
#define DRV_MODULE_VERSION      "1.62.12-0"
#define DRV_MODULE_RELDATE      "2011/03/20"
#define BNX2X_BC_VER            0x040200
#define BNX2X_MULTI_QUEUE
#define BNX2X_NEW_NAPI
#if defined(CONFIG_DCB)
#define BCM_DCBNL
#if defined(CONFIG_CNIC) || defined(CONFIG_CNIC_MODULE)
#define BCM_CNIC 1
#define BNX2X_MIN_MSIX_VEC_CNT 3
#define BNX2X_MSIX_VEC_FP_START 2
#define BNX2X_MIN_MSIX_VEC_CNT 2
#define BNX2X_MSIX_VEC_FP_START 1
#define DRV_MODULE_NAME		"bnx2x"
#define BNX2X_MSG_OFF			0
#define BNX2X_MSG_MCP			0x010000
#define BNX2X_MSG_STATS			0x020000
#define BNX2X_MSG_NVM			0x040000
#define BNX2X_MSG_DMAE			0x080000
#define BNX2X_MSG_SP			0x100000
#define BNX2X_MSG_FP			0x200000
#define DP_LEVEL			KERN_NOTICE
#define DP(__mask, __fmt, __args...)				\
do  while (0)
#define BNX2X_DBG_ERR(__fmt, __args...)				\
do  while (0)
#define BNX2X_ERR(__fmt, __args...)				\
do  while (0)
#define BNX2X_ERROR(__fmt, __args...) do  while (0)
#define BNX2X_DEV_INFO(__fmt, __args...)			 \
do  while (0)
void bnx2x_panic_dump(struct bnx2x *bp);
#define bnx2x_panic() do  while (0)
#define bnx2x_panic() do  while (0)
#define bnx2x_mc_addr(ha)      ((ha)->addr)
#define bnx2x_uc_addr(ha)      ((ha)->addr)
#define U64_LO(x)			(u32)(((u64)(x)) & 0xffffffff)
#define U64_HI(x)			(u32)(((u64)(x)) >> 32)
#define HILO_U64(hi, lo)		((((u64)(hi)) << 32) + (lo))
#define REG_ADDR(bp, offset)		((bp->regview) + (offset))
#define REG_RD(bp, offset)		readl(REG_ADDR(bp, offset))
#define REG_RD8(bp, offset)		readb(REG_ADDR(bp, offset))
#define REG_RD16(bp, offset)		readw(REG_ADDR(bp, offset))
#define REG_WR(bp, offset, val)		writel((u32)val, REG_ADDR(bp, offset))
#define REG_WR8(bp, offset, val)	writeb((u8)val, REG_ADDR(bp, offset))
#define REG_WR16(bp, offset, val)	writew((u16)val, REG_ADDR(bp, offset))
#define REG_RD_IND(bp, offset)		bnx2x_reg_rd_ind(bp, offset)
#define REG_WR_IND(bp, offset, val)	bnx2x_reg_wr_ind(bp, offset, val)
#define REG_RD_DMAE(bp, offset, valp, len32) \
do  while (0)
#define REG_WR_DMAE(bp, offset, valp, len32) \
do  while (0)
#define REG_WR_DMAE_LEN(bp, offset, valp, len32) \
REG_WR_DMAE(bp, offset, valp, len32)
#define VIRT_WR_DMAE_LEN(bp, data, addr, len32, le32_swap) \
do  while (0)
#define SHMEM_ADDR(bp, field)		(bp->common.shmem_base + \
offsetof(struct shmem_region, field))
#define SHMEM_RD(bp, field)		REG_RD(bp, SHMEM_ADDR(bp, field))
#define SHMEM_WR(bp, field, val)	REG_WR(bp, SHMEM_ADDR(bp, field), val)
#define SHMEM2_ADDR(bp, field)		(bp->common.shmem2_base + \
offsetof(struct shmem2_region, field))
#define SHMEM2_RD(bp, field)		REG_RD(bp, SHMEM2_ADDR(bp, field))
#define SHMEM2_WR(bp, field, val)	REG_WR(bp, SHMEM2_ADDR(bp, field), val)
#define MF_CFG_ADDR(bp, field)		(bp->common.mf_cfg_base + \
offsetof(struct mf_cfg, field))
#define MF2_CFG_ADDR(bp, field)		(bp->common.mf2_cfg_base + \
offsetof(struct mf2_cfg, field))
#define MF_CFG_RD(bp, field)		REG_RD(bp, MF_CFG_ADDR(bp, field))
#define MF_CFG_WR(bp, field, val)	REG_WR(bp,\
MF_CFG_ADDR(bp, field), (val))
#define MF2_CFG_RD(bp, field)		REG_RD(bp, MF2_CFG_ADDR(bp, field))
#define SHMEM2_HAS(bp, field)		((bp)->common.shmem2_base &&	\
(SHMEM2_RD((bp), size) >	\
offsetof(struct shmem2_region, field)))
#define EMAC_RD(bp, reg)		REG_RD(bp, emac_base + reg)
#define EMAC_WR(bp, reg, val)		REG_WR(bp, emac_base + reg, val)
#define HC_SP_INDEX_ETH_DEF_CONS		3
#define HC_SP_INDEX_EQ_CONS			7
#define HC_SP_INDEX_ETH_FCOE_TX_CQ_CONS		6
#define HC_SP_INDEX_ETH_FCOE_RX_CQ_CONS		4
#define HC_SP_INDEX_ETH_ISCSI_CQ_CONS		5
#define HC_SP_INDEX_ETH_ISCSI_RX_CQ_CONS	1
#define BNX2X_FCOE_L2_RX_INDEX \
(&bp->def_status_blk->sp_sb.\
index_values[HC_SP_INDEX_ETH_FCOE_RX_CQ_CONS])
#define BNX2X_FCOE_L2_TX_INDEX \
(&bp->def_status_blk->sp_sb.\
index_values[HC_SP_INDEX_ETH_FCOE_TX_CQ_CONS])
#define BNX2X_ISCSI_ETH_CL_ID		17
#define BNX2X_ISCSI_ETH_CID		17
#define BNX2X_FCOE_ETH_CL_ID		18
#define BNX2X_FCOE_ETH_CID		18
#define CNIC_CONTEXT_USE		1
#define FCOE_CONTEXT_USE		1
#define CNIC_CONTEXT_USE		0
#define FCOE_CONTEXT_USE		0
#define NONE_ETH_CONTEXT_USE	(FCOE_CONTEXT_USE)
#define AEU_IN_ATTN_BITS_PXPPCICLOCKCLIENT_PARITY_ERROR \
AEU_INPUTS_ATTN_BITS_PXPPCICLOCKCLIENT_PARITY_ERROR
#define SM_RX_ID			0
#define SM_TX_ID			1
struct sw_rx_bd ;
struct sw_tx_bd ;
struct sw_rx_page ;
union db_prod ;
#define BCM_PAGE_SHIFT			12
#define BCM_PAGE_SIZE			(1 << BCM_PAGE_SHIFT)
#define BCM_PAGE_MASK			(~(BCM_PAGE_SIZE - 1))
#define BCM_PAGE_ALIGN(addr)	(((addr) + BCM_PAGE_SIZE - 1) & BCM_PAGE_MASK)
#define PAGES_PER_SGE_SHIFT		0
#define PAGES_PER_SGE			(1 << PAGES_PER_SGE_SHIFT)
#define SGE_PAGE_SIZE			PAGE_SIZE
#define SGE_PAGE_SHIFT			PAGE_SHIFT
#define SGE_PAGE_ALIGN(addr)		PAGE_ALIGN((typeof(PAGE_SIZE))(addr))
#define NUM_RX_SGE_PAGES		2
#define RX_SGE_CNT		(BCM_PAGE_SIZE / sizeof(struct eth_rx_sge))
#define MAX_RX_SGE_CNT			(RX_SGE_CNT - 2)
#define RX_SGE_MASK			(RX_SGE_CNT - 1)
#define NUM_RX_SGE			(RX_SGE_CNT * NUM_RX_SGE_PAGES)
#define MAX_RX_SGE			(NUM_RX_SGE - 1)
#define NEXT_SGE_IDX(x)		((((x) & RX_SGE_MASK) == \
(MAX_RX_SGE_CNT - 1)) ? (x) + 3 : (x) + 1)
#define RX_SGE(x)			((x) & MAX_RX_SGE)
#define RX_SGE_MASK_ELEM_SZ		64
#define RX_SGE_MASK_ELEM_SHIFT		6
#define RX_SGE_MASK_ELEM_MASK		((u64)RX_SGE_MASK_ELEM_SZ - 1)
#define RX_SGE_ONES_MASK(idx) \
(((u64)0x1 << (((idx) & RX_SGE_MASK_ELEM_MASK) + 1)) - 1)
#define RX_SGE_MASK_ELEM_ONE_MASK	((u64)(~0))
#define RX_SGE_MASK_LEN			((NUM_RX_SGE_PAGES * RX_SGE_CNT) / \
RX_SGE_MASK_ELEM_SZ)
#define RX_SGE_MASK_LEN_MASK		(RX_SGE_MASK_LEN - 1)
#define NEXT_SGE_MASK_ELEM(el)		(((el) + 1) & RX_SGE_MASK_LEN_MASK)
union host_hc_status_block ;
struct bnx2x_fastpath ;
#define bnx2x_fp(bp, nr, var)		(bp->fp[nr].var)
#define BNX2X_FCOE_MINI_JUMBO_MTU	2500
#define FCOE_IDX			BNX2X_NUM_ETH_QUEUES(bp)
#define bnx2x_fcoe_fp(bp)		(&bp->fp[FCOE_IDX])
#define bnx2x_fcoe(bp, var)		(bnx2x_fcoe_fp(bp)->var)
#define IS_FCOE_FP(fp)			(fp->index == FCOE_IDX)
#define IS_FCOE_IDX(idx)		((idx) == FCOE_IDX)
#define IS_FCOE_FP(fp)		false
#define IS_FCOE_IDX(idx)	false
#define MAX_FETCH_BD			13
#define RX_COPY_THRESH			92
#define NUM_TX_RINGS			16
#define TX_DESC_CNT		(BCM_PAGE_SIZE / sizeof(union eth_tx_bd_types))
#define MAX_TX_DESC_CNT			(TX_DESC_CNT - 1)
#define NUM_TX_BD			(TX_DESC_CNT * NUM_TX_RINGS)
#define MAX_TX_BD			(NUM_TX_BD - 1)
#define MAX_TX_AVAIL			(MAX_TX_DESC_CNT * NUM_TX_RINGS - 2)
#define INIT_JUMBO_TX_RING_SIZE		MAX_TX_AVAIL
#define INIT_TX_RING_SIZE		MAX_TX_AVAIL
#define NEXT_TX_IDX(x)		((((x) & MAX_TX_DESC_CNT) == \
(MAX_TX_DESC_CNT - 1)) ? (x) + 2 : (x) + 1)
#define TX_BD(x)			((x) & MAX_TX_BD)
#define TX_BD_POFF(x)			((x) & MAX_TX_DESC_CNT)
#define NUM_RX_RINGS			8
#define RX_DESC_CNT		(BCM_PAGE_SIZE / sizeof(struct eth_rx_bd))
#define MAX_RX_DESC_CNT			(RX_DESC_CNT - 2)
#define RX_DESC_MASK			(RX_DESC_CNT - 1)
#define NUM_RX_BD			(RX_DESC_CNT * NUM_RX_RINGS)
#define MAX_RX_BD			(NUM_RX_BD - 1)
#define MAX_RX_AVAIL			(MAX_RX_DESC_CNT * NUM_RX_RINGS - 2)
#define MIN_RX_SIZE_TPA			72
#define MIN_RX_SIZE_NONTPA		10
#define INIT_JUMBO_RX_RING_SIZE		MAX_RX_AVAIL
#define INIT_RX_RING_SIZE		MAX_RX_AVAIL
#define NEXT_RX_IDX(x)		((((x) & RX_DESC_MASK) == \
(MAX_RX_DESC_CNT - 1)) ? (x) + 3 : (x) + 1)
#define RX_BD(x)			((x) & MAX_RX_BD)
#define NUM_RCQ_RINGS			(NUM_RX_RINGS * 4)
#define RCQ_DESC_CNT		(BCM_PAGE_SIZE / sizeof(union eth_rx_cqe))
#define MAX_RCQ_DESC_CNT		(RCQ_DESC_CNT - 1)
#define NUM_RCQ_BD			(RCQ_DESC_CNT * NUM_RCQ_RINGS)
#define MAX_RCQ_BD			(NUM_RCQ_BD - 1)
#define MAX_RCQ_AVAIL			(MAX_RCQ_DESC_CNT * NUM_RCQ_RINGS - 2)
#define NEXT_RCQ_IDX(x)		((((x) & MAX_RCQ_DESC_CNT) == \
(MAX_RCQ_DESC_CNT - 1)) ? (x) + 2 : (x) + 1)
#define RCQ_BD(x)			((x) & MAX_RCQ_BD)
#define SUB_S16(a, b)			(s16)((s16)(a) - (s16)(b))
#define __SGE_MASK_SET_BIT(el, bit) \
do  while (0)
#define __SGE_MASK_CLEAR_BIT(el, bit) \
do  while (0)
#define SGE_MASK_SET_BIT(fp, idx) \
__SGE_MASK_SET_BIT(fp->sge_mask[(idx) >> RX_SGE_MASK_ELEM_SHIFT], \
((idx) & RX_SGE_MASK_ELEM_MASK))
#define SGE_MASK_CLEAR_BIT(fp, idx) \
__SGE_MASK_CLEAR_BIT(fp->sge_mask[(idx) >> RX_SGE_MASK_ELEM_SHIFT], \
((idx) & RX_SGE_MASK_ELEM_MASK))
#define SW_CID(x)			(le32_to_cpu(x) & \
(COMMON_RAMROD_ETH_RX_CQE_CID >> 7))
#define CQE_CMD(x)			(le32_to_cpu(x) >> \
COMMON_RAMROD_ETH_RX_CQE_CMD_ID_SHIFT)
#define BD_UNMAP_ADDR(bd)		HILO_U64(le32_to_cpu((bd)->addr_hi), \
le32_to_cpu((bd)->addr_lo))
#define BD_UNMAP_LEN(bd)		(le16_to_cpu((bd)->nbytes))
#define BNX2X_DB_MIN_SHIFT		3
#define BNX2X_DB_SHIFT			7
#define DPM_TRIGER_TYPE			0x40
#define DOORBELL(bp, cid, val) \
do  while (0)
#define SKB_CS_OFF(skb)		(offsetof(struct tcphdr, check) - \
skb->csum_offset)
#define SKB_CS(skb)		(*(u16 *)(skb_transport_header(skb) + \
skb->csum_offset))
#define pbd_tcp_flags(skb)	(ntohl(tcp_flag_word(tcp_hdr(skb)))>>16 & 0xff)
#define XMIT_PLAIN			0
#define XMIT_CSUM_V4			0x1
#define XMIT_CSUM_V6			0x2
#define XMIT_CSUM_TCP			0x4
#define XMIT_GSO_V4			0x8
#define XMIT_GSO_V6			0x10
#define XMIT_CSUM			(XMIT_CSUM_V4 | XMIT_CSUM_V6)
#define XMIT_GSO			(XMIT_GSO_V4 | XMIT_GSO_V6)
#define CQE_TYPE(cqe_fp_flags)	((cqe_fp_flags) & ETH_FAST_PATH_RX_CQE_TYPE)
#define TPA_TYPE_START			ETH_FAST_PATH_RX_CQE_START_FLG
#define TPA_TYPE_END			ETH_FAST_PATH_RX_CQE_END_FLG
#define TPA_TYPE(cqe_fp_flags)		((cqe_fp_flags) & \
(TPA_TYPE_START | TPA_TYPE_END))
#define ETH_RX_ERROR_FALGS		ETH_FAST_PATH_RX_CQE_PHY_DECODE_ERR_FLG
#define BNX2X_IP_CSUM_ERR(cqe) \
(!((cqe)->fast_path_cqe.status_flags & \
ETH_FAST_PATH_RX_CQE_IP_XSUM_NO_VALIDATION_FLG) && \
((cqe)->fast_path_cqe.type_error_flags & \
ETH_FAST_PATH_RX_CQE_IP_BAD_XSUM_FLG))
#define BNX2X_L4_CSUM_ERR(cqe) \
(!((cqe)->fast_path_cqe.status_flags & \
ETH_FAST_PATH_RX_CQE_L4_XSUM_NO_VALIDATION_FLG) && \
((cqe)->fast_path_cqe.type_error_flags & \
ETH_FAST_PATH_RX_CQE_L4_BAD_XSUM_FLG))
#define BNX2X_RX_CSUM_OK(cqe) \
(!(BNX2X_L4_CSUM_ERR(cqe) || BNX2X_IP_CSUM_ERR(cqe)))
#define BNX2X_PRS_FLAG_OVERETH_IPV4(flags) \
(((le16_to_cpu(flags) & \
PARSING_FLAGS_OVER_ETHERNET_PROTOCOL) >> \
PARSING_FLAGS_OVER_ETHERNET_PROTOCOL_SHIFT) \
== PRS_FLAG_OVERETH_IPV4)
#define BNX2X_RX_SUM_FIX(cqe) \
BNX2X_PRS_FLAG_OVERETH_IPV4(cqe->fast_path_cqe.pars_flags.flags)
#define U_SB_ETH_RX_CQ_INDEX		1
#define U_SB_ETH_RX_BD_INDEX		2
#define C_SB_ETH_TX_CQ_INDEX		5
#define BNX2X_RX_SB_INDEX \
(&fp->sb_index_values[U_SB_ETH_RX_CQ_INDEX])
#define BNX2X_TX_SB_INDEX \
(&fp->sb_index_values[C_SB_ETH_TX_CQ_INDEX])
struct bnx2x_common ;
#define BNX2X_IGU_STAS_MSG_VF_CNT 64
#define BNX2X_IGU_STAS_MSG_PF_CNT 4
struct bnx2x_port ;
enum ;
#define NIG_LLH_FUNC_MEM_SIZE		16
#define NIG_LLH_FUNC_MEM_MAX_OFFSET	8
#define BNX2X_VF_ID_INVALID	0xFF
#define FP_SB_MAX_E1x		16
#define FP_SB_MAX_E2		16
#define L2_FP_COUNT(cid_cnt)	((cid_cnt) - CNIC_CONTEXT_USE)
#define FP_SB_COUNT(cid_cnt)	((cid_cnt) - FCOE_CONTEXT_USE)
#define NUM_IGU_SB_REQUIRED(cid_cnt) \
(FP_SB_COUNT(cid_cnt) - NONE_ETH_CONTEXT_USE)
union cdu_context ;
#define CDU_ILT_PAGE_SZ_HW	3
#define CDU_ILT_PAGE_SZ		(4096 << CDU_ILT_PAGE_SZ_HW)
#define ILT_PAGE_CIDS		(CDU_ILT_PAGE_SZ / sizeof(union cdu_context))
#define CNIC_ISCSI_CID_MAX	256
#define CNIC_FCOE_CID_MAX	2048
#define CNIC_CID_MAX		(CNIC_ISCSI_CID_MAX + CNIC_FCOE_CID_MAX)
#define CNIC_ILT_LINES		DIV_ROUND_UP(CNIC_CID_MAX, ILT_PAGE_CIDS)
#define QM_ILT_PAGE_SZ_HW	3
#define QM_ILT_PAGE_SZ		(4096 << QM_ILT_PAGE_SZ_HW)
#define QM_CID_ROUND		1024
#define TM_ILT_PAGE_SZ_HW	2
#define TM_ILT_PAGE_SZ		(4096 << TM_ILT_PAGE_SZ_HW)
#define TM_CONN_NUM		1024
#define TM_ILT_SZ		(8 * TM_CONN_NUM)
#define TM_ILT_LINES		DIV_ROUND_UP(TM_ILT_SZ, TM_ILT_PAGE_SZ)
#define SRC_ILT_PAGE_SZ_HW	3
#define SRC_ILT_PAGE_SZ		(4096 << SRC_ILT_PAGE_SZ_HW)
#define SRC_HASH_BITS		10
#define SRC_CONN_NUM		(1 << SRC_HASH_BITS)
#define SRC_ILT_SZ		(sizeof(struct src_ent) * SRC_CONN_NUM)
#define SRC_T2_SZ		SRC_ILT_SZ
#define SRC_ILT_LINES		DIV_ROUND_UP(SRC_ILT_SZ, SRC_ILT_PAGE_SZ)
#define MAX_DMAE_C			8
struct bnx2x_slowpath ;
#define bnx2x_sp(bp, var)		(&bp->slowpath->var)
#define bnx2x_sp_mapping(bp, var) \
(bp->slowpath_mapping + offsetof(struct bnx2x_slowpath, var))
#define MAX_DYNAMIC_ATTN_GRPS		8
struct attn_route ;
struct iro ;
struct hw_context ;
struct bnx2x_ilt;
typedef enum  bnx2x_recovery_state_t;
#define NUM_EQ_PAGES		1
#define EQ_DESC_CNT_PAGE	(BCM_PAGE_SIZE / sizeof(union event_ring_elem))
#define EQ_DESC_MAX_PAGE	(EQ_DESC_CNT_PAGE - 1)
#define NUM_EQ_DESC		(EQ_DESC_CNT_PAGE * NUM_EQ_PAGES)
#define EQ_DESC_MASK		(NUM_EQ_DESC - 1)
#define MAX_EQ_AVAIL		(EQ_DESC_MAX_PAGE * NUM_EQ_PAGES - 2)
#define NEXT_EQ_IDX(x)		((((x) & EQ_DESC_MAX_PAGE) == \
(EQ_DESC_MAX_PAGE - 1)) ? (x) + 2 : (x) + 1)
#define EQ_DESC(x)		((x) & EQ_DESC_MASK)
#define BNX2X_EQ_INDEX \
(&bp->def_status_blk->sp_sb.\
index_values[HC_SP_INDEX_EQ_CONS])
struct bnx2x_link_report_data ;
enum ;
struct bnx2x ;
#define QUEUE_FLG_TPA		0x0001
#define QUEUE_FLG_CACHE_ALIGN	0x0002
#define QUEUE_FLG_STATS		0x0004
#define QUEUE_FLG_OV		0x0008
#define QUEUE_FLG_VLAN		0x0010
#define QUEUE_FLG_COS		0x0020
#define QUEUE_FLG_HC		0x0040
#define QUEUE_FLG_DHC		0x0080
#define QUEUE_FLG_OOO		0x0100
#define QUEUE_DROP_IP_CS_ERR	TSTORM_ETH_CLIENT_CONFIG_DROP_IP_CS_ERR
#define QUEUE_DROP_TCP_CS_ERR	TSTORM_ETH_CLIENT_CONFIG_DROP_TCP_CS_ERR
#define QUEUE_DROP_TTL0		TSTORM_ETH_CLIENT_CONFIG_DROP_TTL0
#define QUEUE_DROP_UDP_CS_ERR	TSTORM_ETH_CLIENT_CONFIG_DROP_UDP_CS_ERR
#define RSS_IPV4_CAP		0x0001
#define RSS_IPV4_TCP_CAP	0x0002
#define RSS_IPV6_CAP		0x0004
#define RSS_IPV6_TCP_CAP	0x0008
#define BNX2X_NUM_QUEUES(bp)	(bp->num_queues)
#define BNX2X_NUM_ETH_QUEUES(bp) (BNX2X_NUM_QUEUES(bp) - NONE_ETH_CONTEXT_USE)
#define BNX2X_NUM_STAT_QUEUES(bp) (NO_FCOE(bp) ? BNX2X_NUM_ETH_QUEUES(bp) : \
(BNX2X_NUM_ETH_QUEUES(bp) + FCOE_CONTEXT_USE))
#define is_multi(bp)		(BNX2X_NUM_QUEUES(bp) > 1)
#define BNX2X_MAX_QUEUES(bp)	(bp->igu_sb_cnt - CNIC_CONTEXT_USE)
#define RSS_IPV4_CAP_MASK						\
TSTORM_ETH_FUNCTION_COMMON_CONFIG_RSS_IPV4_CAPABILITY
#define RSS_IPV4_TCP_CAP_MASK						\
TSTORM_ETH_FUNCTION_COMMON_CONFIG_RSS_IPV4_TCP_CAPABILITY
#define RSS_IPV6_CAP_MASK						\
TSTORM_ETH_FUNCTION_COMMON_CONFIG_RSS_IPV6_CAPABILITY
#define RSS_IPV6_TCP_CAP_MASK						\
TSTORM_ETH_FUNCTION_COMMON_CONFIG_RSS_IPV6_TCP_CAPABILITY
#define FUNC_FLG_STATS		0x0001
#define FUNC_FLG_TPA		0x0002
#define FUNC_FLG_SPQ		0x0004
#define FUNC_FLG_LEADING	0x0008
struct rxq_pause_params ;
struct bnx2x_rxq_init_params ;
struct bnx2x_txq_init_params ;
struct bnx2x_client_ramrod_params ;
struct bnx2x_client_init_params ;
struct bnx2x_rss_params ;
struct bnx2x_func_init_params ;
#define for_each_eth_queue(bp, var) \
for (var = 0; var < BNX2X_NUM_ETH_QUEUES(bp); var++)
#define for_each_nondefault_eth_queue(bp, var) \
for (var = 1; var < BNX2X_NUM_ETH_QUEUES(bp); var++)
#define for_each_napi_queue(bp, var) \
for (var = 0; \
var < BNX2X_NUM_ETH_QUEUES(bp) + FCOE_CONTEXT_USE; var++) \
if (skip_queue(bp, var))	\
continue;		\
else
#define for_each_queue(bp, var) \
for (var = 0; var < BNX2X_NUM_QUEUES(bp); var++) \
if (skip_queue(bp, var))	\
continue;		\
else
#define for_each_rx_queue(bp, var) \
for (var = 0; var < BNX2X_NUM_QUEUES(bp); var++) \
if (skip_rx_queue(bp, var))	\
continue;		\
else
#define for_each_tx_queue(bp, var) \
for (var = 0; var < BNX2X_NUM_QUEUES(bp); var++) \
if (skip_tx_queue(bp, var))	\
continue;		\
else
#define for_each_nondefault_queue(bp, var) \
for (var = 1; var < BNX2X_NUM_QUEUES(bp); var++) \
if (skip_queue(bp, var))	\
continue;		\
else
#define skip_rx_queue(bp, idx)	(NO_FCOE(bp) && IS_FCOE_IDX(idx))
#define skip_tx_queue(bp, idx)	(NO_FCOE(bp) && IS_FCOE_IDX(idx))
#define skip_queue(bp, idx)	(NO_FCOE(bp) && IS_FCOE_IDX(idx))
#define WAIT_RAMROD_POLL	0x01
#define WAIT_RAMROD_COMMON	0x02
void bnx2x_read_mf_cfg(struct bnx2x *bp);
void bnx2x_read_dmae(struct bnx2x *bp, u32 src_addr, u32 len32);
void bnx2x_write_dmae(struct bnx2x *bp, dma_addr_t dma_addr, u32 dst_addr,
u32 len32);
void bnx2x_post_dmae(struct bnx2x *bp, struct dmae_command *dmae, int idx);
u32 bnx2x_dmae_opcode_add_comp(u32 opcode, u8 comp_type);
u32 bnx2x_dmae_opcode_clr_src_reset(u32 opcode);
u32 bnx2x_dmae_opcode(struct bnx2x *bp, u8 src_type, u8 dst_type,
bool with_comp, u8 comp_type);
int bnx2x_get_gpio(struct bnx2x *bp, int gpio_num, u8 port);
int bnx2x_set_gpio(struct bnx2x *bp, int gpio_num, u32 mode, u8 port);
int bnx2x_set_gpio_int(struct bnx2x *bp, int gpio_num, u32 mode, u8 port);
u32 bnx2x_fw_command(struct bnx2x *bp, u32 command, u32 param);
void bnx2x_calc_fc_adv(struct bnx2x *bp);
int bnx2x_sp_post(struct bnx2x *bp, int command, int cid,
u32 data_hi, u32 data_lo, int common);
void bnx2x_invalidate_e1_mc_list(struct bnx2x *bp);
void bnx2x_invalidate_e1h_mc_list(struct bnx2x *bp);
void bnx2x_invalidate_uc_list(struct bnx2x *bp);
void bnx2x_update_coalesce(struct bnx2x *bp);
int bnx2x_get_link_cfg_idx(struct bnx2x *bp);
static inline u32 reg_poll(struct bnx2x *bp, u32 reg, u32 expected, int ms,
int wait)
#define BNX2X_ILT_ZALLOC(x, y, size) \
do  while (0)
#define BNX2X_ILT_FREE(x, y, size) \
do  while (0)
#define ILOG2(x)	(ilog2((x)))
#define ILT_NUM_PAGE_ENTRIES	(3072)
#define ILT_PER_FUNC		(ILT_NUM_PAGE_ENTRIES/8)
#define FUNC_ILT_BASE(func)	(func * ILT_PER_FUNC)
#define ONCHIP_ADDR1(x)		((u32)(((u64)x >> 12) & 0xFFFFFFFF))
#define ONCHIP_ADDR2(x)		((u32)((1 << 20) | ((u64)x >> 44)))
#define LOAD_NORMAL			0
#define LOAD_OPEN			1
#define LOAD_DIAG			2
#define UNLOAD_NORMAL			0
#define UNLOAD_CLOSE			1
#define UNLOAD_RECOVERY			2
#define DMAE_TIMEOUT			-1
#define DMAE_PCI_ERROR			-2
#define DMAE_NOT_RDY			-3
#define DMAE_PCI_ERR_FLAG		0x80000000
#define DMAE_SRC_PCI			0
#define DMAE_SRC_GRC			1
#define DMAE_DST_NONE			0
#define DMAE_DST_PCI			1
#define DMAE_DST_GRC			2
#define DMAE_COMP_PCI			0
#define DMAE_COMP_GRC			1
#define DMAE_COMP_REGULAR		0
#define DMAE_COM_SET_ERR		1
#define DMAE_CMD_SRC_PCI		(DMAE_SRC_PCI << \
DMAE_COMMAND_SRC_SHIFT)
#define DMAE_CMD_SRC_GRC		(DMAE_SRC_GRC << \
DMAE_COMMAND_SRC_SHIFT)
#define DMAE_CMD_DST_PCI		(DMAE_DST_PCI << \
DMAE_COMMAND_DST_SHIFT)
#define DMAE_CMD_DST_GRC		(DMAE_DST_GRC << \
DMAE_COMMAND_DST_SHIFT)
#define DMAE_CMD_C_DST_PCI		(DMAE_COMP_PCI << \
DMAE_COMMAND_C_DST_SHIFT)
#define DMAE_CMD_C_DST_GRC		(DMAE_COMP_GRC << \
DMAE_COMMAND_C_DST_SHIFT)
#define DMAE_CMD_C_ENABLE		DMAE_COMMAND_C_TYPE_ENABLE
#define DMAE_CMD_ENDIANITY_NO_SWAP	(0 << DMAE_COMMAND_ENDIANITY_SHIFT)
#define DMAE_CMD_ENDIANITY_B_SWAP	(1 << DMAE_COMMAND_ENDIANITY_SHIFT)
#define DMAE_CMD_ENDIANITY_DW_SWAP	(2 << DMAE_COMMAND_ENDIANITY_SHIFT)
#define DMAE_CMD_ENDIANITY_B_DW_SWAP	(3 << DMAE_COMMAND_ENDIANITY_SHIFT)
#define DMAE_CMD_PORT_0			0
#define DMAE_CMD_PORT_1			DMAE_COMMAND_PORT
#define DMAE_CMD_SRC_RESET		DMAE_COMMAND_SRC_RESET
#define DMAE_CMD_DST_RESET		DMAE_COMMAND_DST_RESET
#define DMAE_CMD_E1HVN_SHIFT		DMAE_COMMAND_E1HVN_SHIFT
#define DMAE_SRC_PF			0
#define DMAE_SRC_VF			1
#define DMAE_DST_PF			0
#define DMAE_DST_VF			1
#define DMAE_C_SRC			0
#define DMAE_C_DST			1
#define DMAE_LEN32_RD_MAX		0x80
#define DMAE_LEN32_WR_MAX(bp)		(CHIP_IS_E1(bp) ? 0x400 : 0x2000)
#define DMAE_COMP_VAL			0x60d0d0ae
#define MAX_DMAE_C_PER_PORT		8
#define INIT_DMAE_C(bp)			(BP_PORT(bp) * MAX_DMAE_C_PER_PORT + \
BP_E1HVN(bp))
#define PMF_DMAE_C(bp)			(BP_PORT(bp) * MAX_DMAE_C_PER_PORT + \
E1HVN_MAX)
#define PCICFG_LINK_WIDTH		0x1f00000
#define PCICFG_LINK_WIDTH_SHIFT		20
#define PCICFG_LINK_SPEED		0xf0000
#define PCICFG_LINK_SPEED_SHIFT		16
#define BNX2X_NUM_TESTS			7
#define BNX2X_PHY_LOOPBACK		0
#define BNX2X_MAC_LOOPBACK		1
#define BNX2X_PHY_LOOPBACK_FAILED	1
#define BNX2X_MAC_LOOPBACK_FAILED	2
#define BNX2X_LOOPBACK_FAILED		(BNX2X_MAC_LOOPBACK_FAILED | \
BNX2X_PHY_LOOPBACK_FAILED)
#define STROM_ASSERT_ARRAY_SIZE		50
#define HW_CID(bp, x)			((BP_PORT(bp) << 23) | \
(BP_E1HVN(bp) << 17) | (x))
#define SP_DESC_CNT		(BCM_PAGE_SIZE / sizeof(struct eth_spe))
#define MAX_SP_DESC_CNT			(SP_DESC_CNT - 1)
#define BNX2X_BTR			4
#define MAX_SPQ_PENDING			8
#define DEF_MIN_RATE					100
#define RS_PERIODIC_TIMEOUT_USEC			400
#define QM_ARB_BYTES					160000
#define MIN_RES						100
#define MIN_ABOVE_THRESH				32768
#define T_FAIR_COEF	((MIN_ABOVE_THRESH +  QM_ARB_BYTES) * 8 * MIN_RES)
#define FAIR_MEM					2
#define ATTN_NIG_FOR_FUNC		(1L << 8)
#define ATTN_SW_TIMER_4_FUNC		(1L << 9)
#define GPIO_2_FUNC			(1L << 10)
#define GPIO_3_FUNC			(1L << 11)
#define GPIO_4_FUNC			(1L << 12)
#define ATTN_GENERAL_ATTN_1		(1L << 13)
#define ATTN_GENERAL_ATTN_2		(1L << 14)
#define ATTN_GENERAL_ATTN_3		(1L << 15)
#define ATTN_GENERAL_ATTN_4		(1L << 13)
#define ATTN_GENERAL_ATTN_5		(1L << 14)
#define ATTN_GENERAL_ATTN_6		(1L << 15)
#define ATTN_HARD_WIRED_MASK		0xff00
#define ATTENTION_ID			4
#define BNX2X_PMF_LINK_ASSERT \
GENERAL_ATTEN_OFFSET(LINK_SYNC_ATTENTION_BIT_FUNC_0 + BP_FUNC(bp))
#define BNX2X_MC_ASSERT_BITS \
(GENERAL_ATTEN_OFFSET(TSTORM_FATAL_ASSERT_ATTENTION_BIT) | \
GENERAL_ATTEN_OFFSET(USTORM_FATAL_ASSERT_ATTENTION_BIT) | \
GENERAL_ATTEN_OFFSET(CSTORM_FATAL_ASSERT_ATTENTION_BIT) | \
GENERAL_ATTEN_OFFSET(XSTORM_FATAL_ASSERT_ATTENTION_BIT))
#define BNX2X_MCP_ASSERT \
GENERAL_ATTEN_OFFSET(MCP_FATAL_ASSERT_ATTENTION_BIT)
#define BNX2X_GRC_TIMEOUT	GENERAL_ATTEN_OFFSET(LATCHED_ATTN_TIMEOUT_GRC)
#define BNX2X_GRC_RSV		(GENERAL_ATTEN_OFFSET(LATCHED_ATTN_RBCR) | \
GENERAL_ATTEN_OFFSET(LATCHED_ATTN_RBCT) | \
GENERAL_ATTEN_OFFSET(LATCHED_ATTN_RBCN) | \
GENERAL_ATTEN_OFFSET(LATCHED_ATTN_RBCU) | \
GENERAL_ATTEN_OFFSET(LATCHED_ATTN_RBCP) | \
GENERAL_ATTEN_OFFSET(LATCHED_ATTN_RSVD_GRC))
#define HW_INTERRUT_ASSERT_SET_0 \
(AEU_INPUTS_ATTN_BITS_TSDM_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_TCM_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_TSEMI_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_PBF_HW_INTERRUPT)
#define HW_PRTY_ASSERT_SET_0	(AEU_INPUTS_ATTN_BITS_BRB_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_PARSER_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_TSDM_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_SEARCHER_PARITY_ERROR |\
AEU_INPUTS_ATTN_BITS_TSEMI_PARITY_ERROR)
#define HW_INTERRUT_ASSERT_SET_1 \
(AEU_INPUTS_ATTN_BITS_QM_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_TIMERS_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_XSDM_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_XCM_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_XSEMI_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_USDM_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_UCM_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_USEMI_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_UPB_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_CSDM_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_CCM_HW_INTERRUPT)
#define HW_PRTY_ASSERT_SET_1	(AEU_INPUTS_ATTN_BITS_PBCLIENT_PARITY_ERROR |\
AEU_INPUTS_ATTN_BITS_QM_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_XSDM_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_XSEMI_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_DOORBELLQ_PARITY_ERROR |\
AEU_INPUTS_ATTN_BITS_VAUX_PCI_CORE_PARITY_ERROR |\
AEU_INPUTS_ATTN_BITS_DEBUG_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_USDM_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_USEMI_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_UPB_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_CSDM_PARITY_ERROR)
#define HW_INTERRUT_ASSERT_SET_2 \
(AEU_INPUTS_ATTN_BITS_CSEMI_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_CDU_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_DMAE_HW_INTERRUPT | \
AEU_INPUTS_ATTN_BITS_PXPPCICLOCKCLIENT_HW_INTERRUPT |\
AEU_INPUTS_ATTN_BITS_MISC_HW_INTERRUPT)
#define HW_PRTY_ASSERT_SET_2	(AEU_INPUTS_ATTN_BITS_CSEMI_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_PXP_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_PXPPCICLOCKCLIENT_PARITY_ERROR |\
AEU_INPUTS_ATTN_BITS_CFC_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_CDU_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_IGU_PARITY_ERROR | \
AEU_INPUTS_ATTN_BITS_MISC_PARITY_ERROR)
#define HW_PRTY_ASSERT_SET_3 (AEU_INPUTS_ATTN_BITS_MCP_LATCHED_ROM_PARITY | \
AEU_INPUTS_ATTN_BITS_MCP_LATCHED_UMP_RX_PARITY | \
AEU_INPUTS_ATTN_BITS_MCP_LATCHED_UMP_TX_PARITY | \
AEU_INPUTS_ATTN_BITS_MCP_LATCHED_SCPAD_PARITY)
#define RSS_FLAGS(bp) \
(TSTORM_ETH_FUNCTION_COMMON_CONFIG_RSS_IPV4_CAPABILITY | \
TSTORM_ETH_FUNCTION_COMMON_CONFIG_RSS_IPV4_TCP_CAPABILITY | \
TSTORM_ETH_FUNCTION_COMMON_CONFIG_RSS_IPV6_CAPABILITY | \
TSTORM_ETH_FUNCTION_COMMON_CONFIG_RSS_IPV6_TCP_CAPABILITY | \
(bp->multi_mode << \
TSTORM_ETH_FUNCTION_COMMON_CONFIG_RSS_MODE_SHIFT))
#define MULTI_MASK			0x7f
#define BNX2X_SP_DSB_INDEX \
(&bp->def_status_blk->sp_sb.\
index_values[HC_SP_INDEX_ETH_DEF_CONS])
#define SET_FLAG(value, mask, flag) \
do  while (0)
#define GET_FLAG(value, mask) \
(((value) &= (mask)) >> (mask##_SHIFT))
#define GET_FIELD(value, fname) \
(((value) & (fname##_MASK)) >> (fname##_SHIFT))
#define CAM_IS_INVALID(x) \
(GET_FLAG(x.flags, \
MAC_CONFIGURATION_ENTRY_ACTION_TYPE) == \
(T_ETH_MAC_COMMAND_INVALIDATE))
#define MC_HASH_SIZE			8
#define MC_HASH_OFFSET(bp, i)		(BAR_TSTRORM_INTMEM + \
TSTORM_APPROXIMATE_MATCH_MULTICAST_FILTERING_OFFSET(BP_FUNC(bp)) + i*4)
#define PXP2_REG_PXP2_INT_STS		PXP2_REG_PXP2_INT_STS_0
#define ETH_MAX_RX_CLIENTS_E2		ETH_MAX_RX_CLIENTS_E1H
#define BNX2X_VPD_LEN			128
#define VENDOR_ID_LEN			4
#define CMNG_FNS_NONE		0
#define CMNG_FNS_MINMAX		1
#define HC_SEG_ACCESS_DEF		0
#define HC_SEG_ACCESS_ATTN		4
#define HC_SEG_ACCESS_NORM		0
#define BNX2X_EXTERN
#define BNX2X_EXTERN extern
BNX2X_EXTERN int load_count[2][3];
extern void bnx2x_set_ethtool_ops(struct net_device *netdev);
void bnx2x_push_indir_table(struct bnx2x *bp);
