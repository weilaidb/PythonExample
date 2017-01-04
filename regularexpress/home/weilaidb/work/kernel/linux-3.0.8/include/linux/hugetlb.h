#define _LINUX_HUGETLB_H
struct ctl_table;
struct user_struct;
int PageHuge(struct page *page);
void reset_vma_resv_huge_pages(struct vm_area_struct *vma);
int hugetlb_sysctl_handler(struct ctl_table *, int, void __user *, size_t *, loff_t *);
int hugetlb_overcommit_handler(struct ctl_table *, int, void __user *, size_t *, loff_t *);
int hugetlb_treat_movable_handler(struct ctl_table *, int, void __user *, size_t *, loff_t *);
int hugetlb_mempolicy_sysctl_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
int copy_hugetlb_page_range(struct mm_struct *, struct mm_struct *, struct vm_area_struct *);
int follow_hugetlb_page(struct mm_struct *, struct vm_area_struct *,
struct page **, struct vm_area_struct **,
unsigned long *, int *, int, unsigned int flags);
void unmap_hugepage_range(struct vm_area_struct *,
unsigned long, unsigned long, struct page *);
void __unmap_hugepage_range(struct vm_area_struct *,
unsigned long, unsigned long, struct page *);
int hugetlb_prefault(struct address_space *, struct vm_area_struct *);
void hugetlb_report_meminfo(struct seq_file *);
int hugetlb_report_node_meminfo(int, char *);
unsigned long hugetlb_total_pages(void);
int hugetlb_fault(struct mm_struct *mm, struct vm_area_struct *vma,
unsigned long address, unsigned int flags);
int hugetlb_reserve_pages(struct inode *inode, long from, long to,
struct vm_area_struct *vma,
vm_flags_t vm_flags);
void hugetlb_unreserve_pages(struct inode *inode, long offset, long freed);
int dequeue_hwpoisoned_huge_page(struct page *page);
void copy_huge_page(struct page *dst, struct page *src);
extern unsigned long hugepages_treat_as_movable;
extern const unsigned long hugetlb_zero, hugetlb_infinity;
extern int sysctl_hugetlb_shm_group;
extern struct list_head huge_boot_pages;
pte_t *huge_pte_alloc(struct mm_struct *mm,
unsigned long addr, unsigned long sz);
pte_t *huge_pte_offset(struct mm_struct *mm, unsigned long addr);
int huge_pmd_unshare(struct mm_struct *mm, unsigned long *addr, pte_t *ptep);
struct page *follow_huge_addr(struct mm_struct *mm, unsigned long address,
int write);
struct page *follow_huge_pmd(struct mm_struct *mm, unsigned long address,
pmd_t *pmd, int write);
struct page *follow_huge_pud(struct mm_struct *mm, unsigned long address,
pud_t *pud, int write);
int pmd_huge(pmd_t pmd);
int pud_huge(pud_t pmd);
void hugetlb_change_protection(struct vm_area_struct *vma,
unsigned long address, unsigned long end, pgprot_t newprot);
static inline int PageHuge(struct page *page)
static inline void reset_vma_resv_huge_pages(struct vm_area_struct *vma)
static inline unsigned long hugetlb_total_pages(void)
#define follow_hugetlb_page(m,v,p,vs,a,b,i,w)	()
#define follow_huge_addr(mm, addr, write)	ERR_PTR(-EINVAL)
#define copy_hugetlb_page_range(src, dst, vma)	()
#define hugetlb_prefault(mapping, vma)		()
#define unmap_hugepage_range(vma, start, end, page)	BUG()
static inline void hugetlb_report_meminfo(struct seq_file *m)
#define hugetlb_report_node_meminfo(n, buf)	0
#define follow_huge_pmd(mm, addr, pmd, write)	NULL
#define follow_huge_pud(mm, addr, pud, write)	NULL
#define prepare_hugepage_range(file, addr, len)	(-EINVAL)
#define pmd_huge(x)	0
#define pud_huge(x)	0
#define is_hugepage_only_range(mm, addr, len)	0
#define hugetlb_free_pgd_range(tlb, addr, end, floor, ceiling) ()
#define hugetlb_fault(mm, vma, addr, flags)	()
#define huge_pte_offset(mm, address)	0
#define dequeue_hwpoisoned_huge_page(page)	0
static inline void copy_huge_page(struct page *dst, struct page *src)
#define hugetlb_change_protection(vma, address, end, newprot)
#define HPAGE_MASK	PAGE_MASK
#define HPAGE_SIZE	PAGE_SIZE
#define HUGETLB_ANON_FILE "anon_hugepage"
enum ;
struct hugetlbfs_config ;
struct hugetlbfs_sb_info ;
struct hugetlbfs_inode_info ;
static inline struct hugetlbfs_inode_info *HUGETLBFS_I(struct inode *inode)
static inline struct hugetlbfs_sb_info *HUGETLBFS_SB(struct super_block *sb)
extern const struct file_operations hugetlbfs_file_operations;
extern const struct vm_operations_struct hugetlb_vm_ops;
struct file *hugetlb_file_setup(const char *name, size_t size, vm_flags_t acct,
struct user_struct **user, int creat_flags);
int hugetlb_get_quota(struct address_space *mapping, long delta);
void hugetlb_put_quota(struct address_space *mapping, long delta);
static inline int is_file_hugepages(struct file *file)
static inline void set_file_hugepages(struct file *file)
#define is_file_hugepages(file)			0
#define set_file_hugepages(file)		BUG()
static inline struct file *hugetlb_file_setup(const char *name, size_t size,
vm_flags_t acctflag, struct user_struct **user, int creat_flags)
unsigned long hugetlb_get_unmapped_area(struct file *file, unsigned long addr,
unsigned long len, unsigned long pgoff,
unsigned long flags);
#define HSTATE_NAME_LEN 32
struct hstate ;
struct huge_bootmem_page ;
struct page *alloc_huge_page_node(struct hstate *h, int nid);
int __init alloc_bootmem_huge_page(struct hstate *h);
void __init hugetlb_add_hstate(unsigned order);
struct hstate *size_to_hstate(unsigned long size);
#define HUGE_MAX_HSTATE 1
extern struct hstate hstates[HUGE_MAX_HSTATE];
extern unsigned int default_hstate_idx;
#define default_hstate (hstates[default_hstate_idx])
static inline struct hstate *hstate_inode(struct inode *i)
static inline struct hstate *hstate_file(struct file *f)
static inline struct hstate *hstate_vma(struct vm_area_struct *vma)
static inline unsigned long huge_page_size(struct hstate *h)
extern unsigned long vma_kernel_pagesize(struct vm_area_struct *vma);
extern unsigned long vma_mmu_pagesize(struct vm_area_struct *vma);
static inline unsigned long huge_page_mask(struct hstate *h)
static inline unsigned int huge_page_order(struct hstate *h)
static inline unsigned huge_page_shift(struct hstate *h)
static inline unsigned int pages_per_huge_page(struct hstate *h)
static inline unsigned int blocks_per_huge_page(struct hstate *h)
static inline struct hstate *page_hstate(struct page *page)
static inline unsigned hstate_index_to_shift(unsigned index)
struct hstate ;
#define alloc_huge_page_node(h, nid) NULL
#define alloc_bootmem_huge_page(h) NULL
#define hstate_file(f) NULL
#define hstate_vma(v) NULL
#define hstate_inode(i) NULL
#define huge_page_size(h) PAGE_SIZE
#define huge_page_mask(h) PAGE_MASK
#define vma_kernel_pagesize(v) PAGE_SIZE
#define vma_mmu_pagesize(v) PAGE_SIZE
#define huge_page_order(h) 0
#define huge_page_shift(h) PAGE_SHIFT
static inline unsigned int pages_per_huge_page(struct hstate *h)
#define hstate_index_to_shift(index) 0
