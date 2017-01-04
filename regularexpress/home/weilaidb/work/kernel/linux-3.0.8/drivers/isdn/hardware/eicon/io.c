#define MIPS_SCOM
extern ADAPTER * adapter[MAX_ADAPTER];
extern PISDN_ADAPTER IoAdapters[MAX_ADAPTER];
void request (PISDN_ADAPTER, ENTITY *);
static void pcm_req (PISDN_ADAPTER, ENTITY *);
#define ReqFunc(N) \
static void Request##N(ENTITY *e) \
ReqFunc(0)
ReqFunc(1)
ReqFunc(2)
ReqFunc(3)
ReqFunc(4)
ReqFunc(5)
ReqFunc(6)
ReqFunc(7)
ReqFunc(8)
ReqFunc(9)
ReqFunc(10)
ReqFunc(11)
ReqFunc(12)
ReqFunc(13)
ReqFunc(14)
ReqFunc(15)
IDI_CALL Requests[MAX_ADAPTER] =
;
static byte extended_xdi_features[DIVA_XDI_EXTENDED_FEATURES_MAX_SZ+1] = ;
void
dump_xlog_buffer (PISDN_ADAPTER IoAdapter, Xdesc *xlogDesc)
#if defined(XDI_USE_XLOG)
static char *(ExceptionCauseTable[]) =
;
void
dump_trap_frame (PISDN_ADAPTER IoAdapter, byte __iomem *exceptionFrame)
void request(PISDN_ADAPTER IoAdapter, ENTITY * e)
void DIDpcRoutine (struct _diva_os_soft_isr* psoft_isr, void* Context)
static void
pcm_req (PISDN_ADAPTER IoAdapter, ENTITY *e)
byte mem_in (ADAPTER *a, void *addr)
word mem_inw (ADAPTER *a, void *addr)
void mem_in_dw (ADAPTER *a, void *addr, dword* data, int dwords)
void mem_in_buffer (ADAPTER *a, void *addr, void *buffer, word length)
void mem_look_ahead (ADAPTER *a, PBUFFER *RBuffer, ENTITY *e)
void mem_out (ADAPTER *a, void *addr, byte data)
void mem_outw (ADAPTER *a, void *addr, word data)
void mem_out_dw (ADAPTER *a, void *addr, const dword* data, int dwords)
void mem_out_buffer (ADAPTER *a, void *addr, void *buffer, word length)
void mem_inc (ADAPTER *a, void *addr)
byte io_in(ADAPTER * a, void * adr)
word io_inw(ADAPTER * a, void * adr)
void io_in_buffer(ADAPTER * a, void * adr, void * buffer, word len)
void io_look_ahead(ADAPTER * a, PBUFFER * RBuffer, ENTITY * e)
void io_out(ADAPTER * a, void * adr, byte data)
void io_outw(ADAPTER * a, void * adr, word data)
void io_out_buffer(ADAPTER * a, void * adr, void * buffer, word len)
void io_inc(ADAPTER * a, void * adr)
void free_entity(ADAPTER * a, byte e_no)
void assign_queue(ADAPTER * a, byte e_no, word ref)
byte get_assign(ADAPTER * a, word ref)
void req_queue(ADAPTER * a, byte e_no)
byte look_req(ADAPTER * a)
void next_req(ADAPTER * a)
ENTITY * entity_ptr(ADAPTER * a, byte e_no)
void * PTR_X(ADAPTER * a, ENTITY * e)
void * PTR_R(ADAPTER * a, ENTITY * e)
void * PTR_P(ADAPTER * a, ENTITY * e, void * P)
void CALLBACK(ADAPTER * a, ENTITY * e)
