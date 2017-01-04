#if defined(_WIN32) && !defined(__BORLANDC__)
#  define LSEEK _lseeki64
#if defined(_LARGEFILE64_SOURCE) && _LFS64_LARGEFILE-0
#  define LSEEK lseek64
#  define LSEEK lseek
local void gz_reset OF((gz_statep));
local gzFile gz_open OF((const void *, int, const char *));
#if defined UNDER_CE
char ZLIB_INTERNAL *gz_strwinerror (error)
DWORD error;
local void gz_reset(state)
gz_statep state;
local gzFile gz_open(path, fd, mode)
const void *path;
int fd;
const char *mode;
gzFile ZEXPORT gzopen(path, mode)
const char *path;
const char *mode;
gzFile ZEXPORT gzopen64(path, mode)
const char *path;
const char *mode;
gzFile ZEXPORT gzdopen(fd, mode)
int fd;
const char *mode;
gzFile ZEXPORT gzopen_w(path, mode)
const wchar_t *path;
const char *mode;
int ZEXPORT gzbuffer(file, size)
gzFile file;
unsigned size;
int ZEXPORT gzrewind(file)
gzFile file;
z_off64_t ZEXPORT gzseek64(file, offset, whence)
gzFile file;
z_off64_t offset;
int whence;
z_off_t ZEXPORT gzseek(file, offset, whence)
gzFile file;
z_off_t offset;
int whence;
z_off64_t ZEXPORT gztell64(file)
gzFile file;
z_off_t ZEXPORT gztell(file)
gzFile file;
z_off64_t ZEXPORT gzoffset64(file)
gzFile file;
z_off_t ZEXPORT gzoffset(file)
gzFile file;
int ZEXPORT gzeof(file)
gzFile file;
const char * ZEXPORT gzerror(file, errnum)
gzFile file;
int *errnum;
void ZEXPORT gzclearerr(file)
gzFile file;
void ZLIB_INTERNAL gz_error(state, err, msg)
gz_statep state;
int err;
const char *msg;
unsigned ZLIB_INTERNAL gz_intmax()
