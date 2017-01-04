static void bnx2fc_upld_timer(unsigned long data);
static void bnx2fc_ofld_timer(unsigned long data);
static int bnx2fc_init_tgt(struct bnx2fc_rport *tgt,
struct fcoe_port *port,
struct fc_rport_priv *rdata);
static u32 bnx2fc_alloc_conn_id(struct bnx2fc_hba *hba,
struct bnx2fc_rport *tgt);
static int bnx2fc_alloc_session_resc(struct bnx2fc_hba *hba,
struct bnx2fc_rport *tgt);
static void bnx2fc_free_session_resc(struct bnx2fc_hba *hba,
struct bnx2fc_rport *tgt);
static void bnx2fc_free_conn_id(struct bnx2fc_hba *hba, u32 conn_id);
static void bnx2fc_upld_timer(unsigned long data)
static void bnx2fc_ofld_timer(unsigned long data)
static void bnx2fc_offload_session(struct fcoe_port *port,
struct bnx2fc_rport *tgt,
struct fc_rport_priv *rdata)
void bnx2fc_flush_active_ios(struct bnx2fc_rport *tgt)
static void bnx2fc_upload_session(struct fcoe_port *port,
struct bnx2fc_rport *tgt)
static int bnx2fc_init_tgt(struct bnx2fc_rport *tgt,
struct fcoe_port *port,
struct fc_rport_priv *rdata)
void bnx2fc_rport_event_handler(struct fc_lport *lport,
struct fc_rport_priv *rdata,
enum fc_rport_event event)
struct bnx2fc_rport *bnx2fc_tgt_lookup(struct fcoe_port *port,
u32 port_id)
static u32 bnx2fc_alloc_conn_id(struct bnx2fc_hba *hba,
struct bnx2fc_rport *tgt)
static void bnx2fc_free_conn_id(struct bnx2fc_hba *hba, u32 conn_id)
static int bnx2fc_alloc_session_resc(struct bnx2fc_hba *hba,
struct bnx2fc_rport *tgt)
static void bnx2fc_free_session_resc(struct bnx2fc_hba *hba,
struct bnx2fc_rport *tgt)
