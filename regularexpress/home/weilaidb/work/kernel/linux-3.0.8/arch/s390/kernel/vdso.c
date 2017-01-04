#if defined(CONFIG_32BIT) || defined(CONFIG_COMPAT)
extern char vdso32_start, vdso32_end;
static void *vdso32_kbase = &vdso32_start;
static unsigned int vdso32_pages;
static struct page **vdso32_pagelist;
extern char vdso64_start, vdso64_end;
static void *vdso64_kbase = &vdso64_start;
static unsigned int vdso64_pages;
static struct page **vdso64_pagelist;
unsigned int __read_mostly vdso_enabled = 1;
static int __init vdso_setup(char *s)
__setup("vdso=", vdso_setup);
static union  vdso_data_store __page_aligned_data;
struct vdso_data *vdso_data = &vdso_data_store.data;
static void vdso_init_data(struct vdso_data *vd)
static void vdso_init_per_cpu_data(int cpu, struct vdso_per_cpu_data *vpcd)
#define SEGMENT_ORDER	2
int vdso_alloc_per_cpu(int cpu, struct _lowcore *lowcore)
void vdso_free_per_cpu(int cpu, struct _lowcore *lowcore)
static void __vdso_init_cr5(void *dummy)
static void vdso_init_cr5(void)
int arch_setup_additional_pages(struct linux_binprm *bprm, int uses_interp)
const char *arch_vma_name(struct vm_area_struct *vma)
static int __init vdso_init(void)
arch_initcall(vdso_init);
int in_gate_area_no_mm(unsigned long addr)
int in_gate_area(struct mm_struct *mm, unsigned long addr)
struct vm_area_struct *get_gate_vma(struct mm_struct *mm)
