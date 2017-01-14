typedef void (*VOIDFUNCPTR) ();
#define MAX_COMMANDS 8
#define MAX_TLVS_SPACE 33000
static int verbose = 0;
static int interactive = 0;
static __u32 dest = 0;
static __u32 tlv_area[MAX_TLVS_SPACE / sizeof(__u32)];
static __u32 tlv_list_area[MAX_TLVS_SPACE / sizeof(__u32)];
static char usage[];
#define cprintf(fmt, arg...)	do  while (0)
#define fatal(fmt, arg...)	do  while (0)
#define confirm(fmt, arg...) do  while (0)
static char *err_string[] = ;
static inline int delimit(int val, int min, int max)
static __u32 own_node(void)
static const char *addr2str(__u32 addr)
static const char *for_dest(void)
static const char *for_domain(const char *string, __u32 domain)
static void print_title(const char *main_title, const char *extra_title)
static void print_title_opt(const char *main_title, const char *extra_title)
char *get_arg(char **args)
static __u32 str2addr(char *str)
#define NLA_SIZE(type)	(NLA_HDRLEN + NLA_ALIGN(sizeof(type)))
#define nla_for_each_attr(pos, head, len, rem) \
for (pos = head, rem = len; nla_ok(pos, rem); pos = nla_next(pos, &(rem)))
static inline void *nla_data(const struct nlattr *nla)
static inline int nla_ok(const struct nlattr *nla, int remaining)
static inline struct nlattr *nla_next(const struct nlattr *nla, int *remaining)
static inline int nla_put_string(struct nlattr *nla, int type, const char *str)
static inline __u16 nla_get_u16(struct nlattr *nla)
static int write_uninterrupted(int sk, const char *buf, int len)
static int genetlink_call(__u16 family_id, __u8 cmd, void *header,
size_t header_len, void *request, size_t request_len,
void *reply, size_t reply_len)
static int get_genl_family_id(const char* name)
static int do_command_netlink(__u16 cmd, void *req_tlv, __u32 req_tlv_space,
void *rep_tlv, __u32 rep_tlv_space)
static int do_command_tipc(__u16 cmd, void *req_tlv, __u32 req_tlv_space,
void *rep_tlv, __u32 rep_tlv_space)
static __u32 do_command(__u16 cmd, void *req_tlv, __u32 req_tlv_space,
void *rep_tlv, __u32 rep_tlv_space)
static __u32 do_get_unsigned(__u16 cmd)
static void do_set_unsigned(char *args, __u16 cmd, char *attr_name,
char *attr_warn)
static void set_node_addr(char *args)
static void set_remote_mng(char *args)
static void set_max_ports(char *args)
static void set_max_publ(char *args)
static void set_max_subscr(char *args)
static void set_max_zones(char *args)
static void set_max_clusters(char *args)
static void set_max_nodes(char *args)
static void set_netid(char *args)
static void get_nodes(char *args)
static void do_these_links(VOIDFUNCPTR funcToRun, __u32 domain, const char *str,
const char *vname, int cmd, int val)
static void get_link(char *linkName, __u32 up)
static void get_linkset(char *args)
static void show_link_stats(char *linkName)
static void show_linkset_stats(char *args)
static void reset_link_stats(char *linkName)
static void reset_linkset_stats(char *args)
static void show_name_table(char *args)
static void get_media(char *dummy)
static void do_these_bearers(VOIDFUNCPTR funcToRun, const char *str)
static void get_bearer(char *bname)
static void get_bearerset(char *args)
static void show_ports(char *dummy)
static void set_log_size(char *args)
static void show_stats(char *args)
static void set_link_value(char *linkName, __u32 dummy, const char *vname,
int cmd, int val)
static void set_linkset_value(char *args, const char *vname, int cmd)
static void set_linkset_tolerance(char *args)
static void set_linkset_priority(char *args)
static void set_linkset_window(char *args)
static void enable_bearer(char *args)
static void disable_bearer(char *bname)
static void disable_bearerset(char *args)
#define OPT_BASE '@'
struct command ;
static char usage[] =
;
static struct option options[] = ;
void (*cmd_array[])(char *args) = ;
int main(int argc, char *argv[], char *dummy[])
