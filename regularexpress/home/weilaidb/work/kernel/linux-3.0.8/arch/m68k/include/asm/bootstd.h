#define __BOOTSTD_H__
#define NR_BSC 21
#define __BN_reset        0
#define __BN_test         1
#define __BN_exec         2
#define __BN_exit         3
#define __BN_program      4
#define __BN_erase        5
#define __BN_open         6
#define __BN_write        7
#define __BN_read         8
#define __BN_close        9
#define __BN_mmap         10
#define __BN_munmap       11
#define __BN_gethwaddr    12
#define __BN_getserialnum 13
#define __BN_getbenv      14
#define __BN_setbenv      15
#define __BN_setpmask     16
#define __BN_readenv      17
#define __BN_flash_chattr_range		18
#define __BN_flash_erase_range		19
#define __BN_flash_write_range		20
#define __bsc_return(type, res) \
do  while (0)
#define _bsc0(type,name) \
type name(void) \
#define _bsc1(type,name,atype,a) \
type name(atype a) \
#define _bsc2(type,name,atype,a,btype,b) \
type name(atype a, btype b) \
#define _bsc3(type,name,atype,a,btype,b,ctype,c) \
type name(atype a, btype b, ctype c) \
#define _bsc4(type,name,atype,a,btype,b,ctype,c,dtype,d) \
type name(atype a, btype b, ctype c, dtype d) \
#define _bsc5(type,name,atype,a,btype,b,ctype,c,dtype,d,etype,e) \
type name(atype a, btype b, ctype c, dtype d, etype e) \
