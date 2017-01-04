#define OSD_OP_FRONT_LEN	4096
#define OSD_OPREPLY_FRONT_LEN	512
static const struct ceph_connection_operations osd_con_ops;
static void send_queued(struct ceph_osd_client *osdc);
static int __reset_osd(struct ceph_osd_client *osdc, struct ceph_osd *osd);
static void __register_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req);
static void __unregister_linger_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req);
static int __send_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req);
static int op_needs_trail(int op)
static int op_has_extent(int op)
void ceph_calc_raw_layout(struct ceph_osd_client *osdc,
struct ceph_file_layout *layout,
u64 snapid,
u64 off, u64 *plen, u64 *bno,
struct ceph_osd_request *req,
struct ceph_osd_req_op *op)
EXPORT_SYMBOL(ceph_calc_raw_layout);
static void calc_layout(struct ceph_osd_client *osdc,
struct ceph_vino vino,
struct ceph_file_layout *layout,
u64 off, u64 *plen,
struct ceph_osd_request *req,
struct ceph_osd_req_op *op)
void ceph_osdc_release_request(struct kref *kref)
EXPORT_SYMBOL(ceph_osdc_release_request);
static int get_num_ops(struct ceph_osd_req_op *ops, int *needs_trail)
struct ceph_osd_request *ceph_osdc_alloc_request(struct ceph_osd_client *osdc,
int flags,
struct ceph_snap_context *snapc,
struct ceph_osd_req_op *ops,
bool use_mempool,
gfp_t gfp_flags,
struct page **pages,
struct bio *bio)
EXPORT_SYMBOL(ceph_osdc_alloc_request);
static void osd_req_encode_op(struct ceph_osd_request *req,
struct ceph_osd_op *dst,
struct ceph_osd_req_op *src)
void ceph_osdc_build_request(struct ceph_osd_request *req,
u64 off, u64 *plen,
struct ceph_osd_req_op *src_ops,
struct ceph_snap_context *snapc,
struct timespec *mtime,
const char *oid,
int oid_len)
EXPORT_SYMBOL(ceph_osdc_build_request);
struct ceph_osd_request *ceph_osdc_new_request(struct ceph_osd_client *osdc,
struct ceph_file_layout *layout,
struct ceph_vino vino,
u64 off, u64 *plen,
int opcode, int flags,
struct ceph_snap_context *snapc,
int do_sync,
u32 truncate_seq,
u64 truncate_size,
struct timespec *mtime,
bool use_mempool, int num_reply,
int page_align)
EXPORT_SYMBOL(ceph_osdc_new_request);
static void __insert_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *new)
static struct ceph_osd_request *__lookup_request(struct ceph_osd_client *osdc,
u64 tid)
static struct ceph_osd_request *
__lookup_request_ge(struct ceph_osd_client *osdc,
u64 tid)
static void __kick_osd_requests(struct ceph_osd_client *osdc,
struct ceph_osd *osd)
static void kick_osd_requests(struct ceph_osd_client *osdc,
struct ceph_osd *kickosd)
static void osd_reset(struct ceph_connection *con)
static struct ceph_osd *create_osd(struct ceph_osd_client *osdc)
static struct ceph_osd *get_osd(struct ceph_osd *osd)
static void put_osd(struct ceph_osd *osd)
static void __remove_osd(struct ceph_osd_client *osdc, struct ceph_osd *osd)
static void __move_osd_to_lru(struct ceph_osd_client *osdc,
struct ceph_osd *osd)
static void __remove_osd_from_lru(struct ceph_osd *osd)
static void remove_old_osds(struct ceph_osd_client *osdc, int remove_all)
static int __reset_osd(struct ceph_osd_client *osdc, struct ceph_osd *osd)
static void __insert_osd(struct ceph_osd_client *osdc, struct ceph_osd *new)
static struct ceph_osd *__lookup_osd(struct ceph_osd_client *osdc, int o)
static void __schedule_osd_timeout(struct ceph_osd_client *osdc)
static void __cancel_osd_timeout(struct ceph_osd_client *osdc)
static void __register_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
static void register_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
static void __unregister_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
static void __cancel_request(struct ceph_osd_request *req)
static void __register_linger_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
static void __unregister_linger_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
void ceph_osdc_unregister_linger_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
EXPORT_SYMBOL(ceph_osdc_unregister_linger_request);
void ceph_osdc_set_request_linger(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
EXPORT_SYMBOL(ceph_osdc_set_request_linger);
static int __map_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
static int __send_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
static void send_queued(struct ceph_osd_client *osdc)
static void handle_timeout(struct work_struct *work)
static void handle_osds_timeout(struct work_struct *work)
static void complete_request(struct ceph_osd_request *req)
static void handle_reply(struct ceph_osd_client *osdc, struct ceph_msg *msg,
struct ceph_connection *con)
static void reset_changed_osds(struct ceph_osd_client *osdc)
static void kick_requests(struct ceph_osd_client *osdc)
void ceph_osdc_handle_map(struct ceph_osd_client *osdc, struct ceph_msg *msg)
static void __release_event(struct kref *kref)
static void get_event(struct ceph_osd_event *event)
void ceph_osdc_put_event(struct ceph_osd_event *event)
EXPORT_SYMBOL(ceph_osdc_put_event);
static void __insert_event(struct ceph_osd_client *osdc,
struct ceph_osd_event *new)
static struct ceph_osd_event *__find_event(struct ceph_osd_client *osdc,
u64 cookie)
static void __remove_event(struct ceph_osd_event *event)
int ceph_osdc_create_event(struct ceph_osd_client *osdc,
void (*event_cb)(u64, u64, u8, void *),
int one_shot, void *data,
struct ceph_osd_event **pevent)
EXPORT_SYMBOL(ceph_osdc_create_event);
void ceph_osdc_cancel_event(struct ceph_osd_event *event)
EXPORT_SYMBOL(ceph_osdc_cancel_event);
static void do_event_work(struct work_struct *work)
void handle_watch_notify(struct ceph_osd_client *osdc, struct ceph_msg *msg)
int ceph_osdc_wait_event(struct ceph_osd_event *event, unsigned long timeout)
EXPORT_SYMBOL(ceph_osdc_wait_event);
int ceph_osdc_start_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req,
bool nofail)
EXPORT_SYMBOL(ceph_osdc_start_request);
int ceph_osdc_wait_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req)
EXPORT_SYMBOL(ceph_osdc_wait_request);
void ceph_osdc_sync(struct ceph_osd_client *osdc)
EXPORT_SYMBOL(ceph_osdc_sync);
int ceph_osdc_init(struct ceph_osd_client *osdc, struct ceph_client *client)
EXPORT_SYMBOL(ceph_osdc_init);
void ceph_osdc_stop(struct ceph_osd_client *osdc)
EXPORT_SYMBOL(ceph_osdc_stop);
int ceph_osdc_readpages(struct ceph_osd_client *osdc,
struct ceph_vino vino, struct ceph_file_layout *layout,
u64 off, u64 *plen,
u32 truncate_seq, u64 truncate_size,
struct page **pages, int num_pages, int page_align)
EXPORT_SYMBOL(ceph_osdc_readpages);
int ceph_osdc_writepages(struct ceph_osd_client *osdc, struct ceph_vino vino,
struct ceph_file_layout *layout,
struct ceph_snap_context *snapc,
u64 off, u64 len,
u32 truncate_seq, u64 truncate_size,
struct timespec *mtime,
struct page **pages, int num_pages,
int flags, int do_sync, bool nofail)
EXPORT_SYMBOL(ceph_osdc_writepages);
static void dispatch(struct ceph_connection *con, struct ceph_msg *msg)
static struct ceph_msg *get_reply(struct ceph_connection *con,
struct ceph_msg_header *hdr,
int *skip)
static struct ceph_msg *alloc_msg(struct ceph_connection *con,
struct ceph_msg_header *hdr,
int *skip)
static struct ceph_connection *get_osd_con(struct ceph_connection *con)
static void put_osd_con(struct ceph_connection *con)
static int get_authorizer(struct ceph_connection *con,
void **buf, int *len, int *proto,
void **reply_buf, int *reply_len, int force_new)
static int verify_authorizer_reply(struct ceph_connection *con, int len)
static int invalidate_authorizer(struct ceph_connection *con)
static const struct ceph_connection_operations osd_con_ops = ;
