#define _LINUX_NTFS_AOPS_H
static inline void ntfs_unmap_page(struct page *page)
static inline struct page *ntfs_map_page(struct address_space *mapping,
unsigned long index)
extern void mark_ntfs_record_dirty(struct page *page, const unsigned int ofs);
