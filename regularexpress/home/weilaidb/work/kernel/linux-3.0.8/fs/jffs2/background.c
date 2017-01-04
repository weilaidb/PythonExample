static int jffs2_garbage_collect_thread(void *);
void jffs2_garbage_collect_trigger(struct jffs2_sb_info *c)
int jffs2_start_garbage_collect_thread(struct jffs2_sb_info *c)
void jffs2_stop_garbage_collect_thread(struct jffs2_sb_info *c)
static int jffs2_garbage_collect_thread(void *_c)
