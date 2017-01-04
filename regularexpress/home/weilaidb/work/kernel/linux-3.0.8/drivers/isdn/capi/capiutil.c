char *capi_info2str(u16 reason)
char *capi_info2str(u16 reason)
typedef struct  _cdef;
#define _CBYTE	       1
#define _CWORD	       2
#define _CDWORD        3
#define _CSTRUCT       4
#define _CMSTRUCT      5
#define _CEND	       6
static _cdef cdef[] =
;
static unsigned char *cpars[] =
;
#define byteTLcpy(x,y)        *(u8 *)(x)=*(u8 *)(y);
#define wordTLcpy(x,y)        *(u16 *)(x)=*(u16 *)(y);
#define dwordTLcpy(x,y)       memcpy(x,y,4);
#define structTLcpy(x,y,l)    memcpy (x,y,l)
#define structTLcpyovl(x,y,l) memmove (x,y,l)
#define byteTRcpy(x,y)        *(u8 *)(y)=*(u8 *)(x);
#define wordTRcpy(x,y)        *(u16 *)(y)=*(u16 *)(x);
#define dwordTRcpy(x,y)       memcpy(y,x,4);
#define structTRcpy(x,y,l)    memcpy (y,x,l)
#define structTRcpyovl(x,y,l) memmove (y,x,l)
static unsigned command_2_index(unsigned c, unsigned sc)
#define TYP (cdef[cmsg->par[cmsg->p]].typ)
#define OFF (((u8 *)cmsg)+cdef[cmsg->par[cmsg->p]].off)
static void jumpcstruct(_cmsg * cmsg)
static void pars_2_message(_cmsg * cmsg)
unsigned capi_cmsg2message(_cmsg * cmsg, u8 * msg)
static void message_2_pars(_cmsg * cmsg)
unsigned capi_message2cmsg(_cmsg * cmsg, u8 * msg)
unsigned capi_cmsg_header(_cmsg * cmsg, u16 _ApplId,
u8 _Command, u8 _Subcommand,
u16 _Messagenumber, u32 _Controller)
static char *mnames[] =
;
char *capi_cmd2str(u8 cmd, u8 subcmd)
static char *pnames[] =
;
static _cdebbuf *bufprint(_cdebbuf *cdb, char *fmt,...)
static _cdebbuf *printstructlen(_cdebbuf *cdb, u8 * m, unsigned len)
static _cdebbuf *printstruct(_cdebbuf *cdb, u8 * m)
#define NAME (pnames[cmsg->par[cmsg->p]])
static _cdebbuf *protocol_message_2_pars(_cdebbuf *cdb, _cmsg *cmsg, int level)
static _cdebbuf *g_debbuf;
static u_long g_debbuf_lock;
static _cmsg *g_cmsg;
static _cdebbuf *cdebbuf_alloc(void)
void cdebbuf_free(_cdebbuf *cdb)
_cdebbuf *capi_message2str(u8 * msg)
_cdebbuf *capi_cmsg2str(_cmsg * cmsg)
int __init cdebug_init(void)
void __exit cdebug_exit(void)
static _cdebbuf g_debbuf = ;
_cdebbuf *capi_message2str(u8 * msg)
_cdebbuf *capi_cmsg2str(_cmsg * cmsg)
void cdebbuf_free(_cdebbuf *cdb)
int __init cdebug_init(void)
void __exit cdebug_exit(void)
EXPORT_SYMBOL(cdebbuf_free);
EXPORT_SYMBOL(capi_cmsg2message);
EXPORT_SYMBOL(capi_message2cmsg);
EXPORT_SYMBOL(capi_cmsg_header);
EXPORT_SYMBOL(capi_cmd2str);
EXPORT_SYMBOL(capi_cmsg2str);
EXPORT_SYMBOL(capi_message2str);
EXPORT_SYMBOL(capi_info2str);
