int ewah_serialize_native(struct ewah_bitmap *self, int fd)
int ewah_serialize_to(struct ewah_bitmap *self,
int (*write_fun)(void *, const void *, size_t),
void *data)
static int write_helper(void *fd, const void *buf, size_t len)
int ewah_serialize(struct ewah_bitmap *self, int fd)
int ewah_read_mmap(struct ewah_bitmap *self, void *map, size_t len)
int ewah_deserialize(struct ewah_bitmap *self, int fd)
