static int __db_quicksort __P((DB *, DBT *, DBT *, u_int32_t *, u_int32_t *,
u_int32_t *, u_int32_t *, u_int32_t));
int
__db_compare_both(db, akey, adata, bkey, bdata)
DB *db;
const DBT *akey;
const DBT *adata;
const DBT *bkey;
const DBT *bdata;
#define	DB_SORT_SWAP(a, ad, b, bd)					\
do  while (0)
#define	DB_SORT_LOAD_DBT(a, ad, aptr, adptr)				\
do  while (0)
#define	DB_SORT_COMPARE(a, ad, b, bd) (data != NULL ?			\
__db_compare_both(db, &(a), &(ad), &(b), &(bd)) :		\
__db_compare_both(db, &(a), 0, &(b), 0))
#define	DB_SORT_STACKSIZE 32
static int
__db_quicksort(db, key, data, kstart, kend, dstart, dend, size)
DB *db;
DBT *key, *data;
u_int32_t *kstart, *kend, *dstart, *dend;
u_int32_t size;
#undef DB_SORT_SWAP
#undef DB_SORT_LOAD_DBT
int
__db_sort_multiple(db, key, data, flags)
DB *db;
DBT *key, *data;
u_int32_t flags;
