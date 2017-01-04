#define DAIO_RESOURCE_NUM	NUM_DAIOTYP
#define DAIO_OUT_MAX		SPDIFOO
union daio_usage ;
struct daio_rsc_idx ;
struct daio_rsc_idx idx_20k1[NUM_DAIOTYP] = ;
struct daio_rsc_idx idx_20k2[NUM_DAIOTYP] = ;
static int daio_master(struct rsc *rsc)
static int daio_index(const struct rsc *rsc)
static int daio_out_next_conj(struct rsc *rsc)
static int daio_in_next_conj_20k1(struct rsc *rsc)
static int daio_in_next_conj_20k2(struct rsc *rsc)
static struct rsc_ops daio_out_rsc_ops = ;
static struct rsc_ops daio_in_rsc_ops_20k1 = ;
static struct rsc_ops daio_in_rsc_ops_20k2 = ;
static unsigned int daio_device_index(enum DAIOTYP type, struct hw *hw)
static int dao_rsc_reinit(struct dao *dao, const struct dao_desc *desc);
static int dao_spdif_get_spos(struct dao *dao, unsigned int *spos)
static int dao_spdif_set_spos(struct dao *dao, unsigned int spos)
static int dao_commit_write(struct dao *dao)
static int dao_set_left_input(struct dao *dao, struct rsc *input)
static int dao_set_right_input(struct dao *dao, struct rsc *input)
static int dao_clear_left_input(struct dao *dao)
static int dao_clear_right_input(struct dao *dao)
static struct dao_rsc_ops dao_ops = ;
static int dai_set_srt_srcl(struct dai *dai, struct rsc *src)
static int dai_set_srt_srcr(struct dai *dai, struct rsc *src)
static int dai_set_srt_msr(struct dai *dai, unsigned int msr)
static int dai_set_enb_src(struct dai *dai, unsigned int enb)
static int dai_set_enb_srt(struct dai *dai, unsigned int enb)
static int dai_commit_write(struct dai *dai)
static struct dai_rsc_ops dai_ops = ;
static int daio_rsc_init(struct daio *daio,
const struct daio_desc *desc,
void *hw)
static int daio_rsc_uninit(struct daio *daio)
static int dao_rsc_init(struct dao *dao,
const struct daio_desc *desc,
struct daio_mgr *mgr)
static int dao_rsc_uninit(struct dao *dao)
static int dao_rsc_reinit(struct dao *dao, const struct dao_desc *desc)
static int dai_rsc_init(struct dai *dai,
const struct daio_desc *desc,
struct daio_mgr *mgr)
static int dai_rsc_uninit(struct dai *dai)
static int daio_mgr_get_rsc(struct rsc_mgr *mgr, enum DAIOTYP type)
static int daio_mgr_put_rsc(struct rsc_mgr *mgr, enum DAIOTYP type)
static int get_daio_rsc(struct daio_mgr *mgr,
const struct daio_desc *desc,
struct daio **rdaio)
static int put_daio_rsc(struct daio_mgr *mgr, struct daio *daio)
static int daio_mgr_enb_daio(struct daio_mgr *mgr, struct daio *daio)
static int daio_mgr_dsb_daio(struct daio_mgr *mgr, struct daio *daio)
static int daio_map_op(void *data, struct imapper *entry)
static int daio_imap_add(struct daio_mgr *mgr, struct imapper *entry)
static int daio_imap_delete(struct daio_mgr *mgr, struct imapper *entry)
static int daio_mgr_commit_write(struct daio_mgr *mgr)
int daio_mgr_create(void *hw, struct daio_mgr **rdaio_mgr)
int daio_mgr_destroy(struct daio_mgr *daio_mgr)
