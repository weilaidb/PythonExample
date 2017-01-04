#define STACKGLUE_H
struct file;
struct file_lock;
#define DLM_LKF_LOCAL		0x00100000
#define GROUP_NAME_MAX		64
struct ocfs2_protocol_version ;
struct fsdlm_lksb_plus_lvb ;
struct ocfs2_cluster_connection;
struct ocfs2_dlm_lksb ;
struct ocfs2_locking_protocol ;
struct ocfs2_cluster_connection ;
struct ocfs2_stack_operations ;
struct ocfs2_stack_plugin ;
int ocfs2_cluster_connect(const char *stack_name,
const char *group,
int grouplen,
struct ocfs2_locking_protocol *lproto,
void (*recovery_handler)(int node_num,
void *recovery_data),
void *recovery_data,
struct ocfs2_cluster_connection **conn);
int ocfs2_cluster_connect_agnostic(const char *group,
int grouplen,
struct ocfs2_locking_protocol *lproto,
void (*recovery_handler)(int node_num,
void *recovery_data),
void *recovery_data,
struct ocfs2_cluster_connection **conn);
int ocfs2_cluster_disconnect(struct ocfs2_cluster_connection *conn,
int hangup_pending);
void ocfs2_cluster_hangup(const char *group, int grouplen);
int ocfs2_cluster_this_node(unsigned int *node);
struct ocfs2_lock_res;
int ocfs2_dlm_lock(struct ocfs2_cluster_connection *conn,
int mode,
struct ocfs2_dlm_lksb *lksb,
u32 flags,
void *name,
unsigned int namelen);
int ocfs2_dlm_unlock(struct ocfs2_cluster_connection *conn,
struct ocfs2_dlm_lksb *lksb,
u32 flags);
int ocfs2_dlm_lock_status(struct ocfs2_dlm_lksb *lksb);
int ocfs2_dlm_lvb_valid(struct ocfs2_dlm_lksb *lksb);
void *ocfs2_dlm_lvb(struct ocfs2_dlm_lksb *lksb);
void ocfs2_dlm_dump_lksb(struct ocfs2_dlm_lksb *lksb);
int ocfs2_stack_supports_plocks(void);
int ocfs2_plock(struct ocfs2_cluster_connection *conn, u64 ino,
struct file *file, int cmd, struct file_lock *fl);
void ocfs2_stack_glue_set_max_proto_version(struct ocfs2_protocol_version *max_proto);
int ocfs2_stack_glue_register(struct ocfs2_stack_plugin *plugin);
void ocfs2_stack_glue_unregister(struct ocfs2_stack_plugin *plugin);
