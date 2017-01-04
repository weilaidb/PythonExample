#define CN_KVP_IDX		0x9
#define CN_KVP_VAL		0x1
#define CN_KVP_USER_VAL		0x2
enum kvp_op ;
#define HV_KVP_EXCHANGE_MAX_KEY_SIZE	512
#define HV_KVP_EXCHANGE_MAX_VALUE_SIZE	2048
struct hv_ku_msg ;
enum key_index ;
static char kvp_send_buffer[4096];
static char kvp_recv_buffer[4096];
static struct sockaddr_nl addr;
static char *os_name = "";
static char *os_major = "";
static char *os_minor = "";
static char *processor_arch;
static char *os_build;
static char *lic_version;
static struct utsname uts_buf;
void kvp_get_os_info(void)
static int
kvp_get_ip_address(int family, char *buffer, int length)
static int
kvp_get_domain_name(char *buffer, int length)
static int
netlink_send(int fd, struct cn_msg *msg)
int main(void)
