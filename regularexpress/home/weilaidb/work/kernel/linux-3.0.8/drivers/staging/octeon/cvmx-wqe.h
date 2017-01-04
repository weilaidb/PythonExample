#define __CVMX_WQE_H__
#define OCT_TAG_TYPE_STRING(x)						\
(((x) == CVMX_POW_TAG_TYPE_ORDERED) ?  "ORDERED" :		\
(((x) == CVMX_POW_TAG_TYPE_ATOMIC) ?  "ATOMIC" :	\
(((x) == CVMX_POW_TAG_TYPE_NULL) ?  "NULL" :	\
"NULL_NULL")))
typedef union  cvmx_pip_wqe_word2;
typedef struct  CVMX_CACHE_LINE_ALIGNED cvmx_wqe_t;
