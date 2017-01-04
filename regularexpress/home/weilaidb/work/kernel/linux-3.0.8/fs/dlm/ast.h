#define __ASTD_DOT_H__
void dlm_del_ast(struct dlm_lkb *lkb);
int dlm_add_lkb_callback(struct dlm_lkb *lkb, uint32_t flags, int mode,
int status, uint32_t sbflags, uint64_t seq);
int dlm_rem_lkb_callback(struct dlm_ls *ls, struct dlm_lkb *lkb,
struct dlm_callback *cb, int *resid);
void dlm_add_ast(struct dlm_lkb *lkb, uint32_t flags, int mode, int status,
uint32_t sbflags);
void dlm_astd_wake(void);
int dlm_astd_start(void);
void dlm_astd_stop(void);
void dlm_astd_suspend(void);
void dlm_astd_resume(void);
