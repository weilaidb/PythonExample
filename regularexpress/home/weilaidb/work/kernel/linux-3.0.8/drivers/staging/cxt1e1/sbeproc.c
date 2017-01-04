#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
void        sbecom_get_brdinfo (ci_t *, struct sbe_brd_info *, u_int8_t *);
extern struct s_hdw_info hdw_info[MAX_BOARDS];
void
sbecom_proc_brd_cleanup (ci_t * ci)
static int
sbecom_proc_get_sbe_info (char *buffer, char **start, off_t offset,
int length, int *eof, void *priv)
int         __init
sbecom_proc_brd_init (ci_t * ci)
void
sbecom_proc_brd_cleanup (ci_t * ci)
int         __init
sbecom_proc_brd_init (ci_t * ci)
