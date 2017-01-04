#define OCFS2_LOCKID_H
#define OCFS2_LOCK_ID_MAX_LEN  32
#define OCFS2_LOCK_ID_PAD "000000"
#define OCFS2_DENTRY_LOCK_INO_START 18
enum ocfs2_lock_type ;
static inline char ocfs2_lock_type_char(enum ocfs2_lock_type type)
static char *ocfs2_lock_type_strings[] = ;
static inline const char *ocfs2_lock_type_string(enum ocfs2_lock_type type)
