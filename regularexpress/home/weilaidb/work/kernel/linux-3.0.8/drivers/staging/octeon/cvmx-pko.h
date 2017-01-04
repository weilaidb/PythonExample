#define __CVMX_PKO_H__
#define CVMX_PKO_COMMAND_BUFFER_SIZE_ADJUST (1)
#define CVMX_PKO_MAX_OUTPUT_QUEUES_STATIC 256
#define CVMX_PKO_MAX_OUTPUT_QUEUES      ((OCTEON_IS_MODEL(OCTEON_CN31XX) || \
OCTEON_IS_MODEL(OCTEON_CN3010) || OCTEON_IS_MODEL(OCTEON_CN3005) || \
OCTEON_IS_MODEL(OCTEON_CN50XX)) ? 32 : \
(OCTEON_IS_MODEL(OCTEON_CN58XX) || \
OCTEON_IS_MODEL(OCTEON_CN56XX)) ? 256 : 128)
#define CVMX_PKO_NUM_OUTPUT_PORTS       40
#define CVMX_PKO_MEM_QUEUE_PTRS_ILLEGAL_PID 63
#define CVMX_PKO_QUEUE_STATIC_PRIORITY  9
#define CVMX_PKO_ILLEGAL_QUEUE  0xFFFF
#define CVMX_PKO_MAX_QUEUE_DEPTH 0
typedef enum  cvmx_pko_status_t;
typedef enum  cvmx_pko_lock_t;
typedef struct  cvmx_pko_port_status_t;
typedef union  cvmx_pko_doorbell_address_t;
typedef union  cvmx_pko_command_word0_t;
typedef struct  cvmx_pko_state_elem_t;
extern void cvmx_pko_initialize_global(void);
extern int cvmx_pko_initialize_local(void);
extern void cvmx_pko_enable(void);
extern void cvmx_pko_disable(void);
extern void cvmx_pko_shutdown(void);
extern cvmx_pko_status_t cvmx_pko_config_port(uint64_t port,
uint64_t base_queue,
uint64_t num_queues,
const uint64_t priority[]);
static inline void cvmx_pko_doorbell(uint64_t port, uint64_t queue,
uint64_t len)
static inline void cvmx_pko_send_packet_prepare(uint64_t port, uint64_t queue,
cvmx_pko_lock_t use_locking)
static inline cvmx_pko_status_t cvmx_pko_send_packet_finish(
uint64_t port,
uint64_t queue,
cvmx_pko_command_word0_t pko_command,
union cvmx_buf_ptr packet,
cvmx_pko_lock_t use_locking)
static inline cvmx_pko_status_t cvmx_pko_send_packet_finish3(
uint64_t port,
uint64_t queue,
cvmx_pko_command_word0_t pko_command,
union cvmx_buf_ptr packet,
uint64_t addr,
cvmx_pko_lock_t use_locking)
static inline int cvmx_pko_get_base_queue_per_core(int port, int core)
static inline int cvmx_pko_get_base_queue(int port)
static inline int cvmx_pko_get_num_queues(int port)
static inline void cvmx_pko_get_port_status(uint64_t port_num, uint64_t clear,
cvmx_pko_port_status_t *status)
extern int cvmx_pko_rate_limit_packets(int port, int packets_s, int burst);
extern int cvmx_pko_rate_limit_bits(int port, uint64_t bits_s, int burst);
