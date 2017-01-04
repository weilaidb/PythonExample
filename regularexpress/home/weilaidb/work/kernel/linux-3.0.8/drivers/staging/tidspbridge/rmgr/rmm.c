struct rmm_header ;
struct rmm_ovly_sect ;
struct rmm_target_obj ;
static u32 refs;
static bool alloc_block(struct rmm_target_obj *target, u32 segid, u32 size,
u32 align, u32 *dsp_address);
static bool free_block(struct rmm_target_obj *target, u32 segid, u32 addr,
u32 size);
int rmm_alloc(struct rmm_target_obj *target, u32 segid, u32 size,
u32 align, u32 *dsp_address, bool reserve)
int rmm_create(struct rmm_target_obj **target_obj,
struct rmm_segment seg_tab[], u32 num_segs)
void rmm_delete(struct rmm_target_obj *target)
void rmm_exit(void)
bool rmm_free(struct rmm_target_obj *target, u32 segid, u32 dsp_addr, u32 size,
bool reserved)
bool rmm_init(void)
bool rmm_stat(struct rmm_target_obj *target, enum dsp_memtype segid,
struct dsp_memstat *mem_stat_buf)
static bool alloc_block(struct rmm_target_obj *target, u32 segid, u32 size,
u32 align, u32 *dsp_address)
static bool free_block(struct rmm_target_obj *target, u32 segid, u32 addr,
u32 size)
