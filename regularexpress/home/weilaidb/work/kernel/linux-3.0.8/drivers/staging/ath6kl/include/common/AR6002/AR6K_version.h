#define __VER_MAJOR_ 3
#define __VER_MINOR_ 0
#define __VER_PATCH_ 0
#define __BUILD_NUMBER_ 233
#define VER_MAJOR_BIT_OFFSET        28
#define VER_MINOR_BIT_OFFSET        24
#define VER_PATCH_BIT_OFFSET        16
#define VER_BUILD_NUM_BIT_OFFSET    0
#define AR6K_SW_VERSION     ( ( __VER_MAJOR_ << VER_MAJOR_BIT_OFFSET ) + ( __VER_MINOR_ << VER_MINOR_BIT_OFFSET ) + ( __VER_PATCH_ << VER_PATCH_BIT_OFFSET ) + ( __BUILD_NUMBER_ << VER_BUILD_NUM_BIT_OFFSET ) )
#define AR6K_ABI_VERSION        1