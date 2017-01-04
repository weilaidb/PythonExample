#define __ASM_PREFETCH_H
#define Pref_Load			0
#define Pref_Store			1
#define Pref_LoadStreamed		4
#define Pref_StoreStreamed		5
#define Pref_LoadRetained		6
#define Pref_StoreRetained		7
#define Pref_WriteBackInvalidate	25
#define Pref_PrepareForStore		30
.macro	__pref hint addr
pref	\hint, \addr
.endm
.macro	pref_load addr
__pref	Pref_Load, \addr
.endm
.macro	pref_store addr
__pref	Pref_Store, \addr
.endm
.macro	pref_load_streamed addr
__pref	Pref_LoadStreamed, \addr
.endm
.macro	pref_store_streamed addr
__pref	Pref_StoreStreamed, \addr
.endm
.macro	pref_load_retained addr
__pref	Pref_LoadRetained, \addr
.endm
.macro	pref_store_retained addr
__pref	Pref_StoreRetained, \addr
.endm
.macro	pref_wback_inv addr
__pref	Pref_WriteBackInvalidate, \addr
.endm
.macro	pref_prepare_for_store addr
__pref	Pref_PrepareForStore, \addr
.endm
