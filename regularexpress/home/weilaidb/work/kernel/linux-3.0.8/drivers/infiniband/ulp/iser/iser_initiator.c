static int iser_prepare_read_cmd(struct iscsi_task *task,
unsigned int edtl)
static int
iser_prepare_write_cmd(struct iscsi_task *task,
unsigned int imm_sz,
unsigned int unsol_sz,
unsigned int edtl)
static void iser_create_send_desc(struct iser_conn	*ib_conn,
struct iser_tx_desc	*tx_desc)
static int iser_alloc_rx_descriptors(struct iser_conn *ib_conn)
void iser_free_rx_descriptors(struct iser_conn *ib_conn)
int iser_conn_set_full_featured_mode(struct iscsi_conn *conn)
int iser_send_command(struct iscsi_conn *conn,
struct iscsi_task *task)
int iser_send_data_out(struct iscsi_conn *conn,
struct iscsi_task *task,
struct iscsi_data *hdr)
int iser_send_control(struct iscsi_conn *conn,
struct iscsi_task *task)
void iser_rcv_completion(struct iser_rx_desc *rx_desc,
unsigned long rx_xfer_len,
struct iser_conn *ib_conn)
void iser_snd_completion(struct iser_tx_desc *tx_desc,
struct iser_conn *ib_conn)
void iser_task_rdma_init(struct iscsi_iser_task *iser_task)
void iser_task_rdma_finalize(struct iscsi_iser_task *iser_task)
