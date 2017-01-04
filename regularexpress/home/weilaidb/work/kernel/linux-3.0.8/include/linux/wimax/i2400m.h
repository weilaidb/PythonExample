#define __LINUX__WIMAX__I2400M_H__
struct i2400m_bcf_hdr  __attribute__ ((packed));
enum i2400m_brh_opcode ;
enum i2400m_brh ;
struct i2400m_bootrom_header  __attribute__ ((packed));
enum i2400m_pt ;
struct i2400m_pl_data_hdr  __attribute__((packed));
struct i2400m_pl_edata_hdr  __attribute__((packed));
enum i2400m_cs ;
enum i2400m_ro ;
enum i2400m_ro_type ;
enum ;
struct i2400m_pld  __attribute__ ((packed));
#define I2400M_PLD_SIZE_MASK 0x00003fff
#define I2400M_PLD_TYPE_SHIFT 16
#define I2400M_PLD_TYPE_MASK 0x000f0000
struct i2400m_msg_hdr  __attribute__ ((packed));
enum ;
enum i2400m_mt ;
enum i2400m_ms ;
enum i2400m_tlv ;
struct i2400m_tlv_hdr  __attribute__((packed));
struct i2400m_l3l4_hdr  __attribute__((packed));
enum i2400m_system_state ;
struct i2400m_tlv_system_state  __attribute__((packed));
struct i2400m_tlv_l4_message_versions  __attribute__((packed));
struct i2400m_tlv_detailed_device_info  __attribute__((packed));
enum i2400m_rf_switch_status ;
struct i2400m_tlv_rf_switches_status  __attribute__((packed));
enum ;
struct i2400m_tlv_rf_operation  __attribute__((packed));
enum i2400m_tlv_reset_type ;
struct i2400m_tlv_device_reset_type  __attribute__((packed));
struct i2400m_tlv_config_idle_parameters  __attribute__((packed));
enum i2400m_media_status ;
struct i2400m_tlv_media_status  __attribute__((packed));
struct i2400m_tlv_config_idle_timeout  __attribute__((packed));
struct i2400m_tlv_config_d2h_data_format  __attribute__((packed));
struct i2400m_tlv_config_dl_host_reorder  __attribute__((packed));
