int
__heap_db_create(dbp)
DB *dbp;
int
__heap_db_close(dbp)
DB *dbp;
int
__heap_get_heapsize(dbp, gbytes, bytes)
DB *dbp;
u_int32_t *gbytes, *bytes;
int
__heap_get_heap_regionsize(dbp, npages)
DB *dbp;
u_int32_t *npages;
int
__heap_set_heapsize(dbp, gbytes, bytes, flags)
DB *dbp;
u_int32_t gbytes, bytes, flags;
int
__heap_set_heap_regionsize(dbp, npages)
DB *dbp;
u_int32_t npages;
int
__heap_exist()
