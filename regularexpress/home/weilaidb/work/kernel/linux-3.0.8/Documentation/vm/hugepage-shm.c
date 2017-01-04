#define SHM_HUGETLB 04000
#define LENGTH (256UL*1024*1024)
#define dprintf(x)  printf(x)
#define ADDR (void *)(0x8000000000000000UL)
#define SHMAT_FLAGS (SHM_RND)
#define ADDR (void *)(0x0UL)
#define SHMAT_FLAGS (0)
int main(void)
