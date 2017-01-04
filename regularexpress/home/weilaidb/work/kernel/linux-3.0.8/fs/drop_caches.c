int sysctl_drop_caches;
static void drop_pagecache_sb(struct super_block *sb, void *unused)
static void drop_slab(void)
int drop_caches_sysctl_handler(ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
