LIST_HEAD(ima_measurements);
struct ima_h_table ima_htable = ;
static DEFINE_MUTEX(ima_extend_list_mutex);
static struct ima_queue_entry *ima_lookup_digest_entry(u8 *digest_value)
static int ima_add_digest_entry(struct ima_template_entry *entry)
static int ima_pcr_extend(const u8 *hash)
int ima_add_template_entry(struct ima_template_entry *entry, int violation,
const char *op, struct inode *inode)
