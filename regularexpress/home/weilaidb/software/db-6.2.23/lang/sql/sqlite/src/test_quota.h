int sqlite3_quota_initialize(const char *zOrigVfsName, int makeDefault);
int sqlite3_quota_shutdown(void);
int sqlite3_quota_set(
const char *zPattern,
sqlite3_int64 iLimit,
void (*xCallback)(
const char *zFilename,
sqlite3_int64 *piLimit,
sqlite3_int64 iSize,
void *pArg
),
void *pArg,
void (*xDestroy)(void*)
);
int sqlite3_quota_file(const char *zFilename);
typedef struct quota_FILE quota_FILE;
quota_FILE *sqlite3_quota_fopen(const char *zFilename, const char *zMode);
size_t sqlite3_quota_fread(void*, size_t, size_t, quota_FILE*);
size_t sqlite3_quota_fwrite(const void*, size_t, size_t, quota_FILE*);
int sqlite3_quota_fflush(quota_FILE*, int hardSync);
int sqlite3_quota_fclose(quota_FILE*);
int sqlite3_quota_fseek(quota_FILE*, long, int);
void sqlite3_quota_rewind(quota_FILE*);
long sqlite3_quota_ftell(quota_FILE*);
int sqlite3_quota_ferror(quota_FILE*);
int sqlite3_quota_ftruncate(quota_FILE*, sqlite3_int64 newSize);
int sqlite3_quota_file_mtime(quota_FILE*, time_t *pTime);
sqlite3_int64 sqlite3_quota_file_size(quota_FILE*);
sqlite3_int64 sqlite3_quota_file_truesize(quota_FILE*);
long sqlite3_quota_file_available(quota_FILE*);
int sqlite3_quota_remove(const char *zFilename);
