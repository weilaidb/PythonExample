#define __NETFS_H
#define POHMELFS_CN_IDX			5
#define POHMELFS_CN_VAL			0
#define POHMELFS_CTLINFO_ACK		1
#define POHMELFS_NOINFO_ACK		2
#define POHMELFS_NULL_IDX		65535
struct netfs_cmd ;
static inline void netfs_convert_cmd(struct netfs_cmd *cmd)
#define NETFS_TRANS_SINGLE_DST		(1<<0)
enum ;
enum ;
#define _K_SS_MAXSIZE	128
struct saddr ;
enum ;
struct pohmelfs_crypto ;
#define POHMELFS_IO_PERM_READ		(1<<0)
#define POHMELFS_IO_PERM_WRITE		(1<<1)
struct pohmelfs_ctl ;
struct pohmelfs_cn_ack ;
struct netfs_inode_info ;
static inline void netfs_convert_inode_info(struct netfs_inode_info *info)
enum ;
enum pohmelfs_capabilities ;
#define POHMELFS_FLAGS_RO		(1<<0)
#define POHMELFS_FLAGS_XATTR		(1<<1)
struct netfs_root_capabilities ;
static inline void netfs_convert_root_capabilities(struct netfs_root_capabilities *cap)
struct netfs_crypto_capabilities ;
static inline void netfs_convert_crypto_capabilities(struct netfs_crypto_capabilities *cap)
enum pohmelfs_lock_type ;
struct netfs_lock ;
static inline void netfs_convert_lock(struct netfs_lock *lock)
struct pohmelfs_name ;
struct pohmelfs_inode ;
struct netfs_trans;
typedef int (*netfs_trans_complete_t)(struct page **pages, unsigned int page_num,
void *private, int err);
struct netfs_state;
struct pohmelfs_sb;
struct netfs_trans ;
static inline int netfs_trans_cur_len(struct netfs_trans *t)
static inline void *netfs_trans_current(struct netfs_trans *t)
struct netfs_trans *netfs_trans_alloc(struct pohmelfs_sb *psb, unsigned int size,
unsigned int flags, unsigned int nr);
void netfs_trans_free(struct netfs_trans *t);
int netfs_trans_finish(struct netfs_trans *t, struct pohmelfs_sb *psb);
int netfs_trans_finish_send(struct netfs_trans *t, struct pohmelfs_sb *psb);
static inline void netfs_trans_reset(struct netfs_trans *t)
struct netfs_trans_dst ;
struct netfs_trans_dst *netfs_trans_search(struct netfs_state *st, unsigned int gen);
void netfs_trans_drop_dst(struct netfs_trans_dst *dst);
void netfs_trans_drop_dst_nostate(struct netfs_trans_dst *dst);
void netfs_trans_drop_trans(struct netfs_trans *t, struct netfs_state *st);
void netfs_trans_drop_last(struct netfs_trans *t, struct netfs_state *st);
int netfs_trans_resend(struct netfs_trans *t, struct pohmelfs_sb *psb);
int netfs_trans_remove_nolock(struct netfs_trans_dst *dst, struct netfs_state *st);
int netfs_trans_init(void);
void netfs_trans_exit(void);
struct pohmelfs_crypto_engine ;
struct pohmelfs_crypto_thread ;
void pohmelfs_crypto_thread_make_ready(struct pohmelfs_crypto_thread *th);
struct netfs_state ;
int netfs_state_init(struct netfs_state *st);
void netfs_state_exit(struct netfs_state *st);
static inline void netfs_state_lock_send(struct netfs_state *st)
static inline int netfs_state_trylock_send(struct netfs_state *st)
static inline void netfs_state_unlock_send(struct netfs_state *st)
static inline void netfs_state_lock(struct netfs_state *st)
static inline void netfs_state_unlock(struct netfs_state *st)
static inline unsigned int netfs_state_poll(struct netfs_state *st)
struct pohmelfs_config;
struct pohmelfs_sb ;
static inline void netfs_trans_update(struct netfs_cmd *cmd,
struct netfs_trans *t, unsigned int size)
static inline struct pohmelfs_sb *POHMELFS_SB(struct super_block *sb)
static inline struct pohmelfs_inode *POHMELFS_I(struct inode *inode)
static inline u64 pohmelfs_new_ino(struct pohmelfs_sb *psb)
static inline void pohmelfs_put_inode(struct pohmelfs_inode *pi)
struct pohmelfs_config ;
struct pohmelfs_config_group ;
int __init pohmelfs_config_init(void);
void pohmelfs_config_exit(void);
int pohmelfs_copy_config(struct pohmelfs_sb *psb);
int pohmelfs_copy_crypto(struct pohmelfs_sb *psb);
int pohmelfs_config_check(struct pohmelfs_config *config, int idx);
int pohmelfs_state_init_one(struct pohmelfs_sb *psb, struct pohmelfs_config *conf);
extern const struct file_operations pohmelfs_dir_fops;
extern const struct inode_operations pohmelfs_dir_inode_ops;
int pohmelfs_state_init(struct pohmelfs_sb *psb);
void pohmelfs_state_exit(struct pohmelfs_sb *psb);
void pohmelfs_state_flush_transactions(struct netfs_state *st);
void pohmelfs_fill_inode(struct inode *inode, struct netfs_inode_info *info);
void pohmelfs_name_del(struct pohmelfs_inode *parent, struct pohmelfs_name *n);
void pohmelfs_free_names(struct pohmelfs_inode *parent);
struct pohmelfs_name *pohmelfs_search_hash(struct pohmelfs_inode *pi, u32 hash);
void pohmelfs_inode_del_inode(struct pohmelfs_sb *psb, struct pohmelfs_inode *pi);
struct pohmelfs_inode *pohmelfs_create_entry_local(struct pohmelfs_sb *psb,
struct pohmelfs_inode *parent, struct qstr *str, u64 start, int mode);
int pohmelfs_write_create_inode(struct pohmelfs_inode *pi);
int pohmelfs_write_inode_create(struct inode *inode, struct netfs_trans *trans);
int pohmelfs_remove_child(struct pohmelfs_inode *parent, struct pohmelfs_name *n);
struct pohmelfs_inode *pohmelfs_new_inode(struct pohmelfs_sb *psb,
struct pohmelfs_inode *parent, struct qstr *str,
struct netfs_inode_info *info, int link);
int pohmelfs_setattr(struct dentry *dentry, struct iattr *attr);
int pohmelfs_setattr_raw(struct inode *inode, struct iattr *attr);
int pohmelfs_meta_command(struct pohmelfs_inode *pi, unsigned int cmd_op, unsigned int flags,
netfs_trans_complete_t complete, void *priv, u64 start);
int pohmelfs_meta_command_data(struct pohmelfs_inode *pi, u64 id, unsigned int cmd_op, char *addon,
unsigned int flags, netfs_trans_complete_t complete, void *priv, u64 start);
void pohmelfs_check_states(struct pohmelfs_sb *psb);
void pohmelfs_switch_active(struct pohmelfs_sb *psb);
int pohmelfs_construct_path_string(struct pohmelfs_inode *pi, void *data, int len);
int pohmelfs_path_length(struct pohmelfs_inode *pi);
struct pohmelfs_crypto_completion ;
int pohmelfs_trans_crypt(struct netfs_trans *t, struct pohmelfs_sb *psb);
void pohmelfs_crypto_exit(struct pohmelfs_sb *psb);
int pohmelfs_crypto_init(struct pohmelfs_sb *psb);
int pohmelfs_crypto_engine_init(struct pohmelfs_crypto_engine *e, struct pohmelfs_sb *psb);
void pohmelfs_crypto_engine_exit(struct pohmelfs_crypto_engine *e);
int pohmelfs_crypto_process_input_data(struct pohmelfs_crypto_engine *e, u64 iv,
void *data, struct page *page, unsigned int size);
int pohmelfs_crypto_process_input_page(struct pohmelfs_crypto_engine *e,
struct page *page, unsigned int size, u64 iv);
static inline u64 pohmelfs_gen_iv(struct netfs_trans *t)
int pohmelfs_data_lock(struct pohmelfs_inode *pi, u64 start, u32 size, int type);
int pohmelfs_data_unlock(struct pohmelfs_inode *pi, u64 start, u32 size, int type);
int pohmelfs_data_lock_response(struct netfs_state *st);
static inline int pohmelfs_need_lock(struct pohmelfs_inode *pi, int type)
int __init pohmelfs_mcache_init(void);
void pohmelfs_mcache_exit(void);
#define dprintka(f, a...) printk(f, ##a)
#define dprintk(f, a...) printk("%d: " f, task_pid_vnr(current), ##a)
#define dprintka(f, a...) do  while (0)
#define dprintk(f, a...) do  while (0)
static inline void netfs_trans_get(struct netfs_trans *t)
static inline void netfs_trans_put(struct netfs_trans *t)
struct pohmelfs_mcache ;
struct pohmelfs_mcache *pohmelfs_mcache_alloc(struct pohmelfs_sb *psb, u64 start,
unsigned int size, void *data);
void pohmelfs_mcache_free(struct pohmelfs_sb *psb, struct pohmelfs_mcache *m);
struct pohmelfs_mcache *pohmelfs_mcache_search(struct pohmelfs_sb *psb, u64 gen);
void pohmelfs_mcache_remove_locked(struct pohmelfs_sb *psb, struct pohmelfs_mcache *m);
static inline void pohmelfs_mcache_get(struct pohmelfs_mcache *m)
static inline void pohmelfs_mcache_put(struct pohmelfs_sb *psb,
struct pohmelfs_mcache *m)
