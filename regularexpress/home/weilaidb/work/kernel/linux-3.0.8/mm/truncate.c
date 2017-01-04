void do_invalidatepage(struct page *page, unsigned long offset)
static inline void truncate_partial_page(struct page *page, unsigned partial)
void cancel_dirty_page(struct page *page, unsigned int account_size)
EXPORT_SYMBOL(cancel_dirty_page);
static int
truncate_complete_page(struct address_space *mapping, struct page *page)
static int
invalidate_complete_page(struct address_space *mapping, struct page *page)
int truncate_inode_page(struct address_space *mapping, struct page *page)
int generic_error_remove_page(struct address_space *mapping, struct page *page)
EXPORT_SYMBOL(generic_error_remove_page);
int invalidate_inode_page(struct page *page)
void truncate_inode_pages_range(struct address_space *mapping,
loff_t lstart, loff_t lend)
EXPORT_SYMBOL(truncate_inode_pages_range);
void truncate_inode_pages(struct address_space *mapping, loff_t lstart)
EXPORT_SYMBOL(truncate_inode_pages);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
pgoff_t start, pgoff_t end)
EXPORT_SYMBOL(invalidate_mapping_pages);
static int
invalidate_complete_page2(struct address_space *mapping, struct page *page)
static int do_launder_page(struct address_space *mapping, struct page *page)
int invalidate_inode_pages2_range(struct address_space *mapping,
pgoff_t start, pgoff_t end)
EXPORT_SYMBOL_GPL(invalidate_inode_pages2_range);
int invalidate_inode_pages2(struct address_space *mapping)
EXPORT_SYMBOL_GPL(invalidate_inode_pages2);
void truncate_pagecache(struct inode *inode, loff_t old, loff_t new)
EXPORT_SYMBOL(truncate_pagecache);
void truncate_setsize(struct inode *inode, loff_t newsize)
EXPORT_SYMBOL(truncate_setsize);
int vmtruncate(struct inode *inode, loff_t offset)
EXPORT_SYMBOL(vmtruncate);
int vmtruncate_range(struct inode *inode, loff_t offset, loff_t end)
