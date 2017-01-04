#define DLM_ERRNO_EDEADLK		35
#define DLM_ERRNO_EBADR			53
#define DLM_ERRNO_EBADSLT		57
#define DLM_ERRNO_EPROTO		71
#define DLM_ERRNO_EOPNOTSUPP		95
#define DLM_ERRNO_ETIMEDOUT	       110
#define DLM_ERRNO_EINPROGRESS	       115
static void header_out(struct dlm_header *hd)
static void header_in(struct dlm_header *hd)
static int to_dlm_errno(int err)
static int from_dlm_errno(int err)
void dlm_message_out(struct dlm_message *ms)
void dlm_message_in(struct dlm_message *ms)
void dlm_rcom_out(struct dlm_rcom *rc)
void dlm_rcom_in(struct dlm_rcom *rc)
