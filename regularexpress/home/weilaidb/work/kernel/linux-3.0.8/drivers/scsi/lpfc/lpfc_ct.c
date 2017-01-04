#define HBA_PORTSPEED_1GBIT		0x0001
#define HBA_PORTSPEED_2GBIT		0x0002
#define HBA_PORTSPEED_4GBIT		0x0008
#define HBA_PORTSPEED_10GBIT		0x0004
#define HBA_PORTSPEED_8GBIT		0x0010
#define HBA_PORTSPEED_16GBIT		0x0020
#define HBA_PORTSPEED_UNKNOWN		0x0800
#define FOURBYTES	4
static char *lpfc_release_version = LPFC_DRIVER_VERSION;
static void
lpfc_ct_ignore_hbq_buffer(struct lpfc_hba *phba, struct lpfc_iocbq *piocbq,
struct lpfc_dmabuf *mp, uint32_t size)
static void
lpfc_ct_unsol_buffer(struct lpfc_hba *phba, struct lpfc_iocbq *piocbq,
struct lpfc_dmabuf *mp, uint32_t size)
void
lpfc_ct_unsol_event(struct lpfc_hba *phba, struct lpfc_sli_ring *pring,
struct lpfc_iocbq *piocbq)
void
lpfc_sli4_ct_abort_unsol_event(struct lpfc_hba *phba,
struct lpfc_sli_ring *pring,
struct lpfc_iocbq *piocbq)
static void
lpfc_free_ct_rsp(struct lpfc_hba *phba, struct lpfc_dmabuf *mlist)
static struct lpfc_dmabuf *
lpfc_alloc_ct_rsp(struct lpfc_hba *phba, int cmdcode, struct ulp_bde64 *bpl,
uint32_t size, int *entries)
int
lpfc_ct_free_iocb(struct lpfc_hba *phba, struct lpfc_iocbq *ctiocb)
static int
lpfc_gen_req(struct lpfc_vport *vport, struct lpfc_dmabuf *bmp,
struct lpfc_dmabuf *inp, struct lpfc_dmabuf *outp,
void (*cmpl) (struct lpfc_hba *, struct lpfc_iocbq *,
struct lpfc_iocbq *),
struct lpfc_nodelist *ndlp, uint32_t usr_flg, uint32_t num_entry,
uint32_t tmo, uint8_t retry)
static int
lpfc_ct_cmd(struct lpfc_vport *vport, struct lpfc_dmabuf *inmp,
struct lpfc_dmabuf *bmp, struct lpfc_nodelist *ndlp,
void (*cmpl) (struct lpfc_hba *, struct lpfc_iocbq *,
struct lpfc_iocbq *),
uint32_t rsp_size, uint8_t retry)
struct lpfc_vport *
lpfc_find_vport_by_did(struct lpfc_hba *phba, uint32_t did)
static int
lpfc_ns_rsp(struct lpfc_vport *vport, struct lpfc_dmabuf *mp, uint32_t Size)
static void
lpfc_cmpl_ct_cmd_gid_ft(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_ct_cmd_gff_id(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_ct(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_ct_cmd_rft_id(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_ct_cmd_rnn_id(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_ct_cmd_rspn_id(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_ct_cmd_rsnn_nn(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_ct_cmd_da_id(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
static void
lpfc_cmpl_ct_cmd_rff_id(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq *rspiocb)
int
lpfc_vport_symbolic_port_name(struct lpfc_vport *vport, char *symbol,
size_t size)
int
lpfc_vport_symbolic_node_name(struct lpfc_vport *vport, char *symbol,
size_t size)
int
lpfc_ns_cmd(struct lpfc_vport *vport, int cmdcode,
uint8_t retry, uint32_t context)
static void
lpfc_cmpl_ct_cmd_fdmi(struct lpfc_hba *phba, struct lpfc_iocbq *cmdiocb,
struct lpfc_iocbq * rspiocb)
int
lpfc_fdmi_cmd(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp, int cmdcode)
void
lpfc_delayed_disc_tmo(unsigned long ptr)
void
lpfc_delayed_disc_timeout_handler(struct lpfc_vport *vport)
void
lpfc_fdmi_tmo(unsigned long ptr)
void
lpfc_fdmi_timeout_handler(struct lpfc_vport *vport)
void
lpfc_decode_firmware_rev(struct lpfc_hba *phba, char *fwrevision, int flag)
