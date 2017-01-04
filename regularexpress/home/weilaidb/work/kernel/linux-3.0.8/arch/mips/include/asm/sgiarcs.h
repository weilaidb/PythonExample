#define _ASM_SGIARCS_H
#define PROM_ESUCCESS                   0x00
#define PROM_E2BIG                      0x01
#define PROM_EACCESS                    0x02
#define PROM_EAGAIN                     0x03
#define PROM_EBADF                      0x04
#define PROM_EBUSY                      0x05
#define PROM_EFAULT                     0x06
#define PROM_EINVAL                     0x07
#define PROM_EIO                        0x08
#define PROM_EISDIR                     0x09
#define PROM_EMFILE                     0x0a
#define PROM_EMLINK                     0x0b
#define PROM_ENAMETOOLONG               0x0c
#define PROM_ENODEV                     0x0d
#define PROM_ENOENT                     0x0e
#define PROM_ENOEXEC                    0x0f
#define PROM_ENOMEM                     0x10
#define PROM_ENOSPC                     0x11
#define PROM_ENOTDIR                    0x12
#define PROM_ENOTTY                     0x13
#define PROM_ENXIO                      0x14
#define PROM_EROFS                      0x15
#define PROM_EADDRNOTAVAIL              0x1f
#define PROM_ETIMEDOUT                  0x20
#define PROM_ECONNABORTED               0x21
#define PROM_ENOCONNECT                 0x22
enum linux_devclass ;
enum linux_devtypes ;
enum linux_identifier ;
struct linux_component ;
typedef struct linux_component pcomponent;
struct linux_sysid ;
enum arcs_memtypes ;
enum arc_memtypes ;
union linux_memtypes ;
struct linux_mdesc ;
struct linux_tinfo ;
struct linux_vdirent ;
enum linux_omode ;
enum linux_seekmode ;
enum linux_mountops ;
struct linux_bigint ;
struct linux_finfo ;
struct linux_romvec ;
typedef struct _SYSTEM_PARAMETER_BLOCK  SYSTEM_PARAMETER_BLOCK, *PSYSTEM_PARAMETER_BLOCK;
#define PROMBLOCK ((PSYSTEM_PARAMETER_BLOCK) (int)0xA0001000)
#define ROMVECTOR ((struct linux_romvec *) (long)(PROMBLOCK)->romvec)
union linux_cache_key ;
struct linux_cdata ;
#define SGIPROM_STDIN     0
#define SGIPROM_STDOUT    1
#define SGIPROM_ROFILE    0x01
#define SGIPROM_HFILE     0x02
#define SGIPROM_SFILE     0x04
#define SGIPROM_AFILE     0x08
#define SGIPROM_DFILE     0x10
#define SGIPROM_DELFILE   0x20
struct sgi_partition ;
#define SGIBBLOCK_MAGIC   0xaa55
#define SGIBBLOCK_MAXPART 0x0004
struct sgi_bootblock ;
struct sgi_bparm_block ;
struct sgi_bsector ;
#define SMB_DEBUG_MAGIC   0xfeeddead
struct linux_smonblock ;
#if defined(CONFIG_64BIT) && defined(CONFIG_ARC32)
#define __arc_clobbers							\
"$2", "$3", "$8", "$9", "$10", "$11", 			\
"$12", "$13", "$14", "$15", "$16", "$24", "$25", "$31"
#define ARC_CALL0(dest)							\
()
#define ARC_CALL1(dest, a1)						\
()
#define ARC_CALL2(dest, a1, a2)						\
()
#define ARC_CALL3(dest, a1, a2, a3)					\
()
#define ARC_CALL4(dest, a1, a2, a3, a4)					\
()
#define ARC_CALL5(dest, a1, a2, a3, a4, a5)					\
()
#if (defined(CONFIG_32BIT) && defined(CONFIG_ARC32)) ||		\
(defined(CONFIG_64BIT) && defined(CONFIG_ARC64))
#define ARC_CALL0(dest)							\
()
#define ARC_CALL1(dest, a1)						\
()
#define ARC_CALL2(dest, a1, a2)						\
()
#define ARC_CALL3(dest, a1, a2, a3)					\
()
#define ARC_CALL4(dest, a1, a2, a3, a4)					\
()
#define ARC_CALL5(dest, a1, a2, a3, a4, a5)				\
()
