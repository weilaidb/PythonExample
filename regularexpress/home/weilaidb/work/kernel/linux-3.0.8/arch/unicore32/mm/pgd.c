#define FIRST_KERNEL_PGD_NR	(FIRST_USER_PGD_NR + USER_PTRS_PER_PGD)
pgd_t *get_pgd_slow(struct mm_struct *mm)
void free_pgd_slow(struct mm_struct *mm, pgd_t *pgd)
