#define _SCI_HOST_H_
struct isci_request;
struct scu_task_context;
struct sci_power_control ;
struct sci_port_configuration_agent;
typedef void (*port_config_fn)(struct isci_host *,
struct sci_port_configuration_agent *,
struct isci_port *, struct isci_phy *);
struct sci_port_configuration_agent ;
struct isci_host ;
enum sci_controller_states ;
#define SCI_MAX_MSIX_INT (SCI_NUM_MSI_X_INT*SCI_MAX_CONTROLLERS)
struct isci_pci_info ;
static inline struct isci_pci_info *to_pci_info(struct pci_dev *pdev)
#define for_each_isci_host(id, ihost, pdev) \
for (id = 0, ihost = to_pci_info(pdev)->hosts[id]; \
id < ARRAY_SIZE(to_pci_info(pdev)->hosts) && ihost; \
ihost = to_pci_info(pdev)->hosts[++id])
static inline enum isci_status isci_host_get_state(struct isci_host *isci_host)
static inline void isci_host_change_state(struct isci_host *isci_host,
enum isci_status status)
static inline void wait_for_start(struct isci_host *ihost)
static inline void wait_for_stop(struct isci_host *ihost)
static inline void wait_for_device_start(struct isci_host *ihost, struct isci_remote_device *idev)
static inline void wait_for_device_stop(struct isci_host *ihost, struct isci_remote_device *idev)
static inline struct isci_host *dev_to_ihost(struct domain_device *dev)
#define ISCI_PEG 0
#define ISCI_TAG(seq, tci) (((u16) (seq)) << 12 | tci)
#define ISCI_TAG_SEQ(tag) (((tag) >> 12) & (SCI_MAX_SEQ-1))
#define ISCI_TAG_TCI(tag) ((tag) & (SCI_MAX_IO_REQUESTS-1))
static inline int sci_remote_device_node_count(struct isci_remote_device *idev)
#define sci_controller_clear_invalid_phy(controller, phy) \
((controller)->invalid_phy_mask &= ~(1 << (phy)->phy_index))
static inline struct device *sciphy_to_dev(struct isci_phy *iphy)
static inline struct device *sciport_to_dev(struct isci_port *iport)
static inline struct device *scirdev_to_dev(struct isci_remote_device *idev)
static inline bool is_a2(struct pci_dev *pdev)
static inline bool is_b0(struct pci_dev *pdev)
static inline bool is_c0(struct pci_dev *pdev)
void sci_controller_post_request(struct isci_host *ihost,
u32 request);
void sci_controller_release_frame(struct isci_host *ihost,
u32 frame_index);
void sci_controller_copy_sata_response(void *response_buffer,
void *frame_header,
void *frame_buffer);
enum sci_status sci_controller_allocate_remote_node_context(struct isci_host *ihost,
struct isci_remote_device *idev,
u16 *node_id);
void sci_controller_free_remote_node_context(
struct isci_host *ihost,
struct isci_remote_device *idev,
u16 node_id);
struct isci_request *sci_request_by_tag(struct isci_host *ihost,
u16 io_tag);
void sci_controller_power_control_queue_insert(
struct isci_host *ihost,
struct isci_phy *iphy);
void sci_controller_power_control_queue_remove(
struct isci_host *ihost,
struct isci_phy *iphy);
void sci_controller_link_up(
struct isci_host *ihost,
struct isci_port *iport,
struct isci_phy *iphy);
void sci_controller_link_down(
struct isci_host *ihost,
struct isci_port *iport,
struct isci_phy *iphy);
void sci_controller_remote_device_stopped(
struct isci_host *ihost,
struct isci_remote_device *idev);
void sci_controller_copy_task_context(
struct isci_host *ihost,
struct isci_request *ireq);
void sci_controller_register_setup(struct isci_host *ihost);
enum sci_status sci_controller_continue_io(struct isci_request *ireq);
int isci_host_scan_finished(struct Scsi_Host *, unsigned long);
void isci_host_scan_start(struct Scsi_Host *);
u16 isci_alloc_tag(struct isci_host *ihost);
enum sci_status isci_free_tag(struct isci_host *ihost, u16 io_tag);
void isci_tci_free(struct isci_host *ihost, u16 tci);
int isci_host_init(struct isci_host *);
void isci_host_init_controller_names(
struct isci_host *isci_host,
unsigned int controller_idx);
void isci_host_deinit(
struct isci_host *);
void isci_host_port_link_up(
struct isci_host *,
struct isci_port *,
struct isci_phy *);
int isci_host_dev_found(struct domain_device *);
void isci_host_remote_device_start_complete(
struct isci_host *,
struct isci_remote_device *,
enum sci_status);
void sci_controller_disable_interrupts(
struct isci_host *ihost);
enum sci_status sci_controller_start_io(
struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq);
enum sci_task_status sci_controller_start_task(
struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq);
enum sci_status sci_controller_terminate_request(
struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq);
enum sci_status sci_controller_complete_io(
struct isci_host *ihost,
struct isci_remote_device *idev,
struct isci_request *ireq);
void sci_port_configuration_agent_construct(
struct sci_port_configuration_agent *port_agent);
enum sci_status sci_port_configuration_agent_initialize(
struct isci_host *ihost,
struct sci_port_configuration_agent *port_agent);
