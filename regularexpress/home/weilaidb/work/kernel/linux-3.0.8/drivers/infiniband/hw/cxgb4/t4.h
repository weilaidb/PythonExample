#define __T4_H__
#define T4_MAX_NUM_QP (1<<16)
#define T4_MAX_NUM_CQ (1<<15)
#define T4_MAX_NUM_PD (1<<15)
#define T4_EQ_STATUS_ENTRIES (L1_CACHE_BYTES > 64 ? 2 : 1)
#define T4_MAX_EQ_SIZE (65520 - T4_EQ_STATUS_ENTRIES)
#define T4_MAX_IQ_SIZE (65520 - 1)
#define T4_MAX_RQ_SIZE (8192 - T4_EQ_STATUS_ENTRIES)
#define T4_MAX_SQ_SIZE (T4_MAX_EQ_SIZE - 1)
#define T4_MAX_QP_DEPTH (T4_MAX_RQ_SIZE - 1)
#define T4_MAX_CQ_DEPTH (T4_MAX_IQ_SIZE - 1)
#define T4_MAX_NUM_STAG (1<<15)
#define T4_MAX_MR_SIZE (~0ULL - 1)
#define T4_PAGESIZE_MASK 0xffff000
#define T4_STAG_UNSET 0xffffffff
#define T4_FW_MAJ 0
#define T4_EQ_STATUS_ENTRIES (L1_CACHE_BYTES > 64 ? 2 : 1)
#define A_PCIE_MA_SYNC 0x30b4
struct t4_status_page ;
#define T4_EQ_ENTRY_SIZE 64
#define T4_SQ_NUM_SLOTS 5
#define T4_SQ_NUM_BYTES (T4_EQ_ENTRY_SIZE * T4_SQ_NUM_SLOTS)
#define T4_MAX_SEND_SGE ((T4_SQ_NUM_BYTES - sizeof(struct fw_ri_send_wr) - \
sizeof(struct fw_ri_isgl)) / sizeof(struct fw_ri_sge))
#define T4_MAX_SEND_INLINE ((T4_SQ_NUM_BYTES - sizeof(struct fw_ri_send_wr) - \
sizeof(struct fw_ri_immd)))
#define T4_MAX_WRITE_INLINE ((T4_SQ_NUM_BYTES - \
sizeof(struct fw_ri_rdma_write_wr) - \
sizeof(struct fw_ri_immd)))
#define T4_MAX_WRITE_SGE ((T4_SQ_NUM_BYTES - \
sizeof(struct fw_ri_rdma_write_wr) - \
sizeof(struct fw_ri_isgl)) / sizeof(struct fw_ri_sge))
#define T4_MAX_FR_IMMD ((T4_SQ_NUM_BYTES - sizeof(struct fw_ri_fr_nsmr_wr) - \
sizeof(struct fw_ri_immd)) & ~31UL)
#define T4_MAX_FR_DEPTH (T4_MAX_FR_IMMD / sizeof(u64))
#define T4_RQ_NUM_SLOTS 2
#define T4_RQ_NUM_BYTES (T4_EQ_ENTRY_SIZE * T4_RQ_NUM_SLOTS)
#define T4_MAX_RECV_SGE 4
union t4_wr ;
union t4_recv_wr ;
static inline void init_wr_hdr(union t4_wr *wqe, u16 wrid,
enum fw_wr_opcodes opcode, u8 flags, u8 len16)
#define T4_ERR_SUCCESS                     0x0
#define T4_ERR_STAG                        0x1
#define T4_ERR_PDID                        0x2
#define T4_ERR_QPID                        0x3
#define T4_ERR_ACCESS                      0x4
#define T4_ERR_WRAP                        0x5
#define T4_ERR_BOUND                       0x6
#define T4_ERR_INVALIDATE_SHARED_MR        0x7
#define T4_ERR_INVALIDATE_MR_WITH_MW_BOUND 0x8
#define T4_ERR_ECC                         0x9
#define T4_ERR_ECC_PSTAG                   0xA
#define T4_ERR_PBL_ADDR_BOUND              0xB
#define T4_ERR_SWFLUSH			   0xC
#define T4_ERR_CRC                         0x10
#define T4_ERR_MARKER                      0x11
#define T4_ERR_PDU_LEN_ERR                 0x12
#define T4_ERR_OUT_OF_RQE                  0x13
#define T4_ERR_DDP_VERSION                 0x14
#define T4_ERR_RDMA_VERSION                0x15
#define T4_ERR_OPCODE                      0x16
#define T4_ERR_DDP_QUEUE_NUM               0x17
#define T4_ERR_MSN                         0x18
#define T4_ERR_TBIT                        0x19
#define T4_ERR_MO                          0x1A
#define T4_ERR_MSN_GAP                     0x1B
#define T4_ERR_MSN_RANGE                   0x1C
#define T4_ERR_IRD_OVERFLOW                0x1D
#define T4_ERR_RQE_ADDR_BOUND              0x1E
#define T4_ERR_INTERNAL_ERR                0x1F
struct t4_cqe ;
#define S_CQE_QPID        12
#define M_CQE_QPID        0xFFFFF
#define G_CQE_QPID(x)     ((((x) >> S_CQE_QPID)) & M_CQE_QPID)
#define V_CQE_QPID(x)	  ((x)<<S_CQE_QPID)
#define S_CQE_SWCQE       11
#define M_CQE_SWCQE       0x1
#define G_CQE_SWCQE(x)    ((((x) >> S_CQE_SWCQE)) & M_CQE_SWCQE)
#define V_CQE_SWCQE(x)	  ((x)<<S_CQE_SWCQE)
#define S_CQE_STATUS      5
#define M_CQE_STATUS      0x1F
#define G_CQE_STATUS(x)   ((((x) >> S_CQE_STATUS)) & M_CQE_STATUS)
#define V_CQE_STATUS(x)   ((x)<<S_CQE_STATUS)
#define S_CQE_TYPE        4
#define M_CQE_TYPE        0x1
#define G_CQE_TYPE(x)     ((((x) >> S_CQE_TYPE)) & M_CQE_TYPE)
#define V_CQE_TYPE(x)     ((x)<<S_CQE_TYPE)
#define S_CQE_OPCODE      0
#define M_CQE_OPCODE      0xF
#define G_CQE_OPCODE(x)   ((((x) >> S_CQE_OPCODE)) & M_CQE_OPCODE)
#define V_CQE_OPCODE(x)   ((x)<<S_CQE_OPCODE)
#define SW_CQE(x)         (G_CQE_SWCQE(be32_to_cpu((x)->header)))
#define CQE_QPID(x)       (G_CQE_QPID(be32_to_cpu((x)->header)))
#define CQE_TYPE(x)       (G_CQE_TYPE(be32_to_cpu((x)->header)))
#define SQ_TYPE(x)	  (CQE_TYPE((x)))
#define RQ_TYPE(x)	  (!CQE_TYPE((x)))
#define CQE_STATUS(x)     (G_CQE_STATUS(be32_to_cpu((x)->header)))
#define CQE_OPCODE(x)     (G_CQE_OPCODE(be32_to_cpu((x)->header)))
#define CQE_SEND_OPCODE(x)( \
(G_CQE_OPCODE(be32_to_cpu((x)->header)) == FW_RI_SEND) || \
(G_CQE_OPCODE(be32_to_cpu((x)->header)) == FW_RI_SEND_WITH_SE) || \
(G_CQE_OPCODE(be32_to_cpu((x)->header)) == FW_RI_SEND_WITH_INV) || \
(G_CQE_OPCODE(be32_to_cpu((x)->header)) == FW_RI_SEND_WITH_SE_INV))
#define CQE_LEN(x)        (be32_to_cpu((x)->len))
#define CQE_WRID_STAG(x)  (be32_to_cpu((x)->u.rcqe.stag))
#define CQE_WRID_MSN(x)   (be32_to_cpu((x)->u.rcqe.msn))
#define CQE_WRID_SQ_IDX(x)	((x)->u.scqe.cidx)
#define CQE_WRID_HI(x)		((x)->u.gen.wrid_hi)
#define CQE_WRID_LOW(x)		((x)->u.gen.wrid_low)
#define S_CQE_GENBIT	63
#define M_CQE_GENBIT	0x1
#define G_CQE_GENBIT(x)	(((x) >> S_CQE_GENBIT) & M_CQE_GENBIT)
#define V_CQE_GENBIT(x) ((x)<<S_CQE_GENBIT)
#define S_CQE_OVFBIT	62
#define M_CQE_OVFBIT	0x1
#define G_CQE_OVFBIT(x)	((((x) >> S_CQE_OVFBIT)) & M_CQE_OVFBIT)
#define S_CQE_IQTYPE	60
#define M_CQE_IQTYPE	0x3
#define G_CQE_IQTYPE(x)	((((x) >> S_CQE_IQTYPE)) & M_CQE_IQTYPE)
#define M_CQE_TS	0x0fffffffffffffffULL
#define G_CQE_TS(x)	((x) & M_CQE_TS)
#define CQE_OVFBIT(x)	((unsigned)G_CQE_OVFBIT(be64_to_cpu((x)->bits_type_ts)))
#define CQE_GENBIT(x)	((unsigned)G_CQE_GENBIT(be64_to_cpu((x)->bits_type_ts)))
#define CQE_TS(x)	(G_CQE_TS(be64_to_cpu((x)->bits_type_ts)))
struct t4_swsqe ;
static inline pgprot_t t4_pgprot_wc(pgprot_t prot)
static inline int t4_ocqp_supported(void)
enum ;
struct t4_sq ;
struct t4_swrqe ;
struct t4_rq ;
struct t4_wq ;
static inline int t4_rqes_posted(struct t4_wq *wq)
static inline int t4_rq_empty(struct t4_wq *wq)
static inline int t4_rq_full(struct t4_wq *wq)
static inline u32 t4_rq_avail(struct t4_wq *wq)
static inline void t4_rq_produce(struct t4_wq *wq, u8 len16)
static inline void t4_rq_consume(struct t4_wq *wq)
static inline int t4_sq_onchip(struct t4_sq *sq)
static inline int t4_sq_empty(struct t4_wq *wq)
static inline int t4_sq_full(struct t4_wq *wq)
static inline u32 t4_sq_avail(struct t4_wq *wq)
static inline void t4_sq_produce(struct t4_wq *wq, u8 len16)
static inline void t4_sq_consume(struct t4_wq *wq)
static inline void t4_ring_sq_db(struct t4_wq *wq, u16 inc)
static inline void t4_ring_rq_db(struct t4_wq *wq, u16 inc)
static inline int t4_wq_in_error(struct t4_wq *wq)
static inline void t4_set_wq_in_error(struct t4_wq *wq)
static inline void t4_disable_wq_db(struct t4_wq *wq)
static inline void t4_enable_wq_db(struct t4_wq *wq)
static inline int t4_wq_db_enabled(struct t4_wq *wq)
struct t4_cq ;
static inline int t4_arm_cq(struct t4_cq *cq, int se)
static inline void t4_swcq_produce(struct t4_cq *cq)
static inline void t4_swcq_consume(struct t4_cq *cq)
static inline void t4_hwcq_consume(struct t4_cq *cq)
static inline int t4_valid_cqe(struct t4_cq *cq, struct t4_cqe *cqe)
static inline int t4_next_hw_cqe(struct t4_cq *cq, struct t4_cqe **cqe)
static inline struct t4_cqe *t4_next_sw_cqe(struct t4_cq *cq)
static inline int t4_next_cqe(struct t4_cq *cq, struct t4_cqe **cqe)
static inline int t4_cq_in_error(struct t4_cq *cq)
static inline void t4_set_cq_in_error(struct t4_cq *cq)
