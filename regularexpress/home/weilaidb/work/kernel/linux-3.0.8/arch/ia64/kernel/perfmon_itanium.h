static int pfm_ita_pmc_check(struct task_struct *task, pfm_context_t *ctx, unsigned int cnum, unsigned long *val, struct pt_regs *regs);
static pfm_reg_desc_t pfm_ita_pmc_desc[PMU_MAX_PMCS]=;
static pfm_reg_desc_t pfm_ita_pmd_desc[PMU_MAX_PMDS]=;
static int
pfm_ita_pmc_check(struct task_struct *task, pfm_context_t *ctx, unsigned int cnum, unsigned long *val, struct pt_regs *regs)
static pmu_config_t pmu_conf_ita=;
