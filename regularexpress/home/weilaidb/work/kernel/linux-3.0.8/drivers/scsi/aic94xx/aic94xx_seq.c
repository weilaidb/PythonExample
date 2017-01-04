#define PAUSE_DELAY 1
#define PAUSE_TRIES 1000
static const struct firmware *sequencer_fw;
static u16 cseq_vecs[CSEQ_NUM_VECS], lseq_vecs[LSEQ_NUM_VECS], mode2_task,
cseq_idle_loop, lseq_idle_loop;
static const u8 *cseq_code, *lseq_code;
static u32 cseq_code_size, lseq_code_size;
static u16 first_scb_site_no = 0xFFFF;
static u16 last_scb_site_no;
static int asd_pause_cseq(struct asd_ha_struct *asd_ha)
static int asd_unpause_cseq(struct asd_ha_struct *asd_ha)
static int asd_seq_pause_lseq(struct asd_ha_struct *asd_ha, int lseq)
static int asd_pause_lseq(struct asd_ha_struct *asd_ha, u8 lseq_mask)
static int asd_seq_unpause_lseq(struct asd_ha_struct *asd_ha, int lseq)
static int asd_verify_cseq(struct asd_ha_struct *asd_ha, const u8 *_prog,
u32 size)
static int asd_verify_lseq(struct asd_ha_struct *asd_ha, const u8 *_prog,
u32 size, int lseq)
static int asd_verify_seq(struct asd_ha_struct *asd_ha, const u8 *prog,
u32 size, u8 lseq_mask)
#define ASD_DMA_MODE_DOWNLOAD
#define MAX_DMA_OVLY_COUNT ((1U << 14)-1)
static int asd_download_seq(struct asd_ha_struct *asd_ha,
const u8 * const prog, u32 size, u8 lseq_mask)
static int asd_download_seq(struct asd_ha_struct *asd_ha, const u8 *_prog,
u32 size, u8 lseq_mask)
static int asd_seq_download_seqs(struct asd_ha_struct *asd_ha)
static void asd_init_cseq_mip(struct asd_ha_struct *asd_ha)
static void asd_init_cseq_mdp(struct asd_ha_struct *asd_ha)
static void asd_init_cseq_scratch(struct asd_ha_struct *asd_ha)
static void asd_init_lseq_mip(struct asd_ha_struct *asd_ha, u8 lseq)
static void asd_init_lseq_mdp(struct asd_ha_struct *asd_ha,  int lseq)
static void asd_init_lseq_scratch(struct asd_ha_struct *asd_ha)
static void asd_init_scb_sites(struct asd_ha_struct *asd_ha)
static void asd_init_cseq_cio(struct asd_ha_struct *asd_ha)
static void asd_init_lseq_cio(struct asd_ha_struct *asd_ha, int lseq)
static void asd_post_init_cseq(struct asd_ha_struct *asd_ha)
static void asd_init_ddb_0(struct asd_ha_struct *asd_ha)
static void asd_seq_init_ddb_sites(struct asd_ha_struct *asd_ha)
static void asd_seq_setup_seqs(struct asd_ha_struct *asd_ha)
static int asd_seq_start_cseq(struct asd_ha_struct *asd_ha)
static int asd_seq_start_lseq(struct asd_ha_struct *asd_ha, int lseq)
int asd_release_firmware(void)
static int asd_request_firmware(struct asd_ha_struct *asd_ha)
int asd_init_seqs(struct asd_ha_struct *asd_ha)
int asd_start_seqs(struct asd_ha_struct *asd_ha)
void asd_update_port_links(struct asd_ha_struct *asd_ha, struct asd_phy *phy)
MODULE_FIRMWARE(SAS_RAZOR_SEQUENCER_FW_FILE);
