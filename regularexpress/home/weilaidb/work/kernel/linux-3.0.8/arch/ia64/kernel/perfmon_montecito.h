static int pfm_mont_pmc_check(struct task_struct *task, pfm_context_t *ctx, unsigned int cnum, unsigned long *val, struct pt_regs *regs);
#define RDEP_MONT_ETB	(RDEP(38)|RDEP(39)|RDEP(48)|RDEP(49)|RDEP(50)|RDEP(51)|RDEP(52)|RDEP(53)|RDEP(54)|\
RDEP(55)|RDEP(56)|RDEP(57)|RDEP(58)|RDEP(59)|RDEP(60)|RDEP(61)|RDEP(62)|RDEP(63))
#define RDEP_MONT_DEAR  (RDEP(32)|RDEP(33)|RDEP(36))
#define RDEP_MONT_IEAR  (RDEP(34)|RDEP(35))
static pfm_reg_desc_t pfm_mont_pmc_desc[PMU_MAX_PMCS]=;
static pfm_reg_desc_t pfm_mont_pmd_desc[PMU_MAX_PMDS]=;
static int
pfm_mont_reserved(unsigned int cnum, unsigned long *val, struct pt_regs *regs)
static int
pfm_mont_pmc_check(struct task_struct *task, pfm_context_t *ctx, unsigned int cnum, unsigned long *val, struct pt_regs *regs)
static pmu_config_t pmu_conf_mont=;
