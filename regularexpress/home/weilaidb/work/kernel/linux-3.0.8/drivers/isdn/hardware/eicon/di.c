#if !defined USE_EXTENDED_DEBUGS
#define dprintf
#define PR_RAM  ((struct pr_ram *)0)
#define RAM ((struct dual *)0)
void pr_out(ADAPTER * a);
byte pr_dpc(ADAPTER * a);
static byte pr_ready(ADAPTER * a);
static byte isdn_rc(ADAPTER *, byte, byte, byte, word, dword, dword);
static byte isdn_ind(ADAPTER *, byte, byte, byte, PBUFFER *, byte, word);
#if defined(XDI_USE_XLOG)
#define XDI_A_NR(_x_) ((byte)(((ISDN_ADAPTER *)(_x_->io))->ANum))
static void xdi_xlog (byte *msg, word code, int length);
static byte xdi_xlog_sec = 0;
#define XDI_A_NR(_x_) ((byte)0)
static void xdi_xlog_rc_event (byte Adapter,
byte Id, byte Ch, byte Rc, byte cb, byte type);
static void xdi_xlog_request (byte Adapter, byte Id,
byte Ch, byte Req, byte type);
static void xdi_xlog_ind (byte Adapter,
byte Id,
byte Ch,
byte Ind,
byte rnr_valid,
byte rnr,
byte type);
void pr_out(ADAPTER * a)
static byte pr_ready(ADAPTER * a)
byte pr_dpc(ADAPTER * a)
byte scom_test_int(ADAPTER * a)
void scom_clear_int(ADAPTER * a)
static byte isdn_rc(ADAPTER *a,
byte Rc,
byte Id,
byte Ch,
word Ref,
dword extended_info_type,
dword extended_info)
static byte isdn_ind(ADAPTER *a,
byte Ind,
byte Id,
byte Ch,
PBUFFER *RBuffer,
byte MInd,
word MLength)
#if defined(XDI_USE_XLOG)
static void xdi_xlog (byte *msg, word code, int length)
static void xdi_xlog_rc_event (byte Adapter,
byte Id, byte Ch, byte Rc, byte cb, byte type)
static void xdi_xlog_request (byte Adapter, byte Id,
byte Ch, byte Req, byte type)
static void xdi_xlog_ind (byte Adapter,
byte Id,
byte Ch,
byte Ind,
byte rnr_valid,
byte rnr,
byte type)
