#define RMM_
struct rmm_addr ;
struct rmm_segment ;
struct rmm_target_obj;
extern int rmm_alloc(struct rmm_target_obj *target, u32 segid, u32 size,
u32 align, u32 *dsp_address, bool reserve);
extern int rmm_create(struct rmm_target_obj **target_obj,
struct rmm_segment seg_tab[], u32 num_segs);
extern void rmm_delete(struct rmm_target_obj *target);
extern void rmm_exit(void);
extern bool rmm_free(struct rmm_target_obj *target, u32 segid, u32 dsp_addr,
u32 size, bool reserved);
extern bool rmm_init(void);
extern bool rmm_stat(struct rmm_target_obj *target, enum dsp_memtype segid,
struct dsp_memstat *mem_stat_buf);
