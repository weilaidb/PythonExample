#define _ISCI_REMOTE_DEVICE_H_
enum sci_remote_device_not_ready_reason_code ;
struct isci_remote_device ;
#define ISCI_REMOTE_DEVICE_START_TIMEOUT 5000
static inline struct isci_remote_device *isci_lookup_device(struct domain_device *dev)
void isci_remote_device_release(struct kref *kref);
static inline void isci_put_device(struct isci_remote_device *idev)
enum sci_status isci_remote_device_stop(struct isci_host *ihost,
struct isci_remote_device *idev);
void isci_remote_device_nuke_requests(struct isci_host *ihost,
struct isci_remote_device *idev);
void isci_remote_device_gone(struct domain_device *domain_dev);
int isci_remote_device_found(struct domain_device *domain_dev);
bool isci_device_is_reset_pending(struct isci_host *ihost,
struct isci_remote_device *idev);
void isci_device_clear_reset_pending(struct isci_host *ihost,
struct isci_remote_device *idev);
enum sci_status sci_remote_device_stop(
struct isci_remote_device *idev,
u32 timeout);
enum sci_status sci_remote_device_reset(
struct isci_remote_device *idev);
enum sci_status sci_remote_device_reset_complete(
struct isci_remote_device *idev);
enum sci_remote_device_states ;
static inline struct isci_remote_device *rnc_to_dev(struct sci_remote_node_context *rnc)
static inline bool dev_is_expander(struct domain_device *dev)
static inline void sci_remote_device_decrement_request_count(struct isci_remote_device *idev)
enum sci_status sci_remote_device_frame_handler(
struct isci_remote_device *idev,
u32 frame_index);
enum sci_status sci_remote_device_event_handler(
struct isci_remote_device *idev,
u32 event_code);
enum sci_status sci_remote_device_start_io(
struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq);
enum sci_status sci_remote_device_start_task(
struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq);
enum sci_status sci_remote_device_complete_io(
struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq);
enum sci_status sci_remote_device_suspend(
struct isci_remote_device *idev,
u32 suspend_type);
void sci_remote_device_post_request(
struct isci_remote_device *idev,
u32 request);
