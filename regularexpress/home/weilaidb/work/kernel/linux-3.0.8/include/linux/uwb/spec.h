#define __LINUX__UWB_SPEC_H__
#define i1480_FW 0x00000303
enum ;
enum ;
#define UWB_MAS_PER_ZONE (UWB_NUM_MAS / UWB_NUM_ZONES)
#define UWB_USABLE_MAS_PER_ROW (UWB_NUM_ZONES - 1)
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define UWB_SUPERFRAME_LENGTH_US (UWB_MAS_LENGTH_US * UWB_NUM_MAS)
struct uwb_mac_addr  __attribute__((packed));
struct uwb_dev_addr  __attribute__((packed));
enum uwb_addr_type ;
enum ;
enum uwb_prid ;
enum uwb_phy_rate ;
enum uwb_scan_type ;
enum uwb_ack_pol ;
enum uwb_drp_type ;
enum uwb_drp_reason ;
enum uwb_relinquish_req_reason ;
enum uwb_drp_notif_reason ;
struct uwb_drp_alloc  __attribute__((packed));
struct uwb_mac_frame_hdr  __attribute__((packed));
struct uwb_beacon_frame  __attribute__((packed));
enum uwb_ie ;
struct uwb_ie_hdr  __attribute__((packed));
struct uwb_ie_drp  __attribute__((packed));
static inline int uwb_ie_drp_type(struct uwb_ie_drp *ie)
static inline int uwb_ie_drp_stream_index(struct uwb_ie_drp *ie)
static inline int uwb_ie_drp_reason_code(struct uwb_ie_drp *ie)
static inline int uwb_ie_drp_status(struct uwb_ie_drp *ie)
static inline int uwb_ie_drp_owner(struct uwb_ie_drp *ie)
static inline int uwb_ie_drp_tiebreaker(struct uwb_ie_drp *ie)
static inline int uwb_ie_drp_unsafe(struct uwb_ie_drp *ie)
static inline void uwb_ie_drp_set_type(struct uwb_ie_drp *ie, enum uwb_drp_type type)
static inline void uwb_ie_drp_set_stream_index(struct uwb_ie_drp *ie, int stream_index)
static inline void uwb_ie_drp_set_reason_code(struct uwb_ie_drp *ie,
enum uwb_drp_reason reason_code)
static inline void uwb_ie_drp_set_status(struct uwb_ie_drp *ie, int status)
static inline void uwb_ie_drp_set_owner(struct uwb_ie_drp *ie, int owner)
static inline void uwb_ie_drp_set_tiebreaker(struct uwb_ie_drp *ie, int tiebreaker)
static inline void uwb_ie_drp_set_unsafe(struct uwb_ie_drp *ie, int unsafe)
struct uwb_ie_drp_avail  __attribute__((packed));
struct uwb_relinquish_request_ie  __attribute__((packed));
static inline int uwb_ie_relinquish_req_reason_code(struct uwb_relinquish_request_ie *ie)
static inline void uwb_ie_relinquish_req_set_reason_code(struct uwb_relinquish_request_ie *ie,
int reason_code)
struct uwb_vendor_id  __attribute__((packed));
struct uwb_device_type_id  __attribute__((packed));
enum uwb_dev_info_type ;
struct uwb_dev_info  __attribute__((packed));
struct uwb_identification_ie  __attribute__((packed));
struct uwb_rccb  __attribute__((packed));
struct uwb_rceb  __attribute__((packed));
enum ;
enum uwb_rc_cmd ;
enum uwb_rc_evt ;
enum uwb_rc_extended_type_1_cmd ;
enum uwb_rc_extended_type_1_evt ;
enum ;
struct uwb_rc_evt_confirm  __attribute__((packed));
struct uwb_rc_evt_dev_addr_mgmt  __attribute__((packed));
struct uwb_rc_evt_get_ie  __attribute__((packed));
struct uwb_rc_evt_set_drp_ie  __attribute__((packed));
struct uwb_rc_evt_set_ie  __attribute__((packed));
struct uwb_rc_cmd_scan  __attribute__((packed));
struct uwb_rc_cmd_set_drp_ie  __attribute__((packed));
struct uwb_rc_cmd_set_ie  __attribute__((packed));
struct uwb_rc_evt_set_daa_energy_mask  __attribute__((packed));
struct uwb_rc_evt_set_notification_filter_ex  __attribute__((packed));
struct uwb_rc_evt_ie_rcv  __attribute__((packed));
enum uwb_rc_beacon_type ;
struct uwb_rc_evt_beacon  __attribute__((packed));
struct uwb_rc_evt_beacon_size  __attribute__((packed));
struct uwb_rc_evt_bpoie_change  __attribute__((packed));
struct uwb_rc_evt_bp_slot_change  __attribute__((packed));
static inline int uwb_rc_evt_bp_slot_change_slot_num(
const struct uwb_rc_evt_bp_slot_change *evt)
static inline int uwb_rc_evt_bp_slot_change_no_slot(
const struct uwb_rc_evt_bp_slot_change *evt)
struct uwb_rc_evt_bp_switch_ie_rcv  __attribute__((packed));
struct uwb_rc_evt_dev_addr_conflict  __attribute__((packed));
struct uwb_rc_evt_drp  __attribute__((packed));
static inline enum uwb_drp_notif_reason uwb_rc_evt_drp_reason(struct uwb_rc_evt_drp *evt)
struct uwb_rc_evt_drp_avail  __attribute__((packed));
struct uwb_rc_evt_bp_switch_status  __attribute__((packed));
struct uwb_rc_evt_cmd_frame_rcv  __attribute__((packed));
struct uwb_rc_evt_channel_change_ie_rcv  __attribute__((packed));
struct uwb_rc_evt_daa_energy_detected  __attribute__((packed));
struct uwb_rc_control_intf_class_desc  __attribute__((packed));
