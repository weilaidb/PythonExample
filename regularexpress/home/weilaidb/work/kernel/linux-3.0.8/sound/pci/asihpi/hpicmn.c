#define SOURCEFILE_NAME "hpicmn.c"
struct hpi_adapters_list ;
static struct hpi_adapters_list adapters;
u16 hpi_validate_response(struct hpi_message *phm, struct hpi_response *phr)
u16 hpi_add_adapter(struct hpi_adapter_obj *pao)
void hpi_delete_adapter(struct hpi_adapter_obj *pao)
struct hpi_adapter_obj *hpi_find_adapter(u16 adapter_index)
static void wipe_adapter_list(void)
static void subsys_get_adapter(struct hpi_message *phm,
struct hpi_response *phr)
static unsigned int control_cache_alloc_check(struct hpi_control_cache *pC)
static short find_control(u16 control_index,
struct hpi_control_cache *p_cache, struct hpi_control_cache_info **pI)
#define HPICMN_PAD_OFS_AND_SIZE(m)
struct pad_ofs_size ;
static const struct pad_ofs_size pad_desc[] = ;
short hpi_check_control_cache(struct hpi_control_cache *p_cache,
struct hpi_message *phm, struct hpi_response *phr)
void hpi_cmn_control_cache_sync_to_msg(struct hpi_control_cache *p_cache,
struct hpi_message *phm, struct hpi_response *phr)
struct hpi_control_cache *hpi_alloc_control_cache(const u32 control_count,
const u32 size_in_bytes, u8 *p_dsp_control_buffer)
void hpi_free_control_cache(struct hpi_control_cache *p_cache)
static void subsys_message(struct hpi_message *phm, struct hpi_response *phr)
void HPI_COMMON(struct hpi_message *phm, struct hpi_response *phr)
