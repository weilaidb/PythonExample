#define _FS_CEPH_OSD_CLIENT_H
struct ceph_msg;
struct ceph_snap_context;
struct ceph_osd_request;
struct ceph_osd_client;
struct ceph_authorizer;
struct ceph_pagelist;
typedef void (*ceph_osdc_callback_t)(struct ceph_osd_request *,
struct ceph_msg *);
struct ceph_osd ;
struct ceph_osd_request ;
struct ceph_osd_event ;
struct ceph_osd_event_work ;
struct ceph_osd_client ;
struct ceph_osd_req_op ;
extern int ceph_osdc_init(struct ceph_osd_client *osdc,
struct ceph_client *client);
extern void ceph_osdc_stop(struct ceph_osd_client *osdc);
extern void ceph_osdc_handle_reply(struct ceph_osd_client *osdc,
struct ceph_msg *msg);
extern void ceph_osdc_handle_map(struct ceph_osd_client *osdc,
struct ceph_msg *msg);
extern void ceph_calc_raw_layout(struct ceph_osd_client *osdc,
struct ceph_file_layout *layout,
u64 snapid,
u64 off, u64 *plen, u64 *bno,
struct ceph_osd_request *req,
struct ceph_osd_req_op *op);
extern struct ceph_osd_request *ceph_osdc_alloc_request(struct ceph_osd_client *osdc,
int flags,
struct ceph_snap_context *snapc,
struct ceph_osd_req_op *ops,
bool use_mempool,
gfp_t gfp_flags,
struct page **pages,
struct bio *bio);
extern void ceph_osdc_build_request(struct ceph_osd_request *req,
u64 off, u64 *plen,
struct ceph_osd_req_op *src_ops,
struct ceph_snap_context *snapc,
struct timespec *mtime,
const char *oid,
int oid_len);
extern struct ceph_osd_request *ceph_osdc_new_request(struct ceph_osd_client *,
struct ceph_file_layout *layout,
struct ceph_vino vino,
u64 offset, u64 *len, int op, int flags,
struct ceph_snap_context *snapc,
int do_sync, u32 truncate_seq,
u64 truncate_size,
struct timespec *mtime,
bool use_mempool, int num_reply,
int page_align);
extern void ceph_osdc_set_request_linger(struct ceph_osd_client *osdc,
struct ceph_osd_request *req);
extern void ceph_osdc_unregister_linger_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req);
static inline void ceph_osdc_get_request(struct ceph_osd_request *req)
extern void ceph_osdc_release_request(struct kref *kref);
static inline void ceph_osdc_put_request(struct ceph_osd_request *req)
extern int ceph_osdc_start_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req,
bool nofail);
extern int ceph_osdc_wait_request(struct ceph_osd_client *osdc,
struct ceph_osd_request *req);
extern void ceph_osdc_sync(struct ceph_osd_client *osdc);
extern int ceph_osdc_readpages(struct ceph_osd_client *osdc,
struct ceph_vino vino,
struct ceph_file_layout *layout,
u64 off, u64 *plen,
u32 truncate_seq, u64 truncate_size,
struct page **pages, int nr_pages,
int page_align);
extern int ceph_osdc_writepages(struct ceph_osd_client *osdc,
struct ceph_vino vino,
struct ceph_file_layout *layout,
struct ceph_snap_context *sc,
u64 off, u64 len,
u32 truncate_seq, u64 truncate_size,
struct timespec *mtime,
struct page **pages, int nr_pages,
int flags, int do_sync, bool nofail);
extern int ceph_osdc_create_event(struct ceph_osd_client *osdc,
void (*event_cb)(u64, u64, u8, void *),
int one_shot, void *data,
struct ceph_osd_event **pevent);
extern void ceph_osdc_cancel_event(struct ceph_osd_event *event);
extern int ceph_osdc_wait_event(struct ceph_osd_event *event,
unsigned long timeout);
extern void ceph_osdc_put_event(struct ceph_osd_event *event);
