#define CMM_
extern void *cmm_calloc_buf(struct cmm_object *hcmm_mgr,
u32 usize, struct cmm_attrs *pattrs,
void **pp_buf_va);
extern int cmm_create(struct cmm_object **ph_cmm_mgr,
struct dev_object *hdev_obj,
const struct cmm_mgrattrs *mgr_attrts);
extern int cmm_destroy(struct cmm_object *hcmm_mgr, bool force);
extern void cmm_exit(void);
extern int cmm_free_buf(struct cmm_object *hcmm_mgr,
void *buf_pa, u32 ul_seg_id);
extern int cmm_get_handle(void *hprocessor,
struct cmm_object **ph_cmm_mgr);
extern int cmm_get_info(struct cmm_object *hcmm_mgr,
struct cmm_info *cmm_info_obj);
extern bool cmm_init(void);
extern int cmm_register_gppsm_seg(struct cmm_object *hcmm_mgr,
unsigned int dw_gpp_base_pa,
u32 ul_size,
u32 dsp_addr_offset,
s8 c_factor,
unsigned int dw_dsp_base,
u32 ul_dsp_size,
u32 *sgmt_id, u32 gpp_base_va);
extern int cmm_un_register_gppsm_seg(struct cmm_object *hcmm_mgr,
u32 ul_seg_id);
extern void *cmm_xlator_alloc_buf(struct cmm_xlatorobject *xlator,
void *va_buf, u32 pa_size);
extern int cmm_xlator_create(struct cmm_xlatorobject **xlator,
struct cmm_object *hcmm_mgr,
struct cmm_xlatorattrs *xlator_attrs);
extern int cmm_xlator_free_buf(struct cmm_xlatorobject *xlator,
void *buf_va);
extern int cmm_xlator_info(struct cmm_xlatorobject *xlator,
u8 **paddr,
u32 ul_size, u32 segm_id, bool set_info);
extern void *cmm_xlator_translate(struct cmm_xlatorobject *xlator,
void *paddr, enum cmm_xlatetype xtype);
