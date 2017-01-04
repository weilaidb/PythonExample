#define _DRIVERS_MISC_SGIXP_XP_H
#if defined CONFIG_X86_UV || defined CONFIG_IA64_SGI_UV
#define is_uv()		is_uv_system()
#define is_uv()		0
#if defined CONFIG_IA64
#define is_shub()	ia64_platform_is("sn2")
#define is_shub1()	0
#define is_shub2()	0
#define is_shub()	0
#define DBUG_ON(condition)	BUG_ON(condition)
#define DBUG_ON(condition)
#define XP_MAX_NPARTITIONS_SN2	64
#define XP_MAX_NPARTITIONS_UV	256
#define XPC_MEM_CHANNEL		0
#define	XPC_NET_CHANNEL		1
#define XPC_MAX_NCHANNELS	2
#if XPC_MAX_NCHANNELS > 8
#error	XPC_MAX_NCHANNELS exceeds absolute MAXIMUM possible.
#define XPC_MSG_MAX_SIZE	128
#define XPC_MSG_HDR_MAX_SIZE	16
#define XPC_MSG_PAYLOAD_MAX_SIZE (XPC_MSG_MAX_SIZE - XPC_MSG_HDR_MAX_SIZE)
#define XPC_MSG_SIZE(_payload_size) \
ALIGN(XPC_MSG_HDR_MAX_SIZE + (_payload_size), \
is_uv() ? 64 : 128)
enum xp_retval ;
typedef void (*xpc_channel_func) (enum xp_retval reason, short partid,
int ch_number, void *data, void *key);
typedef void (*xpc_notify_func) (enum xp_retval reason, short partid,
int ch_number, void *key);
struct xpc_registration  ____cacheline_aligned;
#define XPC_CHANNEL_REGISTERED(_c)	(xpc_registrations[_c].func != NULL)
#define XPC_WAIT	0
#define XPC_NOWAIT	1
struct xpc_interface ;
extern struct xpc_interface xpc_interface;
extern void xpc_set_interface(void (*)(int),
void (*)(int),
enum xp_retval (*)(short, int, u32, void *, u16),
enum xp_retval (*)(short, int, u32, void *, u16,
xpc_notify_func, void *),
void (*)(short, int, void *),
enum xp_retval (*)(short, void *));
extern void xpc_clear_interface(void);
extern enum xp_retval xpc_connect(int, xpc_channel_func, void *, u16,
u16, u32, u32);
extern void xpc_disconnect(int);
static inline enum xp_retval
xpc_send(short partid, int ch_number, u32 flags, void *payload,
u16 payload_size)
static inline enum xp_retval
xpc_send_notify(short partid, int ch_number, u32 flags, void *payload,
u16 payload_size, xpc_notify_func func, void *key)
static inline void
xpc_received(short partid, int ch_number, void *payload)
static inline enum xp_retval
xpc_partid_to_nasids(short partid, void *nasids)
extern short xp_max_npartitions;
extern short xp_partition_id;
extern u8 xp_region_size;
extern unsigned long (*xp_pa) (void *);
extern unsigned long (*xp_socket_pa) (unsigned long);
extern enum xp_retval (*xp_remote_memcpy) (unsigned long, const unsigned long,
size_t);
extern int (*xp_cpu_to_nasid) (int);
extern enum xp_retval (*xp_expand_memprotect) (unsigned long, unsigned long);
extern enum xp_retval (*xp_restrict_memprotect) (unsigned long, unsigned long);
extern u64 xp_nofault_PIOR_target;
extern int xp_nofault_PIOR(void *);
extern int xp_error_PIOR(void);
extern struct device *xp;
extern enum xp_retval xp_init_sn2(void);
extern enum xp_retval xp_init_uv(void);
extern void xp_exit_sn2(void);
extern void xp_exit_uv(void);
