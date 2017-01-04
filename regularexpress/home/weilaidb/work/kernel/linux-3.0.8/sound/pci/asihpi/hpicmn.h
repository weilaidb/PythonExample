struct hpi_adapter_obj ;
struct hpi_control_cache ;
struct hpi_adapter_obj *hpi_find_adapter(u16 adapter_index);
u16 hpi_add_adapter(struct hpi_adapter_obj *pao);
void hpi_delete_adapter(struct hpi_adapter_obj *pao);
short hpi_check_control_cache(struct hpi_control_cache *pC,
struct hpi_message *phm, struct hpi_response *phr);
struct hpi_control_cache *hpi_alloc_control_cache(const u32
number_of_controls, const u32 size_in_bytes, u8 *pDSP_control_buffer);
void hpi_free_control_cache(struct hpi_control_cache *p_cache);
void hpi_cmn_control_cache_sync_to_msg(struct hpi_control_cache *pC,
struct hpi_message *phm, struct hpi_response *phr);
u16 hpi_validate_response(struct hpi_message *phm, struct hpi_response *phr);
hpi_handler_func HPI_COMMON;
