static void mcast_add_one(struct ib_device *device);
static void mcast_remove_one(struct ib_device *device);
static struct ib_client mcast_client = ;
static struct ib_sa_client	sa_client;
static struct workqueue_struct	*mcast_wq;
static union ib_gid mgid0;
struct mcast_device;
struct mcast_port ;
struct mcast_device ;
enum mcast_state ;
enum mcast_group_state ;
enum ;
struct mcast_member;
struct mcast_group ;
struct mcast_member ;
static void join_handler(int status, struct ib_sa_mcmember_rec *rec,
void *context);
static void leave_handler(int status, struct ib_sa_mcmember_rec *rec,
void *context);
static struct mcast_group *mcast_find(struct mcast_port *port,
union ib_gid *mgid)
static struct mcast_group *mcast_insert(struct mcast_port *port,
struct mcast_group *group,
int allow_duplicates)
static void deref_port(struct mcast_port *port)
static void release_group(struct mcast_group *group)
static void deref_member(struct mcast_member *member)
static void queue_join(struct mcast_member *member)
static void adjust_membership(struct mcast_group *group, u8 join_state, int inc)
static u8 get_leave_state(struct mcast_group *group)
static int check_selector(ib_sa_comp_mask comp_mask,
ib_sa_comp_mask selector_mask,
ib_sa_comp_mask value_mask,
u8 selector, u8 src_value, u8 dst_value)
static int cmp_rec(struct ib_sa_mcmember_rec *src,
struct ib_sa_mcmember_rec *dst, ib_sa_comp_mask comp_mask)
static int send_join(struct mcast_group *group, struct mcast_member *member)
static int send_leave(struct mcast_group *group, u8 leave_state)
static void join_group(struct mcast_group *group, struct mcast_member *member,
u8 join_state)
static int fail_join(struct mcast_group *group, struct mcast_member *member,
int status)
static void process_group_error(struct mcast_group *group)
static void mcast_work_handler(struct work_struct *work)
static void process_join_error(struct mcast_group *group, int status)
static void join_handler(int status, struct ib_sa_mcmember_rec *rec,
void *context)
static void leave_handler(int status, struct ib_sa_mcmember_rec *rec,
void *context)
static struct mcast_group *acquire_group(struct mcast_port *port,
union ib_gid *mgid, gfp_t gfp_mask)
struct ib_sa_multicast *
ib_sa_join_multicast(struct ib_sa_client *client,
struct ib_device *device, u8 port_num,
struct ib_sa_mcmember_rec *rec,
ib_sa_comp_mask comp_mask, gfp_t gfp_mask,
int (*callback)(int status,
struct ib_sa_multicast *multicast),
void *context)
EXPORT_SYMBOL(ib_sa_join_multicast);
void ib_sa_free_multicast(struct ib_sa_multicast *multicast)
EXPORT_SYMBOL(ib_sa_free_multicast);
int ib_sa_get_mcmember_rec(struct ib_device *device, u8 port_num,
union ib_gid *mgid, struct ib_sa_mcmember_rec *rec)
EXPORT_SYMBOL(ib_sa_get_mcmember_rec);
int ib_init_ah_from_mcmember(struct ib_device *device, u8 port_num,
struct ib_sa_mcmember_rec *rec,
struct ib_ah_attr *ah_attr)
EXPORT_SYMBOL(ib_init_ah_from_mcmember);
static void mcast_groups_event(struct mcast_port *port,
enum mcast_group_state state)
static void mcast_event_handler(struct ib_event_handler *handler,
struct ib_event *event)
static void mcast_add_one(struct ib_device *device)
static void mcast_remove_one(struct ib_device *device)
int mcast_init(void)
void mcast_cleanup(void)
