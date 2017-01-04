static struct scu_sgl_element_pair *to_sgl_element_pair(struct isci_request *ireq,
int idx)
static dma_addr_t to_sgl_element_pair_dma(struct isci_host *ihost,
struct isci_request *ireq, u32 idx)
static void init_sgl_element(struct scu_sgl_element *e, struct scatterlist *sg)
static void sci_request_build_sgl(struct isci_request *ireq)
static void sci_io_request_build_ssp_command_iu(struct isci_request *ireq)
static void sci_task_request_build_ssp_task_iu(struct isci_request *ireq)
static void scu_ssp_reqeust_construct_task_context(
struct isci_request *ireq,
struct scu_task_context *task_context)
static void scu_ssp_io_request_construct_task_context(struct isci_request *ireq,
enum dma_data_direction dir,
u32 len)
static void scu_ssp_task_request_construct_task_context(struct isci_request *ireq)
static void scu_sata_reqeust_construct_task_context(
struct isci_request *ireq,
struct scu_task_context *task_context)
static void scu_stp_raw_request_construct_task_context(struct isci_request *ireq)
static enum sci_status sci_stp_pio_request_construct(struct isci_request *ireq,
bool copy_rx_frame)
static void sci_stp_optimized_request_construct(struct isci_request *ireq,
u8 optimized_task_type,
u32 len,
enum dma_data_direction dir)
static enum sci_status
sci_io_request_construct_sata(struct isci_request *ireq,
u32 len,
enum dma_data_direction dir,
bool copy)
static enum sci_status sci_io_request_construct_basic_ssp(struct isci_request *ireq)
enum sci_status sci_task_request_construct_ssp(
struct isci_request *ireq)
static enum sci_status sci_io_request_construct_basic_sata(struct isci_request *ireq)
enum sci_status sci_task_request_construct_sata(struct isci_request *ireq)
#define SCU_TASK_CONTEXT_SRAM 0x200000
static u32 sci_req_tx_bytes(struct isci_request *ireq)
enum sci_status sci_request_start(struct isci_request *ireq)
enum sci_status
sci_io_request_terminate(struct isci_request *ireq)
enum sci_status sci_request_complete(struct isci_request *ireq)
enum sci_status sci_io_request_event_handler(struct isci_request *ireq,
u32 event_code)
static void sci_io_request_copy_response(struct isci_request *ireq)
static enum sci_status
request_started_state_tc_event(struct isci_request *ireq,
u32 completion_code)
static enum sci_status
request_aborting_state_tc_event(struct isci_request *ireq,
u32 completion_code)
static enum sci_status ssp_task_request_await_tc_event(struct isci_request *ireq,
u32 completion_code)
static enum sci_status
smp_request_await_response_tc_event(struct isci_request *ireq,
u32 completion_code)
static enum sci_status
smp_request_await_tc_event(struct isci_request *ireq,
u32 completion_code)
static struct scu_sgl_element *pio_sgl_next(struct isci_stp_request *stp_req)
static enum sci_status
stp_request_non_data_await_h2d_tc_event(struct isci_request *ireq,
u32 completion_code)
#define SCU_MAX_FRAME_BUFFER_SIZE  0x400
static enum sci_status sci_stp_request_pio_data_out_trasmit_data_frame(
struct isci_request *ireq,
u32 length)
static enum sci_status sci_stp_request_pio_data_out_transmit_data(struct isci_request *ireq)
static enum sci_status
sci_stp_request_pio_data_in_copy_data_buffer(struct isci_stp_request *stp_req,
u8 *data_buf, u32 len)
static enum sci_status sci_stp_request_pio_data_in_copy_data(
struct isci_stp_request *stp_req,
u8 *data_buffer)
static enum sci_status
stp_request_pio_await_h2d_completion_tc_event(struct isci_request *ireq,
u32 completion_code)
static enum sci_status
pio_data_out_tx_done_tc_event(struct isci_request *ireq,
u32 completion_code)
static enum sci_status sci_stp_request_udma_general_frame_handler(struct isci_request *ireq,
u32 frame_index)
enum sci_status
sci_io_request_frame_handler(struct isci_request *ireq,
u32 frame_index)
static enum sci_status stp_request_udma_await_tc_event(struct isci_request *ireq,
u32 completion_code)
static enum sci_status
stp_request_soft_reset_await_h2d_asserted_tc_event(struct isci_request *ireq,
u32 completion_code)
static enum sci_status
stp_request_soft_reset_await_h2d_diagnostic_tc_event(struct isci_request *ireq,
u32 completion_code)
enum sci_status
sci_io_request_tc_completion(struct isci_request *ireq,
u32 completion_code)
static void isci_request_process_response_iu(
struct sas_task *task,
struct ssp_response_iu *resp_iu,
struct device *dev)
static void isci_request_set_open_reject_status(
struct isci_request *request,
struct sas_task *task,
enum service_response *response_ptr,
enum exec_status *status_ptr,
enum isci_completion_selection *complete_to_host_ptr,
enum sas_open_rej_reason open_rej_reason)
static void isci_request_handle_controller_specific_errors(
struct isci_remote_device *idev,
struct isci_request *request,
struct sas_task *task,
enum service_response *response_ptr,
enum exec_status *status_ptr,
enum isci_completion_selection *complete_to_host_ptr)
static void isci_task_save_for_upper_layer_completion(
struct isci_host *host,
struct isci_request *request,
enum service_response response,
enum exec_status status,
enum isci_completion_selection task_notification_selection)
static void isci_process_stp_response(struct sas_task *task, struct dev_to_host_fis *fis)
static void isci_request_io_request_complete(struct isci_host *ihost,
struct isci_request *request,
enum sci_io_status completion_status)
static void sci_request_started_state_enter(struct sci_base_state_machine *sm)
static void sci_request_completed_state_enter(struct sci_base_state_machine *sm)
static void sci_request_aborting_state_enter(struct sci_base_state_machine *sm)
static void sci_stp_request_started_non_data_await_h2d_completion_enter(struct sci_base_state_machine *sm)
static void sci_stp_request_started_pio_await_h2d_completion_enter(struct sci_base_state_machine *sm)
static void sci_stp_request_started_soft_reset_await_h2d_asserted_completion_enter(struct sci_base_state_machine *sm)
static void sci_stp_request_started_soft_reset_await_h2d_diagnostic_completion_enter(struct sci_base_state_machine *sm)
static const struct sci_base_state sci_request_state_table[] = ;
static void
sci_general_request_construct(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq)
static enum sci_status
sci_io_request_construct(struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq)
enum sci_status sci_task_request_construct(struct isci_host *ihost,
struct isci_remote_device *idev,
u16 io_tag, struct isci_request *ireq)
static enum sci_status isci_request_ssp_request_construct(
struct isci_request *request)
static enum sci_status isci_request_stp_request_construct(struct isci_request *ireq)
static enum sci_status
sci_io_request_construct_smp(struct device *dev,
struct isci_request *ireq,
struct sas_task *task)
static enum sci_status isci_smp_request_build(struct isci_request *ireq)
static enum sci_status isci_io_request_build(struct isci_host *ihost,
struct isci_request *request,
struct isci_remote_device *idev)
static struct isci_request *isci_request_from_tag(struct isci_host *ihost, u16 tag)
static struct isci_request *isci_io_request_from_tag(struct isci_host *ihost,
struct sas_task *task,
u16 tag)
struct isci_request *isci_tmf_request_from_tag(struct isci_host *ihost,
struct isci_tmf *isci_tmf,
u16 tag)
int isci_request_execute(struct isci_host *ihost, struct isci_remote_device *idev,
struct sas_task *task, u16 tag)
