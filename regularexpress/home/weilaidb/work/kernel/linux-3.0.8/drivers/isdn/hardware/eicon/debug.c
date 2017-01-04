#define DBG_MAGIC (0x47114711L)
static void DI_register (void *arg);
static void DI_deregister (pDbgHandle hDbg);
static void DI_format (int do_lock, word id, int type, char *format, va_list argument_list);
static void DI_format_locked   (word id, int type, char *format, va_list argument_list);
static void DI_format_old (word id, char *format, va_list ap)
static void DiProcessEventLog (unsigned short id, unsigned long msgID, va_list ap)
static void single_p (byte * P, word * PLength, byte Id);
static void diva_maint_xdi_cb (ENTITY* e);
static word SuperTraceCreateReadReq (byte* P, const char* path);
static int diva_mnt_cmp_nmbr (const char* nmbr);
static void diva_free_dma_descriptor (IDI_CALL request, int nr);
static int diva_get_dma_descriptor (IDI_CALL request, dword *dma_magic);
void diva_mnt_internal_dprintf (dword drv_id, dword type, char* p, ...);
static dword MaxDumpSize = 256 ;
static dword MaxXlogSize = 2 + 128 ;
static char  TraceFilter[DIVA_MAX_SELECTIVE_FILTER_LENGTH+1];
static int TraceFilterIdent   = -1;
static int TraceFilterChannel = -1;
typedef struct _diva_maint_client  diva_maint_client_t;
static diva_maint_client_t clients[MAX_DESCRIPTORS];
static void diva_change_management_debug_mask (diva_maint_client_t* pC, dword old_mask);
static void diva_maint_error (void* user_context,
diva_strace_library_interface_t* hLib,
int Adapter,
int error,
const char* file,
int line);
static void diva_maint_state_change_notify (void* user_context,
diva_strace_library_interface_t* hLib,
int Adapter,
diva_trace_line_state_t* channel,
int notify_subject);
static void diva_maint_trace_notify (void* user_context,
diva_strace_library_interface_t* hLib,
int Adapter,
void* xlog_buffer,
int length);
typedef struct MSG_QUEUE  MSG_QUEUE;
typedef struct MSG_HEAD  MSG_HEAD;
#define queueCompleteMsg(p) dowhile(0)
#define queueCount(q)	((q)->Count)
#define MSG_NEED(size) \
( (sizeof(MSG_HEAD) + size + sizeof(dword) - 1) & ~(sizeof(dword) - 1) )
static void queueInit (MSG_QUEUE *Q, byte *Buffer, dword sizeBuffer)
static byte *queueAllocMsg (MSG_QUEUE *Q, word size)
static void queueFreeMsg (MSG_QUEUE *Q)
static byte *queuePeekMsg (MSG_QUEUE *Q, word *size)
static MSG_QUEUE*          dbg_queue;
static byte*               dbg_base;
static int                 external_dbg_queue;
static diva_os_spin_lock_t dbg_q_lock;
static diva_os_spin_lock_t dbg_adapter_lock;
static int                 dbg_q_busy;
static volatile dword      dbg_sequence;
static dword               start_sec;
static dword               start_usec;
int diva_maint_init (byte* base, unsigned long length, int do_init)
void* diva_maint_finit (void)
dword diva_dbg_q_length (void)
diva_dbg_entry_head_t* diva_maint_get_message (word* size,
diva_os_spin_lock_magic_t* old_irql)
void diva_maint_ack_message (int do_release,
diva_os_spin_lock_magic_t* old_irql)
void diva_maint_prtComp (char *format, ...)
static void DI_register (void *arg)
static void DI_deregister (pDbgHandle hDbg)
static void DI_format_locked (unsigned short id,
int type,
char *format,
va_list argument_list)
static void DI_format (int do_lock,
unsigned short id,
int type,
char *format,
va_list ap)
int diva_get_driver_info (dword id, byte* data, int data_length)
int diva_get_driver_dbg_mask (dword id, byte* data)
int diva_set_driver_dbg_mask (dword id, dword mask)
static int diva_get_idi_adapter_info (IDI_CALL request, dword* serial, dword* logical)
void diva_mnt_add_xdi_adapter (const DESCRIPTOR* d)
void diva_mnt_remove_xdi_adapter (const DESCRIPTOR* d)
void* SuperTraceOpenAdapter   (int AdapterNumber)
int SuperTraceCloseAdapter  (void* AdapterHandle)
int SuperTraceReadRequest (void* AdapterHandle, const char* name, byte* data)
int SuperTraceGetNumberOfChannels (void* AdapterHandle)
int SuperTraceASSIGN (void* AdapterHandle, byte* data)
int SuperTraceREMOVE (void* AdapterHandle)
int SuperTraceTraceOnRequest(void* hAdapter, const char* name, byte* data)
int SuperTraceWriteVar (void* AdapterHandle,
byte* data,
const char* name,
void* var,
byte type,
byte var_length)
int SuperTraceExecuteRequest (void* AdapterHandle,
const char* name,
byte* data)
static word SuperTraceCreateReadReq (byte* P, const char* path)
static void single_p (byte * P, word * PLength, byte Id)
static void diva_maint_xdi_cb (ENTITY* e)
static void diva_maint_error (void* user_context,
diva_strace_library_interface_t* hLib,
int Adapter,
int error,
const char* file,
int line)
static void print_ie (diva_trace_ie_t* ie, char* buffer, int length)
static void diva_maint_state_change_notify (void* user_context,
diva_strace_library_interface_t* hLib,
int Adapter,
diva_trace_line_state_t* channel,
int notify_subject)
static void diva_maint_trace_notify (void* user_context,
diva_strace_library_interface_t* hLib,
int Adapter,
void* xlog_buffer,
int length)
static void diva_change_management_debug_mask (diva_maint_client_t* pC, dword old_mask)
void diva_mnt_internal_dprintf (dword drv_id, dword type, char* fmt, ...)
int diva_mnt_shutdown_xdi_adapters (void)
int diva_set_trace_filter (int filter_length, const char* filter)
int diva_get_trace_filter (int max_length, char* filter)
static int diva_dbg_cmp_key (const char* ref, const char* key)
static int diva_mnt_cmp_nmbr (const char* nmbr)
static int diva_get_dma_descriptor (IDI_CALL request, dword *dma_magic)
static void diva_free_dma_descriptor (IDI_CALL request, int nr)
