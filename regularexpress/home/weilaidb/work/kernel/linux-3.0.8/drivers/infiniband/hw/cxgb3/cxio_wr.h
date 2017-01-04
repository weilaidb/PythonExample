#define __CXIO_WR_H__
#define T3_MAX_SGE      4
#define T3_MAX_INLINE	64
#define T3_STAG0_PBL_SIZE (2 * T3_MAX_SGE << 3)
#define T3_STAG0_MAX_PBE_LEN (128 * 1024 * 1024)
#define T3_STAG0_PAGE_SHIFT 15
#define Q_EMPTY(rptr,wptr) ((rptr)==(wptr))
#define Q_FULL(rptr,wptr,size_log2)  ( (((wptr)-(rptr))>>(size_log2)) && \
((rptr)!=(wptr)) )
#define Q_GENBIT(ptr,size_log2) (!(((ptr)>>size_log2)&0x1))
#define Q_FREECNT(rptr,wptr,size_log2) ((1UL<<size_log2)-((wptr)-(rptr)))
#define Q_COUNT(rptr,wptr) ((wptr)-(rptr))
#define Q_PTR2IDX(ptr,size_log2) (ptr & ((1UL<<size_log2)-1))
static inline void ring_doorbell(void __iomem *doorbell, u32 qpid)
#define SEQ32_GE(x,y) (!( (((u32) (x)) - ((u32) (y))) & 0x80000000 ))
enum t3_wr_flags  __attribute__ ((packed));
enum t3_wr_opcode  __attribute__ ((packed));
enum t3_rdma_opcode  __attribute__ ((packed));
static inline enum t3_rdma_opcode wr2opcode(enum t3_wr_opcode wrop)
union t3_wrid ;
#define WRID(wrid)		(wrid.id1)
#define WRID_GEN(wrid)		(wrid.id0.wr_gen)
#define WRID_IDX(wrid)		(wrid.id0.wr_idx)
#define WRID_LO(wrid)		(wrid.id0.wr_lo)
struct fw_riwrh ;
#define S_FW_RIWR_OP		24
#define M_FW_RIWR_OP		0xff
#define V_FW_RIWR_OP(x)		((x) << S_FW_RIWR_OP)
#define G_FW_RIWR_OP(x)	((((x) >> S_FW_RIWR_OP)) & M_FW_RIWR_OP)
#define S_FW_RIWR_SOPEOP	22
#define M_FW_RIWR_SOPEOP	0x3
#define V_FW_RIWR_SOPEOP(x)	((x) << S_FW_RIWR_SOPEOP)
#define S_FW_RIWR_FLAGS		8
#define M_FW_RIWR_FLAGS		0x3fffff
#define V_FW_RIWR_FLAGS(x)	((x) << S_FW_RIWR_FLAGS)
#define G_FW_RIWR_FLAGS(x)	((((x) >> S_FW_RIWR_FLAGS)) & M_FW_RIWR_FLAGS)
#define S_FW_RIWR_TID		8
#define V_FW_RIWR_TID(x)	((x) << S_FW_RIWR_TID)
#define S_FW_RIWR_LEN		0
#define V_FW_RIWR_LEN(x)	((x) << S_FW_RIWR_LEN)
#define S_FW_RIWR_GEN           31
#define V_FW_RIWR_GEN(x)        ((x)  << S_FW_RIWR_GEN)
struct t3_sge ;
struct t3_send_wr ;
#define T3_MAX_FASTREG_DEPTH 10
#define T3_MAX_FASTREG_FRAG 10
struct t3_fastreg_wr ;
struct t3_pbl_frag ;
#define S_FR_PAGE_COUNT		24
#define M_FR_PAGE_COUNT		0xff
#define V_FR_PAGE_COUNT(x)	((x) << S_FR_PAGE_COUNT)
#define G_FR_PAGE_COUNT(x)	((((x) >> S_FR_PAGE_COUNT)) & M_FR_PAGE_COUNT)
#define S_FR_PAGE_SIZE		16
#define M_FR_PAGE_SIZE		0x1f
#define V_FR_PAGE_SIZE(x)	((x) << S_FR_PAGE_SIZE)
#define G_FR_PAGE_SIZE(x)	((((x) >> S_FR_PAGE_SIZE)) & M_FR_PAGE_SIZE)
#define S_FR_TYPE		8
#define M_FR_TYPE		0x1
#define V_FR_TYPE(x)		((x) << S_FR_TYPE)
#define G_FR_TYPE(x)		((((x) >> S_FR_TYPE)) & M_FR_TYPE)
#define S_FR_PERMS		0
#define M_FR_PERMS		0xff
#define V_FR_PERMS(x)		((x) << S_FR_PERMS)
#define G_FR_PERMS(x)		((((x) >> S_FR_PERMS)) & M_FR_PERMS)
struct t3_local_inv_wr ;
struct t3_rdma_write_wr ;
struct t3_rdma_read_wr ;
struct t3_bind_mw_wr ;
struct t3_receive_wr ;
struct t3_bypass_wr ;
struct t3_modify_qp_wr ;
enum t3_modify_qp_flags ;
enum t3_mpa_attrs  __attribute__ ((packed));
enum t3_qp_caps  __attribute__ ((packed));
enum rdma_init_rtr_types ;
#define S_RTR_TYPE	2
#define M_RTR_TYPE	0x3
#define V_RTR_TYPE(x)	((x) << S_RTR_TYPE)
#define G_RTR_TYPE(x)	((((x) >> S_RTR_TYPE)) & M_RTR_TYPE)
#define S_CHAN		4
#define M_CHAN		0x3
#define V_CHAN(x)	((x) << S_CHAN)
#define G_CHAN(x)	((((x) >> S_CHAN)) & M_CHAN)
struct t3_rdma_init_attr ;
struct t3_rdma_init_wr ;
struct t3_genbit ;
struct t3_wq_in_err ;
enum rdma_init_wr_flags ;
union t3_wr ;
#define T3_SQ_CQE_FLIT	  13
#define T3_SQ_COOKIE_FLIT 14
#define T3_RQ_COOKIE_FLIT 13
#define T3_RQ_CQE_FLIT	  14
static inline enum t3_wr_opcode fw_riwrh_opcode(struct fw_riwrh *wqe)
enum t3_wr_hdr_bits ;
static inline void build_fw_riwrh(struct fw_riwrh *wqe, enum t3_wr_opcode op,
enum t3_wr_flags flags, u8 genbit, u32 tid,
u8 len, u8 sopeop)
enum t3_utx_mem_op ;
enum tpt_mem_type ;
enum tpt_addr_type ;
enum tpt_mem_perm ;
struct tpt_entry ;
#define S_TPT_VALID		31
#define V_TPT_VALID(x)		((x) << S_TPT_VALID)
#define F_TPT_VALID		V_TPT_VALID(1U)
#define S_TPT_STAG_KEY		23
#define M_TPT_STAG_KEY		0xFF
#define V_TPT_STAG_KEY(x)	((x) << S_TPT_STAG_KEY)
#define G_TPT_STAG_KEY(x)	(((x) >> S_TPT_STAG_KEY) & M_TPT_STAG_KEY)
#define S_TPT_STAG_STATE	22
#define V_TPT_STAG_STATE(x)	((x) << S_TPT_STAG_STATE)
#define F_TPT_STAG_STATE	V_TPT_STAG_STATE(1U)
#define S_TPT_STAG_TYPE		20
#define M_TPT_STAG_TYPE		0x3
#define V_TPT_STAG_TYPE(x)	((x) << S_TPT_STAG_TYPE)
#define G_TPT_STAG_TYPE(x)	(((x) >> S_TPT_STAG_TYPE) & M_TPT_STAG_TYPE)
#define S_TPT_PDID		0
#define M_TPT_PDID		0xFFFFF
#define V_TPT_PDID(x)		((x) << S_TPT_PDID)
#define G_TPT_PDID(x)		(((x) >> S_TPT_PDID) & M_TPT_PDID)
#define S_TPT_PERM		28
#define M_TPT_PERM		0xF
#define V_TPT_PERM(x)		((x) << S_TPT_PERM)
#define G_TPT_PERM(x)		(((x) >> S_TPT_PERM) & M_TPT_PERM)
#define S_TPT_REM_INV_DIS	27
#define V_TPT_REM_INV_DIS(x)	((x) << S_TPT_REM_INV_DIS)
#define F_TPT_REM_INV_DIS	V_TPT_REM_INV_DIS(1U)
#define S_TPT_ADDR_TYPE		26
#define V_TPT_ADDR_TYPE(x)	((x) << S_TPT_ADDR_TYPE)
#define F_TPT_ADDR_TYPE		V_TPT_ADDR_TYPE(1U)
#define S_TPT_MW_BIND_ENABLE	25
#define V_TPT_MW_BIND_ENABLE(x)	((x) << S_TPT_MW_BIND_ENABLE)
#define F_TPT_MW_BIND_ENABLE    V_TPT_MW_BIND_ENABLE(1U)
#define S_TPT_PAGE_SIZE		20
#define M_TPT_PAGE_SIZE		0x1F
#define V_TPT_PAGE_SIZE(x)	((x) << S_TPT_PAGE_SIZE)
#define G_TPT_PAGE_SIZE(x)	(((x) >> S_TPT_PAGE_SIZE) & M_TPT_PAGE_SIZE)
#define S_TPT_PBL_ADDR		0
#define M_TPT_PBL_ADDR		0x1FFFFFFF
#define V_TPT_PBL_ADDR(x)	((x) << S_TPT_PBL_ADDR)
#define G_TPT_PBL_ADDR(x)       (((x) >> S_TPT_PBL_ADDR) & M_TPT_PBL_ADDR)
#define S_TPT_QPID		0
#define M_TPT_QPID		0xFFFFF
#define V_TPT_QPID(x)		((x) << S_TPT_QPID)
#define G_TPT_QPID(x)		(((x) >> S_TPT_QPID) & M_TPT_QPID)
#define S_TPT_PSTAG		0
#define M_TPT_PSTAG		0xFFFFFF
#define V_TPT_PSTAG(x)		((x) << S_TPT_PSTAG)
#define G_TPT_PSTAG(x)		(((x) >> S_TPT_PSTAG) & M_TPT_PSTAG)
#define S_TPT_PBL_SIZE		0
#define M_TPT_PBL_SIZE		0xFFFFF
#define V_TPT_PBL_SIZE(x)	((x) << S_TPT_PBL_SIZE)
#define G_TPT_PBL_SIZE(x)	(((x) >> S_TPT_PBL_SIZE) & M_TPT_PBL_SIZE)
struct t3_cqe ;
#define S_CQE_OOO	  31
#define M_CQE_OOO	  0x1
#define G_CQE_OOO(x)	  ((((x) >> S_CQE_OOO)) & M_CQE_OOO)
#define V_CEQ_OOO(x)	  ((x)<<S_CQE_OOO)
#define S_CQE_QPID        12
#define M_CQE_QPID        0x7FFFF
#define G_CQE_QPID(x)     ((((x) >> S_CQE_QPID)) & M_CQE_QPID)
#define V_CQE_QPID(x)	  ((x)<<S_CQE_QPID)
#define S_CQE_SWCQE       11
#define M_CQE_SWCQE       0x1
#define G_CQE_SWCQE(x)    ((((x) >> S_CQE_SWCQE)) & M_CQE_SWCQE)
#define V_CQE_SWCQE(x)	  ((x)<<S_CQE_SWCQE)
#define S_CQE_GENBIT      10
#define M_CQE_GENBIT      0x1
#define G_CQE_GENBIT(x)   (((x) >> S_CQE_GENBIT) & M_CQE_GENBIT)
#define V_CQE_GENBIT(x)	  ((x)<<S_CQE_GENBIT)
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
#define SW_CQE(x)         (G_CQE_SWCQE(be32_to_cpu((x).header)))
#define CQE_OOO(x)        (G_CQE_OOO(be32_to_cpu((x).header)))
#define CQE_QPID(x)       (G_CQE_QPID(be32_to_cpu((x).header)))
#define CQE_GENBIT(x)     (G_CQE_GENBIT(be32_to_cpu((x).header)))
#define CQE_TYPE(x)       (G_CQE_TYPE(be32_to_cpu((x).header)))
#define SQ_TYPE(x)	  (CQE_TYPE((x)))
#define RQ_TYPE(x)	  (!CQE_TYPE((x)))
#define CQE_STATUS(x)     (G_CQE_STATUS(be32_to_cpu((x).header)))
#define CQE_OPCODE(x)     (G_CQE_OPCODE(be32_to_cpu((x).header)))
#define CQE_SEND_OPCODE(x)( \
(G_CQE_OPCODE(be32_to_cpu((x).header)) == T3_SEND) || \
(G_CQE_OPCODE(be32_to_cpu((x).header)) == T3_SEND_WITH_SE) || \
(G_CQE_OPCODE(be32_to_cpu((x).header)) == T3_SEND_WITH_INV) || \
(G_CQE_OPCODE(be32_to_cpu((x).header)) == T3_SEND_WITH_SE_INV))
#define CQE_LEN(x)        (be32_to_cpu((x).len))
#define CQE_WRID_STAG(x)  (be32_to_cpu((x).u.rcqe.stag))
#define CQE_WRID_MSN(x)   (be32_to_cpu((x).u.rcqe.msn))
#define CQE_WRID_SQ_WPTR(x)	((x).u.scqe.wrid_hi)
#define CQE_WRID_WPTR(x)	((x).u.scqe.wrid_low)
#define CQE_WRID_HI(x)		((x).u.scqe.wrid_hi)
#define CQE_WRID_LOW(x)		((x).u.scqe.wrid_low)
#define TPT_ERR_SUCCESS                     0x0
#define TPT_ERR_STAG                        0x1
#define TPT_ERR_PDID                        0x2
#define TPT_ERR_QPID                        0x3
#define TPT_ERR_ACCESS                      0x4
#define TPT_ERR_WRAP                        0x5
#define TPT_ERR_BOUND                       0x6
#define TPT_ERR_INVALIDATE_SHARED_MR        0x7
#define TPT_ERR_INVALIDATE_MR_WITH_MW_BOUND 0x8
#define TPT_ERR_ECC                         0x9
#define TPT_ERR_ECC_PSTAG                   0xA
#define TPT_ERR_PBL_ADDR_BOUND              0xB
#define TPT_ERR_SWFLUSH			    0xC
#define TPT_ERR_CRC                         0x10
#define TPT_ERR_MARKER                      0x11
#define TPT_ERR_PDU_LEN_ERR                 0x12
#define TPT_ERR_OUT_OF_RQE                  0x13
#define TPT_ERR_DDP_VERSION                 0x14
#define TPT_ERR_RDMA_VERSION                0x15
#define TPT_ERR_OPCODE                      0x16
#define TPT_ERR_DDP_QUEUE_NUM               0x17
#define TPT_ERR_MSN                         0x18
#define TPT_ERR_TBIT                        0x19
#define TPT_ERR_MO                          0x1A
#define TPT_ERR_MSN_GAP                     0x1B
#define TPT_ERR_MSN_RANGE                   0x1C
#define TPT_ERR_IRD_OVERFLOW                0x1D
#define TPT_ERR_RQE_ADDR_BOUND              0x1E
#define TPT_ERR_INTERNAL_ERR                0x1F
struct t3_swsq ;
struct t3_swrq ;
struct t3_wq ;
struct t3_cq ;
#define CQ_VLD_ENTRY(ptr,size_log2,cqe) (Q_GENBIT(ptr,size_log2) == \
CQE_GENBIT(*cqe))
struct t3_cq_status_page ;
static inline int cxio_cq_in_error(struct t3_cq *cq)
static inline void cxio_set_cq_in_error(struct t3_cq *cq)
static inline void cxio_set_wq_in_error(struct t3_wq *wq)
static inline void cxio_disable_wq_db(struct t3_wq *wq)
static inline void cxio_enable_wq_db(struct t3_wq *wq)
static inline int cxio_wq_db_enabled(struct t3_wq *wq)
static inline struct t3_cqe *cxio_next_hw_cqe(struct t3_cq *cq)
static inline struct t3_cqe *cxio_next_sw_cqe(struct t3_cq *cq)
static inline struct t3_cqe *cxio_next_cqe(struct t3_cq *cq)
