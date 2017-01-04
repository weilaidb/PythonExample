#define CNIC_H
#define HC_INDEX_ISCSI_EQ_CONS			6
#define HC_INDEX_FCOE_EQ_CONS			3
#define HC_SP_INDEX_ETH_ISCSI_CQ_CONS		5
#define HC_SP_INDEX_ETH_ISCSI_RX_CQ_CONS	1
#define KWQ_PAGE_CNT	4
#define KCQ_PAGE_CNT	16
#define KWQ_CID 		24
#define KCQ_CID 		25
#define L5_KRNLQ_FLAGS	0x00000000
#define L5_KRNLQ_SIZE	0x00000000
#define L5_KRNLQ_TYPE	0x00000000
#define KRNLQ_FLAGS_PG_SZ					(0xf<<0)
#define KRNLQ_FLAGS_PG_SZ_256					(0<<0)
#define KRNLQ_FLAGS_PG_SZ_512					(1<<0)
#define KRNLQ_FLAGS_PG_SZ_1K					(2<<0)
#define KRNLQ_FLAGS_PG_SZ_2K					(3<<0)
#define KRNLQ_FLAGS_PG_SZ_4K					(4<<0)
#define KRNLQ_FLAGS_PG_SZ_8K					(5<<0)
#define KRNLQ_FLAGS_PG_SZ_16K					(6<<0)
#define KRNLQ_FLAGS_PG_SZ_32K					(7<<0)
#define KRNLQ_FLAGS_PG_SZ_64K					(8<<0)
#define KRNLQ_FLAGS_PG_SZ_128K					(9<<0)
#define KRNLQ_FLAGS_PG_SZ_256K					(10<<0)
#define KRNLQ_FLAGS_PG_SZ_512K					(11<<0)
#define KRNLQ_FLAGS_PG_SZ_1M					(12<<0)
#define KRNLQ_FLAGS_PG_SZ_2M					(13<<0)
#define KRNLQ_FLAGS_QE_SELF_SEQ					(1<<15)
#define KRNLQ_SIZE_TYPE_SIZE	((((0x28 + 0x1f) & ~0x1f) / 0x20) << 16)
#define KRNLQ_TYPE_TYPE						(0xf<<28)
#define KRNLQ_TYPE_TYPE_EMPTY					(0<<28)
#define KRNLQ_TYPE_TYPE_KRNLQ					(6<<28)
#define L5_KRNLQ_HOST_QIDX		0x00000004
#define L5_KRNLQ_HOST_FW_QIDX		0x00000008
#define L5_KRNLQ_NX_QE_SELF_SEQ 	0x0000000c
#define L5_KRNLQ_QE_SELF_SEQ_MAX	0x0000000c
#define L5_KRNLQ_NX_QE_HADDR_HI 	0x00000010
#define L5_KRNLQ_NX_QE_HADDR_LO 	0x00000014
#define L5_KRNLQ_PGTBL_PGIDX		0x00000018
#define L5_KRNLQ_NX_PG_QIDX 		0x00000018
#define L5_KRNLQ_PGTBL_NPAGES		0x0000001c
#define L5_KRNLQ_QIDX_INCR		0x0000001c
#define L5_KRNLQ_PGTBL_HADDR_HI 	0x00000020
#define L5_KRNLQ_PGTBL_HADDR_LO 	0x00000024
#define BNX2_PG_CTX_MAP			0x1a0034
#define BNX2_ISCSI_CTX_MAP		0x1a0074
struct cnic_redirect_entry ;
#define MAX_COMPLETED_KCQE	64
#define MAX_CNIC_L5_CONTEXT	256
#define MAX_CM_SK_TBL_SZ	MAX_CNIC_L5_CONTEXT
#define MAX_ISCSI_TBL_SZ	256
#define CNIC_LOCAL_PORT_MIN	60000
#define CNIC_LOCAL_PORT_MAX	61024
#define CNIC_LOCAL_PORT_RANGE	(CNIC_LOCAL_PORT_MAX - CNIC_LOCAL_PORT_MIN)
#define KWQE_CNT (BCM_PAGE_SIZE / sizeof(struct kwqe))
#define KCQE_CNT (BCM_PAGE_SIZE / sizeof(struct kcqe))
#define MAX_KWQE_CNT (KWQE_CNT - 1)
#define MAX_KCQE_CNT (KCQE_CNT - 1)
#define MAX_KWQ_IDX	((KWQ_PAGE_CNT * KWQE_CNT) - 1)
#define MAX_KCQ_IDX	((KCQ_PAGE_CNT * KCQE_CNT) - 1)
#define KWQ_PG(x) (((x) & ~MAX_KWQE_CNT) >> (BCM_PAGE_BITS - 5))
#define KWQ_IDX(x) ((x) & MAX_KWQE_CNT)
#define KCQ_PG(x) (((x) & ~MAX_KCQE_CNT) >> (BCM_PAGE_BITS - 5))
#define KCQ_IDX(x) ((x) & MAX_KCQE_CNT)
#define BNX2X_NEXT_KCQE(x) (((x) & (MAX_KCQE_CNT - 1)) ==		\
(MAX_KCQE_CNT - 1)) ?					\
(x) + 2 : (x) + 1
#define BNX2X_KWQ_DATA_PG(cp, x) ((x) / (cp)->kwq_16_data_pp)
#define BNX2X_KWQ_DATA_IDX(cp, x) ((x) % (cp)->kwq_16_data_pp)
#define BNX2X_KWQ_DATA(cp, x)						\
&(cp)->kwq_16_data[BNX2X_KWQ_DATA_PG(cp, x)][BNX2X_KWQ_DATA_IDX(cp, x)]
#define DEF_IPID_START		0x8000
#define DEF_KA_TIMEOUT		10000
#define DEF_KA_INTERVAL		300000
#define DEF_KA_MAX_PROBE_COUNT	3
#define DEF_TOS			0
#define DEF_TTL			0xfe
#define DEF_SND_SEQ_SCALE	0
#define DEF_RCV_BUF		0xffff
#define DEF_SND_BUF		0xffff
#define DEF_SEED		0
#define DEF_MAX_RT_TIME		500
#define DEF_MAX_DA_COUNT	2
#define DEF_SWS_TIMER		1000
#define DEF_MAX_CWND		0xffff
struct cnic_ctx ;
#define BNX2_MAX_CID		0x2000
struct cnic_dma ;
struct cnic_id_tbl ;
#define CNIC_KWQ16_DATA_SIZE	128
struct kwqe_16_data ;
struct cnic_iscsi ;
struct cnic_context ;
struct kcq_info ;
struct iro ;
struct cnic_uio_dev ;
struct cnic_local ;
struct bnx2x_bd_chain_next ;
#define ISCSI_DEFAULT_MAX_OUTSTANDING_R2T 	(1)
#define ISCSI_RAMROD_CMD_ID_UPDATE_CONN		(ISCSI_KCQE_OPCODE_UPDATE_CONN)
#define ISCSI_RAMROD_CMD_ID_INIT		(ISCSI_KCQE_OPCODE_INIT)
#define CDU_REGION_NUMBER_XCM_AG 2
#define CDU_REGION_NUMBER_UCM_AG 4
#define CDU_VALID_DATA(_cid, _region, _type)	\
(((_cid) << 8) | (((_region)&0xf)<<4) | (((_type)&0xf)))
#define CDU_CRC8(_cid, _region, _type)	\
(calc_crc8(CDU_VALID_DATA(_cid, _region, _type), 0xff))
#define CDU_RSRVD_VALUE_TYPE_A(_cid, _region, _type)	\
(0x80 | ((CDU_CRC8(_cid, _region, _type)) & 0x7f))
#define BNX2X_CONTEXT_MEM_SIZE		1024
#define BNX2X_FCOE_CID			16
#define BNX2X_ISCSI_START_CID		18
#define BNX2X_ISCSI_NUM_CONNECTIONS	128
#define BNX2X_ISCSI_TASK_CONTEXT_SIZE	128
#define BNX2X_ISCSI_MAX_PENDING_R2TS	4
#define BNX2X_ISCSI_R2TQE_SIZE		8
#define BNX2X_ISCSI_HQ_BD_SIZE		64
#define BNX2X_ISCSI_CONN_BUF_SIZE	64
#define BNX2X_ISCSI_GLB_BUF_SIZE	64
#define BNX2X_ISCSI_PBL_NOT_CACHED	0xff
#define BNX2X_ISCSI_PDU_HEADER_NOT_CACHED	0xff
#define BNX2X_FCOE_NUM_CONNECTIONS	128
#define BNX2X_FCOE_L5_CID_BASE		MAX_ISCSI_TBL_SZ
#define BNX2X_CHIP_NUM_57710		0x164e
#define BNX2X_CHIP_NUM_57711		0x164f
#define BNX2X_CHIP_NUM_57711E		0x1650
#define BNX2X_CHIP_NUM_57712		0x1662
#define BNX2X_CHIP_NUM_57712E		0x1663
#define BNX2X_CHIP_NUM_57713		0x1651
#define BNX2X_CHIP_NUM_57713E		0x1652
#define BNX2X_CHIP_NUM(x)		(x >> 16)
#define BNX2X_CHIP_IS_57710(x)		\
(BNX2X_CHIP_NUM(x) == BNX2X_CHIP_NUM_57710)
#define BNX2X_CHIP_IS_57711(x)		\
(BNX2X_CHIP_NUM(x) == BNX2X_CHIP_NUM_57711)
#define BNX2X_CHIP_IS_57711E(x)		\
(BNX2X_CHIP_NUM(x) == BNX2X_CHIP_NUM_57711E)
#define BNX2X_CHIP_IS_E1H(x)		\
(BNX2X_CHIP_IS_57711(x) || BNX2X_CHIP_IS_57711E(x))
#define BNX2X_CHIP_IS_57712(x)		\
(BNX2X_CHIP_NUM(x) == BNX2X_CHIP_NUM_57712)
#define BNX2X_CHIP_IS_57712E(x)		\
(BNX2X_CHIP_NUM(x) == BNX2X_CHIP_NUM_57712E)
#define BNX2X_CHIP_IS_57713(x)		\
(BNX2X_CHIP_NUM(x) == BNX2X_CHIP_NUM_57713)
#define BNX2X_CHIP_IS_57713E(x)		\
(BNX2X_CHIP_NUM(x) == BNX2X_CHIP_NUM_57713E)
#define BNX2X_CHIP_IS_E2(x)		\
(BNX2X_CHIP_IS_57712(x) || BNX2X_CHIP_IS_57712E(x) || \
BNX2X_CHIP_IS_57713(x) || BNX2X_CHIP_IS_57713E(x))
#define IS_E1H_OFFSET       		BNX2X_CHIP_IS_E1H(cp->chip_id)
#define BNX2X_RX_DESC_CNT		(BCM_PAGE_SIZE / sizeof(struct eth_rx_bd))
#define BNX2X_MAX_RX_DESC_CNT		(BNX2X_RX_DESC_CNT - 2)
#define BNX2X_RCQ_DESC_CNT		(BCM_PAGE_SIZE / sizeof(union eth_rx_cqe))
#define BNX2X_MAX_RCQ_DESC_CNT		(BNX2X_RCQ_DESC_CNT - 1)
#define BNX2X_NEXT_RCQE(x) (((x) & BNX2X_MAX_RCQ_DESC_CNT) ==		\
(BNX2X_MAX_RCQ_DESC_CNT - 1)) ?				\
((x) + 2) : ((x) + 1)
#define BNX2X_DEF_SB_ID			HC_SP_SB_ID
#define BNX2X_SHMEM_MF_BLK_OFFSET	0x7e4
#define BNX2X_SHMEM_ADDR(base, field)	(base + \
offsetof(struct shmem_region, field))
#define BNX2X_SHMEM2_ADDR(base, field)	(base + \
offsetof(struct shmem2_region, field))
#define BNX2X_SHMEM2_HAS(base, field)				\
((base) &&					\
(CNIC_RD(dev, BNX2X_SHMEM2_ADDR(base, size)) >	\
offsetof(struct shmem2_region, field)))
#define BNX2X_MF_CFG_ADDR(base, field)				\
((base) + offsetof(struct mf_cfg, field))
#define ETH_MAX_RX_CLIENTS_E2 		ETH_MAX_RX_CLIENTS_E1H
#define CNIC_PORT(cp)			((cp)->pfid & 1)
#define CNIC_FUNC(cp)			((cp)->func)
#define CNIC_PATH(cp)			(!BNX2X_CHIP_IS_E2(cp->chip_id) ? 0 :\
(CNIC_FUNC(cp) & 1))
#define CNIC_E1HVN(cp)			((cp)->pfid >> 1)
#define BNX2X_HW_CID(cp, x)		((CNIC_PORT(cp) << 23) | \
(CNIC_E1HVN(cp) << 17) | (x))
#define BNX2X_SW_CID(x)			(x & 0x1ffff)
#define BNX2X_CL_QZONE_ID(cp, cli)					\
(cli + (CNIC_PORT(cp) * (BNX2X_CHIP_IS_E2(cp->chip_id) ?\
ETH_MAX_RX_CLIENTS_E2 :		\
ETH_MAX_RX_CLIENTS_E1H)))
#define TCP_TSTORM_OOO_DROP_AND_PROC_ACK	(0<<4)
