#define __CVMX_POW_H__
#define CVMX_ENABLE_POW_CHECKS 1
enum cvmx_pow_tag_type ;
typedef enum  cvmx_pow_wait_t;
typedef enum  cvmx_pow_tag_op_t;
typedef union  cvmx_pow_tag_req_t;
typedef union  cvmx_pow_load_addr_t;
typedef union  cvmx_pow_tag_load_resp_t;
typedef union  cvmx_pow_tag_store_addr_t;
typedef union  cvmx_pow_iobdma_store_t;
static inline cvmx_pow_tag_req_t cvmx_pow_get_current_tag(void)
static inline cvmx_wqe_t *cvmx_pow_get_current_wqp(void)
#define CVMX_MF_CHORD(dest)         CVMX_RDHWR(dest, 30)
static inline void __cvmx_pow_warn_if_pending_switch(const char *function)
static inline void cvmx_pow_tag_sw_wait(void)
static inline cvmx_wqe_t *cvmx_pow_work_request_sync_nocheck(cvmx_pow_wait_t
wait)
static inline cvmx_wqe_t *cvmx_pow_work_request_sync(cvmx_pow_wait_t wait)
static inline enum cvmx_pow_tag_type cvmx_pow_work_request_null_rd(void)
static inline void cvmx_pow_work_request_async_nocheck(int scr_addr,
cvmx_pow_wait_t wait)
static inline void cvmx_pow_work_request_async(int scr_addr,
cvmx_pow_wait_t wait)
static inline cvmx_wqe_t *cvmx_pow_work_response_async(int scr_addr)
static inline uint64_t cvmx_pow_work_invalid(cvmx_wqe_t *wqe_ptr)
static inline void cvmx_pow_tag_sw_nocheck(uint32_t tag,
enum cvmx_pow_tag_type tag_type)
static inline void cvmx_pow_tag_sw(uint32_t tag,
enum cvmx_pow_tag_type tag_type)
static inline void cvmx_pow_tag_sw_full_nocheck(cvmx_wqe_t *wqp, uint32_t tag,
enum cvmx_pow_tag_type tag_type,
uint64_t group)
static inline void cvmx_pow_tag_sw_full(cvmx_wqe_t *wqp, uint32_t tag,
enum cvmx_pow_tag_type tag_type,
uint64_t group)
static inline void cvmx_pow_tag_sw_null_nocheck(void)
static inline void cvmx_pow_tag_sw_null(void)
static inline void cvmx_pow_work_submit(cvmx_wqe_t *wqp, uint32_t tag,
enum cvmx_pow_tag_type tag_type,
uint64_t qos, uint64_t grp)
static inline void cvmx_pow_set_group_mask(uint64_t core_num, uint64_t mask)
static inline void cvmx_pow_set_priority(uint64_t core_num,
const uint8_t priority[])
static inline void cvmx_pow_tag_sw_desched_nocheck(
uint32_t tag,
enum cvmx_pow_tag_type tag_type,
uint64_t group,
uint64_t no_sched)
static inline void cvmx_pow_tag_sw_desched(uint32_t tag,
enum cvmx_pow_tag_type tag_type,
uint64_t group, uint64_t no_sched)
static inline void cvmx_pow_desched(uint64_t no_sched)
#define CVMX_TAG_SW_BITS    (8)
#define CVMX_TAG_SW_SHIFT   (32 - CVMX_TAG_SW_BITS)
#define CVMX_TAG_SW_BITS_INTERNAL  0x1
#define CVMX_TAG_SUBGROUP_MASK  0xFFFF
#define CVMX_TAG_SUBGROUP_SHIFT 16
#define CVMX_TAG_SUBGROUP_PKO  0x1
static inline uint32_t cvmx_pow_tag_compose(uint64_t sw_bits, uint64_t hw_bits)
static inline uint32_t cvmx_pow_tag_get_sw_bits(uint64_t tag)
static inline uint32_t cvmx_pow_tag_get_hw_bits(uint64_t tag)
extern int cvmx_pow_capture(void *buffer, int buffer_size);
extern void cvmx_pow_display(void *buffer, int buffer_size);
extern int cvmx_pow_get_num_entries(void);
