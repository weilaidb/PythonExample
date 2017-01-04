#define _SCIC_SDS_UNSOLICITED_FRAME_CONTROL_H_
#define SCU_UNSOLICITED_FRAME_HEADER_DATA_DWORDS 15
struct scu_unsolicited_frame_header ;
enum unsolicited_frame_state ;
struct sci_unsolicited_frame ;
struct sci_uf_header_array ;
struct sci_uf_buffer_array ;
struct sci_uf_address_table_array ;
struct sci_unsolicited_frame_control ;
struct isci_host;
int sci_unsolicited_frame_control_construct(struct isci_host *ihost);
enum sci_status sci_unsolicited_frame_control_get_header(
struct sci_unsolicited_frame_control *uf_control,
u32 frame_index,
void **frame_header);
enum sci_status sci_unsolicited_frame_control_get_buffer(
struct sci_unsolicited_frame_control *uf_control,
u32 frame_index,
void **frame_buffer);
bool sci_unsolicited_frame_control_release_frame(
struct sci_unsolicited_frame_control *uf_control,
u32 frame_index);
