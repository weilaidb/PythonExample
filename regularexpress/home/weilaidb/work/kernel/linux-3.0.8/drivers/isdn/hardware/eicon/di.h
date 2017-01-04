#define XMOREC 0x1f
#define XMOREF 0x20
#define XBUSY  0x40
#define RMORE  0x80
#define DIVA_MISC_FLAGS_REMOVE_PENDING    0x01
#define DIVA_MISC_FLAGS_NO_RC_CANCELLING  0x02
#define DIVA_MISC_FLAGS_RX_DMA            0x04
typedef struct adapter_s ADAPTER;
struct adapter_s ;
void pr_out(ADAPTER * a);
byte pr_dpc(ADAPTER * a);
byte scom_test_int(ADAPTER * a);
void scom_clear_int(ADAPTER * a);
void free_entity(ADAPTER * a, byte e_no);
void assign_queue(ADAPTER * a, byte e_no, word ref);
byte get_assign(ADAPTER * a, word ref);
void req_queue(ADAPTER * a, byte e_no);
byte look_req(ADAPTER * a);
void next_req(ADAPTER * a);
ENTITY  * entity_ptr(ADAPTER * a, byte e_no);
#if defined(DIVA_ISTREAM)
struct _diva_xdi_stream_interface;
void diva_xdi_provide_istream_info (ADAPTER* a,
struct _diva_xdi_stream_interface* pI);
void pr_stream (ADAPTER * a);
int diva_istream_write (void* context,
int Id,
void* data,
int length,
int final,
byte usr1,
byte usr2);
int diva_istream_read (void* context,
int Id,
void* data,
int max_length,
int* final,
byte* usr1,
byte* usr2);
#if defined(DIVA_IDI_RX_DMA)
