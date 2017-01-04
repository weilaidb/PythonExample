#define _LINUX_CRED_H
struct user_struct;
struct cred;
struct inode;
#define NGROUPS_SMALL		32
#define NGROUPS_PER_BLOCK	((unsigned int)(PAGE_SIZE / sizeof(gid_t)))
struct group_info ;
static inline struct group_info *get_group_info(struct group_info *gi)
#define put_group_info(group_info)			\
do  while (0)
extern struct group_info *groups_alloc(int);
extern struct group_info init_groups;
extern void groups_free(struct group_info *);
extern int set_current_groups(struct group_info *);
extern int set_groups(struct cred *, struct group_info *);
extern int groups_search(const struct group_info *, gid_t);
#define GROUP_AT(gi, i) \
((gi)->blocks[(i) / NGROUPS_PER_BLOCK][(i) % NGROUPS_PER_BLOCK])
extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);
struct thread_group_cred ;
struct cred ;
extern void __put_cred(struct cred *);
extern void exit_creds(struct task_struct *);
extern int copy_creds(struct task_struct *, unsigned long);
extern const struct cred *get_task_cred(struct task_struct *);
extern struct cred *cred_alloc_blank(void);
extern struct cred *prepare_creds(void);
extern struct cred *prepare_exec_creds(void);
extern int commit_creds(struct cred *);
extern void abort_creds(struct cred *);
extern const struct cred *override_creds(const struct cred *);
extern void revert_creds(const struct cred *);
extern struct cred *prepare_kernel_cred(struct task_struct *);
extern int change_create_files_as(struct cred *, struct inode *);
extern int set_security_override(struct cred *, u32);
extern int set_security_override_from_ctx(struct cred *, const char *);
extern int set_create_files_as(struct cred *, struct inode *);
extern void __init cred_init(void);
extern void __invalid_creds(const struct cred *, const char *, unsigned);
extern void __validate_process_creds(struct task_struct *,
const char *, unsigned);
extern bool creds_are_invalid(const struct cred *cred);
static inline void __validate_creds(const struct cred *cred,
const char *file, unsigned line)
#define validate_creds(cred)				\
do  while(0)
#define validate_process_creds()				\
do  while(0)
extern void validate_creds_for_do_exit(struct task_struct *);
static inline void validate_creds(const struct cred *cred)
static inline void validate_creds_for_do_exit(struct task_struct *tsk)
static inline void validate_process_creds(void)
static inline struct cred *get_new_cred(struct cred *cred)
static inline const struct cred *get_cred(const struct cred *cred)
static inline void put_cred(const struct cred *_cred)
#define current_cred() \
(current->cred)
#define __task_cred(task)						\
()
#define get_current_cred()				\
(get_cred(current_cred()))
#define get_current_user()				\
()
#define get_current_groups()				\
()
#define task_cred_xxx(task, xxx)			\
()
#define task_uid(task)		(task_cred_xxx((task), uid))
#define task_euid(task)		(task_cred_xxx((task), euid))
#define current_cred_xxx(xxx)			\
()
#define current_uid()		(current_cred_xxx(uid))
#define current_gid()		(current_cred_xxx(gid))
#define current_euid()		(current_cred_xxx(euid))
#define current_egid()		(current_cred_xxx(egid))
#define current_suid()		(current_cred_xxx(suid))
#define current_sgid()		(current_cred_xxx(sgid))
#define current_fsuid() 	(current_cred_xxx(fsuid))
#define current_fsgid() 	(current_cred_xxx(fsgid))
#define current_cap()		(current_cred_xxx(cap_effective))
#define current_user()		(current_cred_xxx(user))
#define current_security()	(current_cred_xxx(security))
#define current_user_ns() (current_cred_xxx(user_ns))
extern struct user_namespace init_user_ns;
#define current_user_ns() (&init_user_ns)
#define current_uid_gid(_uid, _gid)		\
do  while(0)
#define current_euid_egid(_euid, _egid)		\
do  while(0)
#define current_fsuid_fsgid(_fsuid, _fsgid)	\
do  while(0)
