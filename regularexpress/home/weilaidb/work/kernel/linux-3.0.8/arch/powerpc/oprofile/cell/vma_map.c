void vma_map_free(struct vma_to_fileoffset_map *map)
unsigned int
vma_map_lookup(struct vma_to_fileoffset_map *map, unsigned int vma,
const struct spu *aSpu, int *grd_val)
static struct vma_to_fileoffset_map *
vma_map_add(struct vma_to_fileoffset_map *map, unsigned int vma,
unsigned int size, unsigned int offset, unsigned int guard_ptr,
unsigned int guard_val)
struct vma_to_fileoffset_map *create_vma_map(const struct spu *aSpu,
unsigned long __spu_elf_start)
