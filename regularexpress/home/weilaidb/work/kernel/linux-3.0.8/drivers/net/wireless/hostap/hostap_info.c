static void prism2_info_commtallies16(local_info_t *local, unsigned char *buf,
int left)
static void prism2_info_commtallies32(local_info_t *local, unsigned char *buf,
int left)
static void prism2_info_commtallies(local_info_t *local, unsigned char *buf,
int left)
static const char* hfa384x_linkstatus_str(u16 linkstatus)
static void prism2_info_linkstatus(local_info_t *local, unsigned char *buf,
int left)
static void prism2_host_roaming(local_info_t *local)
static void hostap_report_scan_complete(local_info_t *local)
static void prism2_info_scanresults(local_info_t *local, unsigned char *buf,
int left)
static void prism2_info_hostscanresults(local_info_t *local,
unsigned char *buf, int left)
void hostap_info_process(local_info_t *local, struct sk_buff *skb)
static void handle_info_queue_linkstatus(local_info_t *local)
static void handle_info_queue_scanresults(local_info_t *local)
static void handle_info_queue(struct work_struct *work)
void hostap_info_init(local_info_t *local)
EXPORT_SYMBOL(hostap_info_init);
EXPORT_SYMBOL(hostap_info_process);
