#define LOAD_OFFSET 0
#define VMLINUX_SYMBOL(sym) sym
#define PASTE2(x,y) x##y
#define PASTE(x,y) PASTE2(x,y)
#define VMLINUX_SYMBOL(sym) PASTE(SYMBOL_PREFIX, sym)
#define ALIGN_FUNCTION()  . = ALIGN(8)
#define STRUCT_ALIGNMENT 32
#define STRUCT_ALIGN() . = ALIGN(STRUCT_ALIGNMENT)
#define DEV_KEEP(sec)    *(.dev##sec)
#define DEV_DISCARD(sec)
#define DEV_KEEP(sec)
#define DEV_DISCARD(sec) *(.dev##sec)
#define CPU_KEEP(sec)    *(.cpu##sec)
#define CPU_DISCARD(sec)
#define CPU_KEEP(sec)
#define CPU_DISCARD(sec) *(.cpu##sec)
#if defined(CONFIG_MEMORY_HOTPLUG)
#define MEM_KEEP(sec)    *(.mem##sec)
#define MEM_DISCARD(sec)
#define MEM_KEEP(sec)
#define MEM_DISCARD(sec) *(.mem##sec)
#define MCOUNT_REC()	. = ALIGN(8);				\
VMLINUX_SYMBOL(__start_mcount_loc) = .; \
*(__mcount_loc)				\
VMLINUX_SYMBOL(__stop_mcount_loc) = .;
#define MCOUNT_REC()
#define LIKELY_PROFILE()	VMLINUX_SYMBOL(__start_annotated_branch_profile) = .; \
*(_ftrace_annotated_branch)			      \
VMLINUX_SYMBOL(__stop_annotated_branch_profile) = .;
#define LIKELY_PROFILE()
#define BRANCH_PROFILE()	VMLINUX_SYMBOL(__start_branch_profile) = .;   \
*(_ftrace_branch)			      \
VMLINUX_SYMBOL(__stop_branch_profile) = .;
#define BRANCH_PROFILE()
#define FTRACE_EVENTS()	. = ALIGN(8);					\
VMLINUX_SYMBOL(__start_ftrace_events) = .;	\
*(_ftrace_events)				\
VMLINUX_SYMBOL(__stop_ftrace_events) = .;
#define FTRACE_EVENTS()
#define TRACE_PRINTKS() VMLINUX_SYMBOL(__start___trace_bprintk_fmt) = .;      \
*(__trace_printk_fmt) \
VMLINUX_SYMBOL(__stop___trace_bprintk_fmt) = .;
#define TRACE_PRINTKS()
#define TRACE_SYSCALLS() . = ALIGN(8);					\
VMLINUX_SYMBOL(__start_syscalls_metadata) = .;	\
*(__syscalls_metadata)				\
VMLINUX_SYMBOL(__stop_syscalls_metadata) = .;
#define TRACE_SYSCALLS()
#define KERNEL_DTB()							\
STRUCT_ALIGN();							\
VMLINUX_SYMBOL(__dtb_start) = .;				\
*(.dtb.init.rodata)						\
VMLINUX_SYMBOL(__dtb_end) = .;
#define DATA_DATA							\
*(.data)							\
*(.ref.data)							\
*(.data..shared_aligned)			\
DEV_KEEP(init.data)						\
DEV_KEEP(exit.data)						\
CPU_KEEP(init.data)						\
CPU_KEEP(exit.data)						\
MEM_KEEP(init.data)						\
MEM_KEEP(exit.data)						\
STRUCT_ALIGN();							\
*(__tracepoints)						\				\
. = ALIGN(8);                                                   \
VMLINUX_SYMBOL(__start___jump_table) = .;                       \
*(__jump_table)                                                 \
VMLINUX_SYMBOL(__stop___jump_table) = .;                        \
. = ALIGN(8);							\
VMLINUX_SYMBOL(__start___verbose) = .;                          \
*(__verbose)                                                    \
VMLINUX_SYMBOL(__stop___verbose) = .;				\
LIKELY_PROFILE()		       				\
BRANCH_PROFILE()						\
TRACE_PRINTKS()
#define NOSAVE_DATA							\
. = ALIGN(PAGE_SIZE);						\
VMLINUX_SYMBOL(__nosave_begin) = .;				\
*(.data..nosave)						\
. = ALIGN(PAGE_SIZE);						\
VMLINUX_SYMBOL(__nosave_end) = .;
#define PAGE_ALIGNED_DATA(page_align)					\
. = ALIGN(page_align);						\
*(.data..page_aligned)
#define READ_MOSTLY_DATA(align)						\
. = ALIGN(align);						\
*(.data..read_mostly)						\
. = ALIGN(align);
#define CACHELINE_ALIGNED_DATA(align)					\
. = ALIGN(align);						\
*(.data..cacheline_aligned)
#define INIT_TASK_DATA(align)						\
. = ALIGN(align);						\
*(.data..init_task)
#define RO_DATA_SECTION(align)						\
. = ALIGN((align));						\
.rodata           : AT(ADDR(.rodata) - LOAD_OFFSET) 								\
\
.rodata1          : AT(ADDR(.rodata1) - LOAD_OFFSET) 								\
\
BUG_TABLE							\
\						\
.pci_fixup        : AT(ADDR(.pci_fixup) - LOAD_OFFSET) 								\
\					\
.builtin_fw        : AT(ADDR(.builtin_fw) - LOAD_OFFSET) 								\
\						\
.rio_ops        : AT(ADDR(.rio_ops) - LOAD_OFFSET) 								\
\
TRACEDATA							\
\			\
__ksymtab         : AT(ADDR(__ksymtab) - LOAD_OFFSET) 								\
\			\
__ksymtab_gpl     : AT(ADDR(__ksymtab_gpl) - LOAD_OFFSET) 								\
\		\
__ksymtab_unused  : AT(ADDR(__ksymtab_unused) - LOAD_OFFSET) 								\
\		\
__ksymtab_unused_gpl : AT(ADDR(__ksymtab_unused_gpl) - LOAD_OFFSET) 								\
\		\
__ksymtab_gpl_future : AT(ADDR(__ksymtab_gpl_future) - LOAD_OFFSET) 								\
\			\
__kcrctab         : AT(ADDR(__kcrctab) - LOAD_OFFSET) 								\
\			\
__kcrctab_gpl     : AT(ADDR(__kcrctab_gpl) - LOAD_OFFSET) 								\
\		\
__kcrctab_unused  : AT(ADDR(__kcrctab_unused) - LOAD_OFFSET) 								\
\		\
__kcrctab_unused_gpl : AT(ADDR(__kcrctab_unused_gpl) - LOAD_OFFSET) 								\
\		\
__kcrctab_gpl_future : AT(ADDR(__kcrctab_gpl_future) - LOAD_OFFSET) 								\
\				\
__ksymtab_strings : AT(ADDR(__ksymtab_strings) - LOAD_OFFSET) 								\
\						\
__init_rodata : AT(ADDR(__init_rodata) - LOAD_OFFSET) 								\
\				\
__param : AT(ADDR(__param) - LOAD_OFFSET) 								\
\					\
__modver : AT(ADDR(__modver) - LOAD_OFFSET) 								\
. = ALIGN((align));
#define RODATA          RO_DATA_SECTION(4096)
#define RO_DATA(align)  RO_DATA_SECTION(align)
#define SECURITY_INIT							\
.security_initcall.init : AT(ADDR(.security_initcall.init) - LOAD_OFFSET)
#define TEXT_TEXT							\
ALIGN_FUNCTION();					\
*(.text.hot)						\
*(.text)						\
*(.ref.text)						\
DEV_KEEP(init.text)						\
DEV_KEEP(exit.text)						\
CPU_KEEP(init.text)						\
CPU_KEEP(exit.text)						\
MEM_KEEP(init.text)						\
MEM_KEEP(exit.text)						\
*(.text.unlikely)
#define SCHED_TEXT							\
ALIGN_FUNCTION();					\
VMLINUX_SYMBOL(__sched_text_start) = .;			\
*(.sched.text)						\
VMLINUX_SYMBOL(__sched_text_end) = .;
#define LOCK_TEXT							\
ALIGN_FUNCTION();					\
VMLINUX_SYMBOL(__lock_text_start) = .;			\
*(.spinlock.text)					\
VMLINUX_SYMBOL(__lock_text_end) = .;
#define KPROBES_TEXT							\
ALIGN_FUNCTION();					\
VMLINUX_SYMBOL(__kprobes_text_start) = .;		\
*(.kprobes.text)					\
VMLINUX_SYMBOL(__kprobes_text_end) = .;
#define ENTRY_TEXT							\
ALIGN_FUNCTION();					\
VMLINUX_SYMBOL(__entry_text_start) = .;			\
*(.entry.text)						\
VMLINUX_SYMBOL(__entry_text_end) = .;
#define IRQENTRY_TEXT							\
ALIGN_FUNCTION();					\
VMLINUX_SYMBOL(__irqentry_text_start) = .;		\
*(.irqentry.text)					\
VMLINUX_SYMBOL(__irqentry_text_end) = .;
#define IRQENTRY_TEXT
#define HEAD_TEXT  *(.head.text)
#define HEAD_TEXT_SECTION							\
.head.text : AT(ADDR(.head.text) - LOAD_OFFSET)
#define EXCEPTION_TABLE(align)						\
. = ALIGN(align);						\
__ex_table : AT(ADDR(__ex_table) - LOAD_OFFSET)
#define INIT_TASK_DATA_SECTION(align)					\
. = ALIGN(align);						\
.data..init_task :  AT(ADDR(.data..init_task) - LOAD_OFFSET)
#define KERNEL_CTORS()	. = ALIGN(8);			   \
VMLINUX_SYMBOL(__ctors_start) = .; \
*(.ctors)			   \
VMLINUX_SYMBOL(__ctors_end) = .;
#define KERNEL_CTORS()
#define INIT_DATA							\
*(.init.data)							\
DEV_DISCARD(init.data)						\
CPU_DISCARD(init.data)						\
MEM_DISCARD(init.data)						\
KERNEL_CTORS()							\
*(.init.rodata)							\
MCOUNT_REC()							\
FTRACE_EVENTS()							\
TRACE_SYSCALLS()						\
DEV_DISCARD(init.rodata)					\
CPU_DISCARD(init.rodata)					\
MEM_DISCARD(init.rodata)					\
KERNEL_DTB()
#define INIT_TEXT							\
*(.init.text)							\
DEV_DISCARD(init.text)						\
CPU_DISCARD(init.text)						\
MEM_DISCARD(init.text)
#define EXIT_DATA							\
*(.exit.data)							\
DEV_DISCARD(exit.data)						\
DEV_DISCARD(exit.rodata)					\
CPU_DISCARD(exit.data)						\
CPU_DISCARD(exit.rodata)					\
MEM_DISCARD(exit.data)						\
MEM_DISCARD(exit.rodata)
#define EXIT_TEXT							\
*(.exit.text)							\
DEV_DISCARD(exit.text)						\
CPU_DISCARD(exit.text)						\
MEM_DISCARD(exit.text)
#define EXIT_CALL							\
*(.exitcall.exit)
#define SBSS(sbss_align)						\
. = ALIGN(sbss_align);						\
.sbss : AT(ADDR(.sbss) - LOAD_OFFSET)
#define BSS(bss_align)							\
. = ALIGN(bss_align);						\
.bss : AT(ADDR(.bss) - LOAD_OFFSET)
#define DWARF_DEBUG							\						\
.debug          0 : 			\
.line           0 : 			\				\
.debug_srcinfo  0 : 		\
.debug_sfnames  0 : 		\				\
.debug_aranges  0 : 		\
.debug_pubnames 0 : 		\						\
.debug_info     0 : 			\
.debug_abbrev   0 : 		\
.debug_line     0 : 			\
.debug_frame    0 : 			\
.debug_str      0 : 			\
.debug_loc      0 : 			\
.debug_macinfo  0 : 		\			\
.debug_weaknames 0 : 		\
.debug_funcnames 0 : 		\
.debug_typenames 0 : 		\
.debug_varnames  0 : 		\
#define STABS_DEBUG							\
.stab 0 : 					\
.stabstr 0 : 				\
.stab.excl 0 : 			\
.stab.exclstr 0 : 			\
.stab.index 0 : 			\
.stab.indexstr 0 : 		\
.comment 0 :
#define BUG_TABLE							\
. = ALIGN(8);							\
__bug_table : AT(ADDR(__bug_table) - LOAD_OFFSET)
#define BUG_TABLE
#define TRACEDATA							\
. = ALIGN(4);							\
.tracedata : AT(ADDR(.tracedata) - LOAD_OFFSET)
#define TRACEDATA
#define NOTES								\
.notes : AT(ADDR(.notes) - LOAD_OFFSET)
#define INIT_SETUP(initsetup_align)					\
. = ALIGN(initsetup_align);				\
VMLINUX_SYMBOL(__setup_start) = .;			\
*(.init.setup)						\
VMLINUX_SYMBOL(__setup_end) = .;
#define INITCALLS							\
*(.initcallearly.init)						\
VMLINUX_SYMBOL(__early_initcall_end) = .;			\
*(.initcall0.init)						\
*(.initcall0s.init)						\
*(.initcall1.init)						\
*(.initcall1s.init)						\
*(.initcall2.init)						\
*(.initcall2s.init)						\
*(.initcall3.init)						\
*(.initcall3s.init)						\
*(.initcall4.init)						\
*(.initcall4s.init)						\
*(.initcall5.init)						\
*(.initcall5s.init)						\
*(.initcallrootfs.init)						\
*(.initcall6.init)						\
*(.initcall6s.init)						\
*(.initcall7.init)						\
*(.initcall7s.init)
#define INIT_CALLS							\
VMLINUX_SYMBOL(__initcall_start) = .;			\
INITCALLS						\
VMLINUX_SYMBOL(__initcall_end) = .;
#define CON_INITCALL							\
VMLINUX_SYMBOL(__con_initcall_start) = .;		\
*(.con_initcall.init)					\
VMLINUX_SYMBOL(__con_initcall_end) = .;
#define SECURITY_INITCALL						\
VMLINUX_SYMBOL(__security_initcall_start) = .;		\
*(.security_initcall.init)				\
VMLINUX_SYMBOL(__security_initcall_end) = .;
#define INIT_RAM_FS							\
. = ALIGN(4);							\
VMLINUX_SYMBOL(__initramfs_start) = .;				\
*(.init.ramfs)							\
. = ALIGN(8);							\
*(.init.ramfs.info)
#define INIT_RAM_FS
#define DISCARDS							\
/DISCARD/ :
#define PERCPU_INPUT(cacheline)						\
VMLINUX_SYMBOL(__per_cpu_start) = .;				\
*(.data..percpu..first)						\
. = ALIGN(PAGE_SIZE);						\
*(.data..percpu..page_aligned)					\
. = ALIGN(cacheline);						\
*(.data..percpu..readmostly)					\
. = ALIGN(cacheline);						\
*(.data..percpu)						\
*(.data..percpu..shared_aligned)				\
VMLINUX_SYMBOL(__per_cpu_end) = .;
#define PERCPU_VADDR(cacheline, vaddr, phdr)				\
VMLINUX_SYMBOL(__per_cpu_load) = .;				\
.data..percpu vaddr : AT(VMLINUX_SYMBOL(__per_cpu_load)		\
- LOAD_OFFSET)  phdr								\
. = VMLINUX_SYMBOL(__per_cpu_load) + SIZEOF(.data..percpu);
#define PERCPU_SECTION(cacheline)					\
. = ALIGN(PAGE_SIZE);						\
.data..percpu	: AT(ADDR(.data..percpu) - LOAD_OFFSET)
#define RW_DATA_SECTION(cacheline, pagealigned, inittask)		\
. = ALIGN(PAGE_SIZE);						\
.data : AT(ADDR(.data) - LOAD_OFFSET)
#define INIT_TEXT_SECTION(inittext_align)				\
. = ALIGN(inittext_align);					\
.init.text : AT(ADDR(.init.text) - LOAD_OFFSET)
#define INIT_DATA_SECTION(initsetup_align)				\
.init.data : AT(ADDR(.init.data) - LOAD_OFFSET)
#define BSS_SECTION(sbss_align, bss_align, stop_align)			\
. = ALIGN(sbss_align);						\
VMLINUX_SYMBOL(__bss_start) = .;				\
SBSS(sbss_align)						\
BSS(bss_align)							\
. = ALIGN(stop_align);						\
VMLINUX_SYMBOL(__bss_stop) = .;
