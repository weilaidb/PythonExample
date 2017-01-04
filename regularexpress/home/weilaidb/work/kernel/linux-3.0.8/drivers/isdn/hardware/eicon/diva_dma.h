#define __DIVA_DMA_MAPPING_IFC_H__
typedef struct _diva_dma_map_entry  diva_dma_map_entry_t;
struct _diva_dma_map_entry* diva_alloc_dma_map (void* os_context, int nentries);
void diva_init_dma_map_entry (struct _diva_dma_map_entry* pmap,
int nr, void* virt, dword phys,
void* addr_handle);
int diva_alloc_dma_map_entry (struct _diva_dma_map_entry* pmap);
void diva_free_dma_map_entry (struct _diva_dma_map_entry* pmap, int entry);
void diva_get_dma_map_entry (struct _diva_dma_map_entry* pmap, int nr,
void** pvirt, dword* pphys);
void diva_free_dma_mapping (struct _diva_dma_map_entry* pmap);
void diva_init_dma_map (void* hdev,
struct _diva_dma_map_entry** ppmap,
int nentries);
void diva_free_dma_map (void* hdev,
struct _diva_dma_map_entry* pmap);
void* diva_get_entry_handle (struct _diva_dma_map_entry* pmap, int nr);
