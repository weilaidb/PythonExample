#define GENLMSG_DATA(glh)	((void *)(NLMSG_DATA(glh) + GENL_HDRLEN))
#define GENLMSG_PAYLOAD(glh)	(NLMSG_PAYLOAD(glh, 0) - GENL_HDRLEN)
#define NLA_DATA(na)		((void *)((char*)(na) + NLA_HDRLEN))
#define NLA_PAYLOAD(len)	(len - NLA_HDRLEN)
#define err(code, fmt, arg...)			\
do  while (0)
int done;
int rcvbufsz;
char name[100];
int dbg;
int print_delays;
int print_io_accounting;
int print_task_context_switch_counts;
__u64 stime, utime;
#define PRINTF(fmt, arg...)
#define MAX_MSG_SIZE	1024
#define MAX_CPUS	32
struct msgtemplate ;
char cpumask[100+6*MAX_CPUS];
static void usage(void)
static int create_nl_socket(int protocol)
static int send_cmd(int sd, __u16 nlmsg_type, __u32 nlmsg_pid,
__u8 genl_cmd, __u16 nla_type,
void *nla_data, int nla_len)
static int get_family_id(int sd)
#define average_ms(t, c) (t / 1000000ULL / (c ? c : 1))
static void print_delayacct(struct taskstats *t)
static void task_context_switch_counts(struct taskstats *t)
static void print_cgroupstats(struct cgroupstats *c)
static void print_ioacct(struct taskstats *t)
int main(int argc, char *argv[])
