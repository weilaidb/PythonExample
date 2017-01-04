#define AUDIO_SLOT_BLOCK_NUM 	256
static int
get_resource(u8 *rscs, unsigned int amount,
unsigned int multi, unsigned int *ridx)
static int put_resource(u8 *rscs, unsigned int multi, unsigned int idx)
int mgr_get_resource(struct rsc_mgr *mgr, unsigned int n, unsigned int *ridx)
int mgr_put_resource(struct rsc_mgr *mgr, unsigned int n, unsigned int idx)
static unsigned char offset_in_audio_slot_block[NUM_RSCTYP] = ;
static int rsc_index(const struct rsc *rsc)
static int audio_ring_slot(const struct rsc *rsc)
static int rsc_next_conj(struct rsc *rsc)
static int rsc_master(struct rsc *rsc)
static struct rsc_ops rsc_generic_ops = ;
int rsc_init(struct rsc *rsc, u32 idx, enum RSCTYP type, u32 msr, void *hw)
int rsc_uninit(struct rsc *rsc)
int rsc_mgr_init(struct rsc_mgr *mgr, enum RSCTYP type,
unsigned int amount, void *hw_obj)
int rsc_mgr_uninit(struct rsc_mgr *mgr)
