int sci_unsolicited_frame_control_construct(struct isci_host *ihost)
enum sci_status sci_unsolicited_frame_control_get_header(struct sci_unsolicited_frame_control *uf_control,
u32 frame_index,
void **frame_header)
enum sci_status sci_unsolicited_frame_control_get_buffer(struct sci_unsolicited_frame_control *uf_control,
u32 frame_index,
void **frame_buffer)
bool sci_unsolicited_frame_control_release_frame(struct sci_unsolicited_frame_control *uf_control,
u32 frame_index)
