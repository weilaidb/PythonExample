LIST_HEAD(rio_devices);
static LIST_HEAD(rio_switches);
static void rio_enum_timeout(unsigned long);
static void rio_init_em(struct rio_dev *rdev);
DEFINE_SPINLOCK(rio_global_list_lock);
static int next_destid = 0;
static int next_net = 0;
static int next_comptag = 1;
static struct timer_list rio_enum_timer =
TIMER_INITIALIZER(rio_enum_timeout, 0, 0);
static int rio_mport_phys_table[] = ;
static u16 rio_get_device_id(struct rio_mport *port, u16 destid, u8 hopcount)
static void rio_set_device_id(struct rio_mport *port, u16 destid, u8 hopcount, u16 did)
static void rio_local_set_device_id(struct rio_mport *port, u16 did)
static int rio_clear_locks(struct rio_mport *port)
static int rio_enum_host(struct rio_mport *port)
static int rio_device_has_destid(struct rio_mport *port, int src_ops,
int dst_ops)
static void rio_release_dev(struct device *dev)
static int rio_is_switch(struct rio_dev *rdev)
static void rio_switch_init(struct rio_dev *rdev, int do_enum)
static int __devinit rio_add_device(struct rio_dev *rdev)
inline int rio_enable_rx_tx_port(struct rio_mport *port,
int local, u16 destid,
u8 hopcount, u8 port_num)
static struct rio_dev __devinit *rio_setup_device(struct rio_net *net,
struct rio_mport *port, u16 destid,
u8 hopcount, int do_enum)
static int
rio_sport_is_active(struct rio_mport *port, u16 destid, u8 hopcount, int sport)
static int
rio_lock_device(struct rio_mport *port, u16 destid, u8 hopcount, int wait_ms)
static int
rio_unlock_device(struct rio_mport *port, u16 destid, u8 hopcount)
static int
rio_route_add_entry(struct rio_dev *rdev,
u16 table, u16 route_destid, u8 route_port, int lock)
static int
rio_route_get_entry(struct rio_dev *rdev, u16 table,
u16 route_destid, u8 *route_port, int lock)
static u16 rio_get_host_deviceid_lock(struct rio_mport *port, u8 hopcount)
static int __devinit rio_enum_peer(struct rio_net *net, struct rio_mport *port,
u8 hopcount, struct rio_dev *prev, int prev_port)
static int rio_enum_complete(struct rio_mport *port)
static int __devinit
rio_disc_peer(struct rio_net *net, struct rio_mport *port, u16 destid,
u8 hopcount, struct rio_dev *prev, int prev_port)
static int rio_mport_is_active(struct rio_mport *port)
static struct rio_net __devinit *rio_alloc_net(struct rio_mport *port)
static void rio_update_route_tables(struct rio_mport *port)
static void rio_init_em(struct rio_dev *rdev)
static void rio_pw_enable(struct rio_mport *port, int enable)
int __devinit rio_enum_mport(struct rio_mport *mport)
static void rio_build_route_tables(void)
static void rio_enum_timeout(unsigned long data)
int __devinit rio_disc_mport(struct rio_mport *mport)
