#define TARGET_CORE_TMR_H
enum tcm_tmreq_table ;
enum tcm_tmrsp_table ;
extern struct kmem_cache *se_tmr_req_cache;
extern struct se_tmr_req *core_tmr_alloc_req(struct se_cmd *, void *, u8);
extern void core_tmr_release_req(struct se_tmr_req *);
extern int core_tmr_lun_reset(struct se_device *, struct se_tmr_req *,
struct list_head *, struct se_cmd *);
