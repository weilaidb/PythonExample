#define OUT_EP_MAX_PACKET_SIZE	200
static int req_buf_size = OUT_EP_MAX_PACKET_SIZE;
module_param(req_buf_size, int, S_IRUGO);
MODULE_PARM_DESC(req_buf_size, "ISO OUT endpoint request buffer size");
static int req_count = 256;
module_param(req_count, int, S_IRUGO);
MODULE_PARM_DESC(req_count, "ISO OUT endpoint request count");
static int audio_buf_size = 48000;
module_param(audio_buf_size, int, S_IRUGO);
MODULE_PARM_DESC(audio_buf_size, "Audio buffer size");
static int generic_set_cmd(struct usb_audio_control *con, u8 cmd, int value);
static int generic_get_cmd(struct usb_audio_control *con, u8 cmd);
#define F_AUDIO_AC_INTERFACE	0
#define F_AUDIO_AS_INTERFACE	1
#define F_AUDIO_NUM_INTERFACES	2
static struct usb_interface_descriptor ac_interface_desc __initdata = ;
DECLARE_UAC_AC_HEADER_DESCRIPTOR(2);
#define UAC_DT_AC_HEADER_LENGTH	UAC_DT_AC_HEADER_SIZE(F_AUDIO_NUM_INTERFACES)
#define UAC_DT_TOTAL_LENGTH (UAC_DT_AC_HEADER_LENGTH + UAC_DT_INPUT_TERMINAL_SIZE \
+ UAC_DT_OUTPUT_TERMINAL_SIZE + UAC_DT_FEATURE_UNIT_SIZE(0))
static struct uac1_ac_header_descriptor_2 ac_header_desc = ;
#define INPUT_TERMINAL_ID	1
static struct uac_input_terminal_descriptor input_terminal_desc = ;
DECLARE_UAC_FEATURE_UNIT_DESCRIPTOR(0);
#define FEATURE_UNIT_ID		2
static struct uac_feature_unit_descriptor_0 feature_unit_desc = ;
static struct usb_audio_control mute_control = ;
static struct usb_audio_control volume_control = ;
static struct usb_audio_control_selector feature_unit = ;
#define OUTPUT_TERMINAL_ID	3
static struct uac1_output_terminal_descriptor output_terminal_desc = ;
static struct usb_interface_descriptor as_interface_alt_0_desc = ;
static struct usb_interface_descriptor as_interface_alt_1_desc = ;
static struct uac1_as_header_descriptor as_header_desc = ;
DECLARE_UAC_FORMAT_TYPE_I_DISCRETE_DESC(1);
static struct uac_format_type_i_discrete_descriptor_1 as_type_i_desc = ;
static struct usb_endpoint_descriptor as_out_ep_desc  = ;
static struct uac_iso_endpoint_descriptor as_iso_out_desc __initdata = ;
static struct usb_descriptor_header *f_audio_desc[] __initdata = ;
#define STRING_MANUFACTURER_IDX		0
#define STRING_PRODUCT_IDX		1
static char manufacturer[50];
static struct usb_string strings_dev[] = ;
static struct usb_gadget_strings stringtab_dev = ;
static struct usb_gadget_strings *audio_strings[] = ;
struct f_audio_buf ;
static struct f_audio_buf *f_audio_buffer_alloc(int buf_size)
static void f_audio_buffer_free(struct f_audio_buf *audio_buf)
struct f_audio ;
static inline struct f_audio *func_to_audio(struct usb_function *f)
static void f_audio_playback_work(struct work_struct *data)
static int f_audio_out_ep_complete(struct usb_ep *ep, struct usb_request *req)
static void f_audio_complete(struct usb_ep *ep, struct usb_request *req)
static int audio_set_intf_req(struct usb_function *f,
const struct usb_ctrlrequest *ctrl)
static int audio_get_intf_req(struct usb_function *f,
const struct usb_ctrlrequest *ctrl)
static int audio_set_endpoint_req(struct usb_function *f,
const struct usb_ctrlrequest *ctrl)
static int audio_get_endpoint_req(struct usb_function *f,
const struct usb_ctrlrequest *ctrl)
static int
f_audio_setup(struct usb_function *f, const struct usb_ctrlrequest *ctrl)
static int f_audio_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static void f_audio_disable(struct usb_function *f)
static void f_audio_build_desc(struct f_audio *audio)
static int __init
f_audio_bind(struct usb_configuration *c, struct usb_function *f)
static void
f_audio_unbind(struct usb_configuration *c, struct usb_function *f)
static int generic_set_cmd(struct usb_audio_control *con, u8 cmd, int value)
static int generic_get_cmd(struct usb_audio_control *con, u8 cmd)
int __init control_selector_init(struct f_audio *audio)
int __init audio_bind_config(struct usb_configuration *c)
