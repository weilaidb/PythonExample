#define __DIVA_XDI_CARD_CONFIG_HELPERS_INC__
dword diva_get_protocol_file_features  (byte* File,
int offset,
char *IdStringBuffer,
dword IdBufferSize);
void diva_configure_protocol (PISDN_ADAPTER IoAdapter);
void *xdiLoadFile (char *FileName, dword *FileLength, unsigned long MaxLoadSize) ;
void *xdiLoadArchive (PISDN_ADAPTER IoAdapter, dword *FileLength, unsigned long MaxLoadSize) ;
void xdiFreeFile (void* handle);
