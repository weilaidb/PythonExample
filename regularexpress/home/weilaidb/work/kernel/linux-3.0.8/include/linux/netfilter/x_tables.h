#define _X_TABLES_H
#define XT_FUNCTION_MAXNAMELEN 30
#define XT_EXTENSION_MAXNAMELEN 29
#define XT_TABLE_MAXNAMELEN 32
struct xt_entry_match ;
struct xt_entry_target ;
#define XT_TARGET_INIT(__name, __size)					       \
struct xt_standard_target ;
struct xt_error_target ;
struct xt_get_revision ;
#define XT_CONTINUE 0xFFFFFFFF
#define XT_RETURN (-NF_REPEAT - 1)
struct _xt_align ;
#define XT_ALIGN(s) __ALIGN_KERNEL((s), __alignof__(struct _xt_align))
#define XT_STANDARD_TARGET ""
#define XT_ERROR_TARGET "ERROR"
#define SET_COUNTER(c,b,p) do  while(0)
#define ADD_COUNTER(c,b,p) do  while(0)
struct xt_counters ;
struct xt_counters_info ;
#define XT_INV_PROTO		0x40
#define XT_MATCH_ITERATE(type, e, fn, args...)			\
()
#define XT_ENTRY_ITERATE_CONTINUE(type, entries, size, n, fn, args...) \
()
#define XT_ENTRY_ITERATE(type, entries, size, fn, args...) \
XT_ENTRY_ITERATE_CONTINUE(type, entries, size, 0, fn, args)
#define xt_entry_foreach(pos, ehead, esize) \
for ((pos) = (typeof(pos))(ehead); \
(pos) < (typeof(pos))((char *)(ehead) + (esize)); \
(pos) = (typeof(pos))((char *)(pos) + (pos)->next_offset))
#define xt_ematch_foreach(pos, entry) \
for ((pos) = (struct xt_entry_match *)entry->elems; \
(pos) < (struct xt_entry_match *)((char *)(entry) + \
(entry)->target_offset); \
(pos) = (struct xt_entry_match *)((char *)(pos) + \
(pos)->u.match_size))
struct xt_action_param ;
struct xt_mtchk_param ;
struct xt_mtdtor_param ;
struct xt_tgchk_param ;
struct xt_tgdtor_param ;
struct xt_match ;
struct xt_target ;
struct xt_table ;
struct xt_table_info ;
#define XT_TABLE_INFO_SZ (offsetof(struct xt_table_info, entries) \
+ nr_cpu_ids * sizeof(char *))
extern int xt_register_target(struct xt_target *target);
extern void xt_unregister_target(struct xt_target *target);
extern int xt_register_targets(struct xt_target *target, unsigned int n);
extern void xt_unregister_targets(struct xt_target *target, unsigned int n);
extern int xt_register_match(struct xt_match *target);
extern void xt_unregister_match(struct xt_match *target);
extern int xt_register_matches(struct xt_match *match, unsigned int n);
extern void xt_unregister_matches(struct xt_match *match, unsigned int n);
extern int xt_check_match(struct xt_mtchk_param *,
unsigned int size, u_int8_t proto, bool inv_proto);
extern int xt_check_target(struct xt_tgchk_param *,
unsigned int size, u_int8_t proto, bool inv_proto);
extern struct xt_table *xt_register_table(struct net *net,
const struct xt_table *table,
struct xt_table_info *bootstrap,
struct xt_table_info *newinfo);
extern void *xt_unregister_table(struct xt_table *table);
extern struct xt_table_info *xt_replace_table(struct xt_table *table,
unsigned int num_counters,
struct xt_table_info *newinfo,
int *error);
extern struct xt_match *xt_find_match(u8 af, const char *name, u8 revision);
extern struct xt_target *xt_find_target(u8 af, const char *name, u8 revision);
extern struct xt_match *xt_request_find_match(u8 af, const char *name,
u8 revision);
extern struct xt_target *xt_request_find_target(u8 af, const char *name,
u8 revision);
extern int xt_find_revision(u8 af, const char *name, u8 revision,
int target, int *err);
extern struct xt_table *xt_find_table_lock(struct net *net, u_int8_t af,
const char *name);
extern void xt_table_unlock(struct xt_table *t);
extern int xt_proto_init(struct net *net, u_int8_t af);
extern void xt_proto_fini(struct net *net, u_int8_t af);
extern struct xt_table_info *xt_alloc_table_info(unsigned int size);
extern void xt_free_table_info(struct xt_table_info *info);
DECLARE_PER_CPU(seqcount_t, xt_recseq);
static inline unsigned int xt_write_recseq_begin(void)
static inline void xt_write_recseq_end(unsigned int addend)
static inline unsigned long ifname_compare_aligned(const char *_a,
const char *_b,
const char *_mask)
extern struct nf_hook_ops *xt_hook_link(const struct xt_table *, nf_hookfn *);
extern void xt_hook_unlink(const struct xt_table *, struct nf_hook_ops *);
struct compat_xt_entry_match ;
struct compat_xt_entry_target ;
struct compat_xt_counters ;
struct compat_xt_counters_info ;
struct _compat_xt_align ;
#define COMPAT_XT_ALIGN(s) __ALIGN_KERNEL((s), __alignof__(struct _compat_xt_align))
extern void xt_compat_lock(u_int8_t af);
extern void xt_compat_unlock(u_int8_t af);
extern int xt_compat_add_offset(u_int8_t af, unsigned int offset, int delta);
extern void xt_compat_flush_offsets(u_int8_t af);
extern void xt_compat_init_offsets(u_int8_t af, unsigned int number);
extern int xt_compat_calc_jump(u_int8_t af, unsigned int offset);
extern int xt_compat_match_offset(const struct xt_match *match);
extern int xt_compat_match_from_user(struct xt_entry_match *m,
void **dstptr, unsigned int *size);
extern int xt_compat_match_to_user(const struct xt_entry_match *m,
void __user **dstptr, unsigned int *size);
extern int xt_compat_target_offset(const struct xt_target *target);
extern void xt_compat_target_from_user(struct xt_entry_target *t,
void **dstptr, unsigned int *size);
extern int xt_compat_target_to_user(const struct xt_entry_target *t,
void __user **dstptr, unsigned int *size);
