#define TCG_EVENT_NAME_LEN_MAX	255
#define MAX_TEXT_EVENT		1000
#define ACPI_TCPA_SIG		"TCPA"
enum bios_platform_class ;
struct tpm_bios_log ;
struct acpi_tcpa ;
struct tcpa_event ;
enum tcpa_event_types ;
static const char* tcpa_event_type_strings[] = ;
struct tcpa_pc_event ;
enum tcpa_pc_event_ids ;
static const char* tcpa_pc_event_id_strings[] = ;
static void *tpm_bios_measurements_start(struct seq_file *m, loff_t *pos)
static void *tpm_bios_measurements_next(struct seq_file *m, void *v,
loff_t *pos)
static void tpm_bios_measurements_stop(struct seq_file *m, void *v)
static int get_event_name(char *dest, struct tcpa_event *event,
unsigned char * event_entry)
static int tpm_binary_bios_measurements_show(struct seq_file *m, void *v)
static int tpm_bios_measurements_release(struct inode *inode,
struct file *file)
static int tpm_ascii_bios_measurements_show(struct seq_file *m, void *v)
static const struct seq_operations tpm_ascii_b_measurments_seqops = ;
static const struct seq_operations tpm_binary_b_measurments_seqops = ;
static int read_log(struct tpm_bios_log *log)
static int tpm_ascii_bios_measurements_open(struct inode *inode,
struct file *file)
static const struct file_operations tpm_ascii_bios_measurements_ops = ;
static int tpm_binary_bios_measurements_open(struct inode *inode,
struct file *file)
static const struct file_operations tpm_binary_bios_measurements_ops = ;
static int is_bad(void *p)
struct dentry **tpm_bios_log_setup(char *name)
EXPORT_SYMBOL_GPL(tpm_bios_log_setup);
void tpm_bios_log_teardown(struct dentry **lst)
EXPORT_SYMBOL_GPL(tpm_bios_log_teardown);
MODULE_LICENSE("GPL");
