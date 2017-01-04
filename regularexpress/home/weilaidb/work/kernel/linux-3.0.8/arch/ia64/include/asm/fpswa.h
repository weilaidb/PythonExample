#define _ASM_IA64_FPSWA_H
typedef struct  fp_state_low_preserved_t;
typedef struct  fp_state_low_volatile_t;
typedef	struct  fp_state_high_preserved_t;
typedef struct  fp_state_high_volatile_t;
typedef struct  fp_state_t;
typedef struct  fpswa_ret_t;
typedef fpswa_ret_t (*efi_fpswa_t) (unsigned long trap_type, void *bundle, unsigned long *ipsr,
unsigned long *fsr, unsigned long *isr, unsigned long *preds,
unsigned long *ifs, fp_state_t *fp_state);
typedef struct  fpswa_interface_t;
extern fpswa_interface_t *fpswa_interface;
