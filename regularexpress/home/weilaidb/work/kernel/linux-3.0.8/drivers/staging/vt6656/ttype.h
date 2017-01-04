#define __TTYPE_H__
typedef int             BOOL;
#if !defined(TRUE)
#define TRUE            1
#if !defined(FALSE)
#define FALSE           0
typedef unsigned char   BYTE;
typedef unsigned short  WORD;
typedef unsigned long   DWORD;
typedef union tagUQuadWord  UQuadWord;
typedef UQuadWord       QWORD;
typedef unsigned long   ULONG_PTR;
typedef unsigned long   DWORD_PTR;
typedef BYTE *           PBYTE;
typedef WORD *           PWORD;
typedef DWORD *          PDWORD;
typedef QWORD *          PQWORD;
