#define _LINUX_CLEANCACHE_H
#define CLEANCACHE_KEY_MAX 6
struct cleancache_filekey ;
struct cleancache_ops ;
extern struct cleancache_ops
cleancache_register_ops(struct cleancache_ops *ops);
extern void __cleancache_init_fs(struct super_block *);
extern void __cleancache_init_shared_fs(char *, struct super_block *);
extern int  __cleancache_get_page(struct page *);
extern void __cleancache_put_page(struct page *);
extern void __cleancache_flush_page(struct address_space *, struct page *);
extern void __cleancache_flush_inode(struct address_space *);
extern void __cleancache_flush_fs(struct super_block *);
extern int cleancache_enabled;
static inline bool cleancache_fs_enabled(struct page *page)
static inline bool cleancache_fs_enabled_mapping(struct address_space *mapping)
#define cleancache_enabled (0)
#define cleancache_fs_enabled(_page) (0)
#define cleancache_fs_enabled_mapping(_page) (0)
static inline void cleancache_init_fs(struct super_block *sb)
static inline void cleancache_init_shared_fs(char *uuid, struct super_block *sb)
static inline int cleancache_get_page(struct page *page)
static inline void cleancache_put_page(struct page *page)
static inline void cleancache_flush_page(struct address_space *mapping,
struct page *page)
static inline void cleancache_flush_inode(struct address_space *mapping)
static inline void cleancache_flush_fs(struct super_block *sb)
