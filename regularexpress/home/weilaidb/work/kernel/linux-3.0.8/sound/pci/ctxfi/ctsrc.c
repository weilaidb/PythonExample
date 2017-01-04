#define SRC_RESOURCE_NUM	64
#define SRCIMP_RESOURCE_NUM	256
static unsigned int conj_mask;
static int src_default_config_memrd(struct src *src);
static int src_default_config_memwr(struct src *src);
static int src_default_config_arcrw(struct src *src);
static int (*src_default_config[3])(struct src *) = ;
static int src_set_state(struct src *src, unsigned int state)
static int src_set_bm(struct src *src, unsigned int bm)
static int src_set_sf(struct src *src, unsigned int sf)
static int src_set_pm(struct src *src, unsigned int pm)
static int src_set_rom(struct src *src, unsigned int rom)
static int src_set_vo(struct src *src, unsigned int vo)
static int src_set_st(struct src *src, unsigned int st)
static int src_set_bp(struct src *src, unsigned int bp)
static int src_set_cisz(struct src *src, unsigned int cisz)
static int src_set_ca(struct src *src, unsigned int ca)
static int src_set_sa(struct src *src, unsigned int sa)
static int src_set_la(struct src *src, unsigned int la)
static int src_set_pitch(struct src *src, unsigned int pitch)
static int src_set_clear_zbufs(struct src *src)
static int src_commit_write(struct src *src)
static int src_get_ca(struct src *src)
static int src_init(struct src *src)
static struct src *src_next_interleave(struct src *src)
static int src_default_config_memrd(struct src *src)
static int src_default_config_memwr(struct src *src)
static int src_default_config_arcrw(struct src *src)
static struct src_rsc_ops src_rsc_ops = ;
static int
src_rsc_init(struct src *src, u32 idx,
const struct src_desc *desc, struct src_mgr *mgr)
static int src_rsc_uninit(struct src *src, struct src_mgr *mgr)
static int
get_src_rsc(struct src_mgr *mgr, const struct src_desc *desc, struct src **rsrc)
static int put_src_rsc(struct src_mgr *mgr, struct src *src)
static int src_enable_s(struct src_mgr *mgr, struct src *src)
static int src_enable(struct src_mgr *mgr, struct src *src)
static int src_disable(struct src_mgr *mgr, struct src *src)
static int src_mgr_commit_write(struct src_mgr *mgr)
int src_mgr_create(void *hw, struct src_mgr **rsrc_mgr)
int src_mgr_destroy(struct src_mgr *src_mgr)
static int srcimp_master(struct rsc *rsc)
static int srcimp_next_conj(struct rsc *rsc)
static int srcimp_index(const struct rsc *rsc)
static struct rsc_ops srcimp_basic_rsc_ops = ;
static int srcimp_map(struct srcimp *srcimp, struct src *src, struct rsc *input)
static int srcimp_unmap(struct srcimp *srcimp)
static struct srcimp_rsc_ops srcimp_ops = ;
static int srcimp_rsc_init(struct srcimp *srcimp,
const struct srcimp_desc *desc,
struct srcimp_mgr *mgr)
static int srcimp_rsc_uninit(struct srcimp *srcimp)
static int get_srcimp_rsc(struct srcimp_mgr *mgr,
const struct srcimp_desc *desc,
struct srcimp **rsrcimp)
static int put_srcimp_rsc(struct srcimp_mgr *mgr, struct srcimp *srcimp)
static int srcimp_map_op(void *data, struct imapper *entry)
static int srcimp_imap_add(struct srcimp_mgr *mgr, struct imapper *entry)
static int srcimp_imap_delete(struct srcimp_mgr *mgr, struct imapper *entry)
int srcimp_mgr_create(void *hw, struct srcimp_mgr **rsrcimp_mgr)
int srcimp_mgr_destroy(struct srcimp_mgr *srcimp_mgr)
