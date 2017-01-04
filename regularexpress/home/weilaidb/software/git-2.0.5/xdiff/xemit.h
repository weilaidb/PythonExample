#if !defined(XEMIT_H)
#define XEMIT_H
typedef int (*emit_func_t)(xdfenv_t *xe, xdchange_t *xscr, xdemitcb_t *ecb,
xdemitconf_t const *xecfg);
xdchange_t *xdl_get_hunk(xdchange_t **xscr, xdemitconf_t const *xecfg);
int xdl_emit_diff(xdfenv_t *xe, xdchange_t *xscr, xdemitcb_t *ecb,
xdemitconf_t const *xecfg);
