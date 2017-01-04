#define _ASM_FCNTL_H
#define O_APPEND	0x0008
#define O_DSYNC		0x0010
#define O_NONBLOCK	0x0080
#define O_CREAT         0x0100
#define O_TRUNC		0x0200
#define O_EXCL		0x0400
#define O_NOCTTY	0x0800
#define FASYNC		0x1000
#define O_LARGEFILE	0x2000
#define __O_SYNC	0x4000
#define O_SYNC		(__O_SYNC|O_DSYNC)
#define O_DIRECT	0x8000
#define F_GETLK		14
#define F_SETLK		6
#define F_SETLKW	7
#define F_SETOWN	24
#define F_GETOWN	23
#define F_GETLK64	33
#define F_SETLK64	34
#define F_SETLKW64	35
struct flock ;
#define HAVE_ARCH_STRUCT_FLOCK
