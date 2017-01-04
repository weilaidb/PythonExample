#define IBFT_ISCSI_VERSION "0.5.0"
#define IBFT_ISCSI_DATE "2010-Feb-25"
MODULE_AUTHOR("Peter Jones <pjones@redhat.com> and "
"Konrad Rzeszutek <ketuzsezr@darnok.org>");
MODULE_DESCRIPTION("sysfs interface to BIOS iBFT information");
MODULE_LICENSE("GPL");
MODULE_VERSION(IBFT_ISCSI_VERSION);
struct ibft_hdr  __attribute__((__packed__));
struct ibft_control  __attribute__((__packed__));
struct ibft_initiator  __attribute__((__packed__));
struct ibft_nic  __attribute__((__packed__));
struct ibft_tgt  __attribute__((__packed__));
enum ibft_id ;
struct ibft_kobject ;
static struct iscsi_boot_kset *boot_kset;
static const char nulls[16];
static ssize_t sprintf_ipaddr(char *buf, u8 *ip)
static ssize_t sprintf_string(char *str, int len, char *buf)
static int ibft_verify_hdr(char *t, struct ibft_hdr *hdr, int id, int length)
static ssize_t ibft_attr_show_initiator(void *data, int type, char *buf)
static ssize_t ibft_attr_show_nic(void *data, int type, char *buf)
;
static ssize_t ibft_attr_show_target(void *data, int type, char *buf)
static int __init ibft_check_device(void)
static mode_t ibft_check_nic_for(void *data, int type)
static mode_t __init ibft_check_tgt_for(void *data, int type)
static mode_t __init ibft_check_initiator_for(void *data, int type)
static int __init ibft_create_kobject(struct acpi_table_ibft *header,
struct ibft_hdr *hdr)
static int __init ibft_register_kobjects(struct acpi_table_ibft *header)
static void ibft_unregister(void)
static void ibft_cleanup(void)
static void __exit ibft_exit(void)
static int __init ibft_init(void)
module_init(ibft_init);
module_exit(ibft_exit);
