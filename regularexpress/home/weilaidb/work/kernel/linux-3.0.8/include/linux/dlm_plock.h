#define __DLM_PLOCK_DOT_H__
#define DLM_PLOCK_MISC_NAME		"dlm_plock"
#define DLM_PLOCK_VERSION_MAJOR	1
#define DLM_PLOCK_VERSION_MINOR	2
#define DLM_PLOCK_VERSION_PATCH	0
enum ;
#define DLM_PLOCK_FL_CLOSE 1
struct dlm_plock_info ;
int dlm_posix_lock(dlm_lockspace_t *lockspace, u64 number, struct file *file,
int cmd, struct file_lock *fl);
int dlm_posix_unlock(dlm_lockspace_t *lockspace, u64 number, struct file *file,
struct file_lock *fl);
int dlm_posix_get(dlm_lockspace_t *lockspace, u64 number, struct file *file,
struct file_lock *fl);
