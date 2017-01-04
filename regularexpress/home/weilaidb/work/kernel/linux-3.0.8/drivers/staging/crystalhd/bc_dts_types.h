#define _BC_DTS_TYPES_H_
typedef void	*PVOID;
typedef int	BOOL;
#if defined(__KERNEL__) || defined(__LINUX_USER__)
typedef uint32_t	ULONG;
typedef int32_t		LONG;
typedef void		*HANDLE;
typedef void		VOID;
typedef void		*LPVOID;
typedef uint32_t	DWORD;
typedef uint32_t	UINT32;
typedef uint32_t	*LPDWORD;
typedef unsigned char	*PUCHAR;
#define TRUE		1
#define FALSE		0
#define TEXT
typedef struct _uint64_t  uint64_t;
typedef signed long		int32_t;
typedef unsigned long	uint32_t;
typedef unsigned short	uint16_t;
typedef unsigned char	uint8_t;
