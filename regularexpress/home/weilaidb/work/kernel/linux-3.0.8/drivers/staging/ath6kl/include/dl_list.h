#define __DL_LIST_H___
#define A_CONTAINING_STRUCT(address, struct_type, field_name)\
((struct_type *)((unsigned long)(address) - (unsigned long)(&((struct_type *)0)->field_name)))
struct dl_list ;
#define DL_LIST_INIT(pList)\
#define DL_LIST_INIT_AND_ADD(pList,pItem) \
#define DL_LIST_IS_EMPTY(pList) (((pList)->pPrev == (pList)) && ((pList)->pNext == (pList)))
#define DL_LIST_GET_ITEM_AT_HEAD(pList) (pList)->pNext
#define DL_LIST_GET_ITEM_AT_TAIL(pList) (pList)->pPrev
#define ITERATE_OVER_LIST(pStart, pTemp) \
for((pTemp) =(pStart)->pNext; pTemp != (pStart); (pTemp) = (pTemp)->pNext)
#define ITERATE_OVER_LIST_ALLOW_REMOVE(pStart,pItem,st,offset)  \
static INLINE struct dl_list *DL_ListInsertTail(struct dl_list *pList, struct dl_list *pAdd)
static INLINE struct dl_list * DL_ListInsertHead(struct dl_list * pList, struct dl_list * pAdd)
#define DL_ListAdd(pList,pItem) DL_ListInsertHead((pList),(pItem))
static INLINE struct dl_list * DL_ListRemove(struct dl_list * pDel)
static INLINE struct dl_list * DL_ListRemoveItemFromHead(struct dl_list * pList)
static INLINE struct dl_list * DL_ListRemoveItemFromTail(struct dl_list * pList)
static INLINE void DL_ListTransferItemsToTail(struct dl_list * pDest, struct dl_list * pSrc)
