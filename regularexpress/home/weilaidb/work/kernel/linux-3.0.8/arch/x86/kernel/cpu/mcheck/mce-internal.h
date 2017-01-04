enum severity_level ;
#define ATTR_LEN		16
struct mce_bank ;
int mce_severity(struct mce *a, int tolerant, char **msg);
struct dentry *mce_get_debugfs_dir(void);
extern int mce_ser;
extern struct mce_bank *mce_banks;
int apei_write_mce(struct mce *m);
ssize_t apei_read_mce(struct mce *m, u64 *record_id);
int apei_check_mce(void);
int apei_clear_mce(u64 record_id);
static inline int apei_write_mce(struct mce *m)
static inline ssize_t apei_read_mce(struct mce *m, u64 *record_id)
static inline int apei_check_mce(void)
static inline int apei_clear_mce(u64 record_id)
