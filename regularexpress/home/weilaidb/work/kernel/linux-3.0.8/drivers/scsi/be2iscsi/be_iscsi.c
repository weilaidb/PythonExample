extern struct iscsi_transport beiscsi_iscsi_transport;
struct iscsi_cls_session *beiscsi_session_create(struct iscsi_endpoint *ep,
u16 cmds_max,
u16 qdepth,
u32 initial_cmdsn)
void beiscsi_session_destroy(struct iscsi_cls_session *cls_session)
struct iscsi_cls_conn *
beiscsi_conn_create(struct iscsi_cls_session *cls_session, u32 cid)
static int beiscsi_bindconn_cid(struct beiscsi_hba *phba,
struct beiscsi_conn *beiscsi_conn,
unsigned int cid)
int beiscsi_conn_bind(struct iscsi_cls_session *cls_session,
struct iscsi_cls_conn *cls_conn,
u64 transport_fd, int is_leading)
int beiscsi_ep_get_param(struct iscsi_endpoint *ep,
enum iscsi_param param, char *buf)
int beiscsi_set_param(struct iscsi_cls_conn *cls_conn,
enum iscsi_param param, char *buf, int buflen)
int beiscsi_get_host_param(struct Scsi_Host *shost,
enum iscsi_host_param param, char *buf)
int beiscsi_get_macaddr(char *buf, struct beiscsi_hba *phba)
void beiscsi_conn_get_stats(struct iscsi_cls_conn *cls_conn,
struct iscsi_stats *stats)
static void  beiscsi_set_params_for_offld(struct beiscsi_conn *beiscsi_conn,
struct beiscsi_offload_params *params)
int beiscsi_conn_start(struct iscsi_cls_conn *cls_conn)
static int beiscsi_get_cid(struct beiscsi_hba *phba)
static void beiscsi_put_cid(struct beiscsi_hba *phba, unsigned short cid)
static void beiscsi_free_ep(struct beiscsi_endpoint *beiscsi_ep)
static int beiscsi_open_conn(struct iscsi_endpoint *ep,
struct sockaddr *src_addr,
struct sockaddr *dst_addr, int non_blocking)
struct iscsi_endpoint *
beiscsi_ep_connect(struct Scsi_Host *shost, struct sockaddr *dst_addr,
int non_blocking)
int beiscsi_ep_poll(struct iscsi_endpoint *ep, int timeout_ms)
static int beiscsi_close_conn(struct  beiscsi_endpoint *beiscsi_ep, int flag)
static int beiscsi_unbind_conn_to_cid(struct beiscsi_hba *phba,
unsigned int cid)
void beiscsi_ep_disconnect(struct iscsi_endpoint *ep)
