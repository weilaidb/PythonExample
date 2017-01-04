struct page **ceph_get_direct_page_vector(const char __user *data,
int num_pages, bool write_page)
EXPORT_SYMBOL(ceph_get_direct_page_vector);
void ceph_put_page_vector(struct page **pages, int num_pages, bool dirty)
EXPORT_SYMBOL(ceph_put_page_vector);
void ceph_release_page_vector(struct page **pages, int num_pages)
EXPORT_SYMBOL(ceph_release_page_vector);
struct page **ceph_alloc_page_vector(int num_pages, gfp_t flags)
EXPORT_SYMBOL(ceph_alloc_page_vector);
int ceph_copy_user_to_page_vector(struct page **pages,
const char __user *data,
loff_t off, size_t len)
EXPORT_SYMBOL(ceph_copy_user_to_page_vector);
int ceph_copy_to_page_vector(struct page **pages,
const char *data,
loff_t off, size_t len)
EXPORT_SYMBOL(ceph_copy_to_page_vector);
int ceph_copy_from_page_vector(struct page **pages,
char *data,
loff_t off, size_t len)
EXPORT_SYMBOL(ceph_copy_from_page_vector);
int ceph_copy_page_vector_to_user(struct page **pages,
char __user *data,
loff_t off, size_t len)
EXPORT_SYMBOL(ceph_copy_page_vector_to_user);
void ceph_zero_page_vector_range(int off, int len, struct page **pages)
EXPORT_SYMBOL(ceph_zero_page_vector_range);
