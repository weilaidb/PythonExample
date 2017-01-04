typedef u64 regType_t;
static regType_t getConfigReg(u64 id)
static char *szTab[] = ;
static char *protTab[] = ;
#define  ITLB_BASE	0x00000000
#define  DTLB_BASE	0x00800000
#define  MAX_TLBs		64
#define  GET_VALID(pte)        ((pte) & 0x1)
#define  GET_SHARED(pte)       ((pte) & 0x2)
#define  GET_ASID(pte)         ((pte >> 2) & 0x0ff)
#define  GET_EPN(pte)          ((pte) & 0xfffff000)
#define  GET_CBEHAVIOR(pte)    ((pte) & 0x3)
#define  GET_PAGE_SIZE(pte)    szTab[((pte >> 3) & 0x3)]
#define  GET_PROTECTION(pte)   protTab[((pte >> 6) & 0xf)]
#define  GET_PPN(pte)          ((pte) & 0xfffff000)
#define PAGE_1K_MASK           0x00000000
#define PAGE_4K_MASK           0x00000010
#define PAGE_64K_MASK          0x00000080
#define MMU_PAGESIZE_MASK      (PAGE_64K_MASK | PAGE_4K_MASK)
#define PAGE_1MB_MASK          MMU_PAGESIZE_MASK
#define PAGE_1K                (1024)
#define PAGE_4K                (1024 * 4)
#define PAGE_64K               (1024 * 64)
#define PAGE_1MB               (1024 * 1024)
#define HOW_TO_READ_TLB_CONTENT  \
"[ ID]  PPN         EPN        ASID  Share  CB  P.Size   PROT.\n"
void print_single_tlb(unsigned long tlb, int single_print)
void print_dtlb(void)
void print_itlb(void)
void show_excp_regs(char *from, int trapnr, int signr, struct pt_regs *regs)
