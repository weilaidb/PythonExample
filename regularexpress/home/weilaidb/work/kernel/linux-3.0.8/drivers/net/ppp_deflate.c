struct ppp_deflate_state ;
#define DEFLATE_OVHD	2
static void	*z_comp_alloc(unsigned char *options, int opt_len);
static void	*z_decomp_alloc(unsigned char *options, int opt_len);
static void	z_comp_free(void *state);
static void	z_decomp_free(void *state);
static int	z_comp_init(void *state, unsigned char *options,
int opt_len,
int unit, int hdrlen, int debug);
static int	z_decomp_init(void *state, unsigned char *options,
int opt_len,
int unit, int hdrlen, int mru, int debug);
static int	z_compress(void *state, unsigned char *rptr,
unsigned char *obuf,
int isize, int osize);
static void	z_incomp(void *state, unsigned char *ibuf, int icnt);
static int	z_decompress(void *state, unsigned char *ibuf,
int isize, unsigned char *obuf, int osize);
static void	z_comp_reset(void *state);
static void	z_decomp_reset(void *state);
static void	z_comp_stats(void *state, struct compstat *stats);
static void z_comp_free(void *arg)
static void *z_comp_alloc(unsigned char *options, int opt_len)
static int z_comp_init(void *arg, unsigned char *options, int opt_len,
int unit, int hdrlen, int debug)
static void z_comp_reset(void *arg)
static int z_compress(void *arg, unsigned char *rptr, unsigned char *obuf,
int isize, int osize)
static void z_comp_stats(void *arg, struct compstat *stats)
static void z_decomp_free(void *arg)
static void *z_decomp_alloc(unsigned char *options, int opt_len)
static int z_decomp_init(void *arg, unsigned char *options, int opt_len,
int unit, int hdrlen, int mru, int debug)
static void z_decomp_reset(void *arg)
static int z_decompress(void *arg, unsigned char *ibuf, int isize,
unsigned char *obuf, int osize)
static void z_incomp(void *arg, unsigned char *ibuf, int icnt)
extern int  ppp_register_compressor   (struct compressor *cp);
extern void ppp_unregister_compressor (struct compressor *cp);
static struct compressor ppp_deflate = ;
static struct compressor ppp_deflate_draft = ;
static int __init deflate_init(void)
static void __exit deflate_cleanup(void)
module_init(deflate_init);
module_exit(deflate_cleanup);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_ALIAS("ppp-compress-" __stringify(CI_DEFLATE));
MODULE_ALIAS("ppp-compress-" __stringify(CI_DEFLATE_DRAFT));
