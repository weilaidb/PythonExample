static int __seq_print_all __P((DB_SEQUENCE *, u_int32_t));
static int __seq_print_stats __P((DB_SEQUENCE *, u_int32_t));
int
__seq_stat(seq, spp, flags)
DB_SEQUENCE *seq;
DB_SEQUENCE_STAT **spp;
u_int32_t flags;
int
__seq_stat_print(seq, flags)
DB_SEQUENCE *seq;
u_int32_t flags;
static const FN __db_seq_flags_fn[] = ;
const FN *
__db_get_seq_flags_fn()
static int
__seq_print_stats(seq, flags)
DB_SEQUENCE *seq;
u_int32_t flags;
static int
__seq_print_all(seq, flags)
DB_SEQUENCE *seq;
u_int32_t flags;
int
__seq_stat(seq, statp, flags)
DB_SEQUENCE *seq;
DB_SEQUENCE_STAT **statp;
u_int32_t flags;
int
__seq_stat_print(seq, flags)
DB_SEQUENCE *seq;
u_int32_t flags;
const FN *
__db_get_seq_flags_fn()
