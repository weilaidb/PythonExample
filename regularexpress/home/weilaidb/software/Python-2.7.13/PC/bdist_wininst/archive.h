struct eof_cdir ;
struct cdir ;
struct fhdr ;
struct meta_data_hdr ;
typedef struct tagSCHEME  SCHEME;
typedef int (*NOTIFYPROC)(int code, LPSTR text, ...);
extern BOOL
extract_file(char *dst, char *src, int method, int comp_size,
int uncomp_size, NOTIFYPROC notify);
extern BOOL
unzip_archive(SCHEME *scheme, char *dirname, char *data,
DWORD size,  NOTIFYPROC notify);
extern char *
map_new_file(DWORD flags, char *filename, char
*pathname_part, int size,
WORD wFatDate, WORD wFatTime,
NOTIFYPROC callback);
extern BOOL
ensure_directory (char *pathname, char *new_part,
NOTIFYPROC callback);
#define DIR_CREATED 1
#define CAN_OVERWRITE 2
#define FILE_CREATED 3
#define ZLIB_ERROR 4
#define SYSTEM_ERROR 5
#define NUM_FILES 6
#define FILE_OVERWRITTEN 7
