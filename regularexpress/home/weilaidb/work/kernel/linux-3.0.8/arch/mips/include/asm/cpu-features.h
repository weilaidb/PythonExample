#define __ASM_CPU_FEATURES_H
#define current_cpu_type()      current_cpu_data.cputype
#define cpu_has_tlb		(cpu_data[0].options & MIPS_CPU_TLB)
#define cpu_has_4kex		(cpu_data[0].options & MIPS_CPU_4KEX)
#define cpu_has_3k_cache	(cpu_data[0].options & MIPS_CPU_3K_CACHE)
#define cpu_has_6k_cache	0
#define cpu_has_8k_cache	0
#define cpu_has_4k_cache	(cpu_data[0].options & MIPS_CPU_4K_CACHE)
#define cpu_has_tx39_cache	(cpu_data[0].options & MIPS_CPU_TX39_CACHE)
#define cpu_has_octeon_cache	0
#define cpu_has_fpu		(current_cpu_data.options & MIPS_CPU_FPU)
#define raw_cpu_has_fpu		(raw_current_cpu_data.options & MIPS_CPU_FPU)
#define raw_cpu_has_fpu		cpu_has_fpu
#define cpu_has_32fpr		(cpu_data[0].options & MIPS_CPU_32FPR)
#define cpu_has_counter		(cpu_data[0].options & MIPS_CPU_COUNTER)
#define cpu_has_watch		(cpu_data[0].options & MIPS_CPU_WATCH)
#define cpu_has_divec		(cpu_data[0].options & MIPS_CPU_DIVEC)
#define cpu_has_vce		(cpu_data[0].options & MIPS_CPU_VCE)
#define cpu_has_cache_cdex_p	(cpu_data[0].options & MIPS_CPU_CACHE_CDEX_P)
#define cpu_has_cache_cdex_s	(cpu_data[0].options & MIPS_CPU_CACHE_CDEX_S)
#define cpu_has_prefetch	(cpu_data[0].options & MIPS_CPU_PREFETCH)
#define cpu_has_mcheck		(cpu_data[0].options & MIPS_CPU_MCHECK)
#define cpu_has_ejtag		(cpu_data[0].options & MIPS_CPU_EJTAG)
#define cpu_has_llsc		(cpu_data[0].options & MIPS_CPU_LLSC)
#define kernel_uses_llsc	cpu_has_llsc
#define cpu_has_mips16		(cpu_data[0].ases & MIPS_ASE_MIPS16)
#define cpu_has_mdmx           (cpu_data[0].ases & MIPS_ASE_MDMX)
#define cpu_has_mips3d         (cpu_data[0].ases & MIPS_ASE_MIPS3D)
#define cpu_has_smartmips      (cpu_data[0].ases & MIPS_ASE_SMARTMIPS)
#define kernel_uses_smartmips_rixi 0
#define cpu_has_vtag_icache	(cpu_data[0].icache.flags & MIPS_CACHE_VTAG)
#define cpu_has_dc_aliases	(cpu_data[0].dcache.flags & MIPS_CACHE_ALIASES)
#define cpu_has_ic_fills_f_dc	(cpu_data[0].icache.flags & MIPS_CACHE_IC_F_DC)
#define cpu_has_pindexed_dcache	(cpu_data[0].dcache.flags & MIPS_CACHE_PINDEX)
#define cpu_icache_snoops_remote_store	(cpu_data[0].icache.flags & MIPS_IC_SNOOPS_REMOTE)
#define cpu_icache_snoops_remote_store	1
# ifndef cpu_has_mips32r1
# define cpu_has_mips32r1	(cpu_data[0].isa_level & MIPS_CPU_ISA_M32R1)
# endif
# ifndef cpu_has_mips32r2
# define cpu_has_mips32r2	(cpu_data[0].isa_level & MIPS_CPU_ISA_M32R2)
# endif
# ifndef cpu_has_mips64r1
# define cpu_has_mips64r1	(cpu_data[0].isa_level & MIPS_CPU_ISA_M64R1)
# endif
# ifndef cpu_has_mips64r2
# define cpu_has_mips64r2	(cpu_data[0].isa_level & MIPS_CPU_ISA_M64R2)
# endif
#define cpu_has_mips32	(cpu_has_mips32r1 | cpu_has_mips32r2)
#define cpu_has_mips64	(cpu_has_mips64r1 | cpu_has_mips64r2)
#define cpu_has_mips_r1	(cpu_has_mips32r1 | cpu_has_mips64r1)
#define cpu_has_mips_r2	(cpu_has_mips32r2 | cpu_has_mips64r2)
#define cpu_has_mips_r	(cpu_has_mips32r1 | cpu_has_mips32r2 | \
cpu_has_mips64r1 | cpu_has_mips64r2)
#define cpu_has_mips_r2_exec_hazard cpu_has_mips_r2
# ifndef cpu_has_clo_clz
# define cpu_has_clo_clz	cpu_has_mips_r
# endif
#define cpu_has_dsp		(cpu_data[0].ases & MIPS_ASE_DSP)
#define cpu_has_mipsmt		(cpu_data[0].ases & MIPS_ASE_MIPSMT)
#define cpu_has_userlocal	(cpu_data[0].options & MIPS_CPU_ULRI)
# ifndef cpu_has_nofpuex
# define cpu_has_nofpuex	(cpu_data[0].options & MIPS_CPU_NOFPUEX)
# endif
# ifndef cpu_has_64bits
# define cpu_has_64bits		(cpu_data[0].isa_level & MIPS_CPU_ISA_64BIT)
# endif
# ifndef cpu_has_64bit_zero_reg
# define cpu_has_64bit_zero_reg	(cpu_data[0].isa_level & MIPS_CPU_ISA_64BIT)
# endif
# ifndef cpu_has_64bit_gp_regs
# define cpu_has_64bit_gp_regs		0
# endif
# ifndef cpu_has_64bit_addresses
# define cpu_has_64bit_addresses	0
# endif
# ifndef cpu_vmbits
# define cpu_vmbits 31
# endif
# ifndef cpu_has_nofpuex
# define cpu_has_nofpuex		0
# endif
# ifndef cpu_has_64bits
# define cpu_has_64bits			1
# endif
# ifndef cpu_has_64bit_zero_reg
# define cpu_has_64bit_zero_reg		1
# endif
# ifndef cpu_has_64bit_gp_regs
# define cpu_has_64bit_gp_regs		1
# endif
# ifndef cpu_has_64bit_addresses
# define cpu_has_64bit_addresses	1
# endif
# ifndef cpu_vmbits
# define cpu_vmbits cpu_data[0].vmbits
# define __NEED_VMBITS_PROBE
# endif
#if defined(CONFIG_CPU_MIPSR2_IRQ_VI) && !defined(cpu_has_vint)
# define cpu_has_vint		(cpu_data[0].options & MIPS_CPU_VINT)
#elif !defined(cpu_has_vint)
# define cpu_has_vint			0
#if defined(CONFIG_CPU_MIPSR2_IRQ_EI) && !defined(cpu_has_veic)
# define cpu_has_veic		(cpu_data[0].options & MIPS_CPU_VEIC)
#elif !defined(cpu_has_veic)
# define cpu_has_veic			0
#define cpu_has_inclusive_pcaches	(cpu_data[0].options & MIPS_CPU_INCLUSIVE_CACHES)
#define cpu_dcache_line_size()	cpu_data[0].dcache.linesz
#define cpu_icache_line_size()	cpu_data[0].icache.linesz
#define cpu_scache_line_size()	cpu_data[0].scache.linesz
#define cpu_hwrena_impl_bits		0
