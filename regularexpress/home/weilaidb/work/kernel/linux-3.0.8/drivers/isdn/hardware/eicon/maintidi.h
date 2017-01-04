#define __DIVA_EICON_TRACE_IDI_IFC_H__
void* SuperTraceOpenAdapter   (int AdapterNumber);
int   SuperTraceCloseAdapter  (void* AdapterHandle);
int   SuperTraceWrite         (void* AdapterHandle,
const void* data, int length);
int   SuperTraceReadRequest   (void* AdapterHandle,const char* name,byte* data);
int   SuperTraceGetNumberOfChannels (void* AdapterHandle);
int   SuperTraceASSIGN        (void* AdapterHandle, byte* data);
int   SuperTraceREMOVE        (void* AdapterHandle);
int   SuperTraceTraceOnRequest(void* hAdapter, const char* name, byte* data);
int   SuperTraceWriteVar (void* AdapterHandle,
byte* data,
const char* name,
void* var,
byte type,
byte var_length);
int   SuperTraceExecuteRequest (void* AdapterHandle,
const char* name,
byte* data);
typedef struct _diva_strace_path2action  diva_strace_path2action_t;
#define DIVA_MAX_MANAGEMENT_TRANSFER_SIZE 4096
typedef struct _diva_strace_context  diva_strace_context_t;
typedef struct _diva_man_var_header  diva_man_var_header_t;
