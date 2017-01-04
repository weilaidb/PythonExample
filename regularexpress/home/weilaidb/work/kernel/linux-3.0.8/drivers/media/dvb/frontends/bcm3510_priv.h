#define __BCM3510_PRIV_H__
#define PACKED __attribute__((packed))
#undef err
#define err(format, arg...)  printk(KERN_ERR     "bcm3510: " format "\n" , ## arg)
#undef info
#define info(format, arg...) printk(KERN_INFO    "bcm3510: " format "\n" , ## arg)
#undef warn
#define warn(format, arg...) printk(KERN_WARNING "bcm3510: " format "\n" , ## arg)
#define PANASONIC_FIRST_IF_BASE_IN_KHz  1407500
#define BCM3510_SYMBOL_RATE             5381000
typedef union  bcm3510_register_value;
#define CMD_GET_VERSION_INFO   0x3D
#define MSGID_GET_VERSION_INFO 0x15
struct bcm3510_hab_cmd_get_version_info  PACKED;
#define BCM3510_DEF_MICROCODE_VERSION 0x0E
#define BCM3510_DEF_SCRIPT_VERSION    0x06
#define BCM3510_DEF_CONFIG_VERSION    0x01
#define BCM3510_DEF_DEMOD_VERSION     0xB1
#define CMD_ACQUIRE            0x38
#define MSGID_EXT_TUNER_ACQUIRE 0x0A
struct bcm3510_hab_cmd_ext_acquire  PACKED;
#define MSGID_INT_TUNER_ACQUIRE 0x0B
struct bcm3510_hab_cmd_int_acquire  PACKED;
#define BCM3510_QAM16           =   0x01
#define BCM3510_QAM32           =   0x02
#define BCM3510_QAM64           =   0x03
#define BCM3510_QAM128          =   0x04
#define BCM3510_QAM256          =   0x05
#define BCM3510_8VSB            =   0x0B
#define BCM3510_16VSB           =   0x0D
#define BCM3510_IF_TERRESTRIAL 0x0
#define BCM3510_IF_CABLE       0x1
#define BCM3510_IF_USE_CMD     0x7
#define BCM3510_SR_8VSB        0x0
#define BCM3510_SR_256QAM      0x1
#define BCM3510_SR_16QAM       0x2
#define BCM3510_SR_MISC        0x3
#define BCM3510_SR_USE_CMD     0x7
#define CMD_SET_VALUE_NOT_LISTED  0x2d
#define MSGID_SET_SYMBOL_RATE_NOT_LISTED 0x0c
struct bcm3510_hab_cmd_set_sr_not_listed  PACKED;
#define MSGID_SET_IF_FREQ_NOT_LISTED 0x0d
struct bcm3510_hab_cmd_set_if_freq_not_listed  PACKED;
#define CMD_AUTO_PARAM       0x2a
#define MSGID_AUTO_REACQUIRE 0x0e
struct bcm3510_hab_cmd_auto_reacquire  PACKED;
#define MSGID_SET_RF_AGC_SEL 0x12
struct bcm3510_hab_cmd_set_agc  PACKED;
#define MSGID_SET_AUTO_INVERSION 0x14
struct bcm3510_hab_cmd_auto_inversion  PACKED;
#define CMD_STATE_CONTROL  0x12
#define MSGID_BERT_CONTROL 0x0e
#define MSGID_BERT_SET     0xfa
struct bcm3510_hab_cmd_bert_control  PACKED;
#define MSGID_TRI_STATE 0x2e
struct bcm3510_hab_cmd_tri_state  PACKED;
#define CMD_TUNE   0x38
#define MSGID_TUNE 0x16
struct bcm3510_hab_cmd_tune_ctrl_data_pair  PACKED;
struct bcm3510_hab_cmd_tune  PACKED;
#define CMD_STATUS    0x38
#define MSGID_STATUS1 0x08
struct bcm3510_hab_cmd_status1  PACKED;
#define MSGID_STATUS2 0x14
struct bcm3510_hab_cmd_status2  PACKED;
#define CMD_SET_RF_BW_NOT_LISTED   0x3f
#define MSGID_SET_RF_BW_NOT_LISTED 0x11
