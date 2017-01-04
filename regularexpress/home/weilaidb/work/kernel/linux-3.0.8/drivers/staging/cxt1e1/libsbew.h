#define _INC_LIBSBEW_H_
#define LOG_NONE          0
#define LOG_ERROR         1
#define LOG_SBEBUG3       3
#define LOG_LSCHANGE      5
#define LOG_LSIMMEDIATE   6
#define LOG_WARN          8
#define LOG_MONITOR      10
#define LOG_SBEBUG12     12
#define LOG_MONITOR2     14
#define LOG_DEBUG        16
#define c4_LOG_DEBUG     LOG_DEBUG
#define c4_LOG_MAX       LOG_DEBUG
#define REL_STRLEN   80
struct sbe_drv_info
;
#define CHNM_STRLEN   16
struct sbe_brd_info
;
#define PCI_VENDOR_ID_SBE              0x1176
#define PCI_DEVICE_ID_WANPMC_C4T1E1    0x0701
#define PCI_DEVICE_ID_WANPTMC_C4T1E1   0x0702
#define PCI_DEVICE_ID_WANADAPT_HC4T1E1 0x0703
#define PCI_DEVICE_ID_WANPTMC_256T3_T1 0x0704
#define PCI_DEVICE_ID_WANPCI_C4T1E1    0x0705
#define PCI_DEVICE_ID_WANPMC_C1T3      0x0706
#define PCI_DEVICE_ID_WANPCI_C2T1E1    0x0707
#define PCI_DEVICE_ID_WANPCI_C1T1E1    0x0708
#define PCI_DEVICE_ID_WANPMC_C2T1E1    0x0709
#define PCI_DEVICE_ID_WANPMC_C1T1E1    0x070A
#define PCI_DEVICE_ID_WANPTMC_256T3_E1 0x070B
#define PCI_DEVICE_ID_WANPTMC_C24TE1   0x070C
#define PCI_DEVICE_ID_WANPMC_C4T1E1_L  0x070D
#define PCI_DEVICE_ID_WANPMC_C2T1E1_L  0x070E
#define PCI_DEVICE_ID_WANPMC_C1T1E1_L  0x070F
#define PCI_DEVICE_ID_WANPMC_2SSI      0x0801
#define PCI_DEVICE_ID_WANPCI_4SSI      0x0802
#define PCI_DEVICE_ID_WANPMC_2T3E3     0x0900
#define SBE_BOARD_ID(v,id)           ((v<<16) | id)
#define BINFO_PCI_SPEED_unk     0
#define BINFO_PCI_SPEED_33      1
#define BINFO_PCI_SPEED_66      2
struct sbe_iid_info
;
struct sbe_brd_addr
;
struct sbecom_wrt_vec
;
#define C1T3_CHIP_MSCC_32        0x01000000
#define C1T3_CHIP_TECT3_8        0x02000000
#define C1T3_CHIP_CPLD_8         0x03000000
#define C1T3_CHIP_EEPROM_8       0x04000000
#define W256T3_CHIP_MUSYCC_32    0x02000000
#define W256T3_CHIP_TEMUX_8      0x10000000
#define W256T3_CHIP_T8110_8      0x20000000
#define W256T3_CHIP_T8110_32     0x22000000
#define W256T3_CHIP_CPLD_8       0x30000000
#define W256T3_CHIP_EEPROM_8     0x40000000
struct sbecom_port_param
;
#define CFG_CLK_PORT_MASK      0x80
#define CFG_CLK_PORT_INTERNAL  0x80
#define CFG_CLK_PORT_EXTERNAL  0x00
#define CFG_LBO_MASK      0x0F
#define CFG_LBO_unk       0
#define CFG_LBO_LH0       1
#define CFG_LBO_LH7_5     2
#define CFG_LBO_LH15      3
#define CFG_LBO_LH22_5    4
#define CFG_LBO_SH110     5
#define CFG_LBO_SH220     6
#define CFG_LBO_SH330     7
#define CFG_LBO_SH440     8
#define CFG_LBO_SH550     9
#define CFG_LBO_SH660     10
#define CFG_LBO_E75       11
#define CFG_LBO_E120      12
struct sbecom_chan_param
;
#define SS7_INTR_SFILT      0x00000020
#define SS7_INTR_SDEC       0x00000040
#define SS7_INTR_SINC       0x00000080
#define SS7_INTR_SUERR      0x00000100
#define INTR_BUFF           0x00000002
#define INTR_EOM            0x00000004
#define INTR_MSG            0x00000008
#define INTR_IDLE           0x00000010
#define TX_ENABLED          0x01
#define RX_ENABLED          0x02
#define CFG_CH_PROTO_TRANS         0
#define CFG_CH_PROTO_SS7           1
#define CFG_CH_PROTO_HDLC_FCS16    2
#define CFG_CH_PROTO_HDLC_FCS32    3
#define CFG_CH_PROTO_ISLP_MODE     4
#define CFG_CH_FLAG_7E      0
#define CFG_CH_FLAG_FF      1
#define CFG_CH_FLAG_00      2
#define CFG_CH_DINV_NONE    0x00
#define CFG_CH_DINV_RX      0x01
#define CFG_CH_DINV_TX      0x02
#define RESET_DEV_TEMUX     1
#define RESET_DEV_TECT3     RESET_DEV_TEMUX
#define RESET_DEV_PLL       2
struct sbecom_chan_stats
;
struct sbecom_card_param
;
#define FRAMING_M13                0
#define FRAMING_CBP                1
#define CFG_CARD_LOOPBACK_NONE     0x00
#define CFG_CARD_LOOPBACK_DIAG     0x01
#define CFG_CARD_LOOPBACK_LINE     0x02
#define CFG_CARD_LOOPBACK_PAYLOAD  0x03
#define CFG_LIU_LOOPBACK_NONE      0x00
#define CFG_LIU_LOOPBACK_ANALOG    0x10
#define CFG_LIU_LOOPBACK_DIGITAL   0x11
#define CFG_LIU_LOOPBACK_REMOTE    0x12
#define CFG_CLK_INTERNAL           0x00
#define CFG_CLK_EXTERNAL           0x01
#define LOOPBACK_NONE              0
#define LOOPBACK_LIU_ANALOG        1
#define LOOPBACK_LIU_DIGITAL       2
#define LOOPBACK_FRAMER_DS3        3
#define LOOPBACK_FRAMER_T1         4
#define LOOPBACK_LIU_REMOTE        5
#define CFG_DS1_MODE_MASK          0x0f
#define CFG_DS1_MODE_T1            0x00
#define CFG_DS1_MODE_E1            0x01
#define CFG_DS1_MODE_CHANGE        0x80
#define CFG_DS3_UNCHAN_MASK        0x01
#define CFG_DS3_UNCHAN_OFF         0x00
#define CFG_DS3_UNCHAN_ON          0x01
struct sbecom_framer_param
;
#define CFG_FRAME_NONE             0
#define CFG_FRAME_SF               1
#define CFG_FRAME_ESF              2
#define CFG_FRAME_E1PLAIN          3
#define CFG_FRAME_E1CAS            4
#define CFG_FRAME_E1CRC            5
#define CFG_FRAME_E1CRC_CAS        6
#define CFG_FRAME_SF_AMI           7
#define CFG_FRAME_ESF_AMI          8
#define CFG_FRAME_E1PLAIN_AMI      9
#define CFG_FRAME_E1CAS_AMI       10
#define CFG_FRAME_E1CRC_AMI       11
#define CFG_FRAME_E1CRC_CAS_AMI   12
#define IS_FRAME_ANY_T1(field) \
(((field) == CFG_FRAME_NONE) || \
((field) == CFG_FRAME_SF)   || \
((field) == CFG_FRAME_ESF)  || \
((field) == CFG_FRAME_SF_AMI) || \
((field) == CFG_FRAME_ESF_AMI))
#define IS_FRAME_ANY_T1ESF(field) \
(((field) == CFG_FRAME_ESF) || \
((field) == CFG_FRAME_ESF_AMI))
#define IS_FRAME_ANY_E1(field) \
(((field) == CFG_FRAME_E1PLAIN) || \
((field) == CFG_FRAME_E1CAS)   || \
((field) == CFG_FRAME_E1CRC)   || \
((field) == CFG_FRAME_E1CRC_CAS) || \
((field) == CFG_FRAME_E1PLAIN_AMI) || \
((field) == CFG_FRAME_E1CAS_AMI) || \
((field) == CFG_FRAME_E1CRC_AMI) || \
((field) == CFG_FRAME_E1CRC_CAS_AMI))
#define IS_FRAME_ANY_AMI(field) \
(((field) == CFG_FRAME_SF_AMI) || \
((field) == CFG_FRAME_ESF_AMI) || \
((field) == CFG_FRAME_E1PLAIN_AMI) || \
((field) == CFG_FRAME_E1CAS_AMI) || \
((field) == CFG_FRAME_E1CRC_AMI) || \
((field) == CFG_FRAME_E1CRC_CAS_AMI))
#define CFG_FRMR_LOOPBACK_NONE     0
#define CFG_FRMR_LOOPBACK_DIAG     1
#define CFG_FRMR_LOOPBACK_LINE     2
#define CFG_FRMR_LOOPBACK_PAYLOAD  3
struct temux_card_stats
;
struct wancfg
;
typedef struct wancfg wcfg_t;
extern wcfg_t *wancfg_init (char *, char *);
extern int  wancfg_card_blink (wcfg_t *, int);
extern int  wancfg_ctl (wcfg_t *, int, void *, int, void *, int);
extern int  wancfg_del_card_stats (wcfg_t *);
extern int  wancfg_del_chan_stats (wcfg_t *, int);
extern int  wancfg_enable_ports (wcfg_t *, int);
extern int  wancfg_free (wcfg_t *);
extern int  wancfg_get_brdaddr (wcfg_t *, struct sbe_brd_addr *);
extern int  wancfg_get_brdinfo (wcfg_t *, struct sbe_brd_info *);
extern int  wancfg_get_card (wcfg_t *, struct sbecom_card_param *);
extern int  wancfg_get_card_chan_stats (wcfg_t *, struct sbecom_chan_stats *);
extern int  wancfg_get_card_sn (wcfg_t *);
extern int  wancfg_get_card_stats (wcfg_t *, struct temux_card_stats *);
extern int  wancfg_get_chan (wcfg_t *, int, struct sbecom_chan_param *);
extern int  wancfg_get_chan_stats (wcfg_t *, int, struct sbecom_chan_stats *);
extern int  wancfg_get_drvinfo (wcfg_t *, int, struct sbe_drv_info *);
extern int  wancfg_get_framer (wcfg_t *, int, struct sbecom_framer_param *);
extern int  wancfg_get_iid (wcfg_t *, int, struct sbe_iid_info *);
extern int  wancfg_get_sn (wcfg_t *, unsigned int *);
extern int  wancfg_read (wcfg_t *, int, struct sbecom_wrt_vec *);
extern int  wancfg_reset_device (wcfg_t *, int);
extern int  wancfg_set_card (wcfg_t *, struct sbecom_card_param *);
extern int  wancfg_set_chan (wcfg_t *, int, struct sbecom_chan_param *);
extern int  wancfg_set_framer (wcfg_t *, int, struct sbecom_framer_param *);
extern int  wancfg_set_loglevel (wcfg_t *, uint);
extern int  wancfg_write (wcfg_t *, int, struct sbecom_wrt_vec *);
extern int  wancfg_get_tsioc (wcfg_t *, struct wanc1t3_ts_hdr *, struct wanc1t3_ts_param *);
extern int  wancfg_set_tsioc (wcfg_t *, struct wanc1t3_ts_param *);
