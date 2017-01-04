#define __DIVA_EICON_TRACE_API__
#define DIVA_TRACE_LINE_TYPE_LEN 64
#define DIVA_TRACE_IE_LEN        64
#define DIVA_TRACE_FAX_PRMS_LEN  128
typedef struct _diva_trace_ie  diva_trace_ie_t;
typedef struct _diva_trace_modem_state  diva_trace_modem_state_t;
typedef struct _diva_trace_fax_state  diva_trace_fax_state_t;
typedef struct _diva_trace_interface_state  diva_trace_interface_state_t;
typedef struct _diva_incoming_call_statistics  diva_incoming_call_statistics_t;
typedef struct _diva_outgoing_call_statistics  diva_outgoing_call_statistics_t;
typedef struct _diva_modem_call_statistics  diva_modem_call_statistics_t;
typedef struct _diva_fax_call_statistics  diva_fax_call_statistics_t;
typedef struct _diva_prot_statistics  diva_prot_statistics_t;
typedef struct _diva_ifc_statistics  diva_ifc_statistics_t;
typedef struct _diva_trace_line_state  diva_trace_line_state_t;
#define DIVA_SUPER_TRACE_NOTIFY_LINE_CHANGE             ('l')
#define DIVA_SUPER_TRACE_NOTIFY_MODEM_CHANGE            ('m')
#define DIVA_SUPER_TRACE_NOTIFY_FAX_CHANGE              ('f')
#define DIVA_SUPER_TRACE_INTERFACE_CHANGE               ('i')
#define DIVA_SUPER_TRACE_NOTIFY_STAT_CHANGE             ('s')
#define DIVA_SUPER_TRACE_NOTIFY_MDM_STAT_CHANGE         ('M')
#define DIVA_SUPER_TRACE_NOTIFY_FAX_STAT_CHANGE         ('F')
struct _diva_strace_library_interface;
typedef void (*diva_trace_channel_state_change_proc_t)(void* user_context,
struct _diva_strace_library_interface* hLib,
int Adapter,
diva_trace_line_state_t* channel, int notify_subject);
typedef void (*diva_trace_channel_trace_proc_t)(void* user_context,
struct _diva_strace_library_interface* hLib,
int Adapter, void* xlog_buffer, int length);
typedef void (*diva_trace_error_proc_t)(void* user_context,
struct _diva_strace_library_interface* hLib,
int Adapter,
int error, const char* file, int line);
typedef struct _diva_trace_library_user_interface  diva_trace_library_user_interface_t;
typedef int   (*DivaSTraceLibraryStart_proc_t)(void* hLib);
typedef int   (*DivaSTraceLibraryFinit_proc_t)(void* hLib);
typedef int   (*DivaSTraceMessageInput_proc_t)(void* hLib);
typedef void*	(*DivaSTraceGetHandle_proc_t)(void* hLib);
typedef int (*DivaSTraceSetAudioTap_proc_t)(void* hLib, int Channel, int on);
typedef int (*DivaSTraceSetBChannel_proc_t)(void* hLib, int Channel, int on);
typedef int (*DivaSTraceSetDChannel_proc_t)(void* hLib, int on);
typedef int (*DivaSTraceGetOutgoingCallStatistics_proc_t)(void* hLib);
typedef int (*DivaSTraceGetIncomingCallStatistics_proc_t)(void* hLib);
typedef int (*DivaSTraceGetModemStatistics_proc_t)(void* hLib);
typedef int (*DivaSTraceGetFaxStatistics_proc_t)(void* hLib);
typedef int (*DivaSTraceGetBLayer1Statistics_proc_t)(void* hLib);
typedef int (*DivaSTraceGetBLayer2Statistics_proc_t)(void* hLib);
typedef int (*DivaSTraceGetDLayer1Statistics_proc_t)(void* hLib);
typedef int (*DivaSTraceGetDLayer2Statistics_proc_t)(void* hLib);
typedef int (*DivaSTraceClearCall_proc_t)(void* hLib, int Channel);
typedef struct _diva_strace_library_interface  diva_strace_library_interface_t;
diva_strace_library_interface_t* DivaSTraceLibraryCreateInstance (int Adapter,
const diva_trace_library_user_interface_t* user_proc,
byte* pmem);
dword DivaSTraceGetMemotyRequirement (int channels);
#define DIVA_MAX_ADAPTERS  64
#define DIVA_MAX_LINES     32
