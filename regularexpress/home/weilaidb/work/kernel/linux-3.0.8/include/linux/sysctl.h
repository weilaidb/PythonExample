#define _LINUX_SYSCTL_H
struct completion;
#define CTL_MAXNAME 10
struct __sysctl_args ;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum
;
enum ;
enum
;
enum
;
enum
;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum
;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum
;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum
;
struct ctl_table;
struct nsproxy;
struct ctl_table_root;
struct ctl_table_set ;
extern void setup_sysctl_set(struct ctl_table_set *p,
struct ctl_table_set *parent,
int (*is_seen)(struct ctl_table_set *));
struct ctl_table_header;
extern void sysctl_head_get(struct ctl_table_header *);
extern void sysctl_head_put(struct ctl_table_header *);
extern int sysctl_is_seen(struct ctl_table_header *);
extern struct ctl_table_header *sysctl_head_grab(struct ctl_table_header *);
extern struct ctl_table_header *sysctl_head_next(struct ctl_table_header *prev);
extern struct ctl_table_header *__sysctl_head_next(struct nsproxy *namespaces,
struct ctl_table_header *prev);
extern void sysctl_head_finish(struct ctl_table_header *prev);
extern int sysctl_perm(struct ctl_table_root *root,
struct ctl_table *table, int op);
typedef struct ctl_table ctl_table;
typedef int proc_handler (struct ctl_table *ctl, int write,
void __user *buffer, size_t *lenp, loff_t *ppos);
extern int proc_dostring(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int proc_dointvec(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int proc_dointvec_minmax(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int proc_dointvec_ms_jiffies(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int,
void __user *, size_t *, loff_t *);
extern int proc_do_large_bitmap(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
struct ctl_table
;
struct ctl_table_root ;
struct ctl_table_header
;
struct ctl_path ;
void register_sysctl_root(struct ctl_table_root *root);
struct ctl_table_header *__register_sysctl_paths(
struct ctl_table_root *root, struct nsproxy *namespaces,
const struct ctl_path *path, struct ctl_table *table);
struct ctl_table_header *register_sysctl_table(struct ctl_table * table);
struct ctl_table_header *register_sysctl_paths(const struct ctl_path *path,
struct ctl_table *table);
void unregister_sysctl_table(struct ctl_table_header * table);
int sysctl_check_table(struct nsproxy *namespaces, struct ctl_table *table);
