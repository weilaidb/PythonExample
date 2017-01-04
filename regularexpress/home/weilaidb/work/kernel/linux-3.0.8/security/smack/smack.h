#define _SECURITY_SMACK_H
#define SMK_MAXLEN	23
#define SMK_LABELLEN	(SMK_MAXLEN+1)
struct superblock_smack ;
struct socket_smack ;
struct inode_smack ;
struct task_smack ;
#define	SMK_INODE_INSTANT	0x01
#define	SMK_INODE_TRANSMUTE	0x02
struct smack_rule ;
struct smack_cipso ;
struct smk_netlbladdr ;
struct smack_known ;
#define SMK_FSDEFAULT	"smackfsdef="
#define SMK_FSFLOOR	"smackfsfloor="
#define SMK_FSHAT	"smackfshat="
#define SMK_FSROOT	"smackfsroot="
#define SMACK_CIPSO_OPTION 	"-CIPSO"
#define SMACK_UNLABELED_SOCKET	0
#define SMACK_CIPSO_SOCKET	1
#define SMACK_MAGIC	0x43415d53
#define SMACK_CIPSO_DOI_DEFAULT		3
#define SMACK_CIPSO_DOI_INVALID		-1
#define SMACK_CIPSO_DIRECT_DEFAULT	250
#define SMACK_CIPSO_MAXCATVAL		63
#define SMACK_CIPSO_MAXLEVEL            255
#define SMACK_CIPSO_MAXCATNUM           239
#define MAY_TRANSMUTE	64
#define MAY_ANYREAD	(MAY_READ | MAY_EXEC)
#define MAY_READWRITE	(MAY_READ | MAY_WRITE)
#define MAY_NOT		0
#define SMK_NUM_ACCESS_TYPE 4
struct smk_audit_info ;
struct inode_smack *new_inode_smack(char *);
int smk_access_entry(char *, char *, struct list_head *);
int smk_access(char *, char *, int, struct smk_audit_info *);
int smk_curacc(char *, u32, struct smk_audit_info *);
int smack_to_cipso(const char *, struct smack_cipso *);
void smack_from_cipso(u32, char *, char *);
char *smack_from_secid(const u32);
char *smk_import(const char *, int);
struct smack_known *smk_import_entry(const char *, int);
u32 smack_to_secid(const char *);
extern int smack_cipso_direct;
extern char *smack_net_ambient;
extern char *smack_onlycap;
extern const char *smack_cipso_option;
extern struct smack_known smack_known_floor;
extern struct smack_known smack_known_hat;
extern struct smack_known smack_known_huh;
extern struct smack_known smack_known_invalid;
extern struct smack_known smack_known_star;
extern struct smack_known smack_known_web;
extern struct list_head smack_known_list;
extern struct list_head smack_rule_list;
extern struct list_head smk_netlbladdr_list;
extern struct security_operations smack_ops;
static inline void smack_catset_bit(int cat, char *catsetp)
static inline int smk_inode_transmutable(const struct inode *isp)
static inline char *smk_of_inode(const struct inode *isp)
static inline char *smk_of_task(const struct task_smack *tsp)
static inline char *smk_of_forked(const struct task_smack *tsp)
static inline char *smk_of_current(void)
#define SMACK_AUDIT_DENIED 0x1
#define SMACK_AUDIT_ACCEPT 0x2
extern int log_policy;
void smack_log(char *subject_label, char *object_label,
int request,
int result, struct smk_audit_info *auditdata);
static inline void smk_ad_init(struct smk_audit_info *a, const char *func,
char type)
static inline void smk_ad_setfield_u_tsk(struct smk_audit_info *a,
struct task_struct *t)
static inline void smk_ad_setfield_u_fs_path_dentry(struct smk_audit_info *a,
struct dentry *d)
static inline void smk_ad_setfield_u_fs_inode(struct smk_audit_info *a,
struct inode *i)
static inline void smk_ad_setfield_u_fs_path(struct smk_audit_info *a,
struct path p)
static inline void smk_ad_setfield_u_net_sk(struct smk_audit_info *a,
struct sock *sk)
static inline void smk_ad_init(struct smk_audit_info *a, const char *func,
char type)
static inline void smk_ad_setfield_u_tsk(struct smk_audit_info *a,
struct task_struct *t)
static inline void smk_ad_setfield_u_fs_path_dentry(struct smk_audit_info *a,
struct dentry *d)
static inline void smk_ad_setfield_u_fs_path_mnt(struct smk_audit_info *a,
struct vfsmount *m)
static inline void smk_ad_setfield_u_fs_inode(struct smk_audit_info *a,
struct inode *i)
static inline void smk_ad_setfield_u_fs_path(struct smk_audit_info *a,
struct path p)
static inline void smk_ad_setfield_u_net_sk(struct smk_audit_info *a,
struct sock *sk)
