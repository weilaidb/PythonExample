#define __DIVA_XDI_COMMON_IO_H_INC__
#define DI_MAX_LINKS    MAX_ADAPTER
#define ISDN_MAX_NUM_LEN 60
typedef struct  ADAPTER_LIST_ENTRY, *PADAPTER_LIST_ENTRY ;
#define MAX_MAPPED_ENTRIES 8
typedef struct  ADAPTER_MEMORY ;
#define DIVA_XDI_CAPI_CFG_1_DYNAMIC_L1_ON      0x01
#define DIVA_XDI_CAPI_CFG_1_GROUP_POPTIMIZATION_ON 0x02
typedef struct _diva_xdi_capi_cfg  diva_xdi_capi_cfg_t;
struct _ISDN_ADAPTER ;
struct e_info_s ;
struct s_load ;
#define PR_RAM  ((struct pr_ram *)0)
#define RAM ((struct dual *)0)
extern void * PTR_P(ADAPTER * a, ENTITY * e, void * P);
extern void * PTR_X(ADAPTER * a, ENTITY * e);
extern void * PTR_R(ADAPTER * a, ENTITY * e);
extern void CALLBACK(ADAPTER * a, ENTITY * e);
extern void set_ram(void * * adr_ptr);
byte io_in(ADAPTER * a, void * adr);
word io_inw(ADAPTER * a, void * adr);
void io_in_buffer(ADAPTER * a, void * adr, void * P, word length);
void io_look_ahead(ADAPTER * a, PBUFFER * RBuffer, ENTITY * e);
void io_out(ADAPTER * a, void * adr, byte data);
void io_outw(ADAPTER * a, void * adr, word data);
void io_out_buffer(ADAPTER * a, void * adr, void * P, word length);
void io_inc(ADAPTER * a, void * adr);
void bri_in_buffer (PISDN_ADAPTER IoAdapter, dword Pos,
void *Buf, dword Len);
int bri_out_buffer (PISDN_ADAPTER IoAdapter, dword Pos,
void *Buf, dword Len, int Verify);
byte mem_in(ADAPTER * a, void * adr);
word mem_inw(ADAPTER * a, void * adr);
void mem_in_buffer(ADAPTER * a, void * adr, void * P, word length);
void mem_look_ahead(ADAPTER * a, PBUFFER * RBuffer, ENTITY * e);
void mem_out(ADAPTER * a, void * adr, byte data);
void mem_outw(ADAPTER * a, void * adr, word data);
void mem_out_buffer(ADAPTER * a, void * adr, void * P, word length);
void mem_inc(ADAPTER * a, void * adr);
void mem_in_dw (ADAPTER *a, void *addr, dword* data, int dwords);
void mem_out_dw (ADAPTER *a, void *addr, const dword* data, int dwords);
extern IDI_CALL Requests[MAX_ADAPTER] ;
extern void     DIDpcRoutine (struct _diva_os_soft_isr* psoft_isr,
void* context);
extern void     request (PISDN_ADAPTER, ENTITY *) ;
typedef struct  Xdesc ;
extern void     dump_trap_frame  (PISDN_ADAPTER IoAdapter, byte __iomem *exception) ;
extern void     dump_xlog_buffer (PISDN_ADAPTER IoAdapter, Xdesc *xlogDesc) ;
