#define __CVMX_CMD_QUEUE_H__
#define CVMX_CMD_QUEUE_ENABLE_MAX_DEPTH 0
typedef enum  cvmx_cmd_queue_id_t;
typedef enum  cvmx_cmd_queue_result_t;
typedef struct  __cvmx_cmd_queue_state_t;
typedef struct  __cvmx_cmd_queue_all_state_t;
cvmx_cmd_queue_result_t cvmx_cmd_queue_initialize(cvmx_cmd_queue_id_t queue_id,
int max_depth, int fpa_pool,
int pool_size);
cvmx_cmd_queue_result_t cvmx_cmd_queue_shutdown(cvmx_cmd_queue_id_t queue_id);
int cvmx_cmd_queue_length(cvmx_cmd_queue_id_t queue_id);
void *cvmx_cmd_queue_buffer(cvmx_cmd_queue_id_t queue_id);
static inline int __cvmx_cmd_queue_get_index(cvmx_cmd_queue_id_t queue_id)
static inline void __cvmx_cmd_queue_lock(cvmx_cmd_queue_id_t queue_id,
__cvmx_cmd_queue_state_t *qptr)
static inline void __cvmx_cmd_queue_unlock(__cvmx_cmd_queue_state_t *qptr)
static inline __cvmx_cmd_queue_state_t
*__cvmx_cmd_queue_get_state(cvmx_cmd_queue_id_t queue_id)
static inline cvmx_cmd_queue_result_t cvmx_cmd_queue_write(cvmx_cmd_queue_id_t
queue_id,
int use_locking,
int cmd_count,
uint64_t *cmds)
static inline cvmx_cmd_queue_result_t cvmx_cmd_queue_write2(cvmx_cmd_queue_id_t
queue_id,
int use_locking,
uint64_t cmd1,
uint64_t cmd2)
static inline cvmx_cmd_queue_result_t cvmx_cmd_queue_write3(cvmx_cmd_queue_id_t
queue_id,
int use_locking,
uint64_t cmd1,
uint64_t cmd2,
uint64_t cmd3)
