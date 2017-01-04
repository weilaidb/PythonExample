extern int drv_remove_all_dmm_res_elements(void *process_ctxt);
extern int drv_remove_all_node_res_elements(void *process_ctxt);
extern int drv_remove_all_resources(void *process_ctxt);
extern int drv_insert_node_res_element(void *hnode, void *node_resource,
void *process_ctxt);
extern void drv_proc_node_update_heap_status(void *node_resource, s32 status);
extern void drv_proc_node_update_status(void *node_resource, s32 status);
extern int drv_proc_update_strm_res(u32 num_bufs, void *strm_resources);
extern int drv_proc_insert_strm_res_element(void *stream_obj,
void *strm_res,
void *process_ctxt);
extern int drv_remove_all_strm_res_elements(void *process_ctxt);
extern enum node_state node_get_state(void *hnode);
