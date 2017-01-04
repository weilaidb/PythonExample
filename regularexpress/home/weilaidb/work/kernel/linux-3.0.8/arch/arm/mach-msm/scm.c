#define CACHELINESIZE 32
#define SCM_ENOMEM		-5
#define SCM_EOPNOTSUPP		-4
#define SCM_EINVAL_ADDR		-3
#define SCM_EINVAL_ARG		-2
#define SCM_ERROR		-1
#define SCM_INTERRUPTED		1
static DEFINE_MUTEX(scm_lock);
struct scm_command ;
struct scm_response ;
static struct scm_command *alloc_scm_command(size_t cmd_size, size_t resp_size)
static inline void free_scm_command(struct scm_command *cmd)
static inline struct scm_response *scm_command_to_response(
const struct scm_command *cmd)
static inline void *scm_get_command_buffer(const struct scm_command *cmd)
static inline void *scm_get_response_buffer(const struct scm_response *rsp)
static int scm_remap_error(int err)
static u32 smc(u32 cmd_addr)
static int __scm_call(const struct scm_command *cmd)
int scm_call(u32 svc_id, u32 cmd_id, const void *cmd_buf, size_t cmd_len,
void *resp_buf, size_t resp_len)
EXPORT_SYMBOL(scm_call);
u32 scm_get_version(void)
EXPORT_SYMBOL(scm_get_version);
