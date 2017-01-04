#if defined(DIVA_ISTREAM)
#if !defined USE_EXTENDED_DEBUGS
#define dprintf
int diva_istream_write (void* context,
int   Id,
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
void diva_xdi_provide_istream_info (ADAPTER* a,
diva_xdi_stream_interface_t* pi)
int diva_istream_write (void* context,
int   Id,
void* data,
int length,
int final,
byte usr1,
byte usr2)
int diva_istream_read (void* context,
int Id,
void* data,
int max_length,
int* final,
byte* usr1,
byte* usr2)
void pr_stream (ADAPTER * a)
