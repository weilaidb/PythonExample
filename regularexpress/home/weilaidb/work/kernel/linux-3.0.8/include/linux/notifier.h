#define _LINUX_NOTIFIER_H
struct notifier_block ;
struct atomic_notifier_head ;
struct blocking_notifier_head ;
struct raw_notifier_head ;
struct srcu_notifier_head ;
#define ATOMIC_INIT_NOTIFIER_HEAD(name) do  while (0)
#define BLOCKING_INIT_NOTIFIER_HEAD(name) do  while (0)
#define RAW_INIT_NOTIFIER_HEAD(name) do  while (0)
extern void srcu_init_notifier_head(struct srcu_notifier_head *nh);
#define srcu_cleanup_notifier_head(name)	\
cleanup_srcu_struct(&(name)->srcu);
#define ATOMIC_NOTIFIER_INIT(name)
#define BLOCKING_NOTIFIER_INIT(name)
#define RAW_NOTIFIER_INIT(name)
#define ATOMIC_NOTIFIER_HEAD(name)				\
struct atomic_notifier_head name =			\
ATOMIC_NOTIFIER_INIT(name)
#define BLOCKING_NOTIFIER_HEAD(name)				\
struct blocking_notifier_head name =			\
BLOCKING_NOTIFIER_INIT(name)
#define RAW_NOTIFIER_HEAD(name)					\
struct raw_notifier_head name =				\
RAW_NOTIFIER_INIT(name)
extern int atomic_notifier_chain_register(struct atomic_notifier_head *nh,
struct notifier_block *nb);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *nh,
struct notifier_block *nb);
extern int raw_notifier_chain_register(struct raw_notifier_head *nh,
struct notifier_block *nb);
extern int srcu_notifier_chain_register(struct srcu_notifier_head *nh,
struct notifier_block *nb);
extern int blocking_notifier_chain_cond_register(
struct blocking_notifier_head *nh,
struct notifier_block *nb);
extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *nh,
struct notifier_block *nb);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
struct notifier_block *nb);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
struct notifier_block *nb);
extern int srcu_notifier_chain_unregister(struct srcu_notifier_head *nh,
struct notifier_block *nb);
extern int atomic_notifier_call_chain(struct atomic_notifier_head *nh,
unsigned long val, void *v);
extern int __atomic_notifier_call_chain(struct atomic_notifier_head *nh,
unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *nh,
unsigned long val, void *v);
extern int __blocking_notifier_call_chain(struct blocking_notifier_head *nh,
unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int raw_notifier_call_chain(struct raw_notifier_head *nh,
unsigned long val, void *v);
extern int __raw_notifier_call_chain(struct raw_notifier_head *nh,
unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int srcu_notifier_call_chain(struct srcu_notifier_head *nh,
unsigned long val, void *v);
extern int __srcu_notifier_call_chain(struct srcu_notifier_head *nh,
unsigned long val, void *v, int nr_to_call, int *nr_calls);
#define NOTIFY_DONE		0x0000
#define NOTIFY_OK		0x0001
#define NOTIFY_STOP_MASK	0x8000
#define NOTIFY_BAD		(NOTIFY_STOP_MASK|0x0002)
#define NOTIFY_STOP		(NOTIFY_OK|NOTIFY_STOP_MASK)
static inline int notifier_from_errno(int err)
static inline int notifier_to_errno(int ret)
#define NETDEV_UP	0x0001
#define NETDEV_DOWN	0x0002
#define NETDEV_REBOOT	0x0003
#define NETDEV_CHANGE	0x0004
#define NETDEV_REGISTER 0x0005
#define NETDEV_UNREGISTER	0x0006
#define NETDEV_CHANGEMTU	0x0007
#define NETDEV_CHANGEADDR	0x0008
#define NETDEV_GOING_DOWN	0x0009
#define NETDEV_CHANGENAME	0x000A
#define NETDEV_FEAT_CHANGE	0x000B
#define NETDEV_BONDING_FAILOVER 0x000C
#define NETDEV_PRE_UP		0x000D
#define NETDEV_PRE_TYPE_CHANGE	0x000E
#define NETDEV_POST_TYPE_CHANGE	0x000F
#define NETDEV_POST_INIT	0x0010
#define NETDEV_UNREGISTER_BATCH 0x0011
#define NETDEV_RELEASE		0x0012
#define NETDEV_NOTIFY_PEERS	0x0013
#define NETDEV_JOIN		0x0014
#define SYS_DOWN	0x0001
#define SYS_RESTART	SYS_DOWN
#define SYS_HALT	0x0002
#define SYS_POWER_OFF	0x0003
#define NETLINK_URELEASE	0x0001
#define CPU_ONLINE		0x0002
#define CPU_UP_PREPARE		0x0003
#define CPU_UP_CANCELED		0x0004
#define CPU_DOWN_PREPARE	0x0005
#define CPU_DOWN_FAILED		0x0006
#define CPU_DEAD		0x0007
#define CPU_DYING		0x0008
#define CPU_POST_DEAD		0x0009
#define CPU_STARTING		0x000A
#define CPU_TASKS_FROZEN	0x0010
#define CPU_ONLINE_FROZEN	(CPU_ONLINE | CPU_TASKS_FROZEN)
#define CPU_UP_PREPARE_FROZEN	(CPU_UP_PREPARE | CPU_TASKS_FROZEN)
#define CPU_UP_CANCELED_FROZEN	(CPU_UP_CANCELED | CPU_TASKS_FROZEN)
#define CPU_DOWN_PREPARE_FROZEN	(CPU_DOWN_PREPARE | CPU_TASKS_FROZEN)
#define CPU_DOWN_FAILED_FROZEN	(CPU_DOWN_FAILED | CPU_TASKS_FROZEN)
#define CPU_DEAD_FROZEN		(CPU_DEAD | CPU_TASKS_FROZEN)
#define CPU_DYING_FROZEN	(CPU_DYING | CPU_TASKS_FROZEN)
#define CPU_STARTING_FROZEN	(CPU_STARTING | CPU_TASKS_FROZEN)
#define PM_HIBERNATION_PREPARE	0x0001
#define PM_POST_HIBERNATION	0x0002
#define PM_SUSPEND_PREPARE	0x0003
#define PM_POST_SUSPEND		0x0004
#define PM_RESTORE_PREPARE	0x0005
#define PM_POST_RESTORE		0x0006
#define KBD_KEYCODE		0x0001
#define KBD_UNBOUND_KEYCODE	0x0002
#define KBD_UNICODE		0x0003
#define KBD_KEYSYM		0x0004
#define KBD_POST_KEYSYM		0x0005
extern struct blocking_notifier_head reboot_notifier_list;
#define VT_ALLOCATE		0x0001
#define VT_DEALLOCATE		0x0002
#define VT_WRITE		0x0003
#define VT_UPDATE		0x0004
#define VT_PREWRITE		0x0005
