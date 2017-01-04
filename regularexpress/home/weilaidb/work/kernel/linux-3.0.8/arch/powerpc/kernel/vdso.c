#undef DEBUG
#define DBG(fmt...) printk(fmt)
#define DBG(fmt...)
#define MAX_SYMNAME	64
#define VDSO_ALIGNMENT	(1 << 16)
extern char vdso32_start, vdso32_end;
static void *vdso32_kbase = &vdso32_start;
static unsigned int vdso32_pages;
static struct page **vdso32_pagelist;
unsigned long vdso32_sigtramp;
unsigned long vdso32_rt_sigtramp;
extern char vdso64_start, vdso64_end;
static void *vdso64_kbase = &vdso64_start;
static unsigned int vdso64_pages;
static struct page **vdso64_pagelist;
unsigned long vdso64_rt_sigtramp;
static int vdso_ready;
static union  vdso_data_store __page_aligned_data;
struct vdso_data *vdso_data = &vdso_data_store.data;
struct vdso_patch_def
;
static struct vdso_patch_def vdso_patches[] = ;
struct lib32_elfinfo
;
struct lib64_elfinfo
;
static void dump_one_vdso_page(struct page *pg, struct page *upg)
static void dump_vdso_pages(struct vm_area_struct * vma)
int arch_setup_additional_pages(struct linux_binprm *bprm, int uses_interp)
const char *arch_vma_name(struct vm_area_struct *vma)
static void * __init find_section32(Elf32_Ehdr *ehdr, const char *secname,
unsigned long *size)
static Elf32_Sym * __init find_symbol32(struct lib32_elfinfo *lib,
const char *symname)
static unsigned long __init find_function32(struct lib32_elfinfo *lib,
const char *symname)
static int __init vdso_do_func_patch32(struct lib32_elfinfo *v32,
struct lib64_elfinfo *v64,
const char *orig, const char *fix)
static void * __init find_section64(Elf64_Ehdr *ehdr, const char *secname,
unsigned long *size)
static Elf64_Sym * __init find_symbol64(struct lib64_elfinfo *lib,
const char *symname)
static unsigned long __init find_function64(struct lib64_elfinfo *lib,
const char *symname)
static int __init vdso_do_func_patch64(struct lib32_elfinfo *v32,
struct lib64_elfinfo *v64,
const char *orig, const char *fix)
static __init int vdso_do_find_sections(struct lib32_elfinfo *v32,
struct lib64_elfinfo *v64)
static __init void vdso_setup_trampolines(struct lib32_elfinfo *v32,
struct lib64_elfinfo *v64)
static __init int vdso_fixup_datapage(struct lib32_elfinfo *v32,
struct lib64_elfinfo *v64)
static __init int vdso_fixup_features(struct lib32_elfinfo *v32,
struct lib64_elfinfo *v64)
static __init int vdso_fixup_alt_funcs(struct lib32_elfinfo *v32,
struct lib64_elfinfo *v64)
static __init int vdso_setup(void)
static void __init vdso_setup_syscall_map(void)
static int __init vdso_init(void)
arch_initcall(vdso_init);
int in_gate_area_no_mm(unsigned long addr)
int in_gate_area(struct mm_struct *mm, unsigned long addr)
struct vm_area_struct *get_gate_vma(struct mm_struct *mm)
