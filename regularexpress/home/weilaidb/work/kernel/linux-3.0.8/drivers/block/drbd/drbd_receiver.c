#define __KERNEL_SYSCALLS__
enum finish_epoch ;
static int drbd_do_handshake(struct drbd_conf *mdev);
static int drbd_do_auth(struct drbd_conf *mdev);
static enum finish_epoch drbd_may_finish_epoch(struct drbd_conf *, struct drbd_epoch *, enum epoch_event);
static int e_end_block(struct drbd_conf *, struct drbd_work *, int);
#define GFP_TRY	(__GFP_HIGHMEM | __GFP_NOWARN)
static struct page *page_chain_del(struct page **head, int n)
static struct page *page_chain_tail(struct page *page, int *len)
static int page_chain_free(struct page *page)
static void page_chain_add(struct page **head,
struct page *chain_first, struct page *chain_last)
static struct page *drbd_pp_first_pages_or_try_alloc(struct drbd_conf *mdev, int number)
static void reclaim_net_ee(struct drbd_conf *mdev, struct list_head *to_be_freed)
static void drbd_kick_lo_and_reclaim_net(struct drbd_conf *mdev)
static struct page *drbd_pp_alloc(struct drbd_conf *mdev, unsigned number, bool retry)
static void drbd_pp_free(struct drbd_conf *mdev, struct page *page, int is_net)
struct drbd_epoch_entry *drbd_alloc_ee(struct drbd_conf *mdev,
u64 id,
sector_t sector,
unsigned int data_size,
gfp_t gfp_mask) __must_hold(local)
void drbd_free_some_ee(struct drbd_conf *mdev, struct drbd_epoch_entry *e, int is_net)
int drbd_release_ee(struct drbd_conf *mdev, struct list_head *list)
static int drbd_process_done_ee(struct drbd_conf *mdev)
void _drbd_wait_ee_list_empty(struct drbd_conf *mdev, struct list_head *head)
void drbd_wait_ee_list_empty(struct drbd_conf *mdev, struct list_head *head)
static int drbd_accept(struct drbd_conf *mdev, const char **what,
struct socket *sock, struct socket **newsock)
static int drbd_recv_short(struct drbd_conf *mdev, struct socket *sock,
void *buf, size_t size, int flags)
static int drbd_recv(struct drbd_conf *mdev, void *buf, size_t size)
static void drbd_setbufsize(struct socket *sock, unsigned int snd,
unsigned int rcv)
static struct socket *drbd_try_connect(struct drbd_conf *mdev)
static struct socket *drbd_wait_for_connect(struct drbd_conf *mdev)
static int drbd_send_fp(struct drbd_conf *mdev,
struct socket *sock, enum drbd_packets cmd)
static enum drbd_packets drbd_recv_fp(struct drbd_conf *mdev, struct socket *sock)
static int drbd_socket_okay(struct drbd_conf *mdev, struct socket **sock)
static int drbd_connect(struct drbd_conf *mdev)
static int drbd_recv_header(struct drbd_conf *mdev, enum drbd_packets *cmd, unsigned int *packet_size)
static void drbd_flush(struct drbd_conf *mdev)
static enum finish_epoch drbd_may_finish_epoch(struct drbd_conf *mdev,
struct drbd_epoch *epoch,
enum epoch_event ev)
void drbd_bump_write_ordering(struct drbd_conf *mdev, enum write_ordering_e wo) __must_hold(local)
int drbd_submit_ee(struct drbd_conf *mdev, struct drbd_epoch_entry *e,
const unsigned rw, const int fault_type)
static int receive_Barrier(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static struct drbd_epoch_entry *
read_in_block(struct drbd_conf *mdev, u64 id, sector_t sector, int data_size) __must_hold(local)
static int drbd_drain_block(struct drbd_conf *mdev, int data_size)
static int recv_dless_read(struct drbd_conf *mdev, struct drbd_request *req,
sector_t sector, int data_size)
static int e_end_resync_block(struct drbd_conf *mdev, struct drbd_work *w, int unused)
static int recv_resync_read(struct drbd_conf *mdev, sector_t sector, int data_size) __releases(local)
static int receive_DataReply(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static int receive_RSDataReply(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static int e_end_block(struct drbd_conf *mdev, struct drbd_work *w, int cancel)
static int e_send_discard_ack(struct drbd_conf *mdev, struct drbd_work *w, int unused)
static int drbd_wait_peer_seq(struct drbd_conf *mdev, const u32 packet_seq)
static unsigned long wire_flags_to_bio(struct drbd_conf *mdev, u32 dpf)
static int receive_Data(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
int drbd_rs_should_slow_down(struct drbd_conf *mdev, sector_t sector)
static int receive_DataRequest(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int digest_size)
static int drbd_asb_recover_0p(struct drbd_conf *mdev) __must_hold(local)
static int drbd_asb_recover_1p(struct drbd_conf *mdev) __must_hold(local)
static int drbd_asb_recover_2p(struct drbd_conf *mdev) __must_hold(local)
static void drbd_uuid_dump(struct drbd_conf *mdev, char *text, u64 *uuid,
u64 bits, u64 flags)
static int drbd_uuid_compare(struct drbd_conf *mdev, int *rule_nr) __must_hold(local)
static enum drbd_conns drbd_sync_handshake(struct drbd_conf *mdev, enum drbd_role peer_role,
enum drbd_disk_state peer_disk) __must_hold(local)
static int cmp_after_sb(enum drbd_after_sb_p peer, enum drbd_after_sb_p self)
static int receive_protocol(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
struct crypto_hash *drbd_crypto_alloc_digest_safe(const struct drbd_conf *mdev,
const char *alg, const char *name)
static int receive_SyncParam(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int packet_size)
static void warn_if_differ_considerably(struct drbd_conf *mdev,
const char *s, sector_t a, sector_t b)
static int receive_sizes(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static int receive_uuids(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static union drbd_state convert_state(union drbd_state ps)
static int receive_req_state(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static int receive_state(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static int receive_sync_uuid(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static int
receive_bitmap_plain(struct drbd_conf *mdev, unsigned int data_size,
unsigned long *buffer, struct bm_xfer_ctx *c)
static int
recv_bm_rle_bits(struct drbd_conf *mdev,
struct p_compressed_bm *p,
struct bm_xfer_ctx *c)
static int
decode_bitmap_c(struct drbd_conf *mdev,
struct p_compressed_bm *p,
struct bm_xfer_ctx *c)
void INFO_bm_xfer_stats(struct drbd_conf *mdev,
const char *direction, struct bm_xfer_ctx *c)
static int receive_bitmap(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static int receive_skip(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static int receive_UnplugRemote(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
static int receive_out_of_sync(struct drbd_conf *mdev, enum drbd_packets cmd, unsigned int data_size)
typedef int (*drbd_cmd_handler_f)(struct drbd_conf *, enum drbd_packets cmd, unsigned int to_receive);
struct data_cmd ;
static struct data_cmd drbd_cmd_handler[] = ;
static void drbdd(struct drbd_conf *mdev)
void drbd_flush_workqueue(struct drbd_conf *mdev)
void drbd_free_tl_hash(struct drbd_conf *mdev)
static void drbd_disconnect(struct drbd_conf *mdev)
static int drbd_send_handshake(struct drbd_conf *mdev)
static int drbd_do_handshake(struct drbd_conf *mdev)
#if !defined(CONFIG_CRYPTO_HMAC) && !defined(CONFIG_CRYPTO_HMAC_MODULE)
static int drbd_do_auth(struct drbd_conf *mdev)
#define CHALLENGE_LEN 64
static int drbd_do_auth(struct drbd_conf *mdev)
int drbdd_init(struct drbd_thread *thi)
static int got_RqSReply(struct drbd_conf *mdev, struct p_header80 *h)
static int got_Ping(struct drbd_conf *mdev, struct p_header80 *h)
static int got_PingAck(struct drbd_conf *mdev, struct p_header80 *h)
static int got_IsInSync(struct drbd_conf *mdev, struct p_header80 *h)
static struct drbd_request *_ack_id_to_req(struct drbd_conf *mdev,
u64 id, sector_t sector)
typedef struct drbd_request *(req_validator_fn)
(struct drbd_conf *mdev, u64 id, sector_t sector);
static int validate_req_change_req_state(struct drbd_conf *mdev,
u64 id, sector_t sector, req_validator_fn validator,
const char *func, enum drbd_req_event what)
static int got_BlockAck(struct drbd_conf *mdev, struct p_header80 *h)
static int got_NegAck(struct drbd_conf *mdev, struct p_header80 *h)
static int got_NegDReply(struct drbd_conf *mdev, struct p_header80 *h)
static int got_NegRSDReply(struct drbd_conf *mdev, struct p_header80 *h)
static int got_BarrierAck(struct drbd_conf *mdev, struct p_header80 *h)
static int got_OVResult(struct drbd_conf *mdev, struct p_header80 *h)
static int got_skip(struct drbd_conf *mdev, struct p_header80 *h)
struct asender_cmd ;
static struct asender_cmd *get_asender_cmd(int cmd)
int drbd_asender(struct drbd_thread *thi)
