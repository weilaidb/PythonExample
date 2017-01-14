#  include <string.h>
#  include <stdlib.h>
#  include <sys/types.h>
#  include <sys/mman.h>
#  include <sys/stat.h>
#if defined(MSDOS) || defined(OS2) || defined(WIN32) || defined(__CYGWIN__)
#  include <fcntl.h>
#  include <io.h>
#  ifdef UNDER_CE
#    include <stdlib.h>
#  endif
#  define SET_BINARY_MODE(file) setmode(fileno(file), O_BINARY)
#  define SET_BINARY_MODE(file)
#  define snprintf _snprintf
#  define unlink delete
#  define GZ_SUFFIX
#  define unlink remove
#  define GZ_SUFFIX
#  define fileno(file) file->__file
#if defined(__MWERKS__) && __dest_os != __be_os && __dest_os != __win32_os
#  include <unix.h>
#if !defined(Z_HAVE_UNISTD_H) && !defined(_LARGEFILE64_SOURCE)
extern int unlink OF((const char *));
#if defined(UNDER_CE)
#  include <windows.h>
#  define perror(s) pwinerror(s)
static char *strwinerror (error)
DWORD error;
static void pwinerror (s)
const char *s;
#  define GZ_SUFFIX
#define SUFFIX_LEN (sizeof(GZ_SUFFIX)-1)
#define BUFLEN      16384
#define MAX_NAME_LEN 1024
#  define local static
#  define local
#if defined(Z_HAVE_UNISTD_H) || defined(Z_LARGE)
#  include <unistd.h>
void *myalloc OF((void *, unsigned, unsigned));
void myfree OF((void *, void *));
void *myalloc(q, n, m)
void *q;
unsigned n, m;
void myfree(q, p)
void *q, *p;
typedef struct gzFile_s  *gzFile;
gzFile gzopen OF((const char *, const char *));
gzFile gzdopen OF((int, const char *));
gzFile gz_open OF((const char *, int, const char *));
gzFile gzopen(path, mode)
const char *path;
const char *mode;
gzFile gzdopen(fd, mode)
int fd;
const char *mode;
gzFile gz_open(path, fd, mode)
const char *path;
int fd;
const char *mode;
int gzwrite OF((gzFile, const void *, unsigned));
int gzwrite(gz, buf, len)
gzFile gz;
const void *buf;
unsigned len;
int gzread OF((gzFile, void *, unsigned));
int gzread(gz, buf, len)
gzFile gz;
void *buf;
unsigned len;
int gzclose OF((gzFile));
int gzclose(gz)
gzFile gz;
const char *gzerror OF((gzFile, int *));
const char *gzerror(gz, err)
gzFile gz;
int *err;
char *prog;
void error            OF((const char *msg));
void gz_compress      OF((FILE   *in, gzFile out));
int  gz_compress_mmap OF((FILE   *in, gzFile out));
void gz_uncompress    OF((gzFile in, FILE   *out));
void file_compress    OF((char  *file, char *mode));
void file_uncompress  OF((char  *file));
int  main             OF((int argc, char *argv[]));
void error(msg)
const char *msg;
void gz_compress(in, out)
FILE   *in;
gzFile out;
int gz_compress_mmap(in, out)
FILE   *in;
gzFile out;
void gz_uncompress(in, out)
gzFile in;
FILE   *out;
void file_compress(file, mode)
char  *file;
char  *mode;
void file_uncompress(file)
char  *file;
int main(argc, argv)
int argc;
char *argv[];
