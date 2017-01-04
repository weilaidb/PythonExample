#define _ASM_IA64_PAL_H
#define PAL_CACHE_FLUSH		1
#define PAL_CACHE_INFO		2
#define PAL_CACHE_INIT		3
#define PAL_CACHE_SUMMARY	4
#define PAL_MEM_ATTRIB		5
#define PAL_PTCE_INFO		6
#define PAL_VM_INFO		7
#define PAL_VM_SUMMARY		8
#define PAL_BUS_GET_FEATURES	9
#define PAL_BUS_SET_FEATURES	10
#define PAL_DEBUG_INFO		11
#define PAL_FIXED_ADDR		12
#define PAL_FREQ_BASE		13
#define PAL_FREQ_RATIOS		14
#define PAL_PERF_MON_INFO	15
#define PAL_PLATFORM_ADDR	16
#define PAL_PROC_GET_FEATURES	17
#define PAL_PROC_SET_FEATURES	18
#define PAL_RSE_INFO		19
#define PAL_VERSION		20
#define PAL_MC_CLEAR_LOG	21
#define PAL_MC_DRAIN		22
#define PAL_MC_EXPECTED		23
#define PAL_MC_DYNAMIC_STATE	24
#define PAL_MC_ERROR_INFO	25
#define PAL_MC_RESUME		26
#define PAL_MC_REGISTER_MEM	27
#define PAL_HALT		28
#define PAL_HALT_LIGHT		29
#define PAL_COPY_INFO		30
#define PAL_CACHE_LINE_INIT	31
#define PAL_PMI_ENTRYPOINT	32
#define PAL_ENTER_IA_32_ENV	33
#define PAL_VM_PAGE_SIZE	34
#define PAL_MEM_FOR_TEST	37
#define PAL_CACHE_PROT_INFO	38
#define PAL_REGISTER_INFO	39
#define PAL_SHUTDOWN		40
#define PAL_PREFETCH_VISIBILITY	41
#define PAL_LOGICAL_TO_PHYSICAL 42
#define PAL_CACHE_SHARED_INFO	43
#define PAL_GET_HW_POLICY	48
#define PAL_SET_HW_POLICY	49
#define PAL_VP_INFO		50
#define PAL_MC_HW_TRACKING	51
#define PAL_COPY_PAL		256
#define PAL_HALT_INFO		257
#define PAL_TEST_PROC		258
#define PAL_CACHE_READ		259
#define PAL_CACHE_WRITE		260
#define PAL_VM_TR_READ		261
#define PAL_GET_PSTATE		262
#define PAL_SET_PSTATE		263
#define PAL_BRAND_INFO		274
#define PAL_GET_PSTATE_TYPE_LASTSET	0
#define PAL_GET_PSTATE_TYPE_AVGANDRESET	1
#define PAL_GET_PSTATE_TYPE_AVGNORESET	2
#define PAL_GET_PSTATE_TYPE_INSTANT	3
#define PAL_MC_ERROR_INJECT	276
typedef s64				pal_status_t;
#define PAL_STATUS_SUCCESS		0
#define PAL_STATUS_UNIMPLEMENTED	(-1)
#define PAL_STATUS_EINVAL		(-2)
#define PAL_STATUS_ERROR		(-3)
#define PAL_STATUS_CACHE_INIT_FAIL	(-4)
#define PAL_STATUS_REQUIRES_MEMORY	(-9)
typedef u64				pal_cache_level_t;
#define PAL_CACHE_LEVEL_L0		0
#define PAL_CACHE_LEVEL_L1		1
#define PAL_CACHE_LEVEL_L2		2
typedef u64				pal_cache_type_t;
#define PAL_CACHE_TYPE_INSTRUCTION	1
#define PAL_CACHE_TYPE_DATA		2
#define PAL_CACHE_TYPE_INSTRUCTION_DATA	3
#define PAL_CACHE_FLUSH_INVALIDATE	1
#define PAL_CACHE_FLUSH_CHK_INTRS	2
typedef int				pal_cache_line_size_t;
typedef u64				pal_cache_line_state_t;
#define PAL_CACHE_LINE_STATE_INVALID	0
#define PAL_CACHE_LINE_STATE_SHARED	1
#define PAL_CACHE_LINE_STATE_EXCLUSIVE	2
#define PAL_CACHE_LINE_STATE_MODIFIED	3
typedef struct pal_freq_ratio  itc_ratio, proc_ratio;
typedef	union  pal_cache_config_info_1_s  pal_cache_config_info_1_t;
typedef	union  pal_cache_config_info_2_s  pal_cache_config_info_2_t;
typedef struct pal_cache_config_info_s  pal_cache_config_info_t;
#define pcci_ld_hints		pcci_info_1.pcci1_bits.load_hints
#define pcci_st_hints		pcci_info_1.pcci1_bits.store_hints
#define pcci_ld_latency		pcci_info_1.pcci1_bits.load_latency
#define pcci_st_latency		pcci_info_1.pcci1_bits.store_latency
#define pcci_stride		pcci_info_1.pcci1_bits.stride
#define pcci_line_size		pcci_info_1.pcci1_bits.line_size
#define pcci_assoc		pcci_info_1.pcci1_bits.associativity
#define pcci_cache_attr		pcci_info_1.pcci1_bits.at
#define pcci_unified		pcci_info_1.pcci1_bits.u
#define pcci_tag_msb		pcci_info_2.pcci2_bits.tag_ms_bit
#define pcci_tag_lsb		pcci_info_2.pcci2_bits.tag_ls_bit
#define pcci_alias_boundary	pcci_info_2.pcci2_bits.alias_boundary
#define pcci_cache_size		pcci_info_2.pcci2_bits.cache_size
#define PAL_CACHE_ATTR_WT		0
#define PAL_CACHE_ATTR_WB		1
#define PAL_CACHE_ATTR_WT_OR_WB		2
#define PAL_CACHE_HINT_TEMP_1		0
#define PAL_CACHE_HINT_NTEMP_1		1
#define PAL_CACHE_HINT_NTEMP_ALL	3
typedef union pal_cache_protection_element_u  pal_cache_protection_element_t;
#define pcpi_cache_prot_part	pcp_info.t_d
#define pcpi_prot_method	pcp_info.method
#define pcpi_prot_bits		pcp_info.prot_bits
#define pcpi_tagprot_msb	pcp_info.tagprot_msb
#define pcpi_tagprot_lsb	pcp_info.tagprot_lsb
#define pcpi_data_bits		pcp_info.data_bits
#define PAL_CACHE_PROT_PART_DATA	0
#define PAL_CACHE_PROT_PART_TAG		1
#define PAL_CACHE_PROT_PART_TAG_DATA	2
#define PAL_CACHE_PROT_PART_DATA_TAG	3
#define PAL_CACHE_PROT_PART_MAX		6
typedef struct pal_cache_protection_info_s  pal_cache_protection_info_t;
#define PAL_CACHE_PROT_METHOD_NONE		0
#define PAL_CACHE_PROT_METHOD_ODD_PARITY	1
#define PAL_CACHE_PROT_METHOD_EVEN_PARITY	2
#define PAL_CACHE_PROT_METHOD_ECC		3
typedef union pal_cache_line_id_u  pal_cache_line_id_u_t;
#define pclid_read_part		pclid_info_read.part
#define pclid_read_way		pclid_info_read.way
#define pclid_read_level	pclid_info_read.level
#define pclid_read_cache_type	pclid_info_read.cache_type
#define pclid_write_trigger	pclid_info_write.trigger
#define pclid_write_length	pclid_info_write.length
#define pclid_write_start	pclid_info_write.start
#define pclid_write_mesi	pclid_info_write.mesi
#define pclid_write_part	pclid_info_write.part
#define pclid_write_way		pclid_info_write.way
#define pclid_write_level	pclid_info_write.level
#define pclid_write_cache_type	pclid_info_write.cache_type
#define PAL_CACHE_LINE_ID_PART_DATA		0
#define PAL_CACHE_LINE_ID_PART_TAG		1
#define PAL_CACHE_LINE_ID_PART_DATA_PROT	2
#define PAL_CACHE_LINE_ID_PART_TAG_PROT		3
#define PAL_CACHE_LINE_ID_PART_DATA_TAG_PROT	4
typedef struct pal_cache_line_info_s  pal_cache_line_info_t;
typedef u64					pal_mc_pending_events_t;
#define PAL_MC_PENDING_MCA			(1 << 0)
#define PAL_MC_PENDING_INIT			(1 << 1)
typedef u64					pal_mc_info_index_t;
#define PAL_MC_INFO_PROCESSOR			0
#define PAL_MC_INFO_CACHE_CHECK			1
#define PAL_MC_INFO_TLB_CHECK			2
#define PAL_MC_INFO_BUS_CHECK			3
#define PAL_MC_INFO_REQ_ADDR			4
#define PAL_MC_INFO_RESP_ADDR			5
#define PAL_MC_INFO_TARGET_ADDR			6
#define PAL_MC_INFO_IMPL_DEP			7
#define PAL_TLB_CHECK_OP_PURGE			8
typedef struct pal_process_state_info_s  pal_processor_state_info_t;
typedef struct pal_cache_check_info_s  pal_cache_check_info_t;
typedef struct pal_tlb_check_info_s  pal_tlb_check_info_t;
typedef struct pal_bus_check_info_s  pal_bus_check_info_t;
typedef struct pal_reg_file_check_info_s  pal_reg_file_check_info_t;
typedef struct pal_uarch_check_info_s  pal_uarch_check_info_t;
typedef union pal_mc_error_info_u  pal_mc_error_info_t;
#define pmci_proc_unknown_check			pme_processor.uc
#define pmci_proc_bus_check			pme_processor.bc
#define pmci_proc_tlb_check			pme_processor.tc
#define pmci_proc_cache_check			pme_processor.cc
#define pmci_proc_dynamic_state_size		pme_processor.dsize
#define pmci_proc_gpr_valid			pme_processor.gr
#define pmci_proc_preserved_bank0_gpr_valid	pme_processor.b0
#define pmci_proc_preserved_bank1_gpr_valid	pme_processor.b1
#define pmci_proc_fp_valid			pme_processor.fp
#define pmci_proc_predicate_regs_valid		pme_processor.pr
#define pmci_proc_branch_regs_valid		pme_processor.br
#define pmci_proc_app_regs_valid		pme_processor.ar
#define pmci_proc_region_regs_valid		pme_processor.rr
#define pmci_proc_translation_regs_valid	pme_processor.tr
#define pmci_proc_debug_regs_valid		pme_processor.dr
#define pmci_proc_perf_counters_valid		pme_processor.pc
#define pmci_proc_control_regs_valid		pme_processor.cr
#define pmci_proc_machine_check_expected	pme_processor.ex
#define pmci_proc_machine_check_corrected	pme_processor.cm
#define pmci_proc_rse_valid			pme_processor.rs
#define pmci_proc_machine_check_or_init		pme_processor.in
#define pmci_proc_dynamic_state_valid		pme_processor.dy
#define pmci_proc_operation			pme_processor.op
#define pmci_proc_trap_lost			pme_processor.tl
#define pmci_proc_hardware_damage		pme_processor.hd
#define pmci_proc_uncontained_storage_damage	pme_processor.us
#define pmci_proc_machine_check_isolated	pme_processor.ci
#define pmci_proc_continuable			pme_processor.co
#define pmci_proc_storage_intergrity_synced	pme_processor.sy
#define pmci_proc_min_state_save_area_regd	pme_processor.mn
#define	pmci_proc_distinct_multiple_errors	pme_processor.me
#define pmci_proc_pal_attempted_rendezvous	pme_processor.ra
#define pmci_proc_pal_rendezvous_complete	pme_processor.rz
#define pmci_cache_level			pme_cache.level
#define pmci_cache_line_state			pme_cache.mesi
#define pmci_cache_line_state_valid		pme_cache.mv
#define pmci_cache_line_index			pme_cache.index
#define pmci_cache_instr_cache_fail		pme_cache.ic
#define pmci_cache_data_cache_fail		pme_cache.dc
#define pmci_cache_line_tag_fail		pme_cache.tl
#define pmci_cache_line_data_fail		pme_cache.dl
#define pmci_cache_operation			pme_cache.op
#define pmci_cache_way_valid			pme_cache.wv
#define pmci_cache_target_address_valid		pme_cache.tv
#define pmci_cache_way				pme_cache.way
#define pmci_cache_mc				pme_cache.mc
#define pmci_tlb_instr_translation_cache_fail	pme_tlb.itc
#define pmci_tlb_data_translation_cache_fail	pme_tlb.dtc
#define pmci_tlb_instr_translation_reg_fail	pme_tlb.itr
#define pmci_tlb_data_translation_reg_fail	pme_tlb.dtr
#define pmci_tlb_translation_reg_slot		pme_tlb.tr_slot
#define pmci_tlb_mc				pme_tlb.mc
#define pmci_bus_status_info			pme_bus.bsi
#define pmci_bus_req_address_valid		pme_bus.rq
#define pmci_bus_resp_address_valid		pme_bus.rp
#define pmci_bus_target_address_valid		pme_bus.tv
#define pmci_bus_error_severity			pme_bus.sev
#define pmci_bus_transaction_type		pme_bus.type
#define pmci_bus_cache_cache_transfer		pme_bus.cc
#define pmci_bus_transaction_size		pme_bus.size
#define pmci_bus_internal_error			pme_bus.ib
#define pmci_bus_external_error			pme_bus.eb
#define pmci_bus_mc				pme_bus.mc
typedef struct pal_min_state_area_s  pal_min_state_area_t;
struct ia64_pal_retval ;
extern struct ia64_pal_retval ia64_pal_call_static (u64, u64, u64, u64);
extern struct ia64_pal_retval ia64_pal_call_stacked (u64, u64, u64, u64);
extern struct ia64_pal_retval ia64_pal_call_phys_static (u64, u64, u64, u64);
extern struct ia64_pal_retval ia64_pal_call_phys_stacked (u64, u64, u64, u64);
extern void ia64_save_scratch_fpregs (struct ia64_fpreg *);
extern void ia64_load_scratch_fpregs (struct ia64_fpreg *);
#define PAL_CALL(iprv,a0,a1,a2,a3) do  while (0)
#define PAL_CALL_STK(iprv,a0,a1,a2,a3) do  while (0)
#define PAL_CALL_PHYS(iprv,a0,a1,a2,a3) do  while (0)
#define PAL_CALL_PHYS_STK(iprv,a0,a1,a2,a3) do  while (0)
typedef int (*ia64_pal_handler) (u64, ...);
extern ia64_pal_handler ia64_pal;
extern void ia64_pal_handler_init (void *);
extern ia64_pal_handler ia64_pal;
extern pal_cache_config_info_t		l0d_cache_config_info;
extern pal_cache_config_info_t		l0i_cache_config_info;
extern pal_cache_config_info_t		l1_cache_config_info;
extern pal_cache_config_info_t		l2_cache_config_info;
extern pal_cache_protection_info_t	l0d_cache_protection_info;
extern pal_cache_protection_info_t	l0i_cache_protection_info;
extern pal_cache_protection_info_t	l1_cache_protection_info;
extern pal_cache_protection_info_t	l2_cache_protection_info;
extern pal_cache_config_info_t		pal_cache_config_info_get(pal_cache_level_t,
pal_cache_type_t);
extern pal_cache_protection_info_t	pal_cache_protection_info_get(pal_cache_level_t,
pal_cache_type_t);
extern void				pal_error(int);
typedef union pal_bus_features_u  pal_bus_features_u_t;
extern void pal_bus_features_print (u64);
static inline s64
ia64_pal_bus_get_features (pal_bus_features_u_t *features_avail,
pal_bus_features_u_t *features_status,
pal_bus_features_u_t *features_control)
static inline s64
ia64_pal_bus_set_features (pal_bus_features_u_t feature_select)
static inline s64
ia64_pal_cache_config_info (u64 cache_level, u64 cache_type, pal_cache_config_info_t *conf)
static inline s64
ia64_pal_cache_prot_info (u64 cache_level, u64 cache_type, pal_cache_protection_info_t *prot)
static inline s64
ia64_pal_cache_flush (u64 cache_type, u64 invalidate, u64 *progress, u64 *vector)
static inline s64
ia64_pal_cache_init (u64 level, u64 cache_type, u64 rest)
static inline s64
ia64_pal_cache_line_init (u64 physical_addr, u64 data_value)
static inline s64
ia64_pal_cache_read (pal_cache_line_id_u_t line_id, u64 physical_addr)
static inline long ia64_pal_cache_summary(unsigned long *cache_levels,
unsigned long *unique_caches)
static inline s64
ia64_pal_cache_write (pal_cache_line_id_u_t line_id, u64 physical_addr, u64 data)
static inline s64
ia64_pal_copy_info (u64 copy_type, u64 num_procs, u64 num_iopics,
u64 *buffer_size, u64 *buffer_align)
static inline s64
ia64_pal_copy_pal (u64 target_addr, u64 alloc_size, u64 processor, u64 *pal_proc_offset)
static inline long ia64_pal_debug_info(unsigned long *inst_regs,
unsigned long *data_regs)
static inline s64
ia64_pal_enter_ia32_env (ia32_env1, ia32_env2, ia32_env3)
static inline s64
ia64_pal_fixed_addr (u64 *global_unique_addr)
static inline long ia64_pal_freq_base(unsigned long *platform_base_freq)
static inline s64
ia64_pal_freq_ratios (struct pal_freq_ratio *proc_ratio, struct pal_freq_ratio *bus_ratio,
struct pal_freq_ratio *itc_ratio)
static inline s64
ia64_pal_get_hw_policy (u64 proc_num, u64 *cur_policy, u64 *num_impacted,
u64 *la)
static inline s64
ia64_pal_halt (u64 halt_state)
typedef union pal_power_mgmt_info_u  pal_power_mgmt_info_u_t;
static inline s64
ia64_pal_halt_info (pal_power_mgmt_info_u_t *power_buf)
static inline s64
ia64_pal_get_pstate (u64 *pstate_index, unsigned long type)
static inline s64
ia64_pal_set_pstate (u64 pstate_index)
static inline s64
ia64_pal_get_brand_info (char *brand_info)
static inline s64
ia64_pal_halt_light (void)
static inline s64
ia64_pal_mc_clear_log (u64 *pending_vector)
static inline s64
ia64_pal_mc_drain (void)
static inline s64
ia64_pal_mc_dynamic_state (u64 info_type, u64 dy_buffer, u64 *size)
static inline s64
ia64_pal_mc_error_info (u64 info_index, u64 type_index, u64 *size, u64 *error_info)
static inline s64
ia64_pal_mc_error_inject_phys (u64 err_type_info, u64 err_struct_info,
u64 err_data_buffer, u64 *capabilities, u64 *resources)
static inline s64
ia64_pal_mc_error_inject_virt (u64 err_type_info, u64 err_struct_info,
u64 err_data_buffer, u64 *capabilities, u64 *resources)
static inline s64
ia64_pal_mc_expected (u64 expected, u64 *previous)
typedef union pal_hw_tracking_u  pal_hw_tracking_u_t;
static inline s64
ia64_pal_mc_hw_tracking (u64 *status)
static inline s64
ia64_pal_mc_register_mem (u64 physical_addr, u64 size, u64 *req_size)
static inline s64
ia64_pal_mc_resume (u64 set_cmci, u64 save_ptr)
static inline s64
ia64_pal_mem_attrib (u64 *mem_attrib)
static inline s64
ia64_pal_mem_for_test (u64 *bytes_needed, u64 *alignment)
typedef union pal_perf_mon_info_u  pal_perf_mon_info_u_t;
static inline s64
ia64_pal_perf_mon_info (u64 *pm_buffer, pal_perf_mon_info_u_t *pm_info)
static inline s64
ia64_pal_platform_addr (u64 type, u64 physical_addr)
static inline s64
ia64_pal_pmi_entrypoint (u64 sal_pmi_entry_addr)
struct pal_features_s;
static inline s64
ia64_pal_proc_get_features (u64 *features_avail,
u64 *features_status,
u64 *features_control,
u64 features_set)
static inline s64
ia64_pal_proc_set_features (u64 feature_select)
typedef struct ia64_ptce_info_s  ia64_ptce_info_t;
static inline s64
ia64_get_ptce (ia64_ptce_info_t *ptce)
static inline s64
ia64_pal_register_info (u64 info_request, u64 *reg_info_1, u64 *reg_info_2)
typedef union pal_hints_u  pal_hints_u_t;
static inline long ia64_pal_rse_info(unsigned long *num_phys_stacked,
pal_hints_u_t *hints)
static inline s64
ia64_pal_set_hw_policy (u64 policy)
static inline s64
ia64_pal_shutdown (void)
static inline s64
ia64_pal_test_proc (u64 test_addr, u64 test_size, u64 attributes, u64 *self_test_state)
typedef union  pal_version_u  pal_version_u_t;
static inline s64
ia64_pal_version (pal_version_u_t *pal_min_version, pal_version_u_t *pal_cur_version)
typedef union pal_tc_info_u  pal_tc_info_u_t;
#define tc_reduce_tr		pal_tc_info_s.reduce_tr
#define tc_unified		pal_tc_info_s.unified
#define tc_pf			pal_tc_info_s.pf
#define tc_num_entries		pal_tc_info_s.num_entries
#define tc_associativity	pal_tc_info_s.associativity
#define tc_num_sets		pal_tc_info_s.num_sets
static inline s64
ia64_pal_vm_info (u64 tc_level, u64 tc_type,  pal_tc_info_u_t *tc_info, u64 *tc_pages)
static inline s64 ia64_pal_vm_page_size(u64 *tr_pages, u64 *vw_pages)
typedef union pal_vm_info_1_u  pal_vm_info_1_u_t;
#define PAL_MAX_PURGES		0xFFFF
typedef union pal_vm_info_2_u  pal_vm_info_2_u_t;
static inline s64
ia64_pal_vm_summary (pal_vm_info_1_u_t *vm_info_1, pal_vm_info_2_u_t *vm_info_2)
typedef union pal_vp_info_u  pal_vp_info_u_t;
static inline s64
ia64_pal_vp_info (u64 feature_set, u64 vp_buffer, u64 *vp_info, u64 *vmm_id)
typedef union pal_itr_valid_u  pal_tr_valid_u_t;
static inline s64
ia64_pal_tr_read (u64 reg_num, u64 tr_type, u64 *tr_buffer, pal_tr_valid_u_t *tr_valid)
#define PAL_VISIBILITY_VIRTUAL		0
#define PAL_VISIBILITY_PHYSICAL		1
#define PAL_VISIBILITY_OK		1
#define PAL_VISIBILITY_OK_REMOTE_NEEDED	0
#define PAL_VISIBILITY_INVAL_ARG	-2
#define PAL_VISIBILITY_ERROR		-3
static inline s64
ia64_pal_prefetch_visibility (s64 trans_type)
typedef union pal_log_overview_u  pal_log_overview_t;
typedef union pal_proc_n_log_info1_u pal_proc_n_log_info1_t;
typedef union pal_proc_n_log_info2_u  pal_proc_n_log_info2_t;
typedef struct pal_logical_to_physical_s
pal_logical_to_physical_t;
#define overview_num_log	overview.overview_bits.num_log
#define overview_tpc		overview.overview_bits.tpc
#define overview_cpp		overview.overview_bits.cpp
#define overview_ppid		overview.overview_bits.ppid
#define log1_tid		ppli1.ppli1_bits.tid
#define log1_cid		ppli1.ppli1_bits.cid
#define log2_la			ppli2.ppli2_bits.la
static inline s64
ia64_pal_logical_to_phys(u64 proc_number, pal_logical_to_physical_t *mapping)
typedef struct pal_cache_shared_info_s
pal_cache_shared_info_t;
static inline s64
ia64_pal_cache_shared_info(u64 level,
u64 type,
u64 proc_number,
pal_cache_shared_info_t *info)
