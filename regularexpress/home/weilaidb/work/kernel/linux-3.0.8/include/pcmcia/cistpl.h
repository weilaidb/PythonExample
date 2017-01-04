#define _LINUX_CISTPL_H
typedef unsigned char cisdata_t;
#define CISTPL_NULL		0x00
#define CISTPL_DEVICE		0x01
#define CISTPL_LONGLINK_CB	0x02
#define CISTPL_INDIRECT		0x03
#define CISTPL_CONFIG_CB	0x04
#define CISTPL_CFTABLE_ENTRY_CB	0x05
#define CISTPL_LONGLINK_MFC	0x06
#define CISTPL_BAR		0x07
#define CISTPL_PWR_MGMNT	0x08
#define CISTPL_EXTDEVICE	0x09
#define CISTPL_CHECKSUM		0x10
#define CISTPL_LONGLINK_A	0x11
#define CISTPL_LONGLINK_C	0x12
#define CISTPL_LINKTARGET	0x13
#define CISTPL_NO_LINK		0x14
#define CISTPL_VERS_1		0x15
#define CISTPL_ALTSTR		0x16
#define CISTPL_DEVICE_A		0x17
#define CISTPL_JEDEC_C		0x18
#define CISTPL_JEDEC_A		0x19
#define CISTPL_CONFIG		0x1a
#define CISTPL_CFTABLE_ENTRY	0x1b
#define CISTPL_DEVICE_OC	0x1c
#define CISTPL_DEVICE_OA	0x1d
#define CISTPL_DEVICE_GEO	0x1e
#define CISTPL_DEVICE_GEO_A	0x1f
#define CISTPL_MANFID		0x20
#define CISTPL_FUNCID		0x21
#define CISTPL_FUNCE		0x22
#define CISTPL_SWIL		0x23
#define CISTPL_END		0xff
#define CISTPL_VERS_2		0x40
#define CISTPL_FORMAT		0x41
#define CISTPL_GEOMETRY		0x42
#define CISTPL_BYTEORDER	0x43
#define CISTPL_DATE		0x44
#define CISTPL_BATTERY		0x45
#define CISTPL_FORMAT_A		0x47
#define CISTPL_ORG		0x46
#define CISTPL_SPCL		0x90
typedef struct cistpl_longlink_t  cistpl_longlink_t;
typedef struct cistpl_checksum_t  cistpl_checksum_t;
#define CISTPL_MAX_FUNCTIONS	8
#define CISTPL_MFC_ATTR		0x00
#define CISTPL_MFC_COMMON	0x01
typedef struct cistpl_longlink_mfc_t  cistpl_longlink_mfc_t;
#define CISTPL_MAX_ALTSTR_STRINGS	4
typedef struct cistpl_altstr_t  cistpl_altstr_t;
#define CISTPL_DTYPE_NULL	0x00
#define CISTPL_DTYPE_ROM	0x01
#define CISTPL_DTYPE_OTPROM	0x02
#define CISTPL_DTYPE_EPROM	0x03
#define CISTPL_DTYPE_EEPROM	0x04
#define CISTPL_DTYPE_FLASH	0x05
#define CISTPL_DTYPE_SRAM	0x06
#define CISTPL_DTYPE_DRAM	0x07
#define CISTPL_DTYPE_FUNCSPEC	0x0d
#define CISTPL_DTYPE_EXTEND	0x0e
#define CISTPL_MAX_DEVICES	4
typedef struct cistpl_device_t  cistpl_device_t;
#define CISTPL_DEVICE_MWAIT	0x01
#define CISTPL_DEVICE_3VCC	0x02
typedef struct cistpl_device_o_t  cistpl_device_o_t;
#define CISTPL_VERS_1_MAX_PROD_STRINGS	4
typedef struct cistpl_vers_1_t  cistpl_vers_1_t;
typedef struct cistpl_jedec_t  cistpl_jedec_t;
typedef struct cistpl_manfid_t  cistpl_manfid_t;
#define CISTPL_FUNCID_MULTI	0x00
#define CISTPL_FUNCID_MEMORY	0x01
#define CISTPL_FUNCID_SERIAL	0x02
#define CISTPL_FUNCID_PARALLEL	0x03
#define CISTPL_FUNCID_FIXED	0x04
#define CISTPL_FUNCID_VIDEO	0x05
#define CISTPL_FUNCID_NETWORK	0x06
#define CISTPL_FUNCID_AIMS	0x07
#define CISTPL_FUNCID_SCSI	0x08
#define CISTPL_SYSINIT_POST	0x01
#define CISTPL_SYSINIT_ROM	0x02
typedef struct cistpl_funcid_t  cistpl_funcid_t;
typedef struct cistpl_funce_t  cistpl_funce_t;
#define CISTPL_FUNCE_SERIAL_IF		0x00
#define CISTPL_FUNCE_SERIAL_CAP		0x01
#define CISTPL_FUNCE_SERIAL_SERV_DATA	0x02
#define CISTPL_FUNCE_SERIAL_SERV_FAX	0x03
#define CISTPL_FUNCE_SERIAL_SERV_VOICE	0x04
#define CISTPL_FUNCE_SERIAL_CAP_DATA	0x05
#define CISTPL_FUNCE_SERIAL_CAP_FAX	0x06
#define CISTPL_FUNCE_SERIAL_CAP_VOICE	0x07
#define CISTPL_FUNCE_SERIAL_IF_DATA	0x08
#define CISTPL_FUNCE_SERIAL_IF_FAX	0x09
#define CISTPL_FUNCE_SERIAL_IF_VOICE	0x0a
#define CISTPL_SERIAL_UART_8250		0x00
#define CISTPL_SERIAL_UART_16450	0x01
#define CISTPL_SERIAL_UART_16550	0x02
#define CISTPL_SERIAL_UART_8251		0x03
#define CISTPL_SERIAL_UART_8530		0x04
#define CISTPL_SERIAL_UART_85230	0x05
#define CISTPL_SERIAL_UART_SPACE	0x01
#define CISTPL_SERIAL_UART_MARK		0x02
#define CISTPL_SERIAL_UART_ODD		0x04
#define CISTPL_SERIAL_UART_EVEN		0x08
#define CISTPL_SERIAL_UART_5BIT		0x01
#define CISTPL_SERIAL_UART_6BIT		0x02
#define CISTPL_SERIAL_UART_7BIT		0x04
#define CISTPL_SERIAL_UART_8BIT		0x08
#define CISTPL_SERIAL_UART_1STOP	0x10
#define CISTPL_SERIAL_UART_MSTOP	0x20
#define CISTPL_SERIAL_UART_2STOP	0x40
typedef struct cistpl_serial_t  cistpl_serial_t;
typedef struct cistpl_modem_cap_t  cistpl_modem_cap_t;
#define CISTPL_SERIAL_MOD_103		0x01
#define CISTPL_SERIAL_MOD_V21		0x02
#define CISTPL_SERIAL_MOD_V23		0x04
#define CISTPL_SERIAL_MOD_V22		0x08
#define CISTPL_SERIAL_MOD_212A		0x10
#define CISTPL_SERIAL_MOD_V22BIS	0x20
#define CISTPL_SERIAL_MOD_V26		0x40
#define CISTPL_SERIAL_MOD_V26BIS	0x80
#define CISTPL_SERIAL_MOD_V27BIS	0x01
#define CISTPL_SERIAL_MOD_V29		0x02
#define CISTPL_SERIAL_MOD_V32		0x04
#define CISTPL_SERIAL_MOD_V32BIS	0x08
#define CISTPL_SERIAL_MOD_V34		0x10
#define CISTPL_SERIAL_ERR_MNP2_4	0x01
#define CISTPL_SERIAL_ERR_V42_LAPM	0x02
#define CISTPL_SERIAL_CMPR_V42BIS	0x01
#define CISTPL_SERIAL_CMPR_MNP5		0x02
#define CISTPL_SERIAL_CMD_AT1		0x01
#define CISTPL_SERIAL_CMD_AT2		0x02
#define CISTPL_SERIAL_CMD_AT3		0x04
#define CISTPL_SERIAL_CMD_MNP_AT	0x08
#define CISTPL_SERIAL_CMD_V25BIS	0x10
#define CISTPL_SERIAL_CMD_V25A		0x20
#define CISTPL_SERIAL_CMD_DMCL		0x40
typedef struct cistpl_data_serv_t  cistpl_data_serv_t;
typedef struct cistpl_fax_serv_t  cistpl_fax_serv_t;
typedef struct cistpl_voice_serv_t  cistpl_voice_serv_t;
#define CISTPL_FUNCE_LAN_TECH		0x01
#define CISTPL_FUNCE_LAN_SPEED		0x02
#define CISTPL_FUNCE_LAN_MEDIA		0x03
#define CISTPL_FUNCE_LAN_NODE_ID	0x04
#define CISTPL_FUNCE_LAN_CONNECTOR	0x05
#define CISTPL_LAN_TECH_ARCNET		0x01
#define CISTPL_LAN_TECH_ETHERNET	0x02
#define CISTPL_LAN_TECH_TOKENRING	0x03
#define CISTPL_LAN_TECH_LOCALTALK	0x04
#define CISTPL_LAN_TECH_FDDI		0x05
#define CISTPL_LAN_TECH_ATM		0x06
#define CISTPL_LAN_TECH_WIRELESS	0x07
typedef struct cistpl_lan_tech_t  cistpl_lan_tech_t;
typedef struct cistpl_lan_speed_t  cistpl_lan_speed_t;
#define CISTPL_LAN_MEDIA_UTP		0x01
#define CISTPL_LAN_MEDIA_STP		0x02
#define CISTPL_LAN_MEDIA_THIN_COAX	0x03
#define CISTPL_LAN_MEDIA_THICK_COAX	0x04
#define CISTPL_LAN_MEDIA_FIBER		0x05
#define CISTPL_LAN_MEDIA_900MHZ		0x06
#define CISTPL_LAN_MEDIA_2GHZ		0x07
#define CISTPL_LAN_MEDIA_5GHZ		0x08
#define CISTPL_LAN_MEDIA_DIFF_IR	0x09
#define CISTPL_LAN_MEDIA_PTP_IR		0x0a
typedef struct cistpl_lan_media_t  cistpl_lan_media_t;
typedef struct cistpl_lan_node_id_t  cistpl_lan_node_id_t;
typedef struct cistpl_lan_connector_t  cistpl_lan_connector_t;
#define CISTPL_IDE_INTERFACE		0x01
typedef struct cistpl_ide_interface_t  cistpl_ide_interface_t;
#define CISTPL_IDE_SILICON		0x04
#define CISTPL_IDE_UNIQUE		0x08
#define CISTPL_IDE_DUAL			0x10
#define CISTPL_IDE_HAS_SLEEP		0x01
#define CISTPL_IDE_HAS_STANDBY		0x02
#define CISTPL_IDE_HAS_IDLE		0x04
#define CISTPL_IDE_LOW_POWER		0x08
#define CISTPL_IDE_REG_INHIBIT		0x10
#define CISTPL_IDE_HAS_INDEX		0x20
#define CISTPL_IDE_IOIS16		0x40
typedef struct cistpl_ide_feature_t  cistpl_ide_feature_t;
#define CISTPL_FUNCE_IDE_IFACE		0x01
#define CISTPL_FUNCE_IDE_MASTER		0x02
#define CISTPL_FUNCE_IDE_SLAVE		0x03
#define CISTPL_BAR_SPACE	0x07
#define CISTPL_BAR_SPACE_IO	0x10
#define CISTPL_BAR_PREFETCH	0x20
#define CISTPL_BAR_CACHEABLE	0x40
#define CISTPL_BAR_1MEG_MAP	0x80
typedef struct cistpl_bar_t  cistpl_bar_t;
typedef struct cistpl_config_t  cistpl_config_t;
#define CISTPL_POWER_VNOM	0
#define CISTPL_POWER_VMIN	1
#define CISTPL_POWER_VMAX	2
#define CISTPL_POWER_ISTATIC	3
#define CISTPL_POWER_IAVG	4
#define CISTPL_POWER_IPEAK	5
#define CISTPL_POWER_IDOWN	6
#define CISTPL_POWER_HIGHZ_OK	0x01
#define CISTPL_POWER_HIGHZ_REQ	0x02
typedef struct cistpl_power_t  cistpl_power_t;
typedef struct cistpl_timing_t  cistpl_timing_t;
#define CISTPL_IO_LINES_MASK	0x1f
#define CISTPL_IO_8BIT		0x20
#define CISTPL_IO_16BIT		0x40
#define CISTPL_IO_RANGE		0x80
#define CISTPL_IO_MAX_WIN	16
typedef struct cistpl_io_t  cistpl_io_t;
typedef struct cistpl_irq_t  cistpl_irq_t;
#define CISTPL_MEM_MAX_WIN	8
typedef struct cistpl_mem_t  cistpl_mem_t;
#define CISTPL_CFTABLE_DEFAULT		0x0001
#define CISTPL_CFTABLE_BVDS		0x0002
#define CISTPL_CFTABLE_WP		0x0004
#define CISTPL_CFTABLE_RDYBSY		0x0008
#define CISTPL_CFTABLE_MWAIT		0x0010
#define CISTPL_CFTABLE_AUDIO		0x0800
#define CISTPL_CFTABLE_READONLY		0x1000
#define CISTPL_CFTABLE_PWRDOWN		0x2000
typedef struct cistpl_cftable_entry_t  cistpl_cftable_entry_t;
#define CISTPL_CFTABLE_MASTER		0x000100
#define CISTPL_CFTABLE_INVALIDATE	0x000200
#define CISTPL_CFTABLE_VGA_PALETTE	0x000400
#define CISTPL_CFTABLE_PARITY		0x000800
#define CISTPL_CFTABLE_WAIT		0x001000
#define CISTPL_CFTABLE_SERR		0x002000
#define CISTPL_CFTABLE_FAST_BACK	0x004000
#define CISTPL_CFTABLE_BINARY_AUDIO	0x010000
#define CISTPL_CFTABLE_PWM_AUDIO	0x020000
typedef struct cistpl_cftable_entry_cb_t  cistpl_cftable_entry_cb_t;
typedef struct cistpl_device_geo_t  cistpl_device_geo_t;
typedef struct cistpl_vers_2_t  cistpl_vers_2_t;
typedef struct cistpl_org_t  cistpl_org_t;
#define CISTPL_ORG_FS		0x00
#define CISTPL_ORG_APPSPEC	0x01
#define CISTPL_ORG_XIP		0x02
typedef struct cistpl_format_t  cistpl_format_t;
#define CISTPL_FORMAT_DISK	0x00
#define CISTPL_FORMAT_MEM	0x01
#define CISTPL_EDC_NONE		0x00
#define CISTPL_EDC_CKSUM	0x01
#define CISTPL_EDC_CRC		0x02
#define CISTPL_EDC_PCC		0x03
typedef union cisparse_t  cisparse_t;
typedef struct tuple_t  tuple_t;
#define RETURN_FIRST_TUPLE	0xff
#define TUPLE_RETURN_LINK	0x01
#define TUPLE_RETURN_COMMON	0x02
#define CISTPL_MAX_CIS_SIZE	0x200
