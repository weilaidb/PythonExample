extern void diva_mnt_internal_dprintf (dword drv_id, dword type, char* p, ...);
#define MODEM_PARSE_ENTRIES  16
#define FAX_PARSE_ENTRIES    12
#define LINE_PARSE_ENTRIES   15
#define STAT_PARSE_ENTRIES   70
static int DivaSTraceLibraryStart (void* hLib);
static int DivaSTraceLibraryStop  (void* hLib);
static int SuperTraceLibraryFinit (void* hLib);
static void*	SuperTraceGetHandle (void* hLib);
static int SuperTraceMessageInput (void* hLib);
static int SuperTraceSetAudioTap  (void* hLib, int Channel, int on);
static int SuperTraceSetBChannel  (void* hLib, int Channel, int on);
static int SuperTraceSetDChannel  (void* hLib, int on);
static int SuperTraceSetInfo      (void* hLib, int on);
static int SuperTraceClearCall (void* hLib, int Channel);
static int SuperTraceGetOutgoingCallStatistics (void* hLib);
static int SuperTraceGetIncomingCallStatistics (void* hLib);
static int SuperTraceGetModemStatistics (void* hLib);
static int SuperTraceGetFaxStatistics (void* hLib);
static int SuperTraceGetBLayer1Statistics (void* hLib);
static int SuperTraceGetBLayer2Statistics (void* hLib);
static int SuperTraceGetDLayer1Statistics (void* hLib);
static int SuperTraceGetDLayer2Statistics (void* hLib);
static int ScheduleNextTraceRequest (diva_strace_context_t* pLib);
static int process_idi_event (diva_strace_context_t* pLib,
diva_man_var_header_t* pVar);
static int process_idi_info  (diva_strace_context_t* pLib,
diva_man_var_header_t* pVar);
static int diva_modem_event (diva_strace_context_t* pLib, int Channel);
static int diva_fax_event   (diva_strace_context_t* pLib, int Channel);
static int diva_line_event (diva_strace_context_t* pLib, int Channel);
static int diva_modem_info (diva_strace_context_t* pLib,
int Channel,
diva_man_var_header_t* pVar);
static int diva_fax_info   (diva_strace_context_t* pLib,
int Channel,
diva_man_var_header_t* pVar);
static int diva_line_info  (diva_strace_context_t* pLib,
int Channel,
diva_man_var_header_t* pVar);
static int diva_ifc_statistics (diva_strace_context_t* pLib,
diva_man_var_header_t* pVar);
static diva_man_var_header_t* get_next_var (diva_man_var_header_t* pVar);
static diva_man_var_header_t* find_var (diva_man_var_header_t* pVar,
const char* name);
static int diva_strace_read_int  (diva_man_var_header_t* pVar, int* var);
static int diva_strace_read_uint (diva_man_var_header_t* pVar, dword* var);
static int diva_strace_read_asz  (diva_man_var_header_t* pVar, char* var);
static int diva_strace_read_asc  (diva_man_var_header_t* pVar, char* var);
static int  diva_strace_read_ie  (diva_man_var_header_t* pVar,
diva_trace_ie_t* var);
static void diva_create_parse_table (diva_strace_context_t* pLib);
static void diva_trace_error (diva_strace_context_t* pLib,
int error, const char* file, int line);
static void diva_trace_notify_user (diva_strace_context_t* pLib,
int Channel,
int notify_subject);
static int diva_trace_read_variable (diva_man_var_header_t* pVar,
void* variable);
diva_strace_library_interface_t* DivaSTraceLibraryCreateInstance (int Adapter,
const diva_trace_library_user_interface_t* user_proc,
byte* pmem)
static int DivaSTraceLibraryStart (void* hLib)
static int DivaSTraceLibraryStop  (void* hLib)
static int SuperTraceLibraryFinit (void* hLib)
static void*	SuperTraceGetHandle (void* hLib)
static int SuperTraceMessageInput (void* hLib)
static int ScheduleNextTraceRequest (diva_strace_context_t* pLib)
static int process_idi_event (diva_strace_context_t* pLib,
diva_man_var_header_t* pVar)
static int diva_line_event (diva_strace_context_t* pLib, int Channel)
static int diva_modem_event (diva_strace_context_t* pLib, int Channel)
static int diva_fax_event (diva_strace_context_t* pLib, int Channel)
static int process_idi_info  (diva_strace_context_t* pLib,
diva_man_var_header_t* pVar)
static int diva_modem_info (diva_strace_context_t* pLib,
int Channel,
diva_man_var_header_t* pVar)
static int diva_fax_info (diva_strace_context_t* pLib,
int Channel,
diva_man_var_header_t* pVar)
static int diva_line_info  (diva_strace_context_t* pLib,
int Channel,
diva_man_var_header_t* pVar)
static diva_man_var_header_t* get_next_var (diva_man_var_header_t* pVar)
static diva_man_var_header_t* find_var (diva_man_var_header_t* pVar,
const char* name)
static void diva_create_line_parse_table  (diva_strace_context_t* pLib,
int Channel)
static void diva_create_fax_parse_table (diva_strace_context_t* pLib,
int Channel)
static void diva_create_modem_parse_table (diva_strace_context_t* pLib,
int Channel)
static void diva_create_parse_table (diva_strace_context_t* pLib)
static void diva_trace_error (diva_strace_context_t* pLib,
int error, const char* file, int line)
static void diva_trace_notify_user (diva_strace_context_t* pLib,
int Channel,
int notify_subject)
static int diva_trace_read_variable (diva_man_var_header_t* pVar,
void* variable)
static int diva_strace_read_int  (diva_man_var_header_t* pVar, int* var)
static int diva_strace_read_uint (diva_man_var_header_t* pVar, dword* var)
static int diva_strace_read_asz  (diva_man_var_header_t* pVar, char* var)
static int diva_strace_read_asc  (diva_man_var_header_t* pVar, char* var)
static int  diva_strace_read_ie  (diva_man_var_header_t* pVar,
diva_trace_ie_t* var)
static int SuperTraceSetAudioTap  (void* hLib, int Channel, int on)
static int SuperTraceSetBChannel  (void* hLib, int Channel, int on)
static int SuperTraceSetDChannel  (void* hLib, int on)
static int SuperTraceSetInfo (void* hLib, int on)
static int SuperTraceClearCall (void* hLib, int Channel)
static int diva_ifc_statistics (diva_strace_context_t* pLib,
diva_man_var_header_t* pVar)
static int SuperTraceGetOutgoingCallStatistics (void* hLib)
static int SuperTraceGetIncomingCallStatistics (void* hLib)
static int SuperTraceGetModemStatistics (void* hLib)
static int SuperTraceGetFaxStatistics (void* hLib)
static int SuperTraceGetBLayer1Statistics (void* hLib)
static int SuperTraceGetBLayer2Statistics (void* hLib)
static int SuperTraceGetDLayer1Statistics (void* hLib)
static int SuperTraceGetDLayer2Statistics (void* hLib)
dword DivaSTraceGetMemotyRequirement (int channels)
