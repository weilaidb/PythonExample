#define	_LINUX_CDROM_H
#define EDRIVE_CANT_DO_THIS  EOPNOTSUPP
#define CDROMPAUSE		0x5301
#define CDROMRESUME		0x5302
#define CDROMPLAYMSF		0x5303
#define CDROMPLAYTRKIND		0x5304
#define CDROMREADTOCHDR		0x5305
#define CDROMREADTOCENTRY	0x5306
#define CDROMSTOP		0x5307
#define CDROMSTART		0x5308
#define CDROMEJECT		0x5309
#define CDROMVOLCTRL		0x530a
#define CDROMSUBCHNL		0x530b
#define CDROMREADMODE2		0x530c
#define CDROMREADMODE1		0x530d
#define CDROMREADAUDIO		0x530e
#define CDROMEJECT_SW		0x530f
#define CDROMMULTISESSION	0x5310
#define CDROM_GET_MCN		0x5311
#define CDROM_GET_UPC		CDROM_GET_MCN
#define CDROMRESET		0x5312
#define CDROMVOLREAD		0x5313
#define CDROMREADRAW		0x5314
#define CDROMREADCOOKED		0x5315
#define CDROMSEEK		0x5316
#define CDROMPLAYBLK		0x5317
#define CDROMREADALL		0x5318
#define CDROMGETSPINDOWN        0x531d
#define CDROMSETSPINDOWN        0x531e
#define CDROMCLOSETRAY		0x5319
#define CDROM_SET_OPTIONS	0x5320
#define CDROM_CLEAR_OPTIONS	0x5321
#define CDROM_SELECT_SPEED	0x5322
#define CDROM_SELECT_DISC	0x5323
#define CDROM_MEDIA_CHANGED	0x5325
#define CDROM_DRIVE_STATUS	0x5326
#define CDROM_DISC_STATUS	0x5327
#define CDROM_CHANGER_NSLOTS    0x5328
#define CDROM_LOCKDOOR		0x5329
#define CDROM_DEBUG		0x5330
#define CDROM_GET_CAPABILITY	0x5331
#define CDROMAUDIOBUFSIZ        0x5382
#define DVD_READ_STRUCT		0x5390
#define DVD_WRITE_STRUCT	0x5391
#define DVD_AUTH		0x5392
#define CDROM_SEND_PACKET	0x5393
#define CDROM_NEXT_WRITABLE	0x5394
#define CDROM_LAST_WRITTEN	0x5395
struct cdrom_msf0
;
union cdrom_addr
;
struct cdrom_msf
;
struct cdrom_ti
;
struct cdrom_tochdr
;
struct cdrom_volctrl
;
struct cdrom_subchnl
;
struct cdrom_tocentry
;
struct cdrom_read
;
struct cdrom_read_audio
;
struct cdrom_multisession
;
struct cdrom_mcn
;
struct cdrom_blk
;
#define CDROM_PACKET_SIZE	12
#define CGC_DATA_UNKNOWN	0
#define CGC_DATA_WRITE		1
#define CGC_DATA_READ		2
#define CGC_DATA_NONE		3
struct cdrom_generic_command
;
#define CD_MINS              74
#define CD_SECS              60
#define CD_FRAMES            75
#define CD_SYNC_SIZE         12
#define CD_MSF_OFFSET       150
#define CD_CHUNK_SIZE        24
#define CD_NUM_OF_CHUNKS     98
#define CD_FRAMESIZE_SUB     96
#define CD_HEAD_SIZE          4
#define CD_SUBHEAD_SIZE       8
#define CD_EDC_SIZE           4
#define CD_ZERO_SIZE          8
#define CD_ECC_SIZE         276
#define CD_FRAMESIZE       2048
#define CD_FRAMESIZE_RAW   2352
#define CD_FRAMESIZE_RAWER 2646
#define CD_FRAMESIZE_RAW1 (CD_FRAMESIZE_RAW-CD_SYNC_SIZE)
#define CD_FRAMESIZE_RAW0 (CD_FRAMESIZE_RAW-CD_SYNC_SIZE-CD_HEAD_SIZE)
#define CD_XA_HEAD        (CD_HEAD_SIZE+CD_SUBHEAD_SIZE)
#define CD_XA_TAIL        (CD_EDC_SIZE+CD_ECC_SIZE)
#define CD_XA_SYNC_HEAD   (CD_SYNC_SIZE+CD_XA_HEAD)
#define	CDROM_LBA 0x01
#define	CDROM_MSF 0x02
#define	CDROM_DATA_TRACK	0x04
#define	CDROM_LEADOUT		0xAA
#define	CDROM_AUDIO_INVALID	0x00
#define	CDROM_AUDIO_PLAY	0x11
#define	CDROM_AUDIO_PAUSED	0x12
#define	CDROM_AUDIO_COMPLETED	0x13
#define	CDROM_AUDIO_ERROR	0x14
#define	CDROM_AUDIO_NO_STATUS	0x15
#define CDC_CLOSE_TRAY		0x1
#define CDC_OPEN_TRAY		0x2
#define CDC_LOCK		0x4
#define CDC_SELECT_SPEED 	0x8
#define CDC_SELECT_DISC		0x10
#define CDC_MULTI_SESSION 	0x20
#define CDC_MCN			0x40
#define CDC_MEDIA_CHANGED 	0x80
#define CDC_PLAY_AUDIO		0x100
#define CDC_RESET               0x200
#define CDC_DRIVE_STATUS        0x800
#define CDC_GENERIC_PACKET	0x1000
#define CDC_CD_R		0x2000
#define CDC_CD_RW		0x4000
#define CDC_DVD			0x8000
#define CDC_DVD_R		0x10000
#define CDC_DVD_RAM		0x20000
#define CDC_MO_DRIVE		0x40000
#define CDC_MRW			0x80000
#define CDC_MRW_W		0x100000
#define CDC_RAM			0x200000
#define CDS_NO_INFO		0
#define CDS_NO_DISC		1
#define CDS_TRAY_OPEN		2
#define CDS_DRIVE_NOT_READY	3
#define CDS_DISC_OK		4
#define CDS_AUDIO		100
#define CDS_DATA_1		101
#define CDS_DATA_2		102
#define CDS_XA_2_1		103
#define CDS_XA_2_2		104
#define CDS_MIXED		105
#define CDO_AUTO_CLOSE		0x1
#define CDO_AUTO_EJECT		0x2
#define CDO_USE_FFLAGS		0x4
#define CDO_LOCK		0x8
#define CDO_CHECK_TYPE		0x10
#define CDSL_NONE       	(INT_MAX-1)
#define CDSL_CURRENT    	INT_MAX
#define CD_PART_MAX		64
#define CD_PART_MASK		(CD_PART_MAX - 1)
#define GPCMD_BLANK			    0xa1
#define GPCMD_CLOSE_TRACK		    0x5b
#define GPCMD_FLUSH_CACHE		    0x35
#define GPCMD_FORMAT_UNIT		    0x04
#define GPCMD_GET_CONFIGURATION		    0x46
#define GPCMD_GET_EVENT_STATUS_NOTIFICATION 0x4a
#define GPCMD_GET_PERFORMANCE		    0xac
#define GPCMD_INQUIRY			    0x12
#define GPCMD_LOAD_UNLOAD		    0xa6
#define GPCMD_MECHANISM_STATUS		    0xbd
#define GPCMD_MODE_SELECT_10		    0x55
#define GPCMD_MODE_SENSE_10		    0x5a
#define GPCMD_PAUSE_RESUME		    0x4b
#define GPCMD_PLAY_AUDIO_10		    0x45
#define GPCMD_PLAY_AUDIO_MSF		    0x47
#define GPCMD_PLAY_AUDIO_TI		    0x48
#define GPCMD_PLAY_CD			    0xbc
#define GPCMD_PREVENT_ALLOW_MEDIUM_REMOVAL  0x1e
#define GPCMD_READ_10			    0x28
#define GPCMD_READ_12			    0xa8
#define GPCMD_READ_BUFFER		    0x3c
#define GPCMD_READ_BUFFER_CAPACITY	    0x5c
#define GPCMD_READ_CDVD_CAPACITY	    0x25
#define GPCMD_READ_CD			    0xbe
#define GPCMD_READ_CD_MSF		    0xb9
#define GPCMD_READ_DISC_INFO		    0x51
#define GPCMD_READ_DVD_STRUCTURE	    0xad
#define GPCMD_READ_FORMAT_CAPACITIES	    0x23
#define GPCMD_READ_HEADER		    0x44
#define GPCMD_READ_TRACK_RZONE_INFO	    0x52
#define GPCMD_READ_SUBCHANNEL		    0x42
#define GPCMD_READ_TOC_PMA_ATIP		    0x43
#define GPCMD_REPAIR_RZONE_TRACK	    0x58
#define GPCMD_REPORT_KEY		    0xa4
#define GPCMD_REQUEST_SENSE		    0x03
#define GPCMD_RESERVE_RZONE_TRACK	    0x53
#define GPCMD_SEND_CUE_SHEET		    0x5d
#define GPCMD_SCAN			    0xba
#define GPCMD_SEEK			    0x2b
#define GPCMD_SEND_DVD_STRUCTURE	    0xbf
#define GPCMD_SEND_EVENT		    0xa2
#define GPCMD_SEND_KEY			    0xa3
#define GPCMD_SEND_OPC			    0x54
#define GPCMD_SET_READ_AHEAD		    0xa7
#define GPCMD_SET_STREAMING		    0xb6
#define GPCMD_START_STOP_UNIT		    0x1b
#define GPCMD_STOP_PLAY_SCAN		    0x4e
#define GPCMD_TEST_UNIT_READY		    0x00
#define GPCMD_VERIFY_10			    0x2f
#define GPCMD_WRITE_10			    0x2a
#define GPCMD_WRITE_12			    0xaa
#define GPCMD_WRITE_AND_VERIFY_10	    0x2e
#define GPCMD_WRITE_BUFFER		    0x3b
#define GPCMD_SET_SPEED			    0xbb
#define GPCMD_PLAYAUDIO_TI		    0x48
#define GPCMD_GET_MEDIA_STATUS		    0xda
#define GPMODE_VENDOR_PAGE		0x00
#define GPMODE_R_W_ERROR_PAGE		0x01
#define GPMODE_WRITE_PARMS_PAGE		0x05
#define GPMODE_WCACHING_PAGE		0x08
#define GPMODE_AUDIO_CTL_PAGE		0x0e
#define GPMODE_POWER_PAGE		0x1a
#define GPMODE_FAULT_FAIL_PAGE		0x1c
#define GPMODE_TO_PROTECT_PAGE		0x1d
#define GPMODE_CAPABILITIES_PAGE	0x2a
#define GPMODE_ALL_PAGES		0x3f
#define GPMODE_CDROM_PAGE		0x0d
#define DVD_STRUCT_PHYSICAL	0x00
#define DVD_STRUCT_COPYRIGHT	0x01
#define DVD_STRUCT_DISCKEY	0x02
#define DVD_STRUCT_BCA		0x03
#define DVD_STRUCT_MANUFACT	0x04
struct dvd_layer ;
#define DVD_LAYERS	4
struct dvd_physical ;
struct dvd_copyright ;
struct dvd_disckey ;
struct dvd_bca ;
struct dvd_manufact ;
typedef union  dvd_struct;
#define DVD_LU_SEND_AGID	0
#define DVD_HOST_SEND_CHALLENGE	1
#define DVD_LU_SEND_KEY1	2
#define DVD_LU_SEND_CHALLENGE	3
#define DVD_HOST_SEND_KEY2	4
#define DVD_AUTH_ESTABLISHED	5
#define DVD_AUTH_FAILURE	6
#define DVD_LU_SEND_TITLE_KEY	7
#define DVD_LU_SEND_ASF		8
#define DVD_INVALIDATE_AGID	9
#define DVD_LU_SEND_RPC_STATE	10
#define DVD_HOST_SEND_RPC_STATE	11
typedef __u8 dvd_key[5];
typedef __u8 dvd_challenge[10];
struct dvd_lu_send_agid ;
struct dvd_host_send_challenge ;
struct dvd_send_key ;
struct dvd_lu_send_challenge ;
#define DVD_CPM_NO_COPYRIGHT	0
#define DVD_CPM_COPYRIGHTED	1
#define DVD_CP_SEC_NONE		0
#define DVD_CP_SEC_EXIST	1
#define DVD_CGMS_UNRESTRICTED	0
#define DVD_CGMS_SINGLE		2
#define DVD_CGMS_RESTRICTED	3
struct dvd_lu_send_title_key ;
struct dvd_lu_send_asf ;
struct dvd_host_send_rpcstate ;
struct dvd_lu_send_rpcstate ;
typedef union  dvd_authinfo;
struct request_sense ;
#define CDF_RWRT	0x0020
#define CDF_HWDM	0x0024
#define CDF_MRW 	0x0028
#define CDM_MRW_NOTMRW			0
#define CDM_MRW_BGFORMAT_INACTIVE	1
#define CDM_MRW_BGFORMAT_ACTIVE		2
#define CDM_MRW_BGFORMAT_COMPLETE	3
#define MRW_LBA_DMA			0
#define MRW_LBA_GAA			1
#define MRW_MODE_PC_PRE1		0x2c
#define MRW_MODE_PC			0x03
struct mrw_feature_desc ;
struct rwrt_feature_desc ;
typedef struct  disc_information;
typedef struct  track_information;
struct feature_header ;
struct mode_page_header ;
struct packet_command
;
#define CDDA_OLD		0
#define CDDA_BPC_SINGLE		1
#define CDDA_BPC_FULL		2
struct cdrom_device_info ;
struct cdrom_device_ops ;
extern int cdrom_open(struct cdrom_device_info *cdi, struct block_device *bdev,
fmode_t mode);
extern void cdrom_release(struct cdrom_device_info *cdi, fmode_t mode);
extern int cdrom_ioctl(struct cdrom_device_info *cdi, struct block_device *bdev,
fmode_t mode, unsigned int cmd, unsigned long arg);
extern unsigned int cdrom_check_events(struct cdrom_device_info *cdi,
unsigned int clearing);
extern int cdrom_media_changed(struct cdrom_device_info *);
extern int register_cdrom(struct cdrom_device_info *cdi);
extern void unregister_cdrom(struct cdrom_device_info *cdi);
typedef struct  tracktype;
extern int cdrom_get_last_written(struct cdrom_device_info *cdi, long *last_written);
extern int cdrom_number_of_slots(struct cdrom_device_info *cdi);
extern int cdrom_mode_select(struct cdrom_device_info *cdi,
struct packet_command *cgc);
extern int cdrom_mode_sense(struct cdrom_device_info *cdi,
struct packet_command *cgc,
int page_code, int page_control);
extern void init_cdrom_command(struct packet_command *cgc,
void *buffer, int len, int type);
#define CDROM_MAX_SLOTS	256
struct cdrom_mechstat_header ;
struct cdrom_slot ;
struct cdrom_changer_info ;
typedef enum  mechtype_t;
typedef struct  __attribute__((packed)) write_param_page;
struct modesel_head
;
typedef struct  rpc_state_t;
struct event_header ;
struct media_event_desc ;
extern int cdrom_get_media_event(struct cdrom_device_info *cdi, struct media_event_desc *med);
static inline void lba_to_msf(int lba, u8 *m, u8 *s, u8 *f)
static inline int msf_to_lba(u8 m, u8 s, u8 f)
