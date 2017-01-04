#define NEXT_PA(pnode)   (pnode->pa + pnode->size)
#define DSPPA2GPPPA(base, x, y)  ((x)+(y))
#define GPPPA2DSPPA(base, x, y)  ((x)-(y))
struct cmm_allocator ;
struct cmm_xlator ;
struct cmm_object ;
static struct cmm_mgrattrs cmm_dfltmgrattrs = ;
static struct cmm_attrs cmm_dfltalctattrs = ;
static struct cmm_xlatorattrs cmm_dfltxlatorattrs = ;
struct cmm_mnode ;
static u32 refs;
static void add_to_free_list(struct cmm_allocator *allocator,
struct cmm_mnode *pnode);
static struct cmm_allocator *get_allocator(struct cmm_object *cmm_mgr_obj,
u32 ul_seg_id);
static struct cmm_mnode *get_free_block(struct cmm_allocator *allocator,
u32 usize);
static struct cmm_mnode *get_node(struct cmm_object *cmm_mgr_obj, u32 dw_pa,
u32 dw_va, u32 ul_size);
static s32 get_slot(struct cmm_object *cmm_mgr_obj);
static void un_register_gppsm_seg(struct cmm_allocator *psma);
void *cmm_calloc_buf(struct cmm_object *hcmm_mgr, u32 usize,
struct cmm_attrs *pattrs, void **pp_buf_va)
int cmm_create(struct cmm_object **ph_cmm_mgr,
struct dev_object *hdev_obj,
const struct cmm_mgrattrs *mgr_attrts)
int cmm_destroy(struct cmm_object *hcmm_mgr, bool force)
void cmm_exit(void)
int cmm_free_buf(struct cmm_object *hcmm_mgr, void *buf_pa, u32 ul_seg_id)
int cmm_get_handle(void *hprocessor, struct cmm_object ** ph_cmm_mgr)
int cmm_get_info(struct cmm_object *hcmm_mgr,
struct cmm_info *cmm_info_obj)
bool cmm_init(void)
int cmm_register_gppsm_seg(struct cmm_object *hcmm_mgr,
u32 dw_gpp_base_pa, u32 ul_size,
u32 dsp_addr_offset, s8 c_factor,
u32 dw_dsp_base, u32 ul_dsp_size,
u32 *sgmt_id, u32 gpp_base_va)
int cmm_un_register_gppsm_seg(struct cmm_object *hcmm_mgr,
u32 ul_seg_id)
static void un_register_gppsm_seg(struct cmm_allocator *psma)
static s32 get_slot(struct cmm_object *cmm_mgr_obj)
static struct cmm_mnode *get_node(struct cmm_object *cmm_mgr_obj, u32 dw_pa,
u32 dw_va, u32 ul_size)
static void delete_node(struct cmm_object *cmm_mgr_obj, struct cmm_mnode *pnode)
static struct cmm_mnode *get_free_block(struct cmm_allocator *allocator,
u32 usize)
static void add_to_free_list(struct cmm_allocator *allocator,
struct cmm_mnode *node)
static struct cmm_allocator *get_allocator(struct cmm_object *cmm_mgr_obj,
u32 ul_seg_id)
int cmm_xlator_create(struct cmm_xlatorobject **xlator,
struct cmm_object *hcmm_mgr,
struct cmm_xlatorattrs *xlator_attrs)
void *cmm_xlator_alloc_buf(struct cmm_xlatorobject *xlator, void *va_buf,
u32 pa_size)
int cmm_xlator_free_buf(struct cmm_xlatorobject *xlator, void *buf_va)
int cmm_xlator_info(struct cmm_xlatorobject *xlator, u8 ** paddr,
u32 ul_size, u32 segm_id, bool set_info)
void *cmm_xlator_translate(struct cmm_xlatorobject *xlator, void *paddr,
enum cmm_xlatetype xtype)
