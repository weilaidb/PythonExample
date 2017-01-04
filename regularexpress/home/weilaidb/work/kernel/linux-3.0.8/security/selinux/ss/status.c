static struct page *selinux_status_page;
static DEFINE_MUTEX(selinux_status_lock);
struct page *selinux_kernel_status_page(void)
void selinux_status_update_setenforce(int enforcing)
void selinux_status_update_policyload(int seqno)
