#define _LINUX_IO_MAPPING_H
struct io_mapping ;
static inline struct io_mapping *
io_mapping_create_wc(resource_size_t base, unsigned long size)
static inline void
io_mapping_free(struct io_mapping *mapping)
static inline void __iomem *
io_mapping_map_atomic_wc(struct io_mapping *mapping,
unsigned long offset)
static inline void
io_mapping_unmap_atomic(void __iomem *vaddr)
static inline void __iomem *
io_mapping_map_wc(struct io_mapping *mapping, unsigned long offset)
static inline void
io_mapping_unmap(void __iomem *vaddr)
struct io_mapping;
static inline struct io_mapping *
io_mapping_create_wc(resource_size_t base, unsigned long size)
static inline void
io_mapping_free(struct io_mapping *mapping)
static inline void __iomem *
io_mapping_map_atomic_wc(struct io_mapping *mapping,
unsigned long offset)
static inline void
io_mapping_unmap_atomic(void __iomem *vaddr)
static inline void __iomem *
io_mapping_map_wc(struct io_mapping *mapping, unsigned long offset)
static inline void
io_mapping_unmap(void __iomem *vaddr)
