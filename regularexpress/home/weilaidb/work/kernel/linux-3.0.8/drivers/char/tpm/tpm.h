enum tpm_timeout ;
enum tpm_addr ;
extern ssize_t tpm_show_pubek(struct device *, struct device_attribute *attr,
char *);
extern ssize_t tpm_show_pcrs(struct device *, struct device_attribute *attr,
char *);
extern ssize_t tpm_show_caps(struct device *, struct device_attribute *attr,
char *);
extern ssize_t tpm_show_caps_1_2(struct device *, struct device_attribute *attr,
char *);
extern ssize_t tpm_store_cancel(struct device *, struct device_attribute *attr,
const char *, size_t);
extern ssize_t tpm_show_enabled(struct device *, struct device_attribute *attr,
char *);
extern ssize_t tpm_show_active(struct device *, struct device_attribute *attr,
char *);
extern ssize_t tpm_show_owned(struct device *, struct device_attribute *attr,
char *);
extern ssize_t tpm_show_temp_deactivated(struct device *,
struct device_attribute *attr, char *);
struct tpm_chip;
struct tpm_vendor_specific ;
struct tpm_chip ;
#define to_tpm_chip(n) container_of(n, struct tpm_chip, vendor)
static inline void tpm_chip_put(struct tpm_chip *chip)
static inline int tpm_read_index(int base, int index)
static inline void tpm_write_index(int base, int index, int value)
struct tpm_input_header __attribute__((packed));
struct tpm_output_header __attribute__((packed));
struct	stclear_flags_t __attribute__((packed));
struct	tpm_version_t __attribute__((packed));
struct	tpm_version_1_2_t __attribute__((packed));
struct	timeout_t __attribute__((packed));
struct duration_t __attribute__((packed));
struct permanent_flags_t __attribute__((packed));
typedef union  cap_t;
struct	tpm_getcap_params_in __attribute__((packed));
struct	tpm_getcap_params_out __attribute__((packed));
struct	tpm_readpubek_params_out __attribute__((packed));
typedef union  tpm_cmd_header;
#define TPM_DIGEST_SIZE 20
struct tpm_pcrread_out __attribute__((packed));
struct tpm_pcrread_in __attribute__((packed));
struct tpm_pcrextend_in __attribute__((packed));
typedef union  tpm_cmd_params;
struct tpm_cmd_t __attribute__((packed));
ssize_t	tpm_getcap(struct device *, __be32, cap_t *, const char *);
extern void tpm_get_timeouts(struct tpm_chip *);
extern void tpm_gen_interrupt(struct tpm_chip *);
extern void tpm_continue_selftest(struct tpm_chip *);
extern unsigned long tpm_calc_ordinal_duration(struct tpm_chip *, u32);
extern struct tpm_chip* tpm_register_hardware(struct device *,
const struct tpm_vendor_specific *);
extern int tpm_open(struct inode *, struct file *);
extern int tpm_release(struct inode *, struct file *);
extern void tpm_dev_vendor_release(struct tpm_chip *);
extern ssize_t tpm_write(struct file *, const char __user *, size_t,
loff_t *);
extern ssize_t tpm_read(struct file *, char __user *, size_t, loff_t *);
extern void tpm_remove_hardware(struct device *);
extern int tpm_pm_suspend(struct device *, pm_message_t);
extern int tpm_pm_resume(struct device *);
extern struct dentry ** tpm_bios_log_setup(char *);
extern void tpm_bios_log_teardown(struct dentry **);
static inline struct dentry ** tpm_bios_log_setup(char *name)
static inline void tpm_bios_log_teardown(struct dentry **dir)
