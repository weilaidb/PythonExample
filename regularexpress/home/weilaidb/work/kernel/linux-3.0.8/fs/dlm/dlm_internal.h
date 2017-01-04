#define __DLM_INTERNAL_DOT_H__
#define DLM_INBUF_LEN		148
struct dlm_ls;
struct dlm_lkb;
struct dlm_rsb;
struct dlm_member;
struct dlm_lkbtable;
struct dlm_rsbtable;
struct dlm_dirtable;
struct dlm_direntry;
struct dlm_recover;
struct dlm_header;
struct dlm_message;
struct dlm_rcom;
struct dlm_mhandle;
#define log_print(fmt, args...) \
printk(KERN_ERR "dlm: "fmt"\n" , ##args)
#define log_error(ls, fmt, args...) \
printk(KERN_ERR "dlm: %s: " fmt "\n", (ls)->ls_name , ##args)
#define log_debug(ls, fmt, args...) \
do  while (0)
#define DLM_ASSERT(x, do) \
struct dlm_direntry ;
struct dlm_dirtable ;
struct dlm_rsbtable ;
struct dlm_lkbtable ;
struct dlm_member ;
struct dlm_recover ;
struct dlm_args ;
#define DLM_LKSTS_WAITING	1
#define DLM_LKSTS_GRANTED	2
#define DLM_LKSTS_CONVERT	3
#define DLM_IFL_MSTCPY		0x00010000
#define DLM_IFL_RESEND		0x00020000
#define DLM_IFL_DEAD		0x00040000
#define DLM_IFL_OVERLAP_UNLOCK  0x00080000
#define DLM_IFL_OVERLAP_CANCEL  0x00100000
#define DLM_IFL_ENDOFLIFE	0x00200000
#define DLM_IFL_WATCH_TIMEWARN	0x00400000
#define DLM_IFL_TIMEOUT_CANCEL	0x00800000
#define DLM_IFL_DEADLOCK_CANCEL	0x01000000
#define DLM_IFL_STUB_MS		0x02000000
#define DLM_IFL_USER		0x00000001
#define DLM_IFL_ORPHAN		0x00000002
#define DLM_CALLBACKS_SIZE	6
#define DLM_CB_CAST		0x00000001
#define DLM_CB_BAST		0x00000002
#define DLM_CB_SKIP		0x00000004
struct dlm_callback ;
struct dlm_lkb ;
struct dlm_rsb ;
#define R_MASTER		1
#define R_CREATE		2
enum rsb_flags ;
static inline void rsb_set_flag(struct dlm_rsb *r, enum rsb_flags flag)
static inline void rsb_clear_flag(struct dlm_rsb *r, enum rsb_flags flag)
static inline int rsb_flag(struct dlm_rsb *r, enum rsb_flags flag)
#define DLM_HEADER_MAJOR	0x00030000
#define DLM_HEADER_MINOR	0x00000000
#define DLM_MSG			1
#define DLM_RCOM		2
struct dlm_header ;
#define DLM_MSG_REQUEST		1
#define DLM_MSG_CONVERT		2
#define DLM_MSG_UNLOCK		3
#define DLM_MSG_CANCEL		4
#define DLM_MSG_REQUEST_REPLY	5
#define DLM_MSG_CONVERT_REPLY	6
#define DLM_MSG_UNLOCK_REPLY	7
#define DLM_MSG_CANCEL_REPLY	8
#define DLM_MSG_GRANT		9
#define DLM_MSG_BAST		10
#define DLM_MSG_LOOKUP		11
#define DLM_MSG_REMOVE		12
#define DLM_MSG_LOOKUP_REPLY	13
#define DLM_MSG_PURGE		14
struct dlm_message ;
#define DLM_RS_NODES		0x00000001
#define DLM_RS_NODES_ALL	0x00000002
#define DLM_RS_DIR		0x00000004
#define DLM_RS_DIR_ALL		0x00000008
#define DLM_RS_LOCKS		0x00000010
#define DLM_RS_LOCKS_ALL	0x00000020
#define DLM_RS_DONE		0x00000040
#define DLM_RS_DONE_ALL		0x00000080
#define DLM_RCOM_STATUS		1
#define DLM_RCOM_NAMES		2
#define DLM_RCOM_LOOKUP		3
#define DLM_RCOM_LOCK		4
#define DLM_RCOM_STATUS_REPLY	5
#define DLM_RCOM_NAMES_REPLY	6
#define DLM_RCOM_LOOKUP_REPLY	7
#define DLM_RCOM_LOCK_REPLY	8
struct dlm_rcom ;
union dlm_packet ;
struct rcom_config ;
struct rcom_lock ;
struct dlm_ls ;
#define LSFL_WORK		0
#define LSFL_RUNNING		1
#define LSFL_RECOVERY_STOP	2
#define LSFL_RCOM_READY		3
#define LSFL_RCOM_WAIT		4
#define LSFL_UEVENT_WAIT	5
#define LSFL_TIMEWARN		6
struct dlm_user_args ;
#define DLM_PROC_FLAGS_CLOSING 1
#define DLM_PROC_FLAGS_COMPAT  2
struct dlm_user_proc ;
static inline int dlm_locking_stopped(struct dlm_ls *ls)
static inline int dlm_recovery_stopped(struct dlm_ls *ls)
static inline int dlm_no_directory(struct dlm_ls *ls)
int dlm_netlink_init(void);
void dlm_netlink_exit(void);
void dlm_timeout_warn(struct dlm_lkb *lkb);
int dlm_plock_init(void);
void dlm_plock_exit(void);
int dlm_register_debugfs(void);
void dlm_unregister_debugfs(void);
int dlm_create_debug_file(struct dlm_ls *ls);
void dlm_delete_debug_file(struct dlm_ls *ls);
static inline int dlm_register_debugfs(void)
static inline void dlm_unregister_debugfs(void)
static inline int dlm_create_debug_file(struct dlm_ls *ls)
static inline void dlm_delete_debug_file(struct dlm_ls *ls)
