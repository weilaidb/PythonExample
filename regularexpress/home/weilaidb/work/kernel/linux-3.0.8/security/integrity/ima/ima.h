#define __LINUX_IMA_H
enum ima_show_type ;
enum tpm_pcrs ;
#define IMA_DIGEST_SIZE		20
#define IMA_EVENT_NAME_LEN_MAX	255
#define IMA_HASH_BITS 9
#define IMA_MEASURE_HTABLE_SIZE (1 << IMA_HASH_BITS)
extern int iint_initialized;
extern int ima_initialized;
extern int ima_used_chip;
extern char *ima_hash;
struct ima_template_data ;
struct ima_template_entry ;
struct ima_queue_entry ;
extern struct list_head ima_measurements;
void integrity_audit_msg(int audit_msgno, struct inode *inode,
const unsigned char *fname, const char *op,
const char *cause, int result, int info);
int ima_init(void);
void ima_cleanup(void);
int ima_fs_init(void);
void ima_fs_cleanup(void);
int ima_inode_alloc(struct inode *inode);
int ima_add_template_entry(struct ima_template_entry *entry, int violation,
const char *op, struct inode *inode);
int ima_calc_hash(struct file *file, char *digest);
int ima_calc_template_hash(int template_len, void *template, char *digest);
int ima_calc_boot_aggregate(char *digest);
void ima_add_violation(struct inode *inode, const unsigned char *filename,
const char *op, const char *cause);
extern spinlock_t ima_queue_lock;
struct ima_h_table ;
extern struct ima_h_table ima_htable;
static inline unsigned long ima_hash_key(u8 *digest)
#define IMA_MEASURED		0x01
struct ima_iint_cache ;
int ima_must_measure(struct inode *inode, int mask, int function);
int ima_collect_measurement(struct ima_iint_cache *iint, struct file *file);
void ima_store_measurement(struct ima_iint_cache *iint, struct file *file,
const unsigned char *filename);
int ima_store_template(struct ima_template_entry *entry, int violation,
struct inode *inode);
void ima_template_show(struct seq_file *m, void *e,
enum ima_show_type show);
struct ima_iint_cache *ima_iint_insert(struct inode *inode);
struct ima_iint_cache *ima_iint_find(struct inode *inode);
enum ima_hooks ;
int ima_match_policy(struct inode *inode, enum ima_hooks func, int mask);
void ima_init_policy(void);
void ima_update_policy(void);
ssize_t ima_parse_add_rule(char *);
void ima_delete_rules(void);
#define security_filter_rule_init security_audit_rule_init
#define security_filter_rule_match security_audit_rule_match
static inline int security_filter_rule_init(u32 field, u32 op, char *rulestr,
void **lsmrule)
static inline int security_filter_rule_match(u32 secid, u32 field, u32 op,
void *lsmrule,
struct audit_context *actx)
