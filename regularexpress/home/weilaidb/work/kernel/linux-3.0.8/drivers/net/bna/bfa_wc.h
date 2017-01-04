#define __BFA_WC_H__
typedef void (*bfa_wc_resume_t) (void *cbarg);
struct bfa_wc ;
static inline void
bfa_wc_up(struct bfa_wc *wc)
static inline void
bfa_wc_down(struct bfa_wc *wc)
static inline void
bfa_wc_init(struct bfa_wc *wc, bfa_wc_resume_t wc_resume, void *wc_cbarg)
static inline void
bfa_wc_wait(struct bfa_wc *wc)
