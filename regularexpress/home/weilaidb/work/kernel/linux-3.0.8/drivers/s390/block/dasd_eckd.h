#define DASD_ECKD_H
#define DASD_ECKD_CCW_WRITE		 0x05
#define DASD_ECKD_CCW_READ		 0x06
#define DASD_ECKD_CCW_WRITE_HOME_ADDRESS 0x09
#define DASD_ECKD_CCW_READ_HOME_ADDRESS	 0x0a
#define DASD_ECKD_CCW_WRITE_KD		 0x0d
#define DASD_ECKD_CCW_READ_KD		 0x0e
#define DASD_ECKD_CCW_ERASE		 0x11
#define DASD_ECKD_CCW_READ_COUNT	 0x12
#define DASD_ECKD_CCW_SLCK		 0x14
#define DASD_ECKD_CCW_WRITE_RECORD_ZERO	 0x15
#define DASD_ECKD_CCW_READ_RECORD_ZERO	 0x16
#define DASD_ECKD_CCW_WRITE_CKD		 0x1d
#define DASD_ECKD_CCW_READ_CKD		 0x1e
#define DASD_ECKD_CCW_PSF		 0x27
#define DASD_ECKD_CCW_SNID		 0x34
#define DASD_ECKD_CCW_RSSD		 0x3e
#define DASD_ECKD_CCW_LOCATE_RECORD	 0x47
#define DASD_ECKD_CCW_SNSS		 0x54
#define DASD_ECKD_CCW_DEFINE_EXTENT	 0x63
#define DASD_ECKD_CCW_WRITE_MT		 0x85
#define DASD_ECKD_CCW_READ_MT		 0x86
#define DASD_ECKD_CCW_WRITE_KD_MT	 0x8d
#define DASD_ECKD_CCW_READ_KD_MT	 0x8e
#define DASD_ECKD_CCW_RELEASE		 0x94
#define DASD_ECKD_CCW_WRITE_FULL_TRACK	 0x95
#define DASD_ECKD_CCW_READ_CKD_MT	 0x9e
#define DASD_ECKD_CCW_WRITE_CKD_MT	 0x9d
#define DASD_ECKD_CCW_WRITE_TRACK_DATA	 0xA5
#define DASD_ECKD_CCW_READ_TRACK_DATA	 0xA6
#define DASD_ECKD_CCW_RESERVE		 0xB4
#define DASD_ECKD_CCW_READ_TRACK	 0xDE
#define DASD_ECKD_CCW_PFX		 0xE7
#define DASD_ECKD_CCW_PFX_READ		 0xEA
#define DASD_ECKD_CCW_RSCK		 0xF9
#define DASD_ECKD_CCW_RCD		 0xFA
#define PSF_ORDER_PRSSD 0x18
#define PSF_ORDER_SSC	0x1D
#define LV_COMPAT_CYL 0xFFFE
#define FCX_MAX_DATA_FACTOR 65536
#define DASD_ECKD_RCD_DATA_SIZE 256
struct eckd_count  __attribute__ ((packed));
struct ch_t  __attribute__ ((packed));
struct chs_t  __attribute__ ((packed));
struct chr_t  __attribute__ ((packed));
struct geom_t  __attribute__ ((packed));
struct eckd_home  __attribute__ ((packed));
struct DE_eckd_data  __attribute__ ((packed));
struct LO_eckd_data  __attribute__ ((packed));
struct LRE_eckd_data  __attribute__ ((packed));
struct PFX_eckd_data  __attribute__ ((packed));
struct dasd_eckd_characteristics  __attribute__ ((packed));
struct dasd_ned  __attribute__ ((packed));
struct dasd_sneq  __attribute__ ((packed));
struct vd_sneq  __attribute__ ((packed));
struct dasd_gneq  __attribute__ ((packed));
struct dasd_rssd_features  __attribute__((packed));
struct dasd_psf_prssd_data  __attribute__ ((packed));
struct dasd_psf_ssc_data  __attribute__((packed));
struct dasd_unit_address_configuration  __attribute__((packed));
#define MAX_DEVICES_PER_LCU 256
#define NEED_UAC_UPDATE  0x01
#define UPDATE_PENDING	0x02
enum pavtype ;
struct alias_root ;
struct alias_server ;
struct summary_unit_check_work_data ;
struct read_uac_work_data ;
struct alias_lcu ;
struct alias_pav_group ;
struct dasd_eckd_private ;
int dasd_alias_make_device_known_to_lcu(struct dasd_device *);
void dasd_alias_disconnect_device_from_lcu(struct dasd_device *);
int dasd_alias_add_device(struct dasd_device *);
int dasd_alias_remove_device(struct dasd_device *);
struct dasd_device *dasd_alias_get_start_dev(struct dasd_device *);
void dasd_alias_handle_summary_unit_check(struct dasd_device *, struct irb *);
void dasd_eckd_reset_ccw_to_base_io(struct dasd_ccw_req *);
void dasd_alias_lcu_setup_complete(struct dasd_device *);
void dasd_alias_wait_for_lcu_setup(struct dasd_device *);
int dasd_alias_update_add_device(struct dasd_device *);
