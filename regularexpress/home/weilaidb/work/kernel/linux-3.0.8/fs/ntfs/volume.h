#define _LINUX_NTFS_VOLUME_H
typedef struct  ntfs_volume;
typedef enum  ntfs_volume_flags;
#define DEFINE_NVOL_BIT_OPS(flag)					\
static inline int NVol##flag(ntfs_volume *vol)		\
\
static inline void NVolSet##flag(ntfs_volume *vol)	\
\
static inline void NVolClear##flag(ntfs_volume *vol)	\
DEFINE_NVOL_BIT_OPS(Errors)
DEFINE_NVOL_BIT_OPS(ShowSystemFiles)
DEFINE_NVOL_BIT_OPS(CaseSensitive)
DEFINE_NVOL_BIT_OPS(LogFileEmpty)
DEFINE_NVOL_BIT_OPS(QuotaOutOfDate)
DEFINE_NVOL_BIT_OPS(UsnJrnlStamped)
DEFINE_NVOL_BIT_OPS(SparseEnabled)
