#define FSG_DRIVER_DESC		"Mass Storage Function"
#define FSG_DRIVER_VERSION	"2009/09/11"
static const char fsg_string_interface[] = "Mass Storage";
#define FSG_NO_INTR_EP 1
#define FSG_NO_DEVICE_STRINGS    1
#define FSG_NO_OTG               1
#define FSG_NO_INTR_EP           1
struct fsg_dev;
struct fsg_common;
struct fsg_operations ;
struct fsg_common ;
struct fsg_config ;
struct fsg_dev ;
static inline int __fsg_is_set(struct fsg_common *common,
const char *func, unsigned line)
#define fsg_is_set(common) likely(__fsg_is_set(common, __func__, __LINE__))
static inline struct fsg_dev *fsg_from_func(struct usb_function *f)
typedef void (*fsg_routine_t)(struct fsg_dev *);
static int exception_in_progress(struct fsg_common *common)
static void set_bulk_out_req_length(struct fsg_common *common,
struct fsg_buffhd *bh, unsigned int length)
static int fsg_set_halt(struct fsg_dev *fsg, struct usb_ep *ep)
static void wakeup_thread(struct fsg_common *common)
static void raise_exception(struct fsg_common *common, enum fsg_state new_state)
static int ep0_queue(struct fsg_common *common)
static void bulk_in_complete(struct usb_ep *ep, struct usb_request *req)
static void bulk_out_complete(struct usb_ep *ep, struct usb_request *req)
static int fsg_setup(struct usb_function *f,
const struct usb_ctrlrequest *ctrl)
static void start_transfer(struct fsg_dev *fsg, struct usb_ep *ep,
struct usb_request *req, int *pbusy,
enum fsg_buffer_state *state)
static bool start_in_transfer(struct fsg_common *common, struct fsg_buffhd *bh)
static bool start_out_transfer(struct fsg_common *common, struct fsg_buffhd *bh)
static int sleep_thread(struct fsg_common *common)
static int do_read(struct fsg_common *common)
static int do_write(struct fsg_common *common)
static int do_synchronize_cache(struct fsg_common *common)
static void invalidate_sub(struct fsg_lun *curlun)
static int do_verify(struct fsg_common *common)
static int do_inquiry(struct fsg_common *common, struct fsg_buffhd *bh)
static int do_request_sense(struct fsg_common *common, struct fsg_buffhd *bh)
static int do_read_capacity(struct fsg_common *common, struct fsg_buffhd *bh)
static int do_read_header(struct fsg_common *common, struct fsg_buffhd *bh)
static int do_read_toc(struct fsg_common *common, struct fsg_buffhd *bh)
static int do_mode_sense(struct fsg_common *common, struct fsg_buffhd *bh)
static int do_start_stop(struct fsg_common *common)
static int do_prevent_allow(struct fsg_common *common)
static int do_read_format_capacities(struct fsg_common *common,
struct fsg_buffhd *bh)
static int do_mode_select(struct fsg_common *common, struct fsg_buffhd *bh)
static int halt_bulk_in_endpoint(struct fsg_dev *fsg)
static int wedge_bulk_in_endpoint(struct fsg_dev *fsg)
static int throw_away_data(struct fsg_common *common)
static int finish_reply(struct fsg_common *common)
static int send_status(struct fsg_common *common)
static int check_command(struct fsg_common *common, int cmnd_size,
enum data_direction data_dir, unsigned int mask,
int needs_medium, const char *name)
static int do_scsi_command(struct fsg_common *common)
static int received_cbw(struct fsg_dev *fsg, struct fsg_buffhd *bh)
static int get_next_command(struct fsg_common *common)
static int enable_endpoint(struct fsg_common *common, struct usb_ep *ep,
const struct usb_endpoint_descriptor *d)
static int alloc_request(struct fsg_common *common, struct usb_ep *ep,
struct usb_request **preq)
static int do_set_interface(struct fsg_common *common, struct fsg_dev *new_fsg)
static int fsg_set_alt(struct usb_function *f, unsigned intf, unsigned alt)
static void fsg_disable(struct usb_function *f)
static void handle_exception(struct fsg_common *common)
static int fsg_main_thread(void *common_)
static DEVICE_ATTR(ro, 0644, fsg_show_ro, fsg_store_ro);
static DEVICE_ATTR(nofua, 0644, fsg_show_nofua, fsg_store_nofua);
static DEVICE_ATTR(file, 0644, fsg_show_file, fsg_store_file);
static void fsg_common_release(struct kref *ref);
static void fsg_lun_release(struct device *dev)
static inline void fsg_common_get(struct fsg_common *common)
static inline void fsg_common_put(struct fsg_common *common)
static struct fsg_common *fsg_common_init(struct fsg_common *common,
struct usb_composite_dev *cdev,
struct fsg_config *cfg)
static void fsg_common_release(struct kref *ref)
static void fsg_unbind(struct usb_configuration *c, struct usb_function *f)
static int fsg_bind(struct usb_configuration *c, struct usb_function *f)
static struct usb_gadget_strings *fsg_strings_array[] = ;
static int fsg_bind_config(struct usb_composite_dev *cdev,
struct usb_configuration *c,
struct fsg_common *common)
static inline int __deprecated __maybe_unused
fsg_add(struct usb_composite_dev *cdev, struct usb_configuration *c,
struct fsg_common *common)
struct fsg_module_parameters ;
#define _FSG_MODULE_PARAM_ARRAY(prefix, params, name, type, desc)	\
module_param_array_named(prefix ## name, params.name, type,	\
&prefix ## params.name ## _count,	\
S_IRUGO);				\
MODULE_PARM_DESC(prefix ## name, desc)
#define _FSG_MODULE_PARAM(prefix, params, name, type, desc)		\
module_param_named(prefix ## name, params.name, type,		\
S_IRUGO);					\
MODULE_PARM_DESC(prefix ## name, desc)
#define FSG_MODULE_PARAMETERS(prefix, params)				\
_FSG_MODULE_PARAM_ARRAY(prefix, params, file, charp,		\
"names of backing files or devices");	\
_FSG_MODULE_PARAM_ARRAY(prefix, params, ro, bool,		\
"true to force read-only");		\
_FSG_MODULE_PARAM_ARRAY(prefix, params, removable, bool,	\
"true to simulate removable media");	\
_FSG_MODULE_PARAM_ARRAY(prefix, params, cdrom, bool,		\
"true to simulate CD-ROM instead of disk"); \
_FSG_MODULE_PARAM_ARRAY(prefix, params, nofua, bool,		\
"true to ignore SCSI WRITE(10,12) FUA bit"); \
_FSG_MODULE_PARAM(prefix, params, luns, uint,			\
"number of LUNs");				\
_FSG_MODULE_PARAM(prefix, params, stall, bool,			\
"false to prevent bulk stalls")
static void
fsg_config_from_params(struct fsg_config *cfg,
const struct fsg_module_parameters *params)
static inline struct fsg_common *
fsg_common_from_params(struct fsg_common *common,
struct usb_composite_dev *cdev,
const struct fsg_module_parameters *params)
__attribute__((unused));
static inline struct fsg_common *
fsg_common_from_params(struct fsg_common *common,
struct usb_composite_dev *cdev,
const struct fsg_module_parameters *params)
