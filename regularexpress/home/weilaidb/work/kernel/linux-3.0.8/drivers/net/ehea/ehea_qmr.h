#define __EHEA_QMR_H__
#define EHEA_PAGESHIFT         12
#define EHEA_PAGESIZE          (1UL << EHEA_PAGESHIFT)
#define EHEA_SECTSIZE          (1UL << 24)
#define EHEA_PAGES_PER_SECTION (EHEA_SECTSIZE >> EHEA_PAGESHIFT)
#define EHEA_HUGEPAGESHIFT     34
#define EHEA_HUGEPAGE_SIZE     (1UL << EHEA_HUGEPAGESHIFT)
#define EHEA_HUGEPAGE_PFN_MASK ((EHEA_HUGEPAGE_SIZE - 1) >> PAGE_SHIFT)
#if ((1UL << SECTION_SIZE_BITS) < EHEA_SECTSIZE)
#error eHEA module cannot work if kernel sectionsize < ehea sectionsize
#define EHEA_WR_ID_COUNT   EHEA_BMASK_IBM(0, 19)
#define EHEA_WR_ID_TYPE    EHEA_BMASK_IBM(20, 23)
#define EHEA_SWQE2_TYPE    0x1
#define EHEA_SWQE3_TYPE    0x2
#define EHEA_RWQE2_TYPE    0x3
#define EHEA_RWQE3_TYPE    0x4
#define EHEA_WR_ID_INDEX   EHEA_BMASK_IBM(24, 47)
#define EHEA_WR_ID_REFILL  EHEA_BMASK_IBM(48, 63)
struct ehea_vsgentry ;
#define EHEA_MAX_WQE_SG_ENTRIES  	252
#define SWQE2_MAX_IMM            	(0xD0 - 0x30)
#define SWQE3_MAX_IMM            	224
#define EHEA_SWQE_CRC                   0x8000
#define EHEA_SWQE_IP_CHECKSUM           0x4000
#define EHEA_SWQE_TCP_CHECKSUM          0x2000
#define EHEA_SWQE_TSO                   0x1000
#define EHEA_SWQE_SIGNALLED_COMPLETION  0x0800
#define EHEA_SWQE_VLAN_INSERT           0x0400
#define EHEA_SWQE_IMM_DATA_PRESENT      0x0200
#define EHEA_SWQE_DESCRIPTORS_PRESENT   0x0100
#define EHEA_SWQE_WRAP_CTL_REC          0x0080
#define EHEA_SWQE_WRAP_CTL_FORCE        0x0040
#define EHEA_SWQE_BIND                  0x0020
#define EHEA_SWQE_PURGE                 0x0010
#define SWQE_HEADER_SIZE		32
struct ehea_swqe ;
struct ehea_rwqe ;
#define EHEA_CQE_VLAN_TAG_XTRACT   0x0400
#define EHEA_CQE_TYPE_RQ           0x60
#define EHEA_CQE_STAT_ERR_MASK     0x700F
#define EHEA_CQE_STAT_FAT_ERR_MASK 0xF
#define EHEA_CQE_BLIND_CKSUM       0x8000
#define EHEA_CQE_STAT_ERR_TCP      0x4000
#define EHEA_CQE_STAT_ERR_IP       0x2000
#define EHEA_CQE_STAT_ERR_CRC      0x1000
#define EHEA_CQE_STAT_RESET_MASK   0x0002
struct ehea_cqe ;
#define EHEA_EQE_VALID           EHEA_BMASK_IBM(0, 0)
#define EHEA_EQE_IS_CQE          EHEA_BMASK_IBM(1, 1)
#define EHEA_EQE_IDENTIFIER      EHEA_BMASK_IBM(2, 7)
#define EHEA_EQE_QP_CQ_NUMBER    EHEA_BMASK_IBM(8, 31)
#define EHEA_EQE_QP_TOKEN        EHEA_BMASK_IBM(32, 63)
#define EHEA_EQE_CQ_TOKEN        EHEA_BMASK_IBM(32, 63)
#define EHEA_EQE_KEY             EHEA_BMASK_IBM(32, 63)
#define EHEA_EQE_PORT_NUMBER     EHEA_BMASK_IBM(56, 63)
#define EHEA_EQE_EQ_NUMBER       EHEA_BMASK_IBM(48, 63)
#define EHEA_EQE_SM_ID           EHEA_BMASK_IBM(48, 63)
#define EHEA_EQE_SM_MECH_NUMBER  EHEA_BMASK_IBM(48, 55)
#define EHEA_EQE_SM_PORT_NUMBER  EHEA_BMASK_IBM(56, 63)
#define EHEA_AER_RESTYPE_QP  0x8
#define EHEA_AER_RESTYPE_CQ  0x4
#define EHEA_AER_RESTYPE_EQ  0x3
#define EHEA_AER_RESET_MASK   0xFFFFFFFFFEFFFFFFULL
#define EHEA_AERR_RESET_MASK  0xFFFFFFFFFFFFFFFFULL
struct ehea_eqe ;
#define ERROR_DATA_LENGTH  EHEA_BMASK_IBM(52, 63)
#define ERROR_DATA_TYPE    EHEA_BMASK_IBM(0, 7)
static inline void *hw_qeit_calc(struct hw_queue *queue, u64 q_offset)
static inline void *hw_qeit_get(struct hw_queue *queue)
static inline void hw_qeit_inc(struct hw_queue *queue)
static inline void *hw_qeit_get_inc(struct hw_queue *queue)
static inline void *hw_qeit_get_inc_valid(struct hw_queue *queue)
static inline void *hw_qeit_get_valid(struct hw_queue *queue)
static inline void *hw_qeit_reset(struct hw_queue *queue)
static inline void *hw_qeit_eq_get_inc(struct hw_queue *queue)
static inline void *hw_eqit_eq_get_inc_valid(struct hw_queue *queue)
static inline struct ehea_rwqe *ehea_get_next_rwqe(struct ehea_qp *qp,
int rq_nr)
static inline struct ehea_swqe *ehea_get_swqe(struct ehea_qp *my_qp,
int *wqe_index)
static inline void ehea_post_swqe(struct ehea_qp *my_qp, struct ehea_swqe *swqe)
static inline struct ehea_cqe *ehea_poll_rq1(struct ehea_qp *qp, int *wqe_index)
static inline void ehea_inc_cq(struct ehea_cq *cq)
static inline void ehea_inc_rq1(struct ehea_qp *qp)
static inline struct ehea_cqe *ehea_poll_cq(struct ehea_cq *my_cq)
#define EHEA_CQ_REGISTER_ORIG 0
#define EHEA_EQ_REGISTER_ORIG 0
enum ehea_eq_type ;
struct ehea_eq *ehea_create_eq(struct ehea_adapter *adapter,
enum ehea_eq_type type,
const u32 length, const u8 eqe_gen);
int ehea_destroy_eq(struct ehea_eq *eq);
struct ehea_eqe *ehea_poll_eq(struct ehea_eq *eq);
struct ehea_cq *ehea_create_cq(struct ehea_adapter *adapter, int cqe,
u64 eq_handle, u32 cq_token);
int ehea_destroy_cq(struct ehea_cq *cq);
struct ehea_qp *ehea_create_qp(struct ehea_adapter *adapter, u32 pd,
struct ehea_qp_init_attr *init_attr);
int ehea_destroy_qp(struct ehea_qp *qp);
int ehea_reg_kernel_mr(struct ehea_adapter *adapter, struct ehea_mr *mr);
int ehea_gen_smr(struct ehea_adapter *adapter, struct ehea_mr *old_mr,
struct ehea_mr *shared_mr);
int ehea_rem_mr(struct ehea_mr *mr);
u64 ehea_error_data(struct ehea_adapter *adapter, u64 res_handle,
u64 *aer, u64 *aerr);
int ehea_add_sect_bmap(unsigned long pfn, unsigned long nr_pages);
int ehea_rem_sect_bmap(unsigned long pfn, unsigned long nr_pages);
int ehea_create_busmap(void);
void ehea_destroy_busmap(void);
u64 ehea_map_vaddr(void *caddr);
