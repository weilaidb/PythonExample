#define DLMDEBUG_H
void dlm_print_one_mle(struct dlm_master_list_entry *mle);
struct dlm_debug_ctxt ;
struct debug_lockres ;
int dlm_debug_init(struct dlm_ctxt *dlm);
void dlm_debug_shutdown(struct dlm_ctxt *dlm);
int dlm_create_debugfs_subroot(struct dlm_ctxt *dlm);
void dlm_destroy_debugfs_subroot(struct dlm_ctxt *dlm);
int dlm_create_debugfs_root(void);
void dlm_destroy_debugfs_root(void);
static inline int dlm_debug_init(struct dlm_ctxt *dlm)
static inline void dlm_debug_shutdown(struct dlm_ctxt *dlm)
static inline int dlm_create_debugfs_subroot(struct dlm_ctxt *dlm)
static inline void dlm_destroy_debugfs_subroot(struct dlm_ctxt *dlm)
static inline int dlm_create_debugfs_root(void)
static inline void dlm_destroy_debugfs_root(void)
