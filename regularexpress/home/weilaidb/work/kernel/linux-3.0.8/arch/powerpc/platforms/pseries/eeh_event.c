static DEFINE_SPINLOCK(eeh_eventlist_lock);
LIST_HEAD(eeh_eventlist);
static void eeh_thread_launcher(struct work_struct *);
DECLARE_WORK(eeh_event_wq, eeh_thread_launcher);
DEFINE_MUTEX(eeh_event_mutex);
static int eeh_event_handler(void * dummy)
static void eeh_thread_launcher(struct work_struct *dummy)
int eeh_send_failure_event (struct device_node *dn,
struct pci_dev *dev)
