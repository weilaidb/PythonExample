#define _UNISTD_
#define	_MODE_T_
typedef unsigned short _mode_t;
typedef _mode_t	mode_t;
#define _SSIZE_T_
typedef long _ssize_t;
#define	_OFF_T_
typedef long _off_t;
typedef _off_t	off_t;
typedef _ssize_t ssize_t;
typedef signed char int8_t;
typedef unsigned char   uint8_t;
typedef short  int16_t;
typedef unsigned short  uint16_t;
typedef int  int32_t;
typedef unsigned   uint32_t;
typedef long long  int64_t;
typedef unsigned long long   uint64_t;
typedef long long  intmax_t;
typedef unsigned long long uintmax_t;
typedef int64_t off64_t;
#define INTMAX_MIN  _I64_MIN
#define INTMAX_MAX  _I64_MAX
#define UINTMAX_MAX _UI64_MAX
#define UINT32_MAX 0xffffffff
#define STDIN_FILENO  0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#define	F_OK	0
#define	X_OK	0
#define	W_OK	2
#define	R_OK	4
#define	_S_IFIFO	0x1000
#define	_S_IFCHR	0x2000
#define	_S_IFBLK	0x3000
#define	_S_IFDIR	0x4000
#define	_S_IFREG	0x8000
#define	_S_IFMT		0xF000
#define	_S_IXUSR	_S_IEXEC
#define	_S_IWUSR	_S_IWRITE
#define	_S_IRUSR	_S_IREAD
#define	_S_ISDIR(m)	(((m) & _S_IFMT) == _S_IFDIR)
#define	S_IFIFO		_S_IFIFO
#define	S_IFCHR		_S_IFCHR
#define	S_IFBLK		_S_IFBLK
#define	S_IFDIR		_S_IFDIR
#define	S_IFREG		_S_IFREG
#define	S_IFMT		_S_IFMT
#define	S_IEXEC		_S_IEXEC
#define	S_IWRITE	_S_IWRITE
#define	S_IREAD		_S_IREAD
#define	S_IRWXU		_S_IRWXU
#define	S_IXUSR		_S_IXUSR
#define	S_IWUSR		_S_IWUSR
#define	S_IRUSR		_S_IRUSR
#define	S_ISDIR(m)	(((m) & S_IFMT) == S_IFDIR)
#define	S_ISREG(m)	(((m) & S_IFMT) == S_IFREG)
#define	S_ISFIFO(m)	(((m) & S_IFMT) == S_IFIFO)
