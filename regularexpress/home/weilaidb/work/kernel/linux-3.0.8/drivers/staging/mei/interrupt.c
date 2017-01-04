irqreturn_t mei_interrupt_quick_handler(int irq, void *dev_id)
static void _mei_cmpl(struct mei_cl *cl, struct mei_cl_cb *cb_pos)
static void _mei_cmpl_iamthif(struct mei_device *dev, struct mei_cl_cb *cb_pos)
static int mei_irq_thread_read_amthi_message(struct mei_io_list *complete_list,
struct mei_device *dev,
struct mei_msg_hdr *mei_hdr)
static int _mei_irq_thread_state_ok(struct mei_cl *cl,
struct mei_msg_hdr *mei_hdr)
static int mei_irq_thread_read_client_message(struct mei_io_list *complete_list,
struct mei_device *dev,
struct mei_msg_hdr *mei_hdr)
static int _mei_irq_thread_iamthif_read(struct mei_device *dev, s32 *slots)
static int _mei_irq_thread_close(struct mei_device *dev, s32 *slots,
struct mei_cl_cb *cb_pos,
struct mei_cl *cl,
struct mei_io_list *cmpl_list)
static bool is_treat_specially_client(struct mei_cl *cl,
struct hbm_client_connect_response *rs)
static void mei_client_connect_response(struct mei_device *dev,
struct hbm_client_connect_response *rs)
static void mei_client_disconnect_response(struct mei_device *dev,
struct hbm_client_connect_response *rs)
static int same_flow_addr(struct mei_cl *cl, struct hbm_flow_control *flow)
static void add_single_flow_creds(struct mei_device *dev,
struct hbm_flow_control *flow)
static void mei_client_flow_control_response(struct mei_device *dev,
struct hbm_flow_control *flow_control)
static int same_disconn_addr(struct mei_cl *cl,
struct hbm_client_disconnect_request *disconn)
static void mei_client_disconnect_request(struct mei_device *dev,
struct hbm_client_disconnect_request *disconnect_req)
static void mei_irq_thread_read_bus_message(struct mei_device *dev,
struct mei_msg_hdr *mei_hdr)
static int _mei_irq_thread_read(struct mei_device *dev,	s32 *slots,
struct mei_cl_cb *cb_pos,
struct mei_cl *cl,
struct mei_io_list *cmpl_list)
static int _mei_irq_thread_ioctl(struct mei_device *dev, s32 *slots,
struct mei_cl_cb *cb_pos,
struct mei_cl *cl,
struct mei_io_list *cmpl_list)
static int _mei_irq_thread_cmpl(struct mei_device *dev,	s32 *slots,
struct mei_cl_cb *cb_pos,
struct mei_cl *cl,
struct mei_io_list *cmpl_list)
static int _mei_irq_thread_cmpl_iamthif(struct mei_device *dev, s32 *slots,
struct mei_cl_cb *cb_pos,
struct mei_cl *cl,
struct mei_io_list *cmpl_list)
static int mei_irq_thread_read_handler(struct mei_io_list *cmpl_list,
struct mei_device *dev,
s32 *slots)
static int mei_irq_thread_write_handler(struct mei_io_list *cmpl_list,
struct mei_device *dev,
s32 *slots)
void mei_wd_timer(struct work_struct *work)
irqreturn_t mei_interrupt_thread_handler(int irq, void *dev_id)
