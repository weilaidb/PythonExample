#define __ISCSI_ISER_H__
#define DRV_NAME	"iser"
#define PFX		DRV_NAME ": "
#define DRV_VER		"0.1"
#define DRV_DATE	"May 7th, 2006"
#define iser_dbg(fmt, arg...)				\
do  while (0)
#define iser_warn(fmt, arg...)				\
do  while (0)
#define iser_err(fmt, arg...)				\
do  while (0)
#define SHIFT_4K	12
#define SIZE_4K	(1UL << SHIFT_4K)
#define MASK_4K	(~(SIZE_4K-1))
#define ISCSI_ISER_SG_TABLESIZE         (0x80000 >> SHIFT_4K)
#define ISER_DEF_CMD_PER_LUN		128
#define ISER_MAX_RX_MISC_PDUS		4
#define ISER_MAX_TX_MISC_PDUS		6
#define ISER_QP_MAX_RECV_DTOS		(ISCSI_DEF_XMIT_CMDS_MAX)
#define ISER_MIN_POSTED_RX		(ISCSI_DEF_XMIT_CMDS_MAX >> 2)
#define ISER_INFLIGHT_DATAOUTS		8
#define ISER_QP_MAX_REQ_DTOS		(ISCSI_DEF_XMIT_CMDS_MAX *    \
(1 + ISER_INFLIGHT_DATAOUTS) + \
ISER_MAX_TX_MISC_PDUS        + \
ISER_MAX_RX_MISC_PDUS)
#define ISER_VER			0x10
#define ISER_WSV			0x08
#define ISER_RSV			0x04
struct iser_hdr  __attribute__((packed));
#define ISER_HEADERS_LEN  (sizeof(struct iser_hdr) + sizeof(struct iscsi_hdr))
#define ISER_RECV_DATA_SEG_LEN	128
#define ISER_RX_PAYLOAD_SIZE	(ISER_HEADERS_LEN + ISER_RECV_DATA_SEG_LEN)
#define ISER_RX_LOGIN_SIZE	(ISER_HEADERS_LEN + ISCSI_DEF_MAX_RECV_SEG_LEN)
#define ISER_OBJECT_NAME_SIZE		    64
enum iser_ib_conn_state ;
enum iser_task_status ;
enum iser_data_dir ;
struct iser_data_buf ;
struct iser_device;
struct iscsi_iser_conn;
struct iscsi_iser_task;
struct iscsi_endpoint;
struct iser_mem_reg ;
struct iser_regd_buf ;
enum iser_desc_type ;
struct iser_tx_desc ;
#define ISER_RX_PAD_SIZE	(256 - (ISER_RX_PAYLOAD_SIZE + \
sizeof(u64) + sizeof(struct ib_sge)))
struct iser_rx_desc  __attribute__((packed));
struct iser_device ;
struct iser_conn ;
struct iscsi_iser_conn ;
struct iscsi_iser_task ;
struct iser_page_vec ;
struct iser_global ;
extern struct iser_global ig;
extern int iser_debug_level;
int iser_conn_set_full_featured_mode(struct iscsi_conn *conn);
int iser_send_control(struct iscsi_conn *conn,
struct iscsi_task *task);
int iser_send_command(struct iscsi_conn *conn,
struct iscsi_task *task);
int iser_send_data_out(struct iscsi_conn *conn,
struct iscsi_task *task,
struct iscsi_data *hdr);
void iscsi_iser_recv(struct iscsi_conn *conn,
struct iscsi_hdr       *hdr,
char                   *rx_data,
int                    rx_data_len);
void iser_conn_init(struct iser_conn *ib_conn);
void iser_conn_get(struct iser_conn *ib_conn);
int iser_conn_put(struct iser_conn *ib_conn, int destroy_cma_id_allowed);
void iser_conn_terminate(struct iser_conn *ib_conn);
void iser_rcv_completion(struct iser_rx_desc *desc,
unsigned long    dto_xfer_len,
struct iser_conn *ib_conn);
void iser_snd_completion(struct iser_tx_desc *desc, struct iser_conn *ib_conn);
void iser_task_rdma_init(struct iscsi_iser_task *task);
void iser_task_rdma_finalize(struct iscsi_iser_task *task);
void iser_free_rx_descriptors(struct iser_conn *ib_conn);
void iser_finalize_rdma_unaligned_sg(struct iscsi_iser_task *task,
enum iser_data_dir         cmd_dir);
int  iser_reg_rdma_mem(struct iscsi_iser_task *task,
enum   iser_data_dir        cmd_dir);
int  iser_connect(struct iser_conn   *ib_conn,
struct sockaddr_in *src_addr,
struct sockaddr_in *dst_addr,
int                non_blocking);
int  iser_reg_page_vec(struct iser_conn     *ib_conn,
struct iser_page_vec *page_vec,
struct iser_mem_reg  *mem_reg);
void iser_unreg_mem(struct iser_mem_reg *mem_reg);
int  iser_post_recvl(struct iser_conn *ib_conn);
int  iser_post_recvm(struct iser_conn *ib_conn, int count);
int  iser_post_send(struct iser_conn *ib_conn, struct iser_tx_desc *tx_desc);
int iser_dma_map_task_data(struct iscsi_iser_task *iser_task,
struct iser_data_buf       *data,
enum   iser_data_dir       iser_dir,
enum   dma_data_direction  dma_dir);
void iser_dma_unmap_task_data(struct iscsi_iser_task *iser_task);
int  iser_initialize_task_headers(struct iscsi_task *task,
struct iser_tx_desc *tx_desc);
