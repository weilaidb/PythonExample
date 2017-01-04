#define IUCV_IPRMDATA	0x80
#define IUCV_IPQUSCE	0x40
#define IUCV_IPBUFLST	0x40
#define IUCV_IPPRTY	0x20
#define IUCV_IPANSLST	0x08
#define IUCV_IPSYNC	0x04
#define IUCV_IPLOCAL	0x01
struct iucv_array  __attribute__ ((aligned (8)));
extern struct bus_type iucv_bus;
extern struct device *iucv_root;
struct iucv_path ;
struct iucv_message ;
struct iucv_handler ;
int iucv_register(struct iucv_handler *handler, int smp);
void iucv_unregister(struct iucv_handler *handle, int smp);
static inline struct iucv_path *iucv_path_alloc(u16 msglim, u8 flags, gfp_t gfp)
static inline void iucv_path_free(struct iucv_path *path)
int iucv_path_accept(struct iucv_path *path, struct iucv_handler *handler,
u8 userdata[16], void *private);
int iucv_path_connect(struct iucv_path *path, struct iucv_handler *handler,
u8 userid[8], u8 system[8], u8 userdata[16],
void *private);
int iucv_path_quiesce(struct iucv_path *path, u8 userdata[16]);
int iucv_path_resume(struct iucv_path *path, u8 userdata[16]);
int iucv_path_sever(struct iucv_path *path, u8 userdata[16]);
int iucv_message_purge(struct iucv_path *path, struct iucv_message *msg,
u32 srccls);
int iucv_message_receive(struct iucv_path *path, struct iucv_message *msg,
u8 flags, void *buffer, size_t size, size_t *residual);
int __iucv_message_receive(struct iucv_path *path, struct iucv_message *msg,
u8 flags, void *buffer, size_t size,
size_t *residual);
int iucv_message_reject(struct iucv_path *path, struct iucv_message *msg);
int iucv_message_reply(struct iucv_path *path, struct iucv_message *msg,
u8 flags, void *reply, size_t size);
int iucv_message_send(struct iucv_path *path, struct iucv_message *msg,
u8 flags, u32 srccls, void *buffer, size_t size);
int __iucv_message_send(struct iucv_path *path, struct iucv_message *msg,
u8 flags, u32 srccls, void *buffer, size_t size);
int iucv_message_send2way(struct iucv_path *path, struct iucv_message *msg,
u8 flags, u32 srccls, void *buffer, size_t size,
void *answer, size_t asize, size_t *residual);
