#define _DVBFRONTEND_H_
typedef enum fe_type  fe_type_t;
typedef enum fe_caps  fe_caps_t;
struct dvb_frontend_info ;
struct dvb_diseqc_master_cmd ;
struct dvb_diseqc_slave_reply ;
typedef enum fe_sec_voltage  fe_sec_voltage_t;
typedef enum fe_sec_tone_mode  fe_sec_tone_mode_t;
typedef enum fe_sec_mini_cmd  fe_sec_mini_cmd_t;
typedef enum fe_status  fe_status_t;
typedef enum fe_spectral_inversion  fe_spectral_inversion_t;
typedef enum fe_code_rate  fe_code_rate_t;
typedef enum fe_modulation  fe_modulation_t;
typedef enum fe_transmit_mode  fe_transmit_mode_t;
typedef enum fe_bandwidth  fe_bandwidth_t;
typedef enum fe_guard_interval  fe_guard_interval_t;
typedef enum fe_hierarchy  fe_hierarchy_t;
struct dvb_qpsk_parameters ;
struct dvb_qam_parameters ;
struct dvb_vsb_parameters ;
struct dvb_ofdm_parameters ;
struct dvb_frontend_parameters ;
struct dvb_frontend_event ;
#define DTV_UNDEFINED		0
#define DTV_TUNE		1
#define DTV_CLEAR		2
#define DTV_FREQUENCY		3
#define DTV_MODULATION		4
#define DTV_BANDWIDTH_HZ	5
#define DTV_INVERSION		6
#define DTV_DISEQC_MASTER	7
#define DTV_SYMBOL_RATE		8
#define DTV_INNER_FEC		9
#define DTV_VOLTAGE		10
#define DTV_TONE		11
#define DTV_PILOT		12
#define DTV_ROLLOFF		13
#define DTV_DISEQC_SLAVE_REPLY	14
#define DTV_FE_CAPABILITY_COUNT	15
#define DTV_FE_CAPABILITY	16
#define DTV_DELIVERY_SYSTEM	17
#define DTV_ISDBT_PARTIAL_RECEPTION	18
#define DTV_ISDBT_SOUND_BROADCASTING	19
#define DTV_ISDBT_SB_SUBCHANNEL_ID	20
#define DTV_ISDBT_SB_SEGMENT_IDX	21
#define DTV_ISDBT_SB_SEGMENT_COUNT	22
#define DTV_ISDBT_LAYERA_FEC			23
#define DTV_ISDBT_LAYERA_MODULATION		24
#define DTV_ISDBT_LAYERA_SEGMENT_COUNT		25
#define DTV_ISDBT_LAYERA_TIME_INTERLEAVING	26
#define DTV_ISDBT_LAYERB_FEC			27
#define DTV_ISDBT_LAYERB_MODULATION		28
#define DTV_ISDBT_LAYERB_SEGMENT_COUNT		29
#define DTV_ISDBT_LAYERB_TIME_INTERLEAVING	30
#define DTV_ISDBT_LAYERC_FEC			31
#define DTV_ISDBT_LAYERC_MODULATION		32
#define DTV_ISDBT_LAYERC_SEGMENT_COUNT		33
#define DTV_ISDBT_LAYERC_TIME_INTERLEAVING	34
#define DTV_API_VERSION		35
#define DTV_CODE_RATE_HP	36
#define DTV_CODE_RATE_LP	37
#define DTV_GUARD_INTERVAL	38
#define DTV_TRANSMISSION_MODE	39
#define DTV_HIERARCHY		40
#define DTV_ISDBT_LAYER_ENABLED	41
#define DTV_ISDBS_TS_ID		42
#define DTV_DVBT2_PLP_ID	43
#define DTV_MAX_COMMAND				DTV_DVBT2_PLP_ID
typedef enum fe_pilot  fe_pilot_t;
typedef enum fe_rolloff  fe_rolloff_t;
typedef enum fe_delivery_system  fe_delivery_system_t;
struct dtv_cmds_h ;
struct dtv_property  __attribute__ ((packed));
#define DTV_IOCTL_MAX_MSGS 64
struct dtv_properties ;
#define FE_SET_PROPERTY		   _IOW('o', 82, struct dtv_properties)
#define FE_GET_PROPERTY		   _IOR('o', 83, struct dtv_properties)
#define FE_TUNE_MODE_ONESHOT 0x01
#define FE_GET_INFO		   _IOR('o', 61, struct dvb_frontend_info)
#define FE_DISEQC_RESET_OVERLOAD   _IO('o', 62)
#define FE_DISEQC_SEND_MASTER_CMD  _IOW('o', 63, struct dvb_diseqc_master_cmd)
#define FE_DISEQC_RECV_SLAVE_REPLY _IOR('o', 64, struct dvb_diseqc_slave_reply)
#define FE_DISEQC_SEND_BURST       _IO('o', 65)
#define FE_SET_TONE		   _IO('o', 66)
#define FE_SET_VOLTAGE		   _IO('o', 67)
#define FE_ENABLE_HIGH_LNB_VOLTAGE _IO('o', 68)
#define FE_READ_STATUS		   _IOR('o', 69, fe_status_t)
#define FE_READ_BER		   _IOR('o', 70, __u32)
#define FE_READ_SIGNAL_STRENGTH    _IOR('o', 71, __u16)
#define FE_READ_SNR		   _IOR('o', 72, __u16)
#define FE_READ_UNCORRECTED_BLOCKS _IOR('o', 73, __u32)
#define FE_SET_FRONTEND		   _IOW('o', 76, struct dvb_frontend_parameters)
#define FE_GET_FRONTEND		   _IOR('o', 77, struct dvb_frontend_parameters)
#define FE_SET_FRONTEND_TUNE_MODE  _IO('o', 81)
#define FE_GET_EVENT		   _IOR('o', 78, struct dvb_frontend_event)
#define FE_DISHNETWORK_SEND_LEGACY_CMD _IO('o', 80)
