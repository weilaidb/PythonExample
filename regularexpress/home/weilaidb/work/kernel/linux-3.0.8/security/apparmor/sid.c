static u32 global_sid;
static DEFINE_SPINLOCK(sid_lock);
u32 aa_alloc_sid(void)
void aa_free_sid(u32 sid)
