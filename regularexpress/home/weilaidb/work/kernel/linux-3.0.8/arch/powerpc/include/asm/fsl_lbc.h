#define __ASM_FSL_LBC_H
struct fsl_lbc_bank ;
struct fsl_lbc_regs ;
struct fsl_upm ;
extern u32 fsl_lbc_addr(phys_addr_t addr_base);
extern int fsl_lbc_find(phys_addr_t addr_base);
extern int fsl_upm_find(phys_addr_t addr_base, struct fsl_upm *upm);
static inline void fsl_upm_start_pattern(struct fsl_upm *upm, u8 pat_offset)
static inline void fsl_upm_end_pattern(struct fsl_upm *upm)
struct fsl_lbc_ctrl ;
extern int fsl_upm_run_pattern(struct fsl_upm *upm, void __iomem *io_base,
u32 mar);
extern struct fsl_lbc_ctrl *fsl_lbc_ctrl_dev;
