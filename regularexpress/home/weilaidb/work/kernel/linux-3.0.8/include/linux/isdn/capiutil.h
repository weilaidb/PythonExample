#define __CAPIUTIL_H__
#define CAPIMSG_BASELEN		8
#define CAPIMSG_U8(m, off)	(m[off])
#define CAPIMSG_U16(m, off)	(m[off]|(m[(off)+1]<<8))
#define CAPIMSG_U32(m, off)	(m[off]|(m[(off)+1]<<8)|(m[(off)+2]<<16)|(m[(off)+3]<<24))
#define	CAPIMSG_LEN(m)		CAPIMSG_U16(m,0)
#define	CAPIMSG_APPID(m)	CAPIMSG_U16(m,2)
#define	CAPIMSG_COMMAND(m)	CAPIMSG_U8(m,4)
#define	CAPIMSG_SUBCOMMAND(m)	CAPIMSG_U8(m,5)
#define CAPIMSG_CMD(m)		(((m[4])<<8)|(m[5]))
#define	CAPIMSG_MSGID(m)	CAPIMSG_U16(m,6)
#define CAPIMSG_CONTROLLER(m)	(m[8] & 0x7f)
#define CAPIMSG_CONTROL(m)	CAPIMSG_U32(m, 8)
#define CAPIMSG_NCCI(m)		CAPIMSG_CONTROL(m)
#define CAPIMSG_DATALEN(m)	CAPIMSG_U16(m,16)
static inline void capimsg_setu8(void *m, int off, __u8 val)
static inline void capimsg_setu16(void *m, int off, __u16 val)
static inline void capimsg_setu32(void *m, int off, __u32 val)
#define	CAPIMSG_SETLEN(m, len)		capimsg_setu16(m, 0, len)
#define	CAPIMSG_SETAPPID(m, applid)	capimsg_setu16(m, 2, applid)
#define	CAPIMSG_SETCOMMAND(m,cmd)	capimsg_setu8(m, 4, cmd)
#define	CAPIMSG_SETSUBCOMMAND(m, cmd)	capimsg_setu8(m, 5, cmd)
#define	CAPIMSG_SETMSGID(m, msgid)	capimsg_setu16(m, 6, msgid)
#define	CAPIMSG_SETCONTROL(m, contr)	capimsg_setu32(m, 8, contr)
#define	CAPIMSG_SETDATALEN(m, len)	capimsg_setu16(m, 16, len)
typedef __u8 *_cstruct;
typedef enum  _cmstruct;
typedef struct  _cmsg;
unsigned capi_cmsg2message(_cmsg * cmsg, __u8 * msg);
unsigned capi_message2cmsg(_cmsg * cmsg, __u8 * msg);
unsigned capi_cmsg_header(_cmsg * cmsg, __u16 _ApplId,
__u8 _Command, __u8 _Subcommand,
__u16 _Messagenumber, __u32 _Controller);
char *capi_info2str(__u16 reason);
char *capi_cmd2str(__u8 cmd, __u8 subcmd);
typedef struct  _cdebbuf;
#define	CDEBUG_SIZE	1024
#define	CDEBUG_GSIZE	4096
void cdebbuf_free(_cdebbuf *cdb);
int cdebug_init(void);
void cdebug_exit(void);
_cdebbuf *capi_cmsg2str(_cmsg *cmsg);
_cdebbuf *capi_message2str(__u8 *msg);
static inline void capi_cmsg_answer(_cmsg * cmsg)
static inline void capi_fill_CONNECT_B3_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
_cstruct NCPI)
static inline void capi_fill_FACILITY_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u16 FacilitySelector,
_cstruct FacilityRequestParameter)
static inline void capi_fill_INFO_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
_cstruct CalledPartyNumber,
_cstruct BChannelinformation,
_cstruct Keypadfacility,
_cstruct Useruserdata,
_cstruct Facilitydataarray)
static inline void capi_fill_LISTEN_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u32 InfoMask,
__u32 CIPmask,
__u32 CIPmask2,
_cstruct CallingPartyNumber,
_cstruct CallingPartySubaddress)
static inline void capi_fill_ALERT_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
_cstruct BChannelinformation,
_cstruct Keypadfacility,
_cstruct Useruserdata,
_cstruct Facilitydataarray)
static inline void capi_fill_CONNECT_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u16 CIPValue,
_cstruct CalledPartyNumber,
_cstruct CallingPartyNumber,
_cstruct CalledPartySubaddress,
_cstruct CallingPartySubaddress,
__u16 B1protocol,
__u16 B2protocol,
__u16 B3protocol,
_cstruct B1configuration,
_cstruct B2configuration,
_cstruct B3configuration,
_cstruct BC,
_cstruct LLC,
_cstruct HLC,
_cstruct BChannelinformation,
_cstruct Keypadfacility,
_cstruct Useruserdata,
_cstruct Facilitydataarray)
static inline void capi_fill_DATA_B3_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u32 Data,
__u16 DataLength,
__u16 DataHandle,
__u16 Flags)
static inline void capi_fill_DISCONNECT_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
_cstruct BChannelinformation,
_cstruct Keypadfacility,
_cstruct Useruserdata,
_cstruct Facilitydataarray)
static inline void capi_fill_DISCONNECT_B3_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
_cstruct NCPI)
static inline void capi_fill_MANUFACTURER_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u32 ManuID,
__u32 Class,
__u32 Function,
_cstruct ManuData)
static inline void capi_fill_RESET_B3_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
_cstruct NCPI)
static inline void capi_fill_SELECT_B_PROTOCOL_REQ(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u16 B1protocol,
__u16 B2protocol,
__u16 B3protocol,
_cstruct B1configuration,
_cstruct B2configuration,
_cstruct B3configuration)
static inline void capi_fill_CONNECT_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u16 Reject,
__u16 B1protocol,
__u16 B2protocol,
__u16 B3protocol,
_cstruct B1configuration,
_cstruct B2configuration,
_cstruct B3configuration,
_cstruct ConnectedNumber,
_cstruct ConnectedSubaddress,
_cstruct LLC,
_cstruct BChannelinformation,
_cstruct Keypadfacility,
_cstruct Useruserdata,
_cstruct Facilitydataarray)
static inline void capi_fill_CONNECT_ACTIVE_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr)
static inline void capi_fill_CONNECT_B3_ACTIVE_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr)
static inline void capi_fill_CONNECT_B3_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u16 Reject,
_cstruct NCPI)
static inline void capi_fill_CONNECT_B3_T90_ACTIVE_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr)
static inline void capi_fill_DATA_B3_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u16 DataHandle)
static inline void capi_fill_DISCONNECT_B3_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr)
static inline void capi_fill_DISCONNECT_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr)
static inline void capi_fill_FACILITY_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u16 FacilitySelector)
static inline void capi_fill_INFO_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr)
static inline void capi_fill_MANUFACTURER_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr,
__u32 ManuID,
__u32 Class,
__u32 Function,
_cstruct ManuData)
static inline void capi_fill_RESET_B3_RESP(_cmsg * cmsg, __u16 ApplId, __u16 Messagenumber,
__u32 adr)
