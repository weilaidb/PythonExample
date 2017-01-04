struct bin_table;
typedef ssize_t bin_convert_t(struct file *file,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen);
static bin_convert_t bin_dir;
static bin_convert_t bin_string;
static bin_convert_t bin_intvec;
static bin_convert_t bin_ulongvec;
static bin_convert_t bin_uuid;
static bin_convert_t bin_dn_node_address;
#define CTL_DIR   bin_dir
#define CTL_STR   bin_string
#define CTL_INT   bin_intvec
#define CTL_ULONG bin_ulongvec
#define CTL_UUID  bin_uuid
#define CTL_DNADR bin_dn_node_address
#define BUFSZ 256
struct bin_table ;
static const struct bin_table bin_random_table[] = ;
static const struct bin_table bin_pty_table[] = ;
static const struct bin_table bin_kern_table[] = ;
static const struct bin_table bin_vm_table[] = ;
static const struct bin_table bin_net_core_table[] = ;
static const struct bin_table bin_net_unix_table[] = ;
static const struct bin_table bin_net_ipv4_route_table[] = ;
static const struct bin_table bin_net_ipv4_conf_vars_table[] = ;
static const struct bin_table bin_net_ipv4_conf_table[] = ;
static const struct bin_table bin_net_neigh_vars_table[] = ;
static const struct bin_table bin_net_neigh_table[] = ;
static const struct bin_table bin_net_ipv4_netfilter_table[] = ;
static const struct bin_table bin_net_ipv4_table[] = ;
static const struct bin_table bin_net_ipx_table[] = ;
static const struct bin_table bin_net_atalk_table[] = ;
static const struct bin_table bin_net_netrom_table[] = ;
static const struct bin_table bin_net_ax25_param_table[] = ;
static const struct bin_table bin_net_ax25_table[] = ;
static const struct bin_table bin_net_rose_table[] = ;
static const struct bin_table bin_net_ipv6_conf_var_table[] = ;
static const struct bin_table bin_net_ipv6_conf_table[] = ;
static const struct bin_table bin_net_ipv6_route_table[] = ;
static const struct bin_table bin_net_ipv6_icmp_table[] = ;
static const struct bin_table bin_net_ipv6_table[] = ;
static const struct bin_table bin_net_x25_table[] = ;
static const struct bin_table bin_net_tr_table[] = ;
static const struct bin_table bin_net_decnet_conf_vars[] = ;
static const struct bin_table bin_net_decnet_conf[] = ;
static const struct bin_table bin_net_decnet_table[] = ;
static const struct bin_table bin_net_sctp_table[] = ;
static const struct bin_table bin_net_llc_llc2_timeout_table[] = ;
static const struct bin_table bin_net_llc_station_table[] = ;
static const struct bin_table bin_net_llc_llc2_table[] = ;
static const struct bin_table bin_net_llc_table[] = ;
static const struct bin_table bin_net_netfilter_table[] = ;
static const struct bin_table bin_net_irda_table[] = ;
static const struct bin_table bin_net_table[] = ;
static const struct bin_table bin_fs_quota_table[] = ;
static const struct bin_table bin_fs_xfs_table[] = ;
static const struct bin_table bin_fs_ocfs2_nm_table[] = ;
static const struct bin_table bin_fs_ocfs2_table[] = ;
static const struct bin_table bin_inotify_table[] = ;
static const struct bin_table bin_fs_table[] = ;
static const struct bin_table bin_ipmi_table[] = ;
static const struct bin_table bin_mac_hid_files[] = ;
static const struct bin_table bin_raid_table[] = ;
static const struct bin_table bin_scsi_table[] = ;
static const struct bin_table bin_dev_table[] = ;
static const struct bin_table bin_bus_isa_table[] = ;
static const struct bin_table bin_bus_table[] = ;
static const struct bin_table bin_s390dbf_table[] = ;
static const struct bin_table bin_sunrpc_table[] = ;
static const struct bin_table bin_pm_table[] = ;
static const struct bin_table bin_root_table[] = ;
static ssize_t bin_dir(struct file *file,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen)
static ssize_t bin_string(struct file *file,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen)
static ssize_t bin_intvec(struct file *file,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen)
static ssize_t bin_ulongvec(struct file *file,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen)
static ssize_t bin_uuid(struct file *file,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen)
static ssize_t bin_dn_node_address(struct file *file,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen)
static const struct bin_table *get_sysctl(const int *name, int nlen, char *path)
static char *sysctl_getname(const int *name, int nlen, const struct bin_table **tablep)
static ssize_t binary_sysctl(const int *name, int nlen,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen)
static ssize_t binary_sysctl(const int *name, int nlen,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen)
static void deprecated_sysctl_warning(const int *name, int nlen)
#define WARN_ONCE_HASH_BITS 8
#define WARN_ONCE_HASH_SIZE (1<<WARN_ONCE_HASH_BITS)
static DECLARE_BITMAP(warn_once_bitmap, WARN_ONCE_HASH_SIZE);
#define FNV32_OFFSET 2166136261U
#define FNV32_PRIME 0x01000193
static void warn_on_bintable(const int *name, int nlen)
static ssize_t do_sysctl(int __user *args_name, int nlen,
void __user *oldval, size_t oldlen, void __user *newval, size_t newlen)
SYSCALL_DEFINE1(sysctl, struct __sysctl_args __user *, args)
struct compat_sysctl_args ;
asmlinkage long compat_sys_sysctl(struct compat_sysctl_args __user *args)
