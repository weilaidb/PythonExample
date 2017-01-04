static map_word __xipram simple_map_read(struct map_info *map, unsigned long ofs)
static void __xipram simple_map_write(struct map_info *map, const map_word datum, unsigned long ofs)
static void __xipram simple_map_copy_from(struct map_info *map, void *to, unsigned long from, ssize_t len)
static void __xipram simple_map_copy_to(struct map_info *map, unsigned long to, const void *from, ssize_t len)
void simple_map_init(struct map_info *map)
EXPORT_SYMBOL(simple_map_init);
MODULE_LICENSE("GPL");
