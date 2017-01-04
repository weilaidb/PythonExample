#define IMA_FUNC 	0x0001
#define IMA_MASK 	0x0002
#define IMA_FSMAGIC	0x0004
#define IMA_UID		0x0008
enum ima_action ;
#define MAX_LSM_RULES 6
enum lsm_rule_types ;
struct ima_measure_rule_entry ;
static struct ima_measure_rule_entry default_rules[] = ;
static LIST_HEAD(measure_default_rules);
static LIST_HEAD(measure_policy_rules);
static struct list_head *ima_measure;
static DEFINE_MUTEX(ima_measure_mutex);
static bool ima_use_tcb __initdata;
static int __init default_policy_setup(char *str)
__setup("ima_tcb", default_policy_setup);
static bool ima_match_rules(struct ima_measure_rule_entry *rule,
struct inode *inode, enum ima_hooks func, int mask)
int ima_match_policy(struct inode *inode, enum ima_hooks func, int mask)
void __init ima_init_policy(void)
void ima_update_policy(void)
enum ;
static match_table_t policy_tokens = ;
static int ima_lsm_rule_init(struct ima_measure_rule_entry *entry,
char *args, int lsm_rule, int audit_type)
static void ima_log_string(struct audit_buffer *ab, char *key, char *value)
static int ima_parse_rule(char *rule, struct ima_measure_rule_entry *entry)
ssize_t ima_parse_add_rule(char *rule)
void ima_delete_rules(void)
