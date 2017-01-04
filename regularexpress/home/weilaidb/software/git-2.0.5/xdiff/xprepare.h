#if !defined(XPREPARE_H)
#define XPREPARE_H
int xdl_prepare_env(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
xdfenv_t *xe);
void xdl_free_env(xdfenv_t *xe);
