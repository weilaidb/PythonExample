#define _SVGA3D_REG_H_
#define SVGA3D_MAKE_HWVERSION(major, minor)      (((major) << 16) | ((minor) & 0xFF))
#define SVGA3D_MAJOR_HWVERSION(version)          ((version) >> 16)
#define SVGA3D_MINOR_HWVERSION(version)          ((version) & 0xFF)
typedef enum  SVGA3dHardwareVersion;
typedef uint32 SVGA3dBool;
#define SVGA3D_NUM_CLIPPLANES                   6
#define SVGA3D_MAX_SIMULTANEOUS_RENDER_TARGETS  8
typedef enum SVGA3dSurfaceFormat  SVGA3dSurfaceFormat;
typedef uint32 SVGA3dColor;
typedef enum  SVGA3dFormatOp;
typedef union  SVGA3dSurfaceFormatCaps;
typedef enum  SVGA3dRenderStateName;
typedef enum  SVGA3dVertexMaterial;
typedef enum  SVGA3dFillModeType;
typedef
union  SVGA3dFillMode;
typedef enum  SVGA3dShadeMode;
typedef
union  SVGA3dLinePattern;
typedef enum  SVGA3dBlendOp;
typedef enum  SVGA3dBlendEquation;
typedef enum  SVGA3dFrontWinding;
typedef enum  SVGA3dFace;
typedef enum  SVGA3dCmpFunc;
typedef enum  SVGA3dFogFunction;
typedef enum  SVGA3dFogType;
typedef enum  SVGA3dFogBase;
typedef enum  SVGA3dStencilOp;
typedef enum  SVGA3dClipPlanes;
typedef enum  SVGA3dClearFlag;
typedef enum  SVGA3dRenderTargetType;
#define SVGA3D_MAX_RT_COLOR (SVGA3D_RT_COLOR7 - SVGA3D_RT_COLOR0 + 1)
typedef
union  SVGA3dColorMask;
typedef enum  SVGA3dVertexBlendFlags;
typedef enum  SVGA3dWrapFlags;
typedef enum  SVGA3dTextureStateName;
typedef enum  SVGA3dTextureCombiner;
#define SVGA3D_TC_CAP_BIT(svga3d_tc_op) (svga3d_tc_op ? (1 << (svga3d_tc_op - 1)) : 0)
typedef enum  SVGA3dTextureAddress;
typedef enum  SVGA3dTextureFilter;
typedef enum  SVGA3dTexTransformFlags;
typedef enum  SVGA3dTextureCoordGen;
typedef enum  SVGA3dTextureArgData;
#define SVGA3D_TM_MASK_LEN 4
typedef enum  SVGA3dTextureArgModifier;
#define SVGA3D_INVALID_ID         ((uint32)-1)
#define SVGA3D_MAX_CLIP_PLANES    6
#define SVGA3D_MAX_TEXTURE_COORDS 8
typedef enum  SVGA3dDeclUsage;
typedef enum  SVGA3dDeclMethod;
typedef enum  SVGA3dDeclType;
typedef union  SVGA3dVertexDivisor;
typedef enum  SVGA3dPrimitiveType;
typedef enum  SVGA3dCoordinateType;
typedef enum  SVGA3dTransformType;
typedef enum  SVGA3dLightType;
typedef enum  SVGA3dCubeFace;
typedef enum  SVGA3dShaderType;
typedef enum  SVGA3dShaderConstType;
#define SVGA3D_MAX_SURFACE_FACES                6
typedef enum  SVGA3dStretchBltMode;
typedef enum  SVGA3dQueryType;
typedef enum  SVGA3dQueryState;
typedef enum  SVGA3dTransferType;
#define SVGA3D_MAX_VERTEX_ARRAYS   32
#define SVGA_3D_CMD_LEGACY_BASE            1000
#define SVGA_3D_CMD_BASE                   1040
#define SVGA_3D_CMD_SURFACE_DEFINE         SVGA_3D_CMD_BASE + 0
#define SVGA_3D_CMD_SURFACE_DESTROY        SVGA_3D_CMD_BASE + 1
#define SVGA_3D_CMD_SURFACE_COPY           SVGA_3D_CMD_BASE + 2
#define SVGA_3D_CMD_SURFACE_STRETCHBLT     SVGA_3D_CMD_BASE + 3
#define SVGA_3D_CMD_SURFACE_DMA            SVGA_3D_CMD_BASE + 4
#define SVGA_3D_CMD_CONTEXT_DEFINE         SVGA_3D_CMD_BASE + 5
#define SVGA_3D_CMD_CONTEXT_DESTROY        SVGA_3D_CMD_BASE + 6
#define SVGA_3D_CMD_SETTRANSFORM           SVGA_3D_CMD_BASE + 7
#define SVGA_3D_CMD_SETZRANGE              SVGA_3D_CMD_BASE + 8
#define SVGA_3D_CMD_SETRENDERSTATE         SVGA_3D_CMD_BASE + 9
#define SVGA_3D_CMD_SETRENDERTARGET        SVGA_3D_CMD_BASE + 10
#define SVGA_3D_CMD_SETTEXTURESTATE        SVGA_3D_CMD_BASE + 11
#define SVGA_3D_CMD_SETMATERIAL            SVGA_3D_CMD_BASE + 12
#define SVGA_3D_CMD_SETLIGHTDATA           SVGA_3D_CMD_BASE + 13
#define SVGA_3D_CMD_SETLIGHTENABLED        SVGA_3D_CMD_BASE + 14
#define SVGA_3D_CMD_SETVIEWPORT            SVGA_3D_CMD_BASE + 15
#define SVGA_3D_CMD_SETCLIPPLANE           SVGA_3D_CMD_BASE + 16
#define SVGA_3D_CMD_CLEAR                  SVGA_3D_CMD_BASE + 17
#define SVGA_3D_CMD_PRESENT                SVGA_3D_CMD_BASE + 18
#define SVGA_3D_CMD_SHADER_DEFINE          SVGA_3D_CMD_BASE + 19
#define SVGA_3D_CMD_SHADER_DESTROY         SVGA_3D_CMD_BASE + 20
#define SVGA_3D_CMD_SET_SHADER             SVGA_3D_CMD_BASE + 21
#define SVGA_3D_CMD_SET_SHADER_CONST       SVGA_3D_CMD_BASE + 22
#define SVGA_3D_CMD_DRAW_PRIMITIVES        SVGA_3D_CMD_BASE + 23
#define SVGA_3D_CMD_SETSCISSORRECT         SVGA_3D_CMD_BASE + 24
#define SVGA_3D_CMD_BEGIN_QUERY            SVGA_3D_CMD_BASE + 25
#define SVGA_3D_CMD_END_QUERY              SVGA_3D_CMD_BASE + 26
#define SVGA_3D_CMD_WAIT_FOR_QUERY         SVGA_3D_CMD_BASE + 27
#define SVGA_3D_CMD_PRESENT_READBACK       SVGA_3D_CMD_BASE + 28
#define SVGA_3D_CMD_BLIT_SURFACE_TO_SCREEN SVGA_3D_CMD_BASE + 29
#define SVGA_3D_CMD_MAX                    SVGA_3D_CMD_BASE + 30
#define SVGA_3D_CMD_FUTURE_MAX             2000
typedef struct  SVGA3dFogMode;
typedef
struct SVGA3dSurfaceImageId  SVGA3dSurfaceImageId;
typedef
struct SVGA3dGuestImage  SVGA3dGuestImage;
typedef
struct  SVGA3dCmdHeader;
typedef
struct  SVGA3dSize;
typedef enum  SVGA3dSurfaceFlags;
typedef
struct  SVGA3dSurfaceFace;
typedef
struct  SVGA3dCmdDefineSurface;
typedef
struct  SVGA3dCmdDestroySurface;
typedef
struct  SVGA3dCmdDefineContext;
typedef
struct  SVGA3dCmdDestroyContext;
typedef
struct  SVGA3dCmdClear;
typedef
struct SVGA3dCopyRect  SVGA3dCopyRect;
typedef
struct SVGA3dCopyBox  SVGA3dCopyBox;
typedef
struct  SVGA3dRect;
typedef
struct  SVGA3dBox;
typedef
struct  SVGA3dPoint;
typedef
struct  SVGA3dLightData;
typedef
struct  SVGA3dCmdPresent;
typedef
struct  SVGA3dRenderState;
typedef
struct  SVGA3dCmdSetRenderState;
typedef
struct  SVGA3dCmdSetRenderTarget;
typedef
struct  SVGA3dCmdSurfaceCopy;
typedef
struct  SVGA3dCmdSurfaceStretchBlt;
typedef
struct  SVGA3dSurfaceDMAFlags;
typedef
struct  SVGA3dCmdSurfaceDMA;
typedef
struct  SVGA3dCmdSurfaceDMASuffix;
typedef
struct  SVGA3dArrayRangeHint;
typedef
struct  SVGA3dArray;
typedef
struct  SVGA3dVertexArrayIdentity;
typedef
struct  SVGA3dVertexDecl;
typedef
struct  SVGA3dPrimitiveRange;
typedef
struct  SVGA3dCmdDrawPrimitives;
typedef
struct  SVGA3dTextureState;
typedef
struct  SVGA3dCmdSetTextureState;
typedef
struct  SVGA3dCmdSetTransform;
typedef
struct  SVGA3dZRange;
typedef
struct  SVGA3dCmdSetZRange;
typedef
struct  SVGA3dMaterial;
typedef
struct  SVGA3dCmdSetMaterial;
typedef
struct  SVGA3dCmdSetLightData;
typedef
struct  SVGA3dCmdSetLightEnabled;
typedef
struct  SVGA3dCmdSetViewport;
typedef
struct  SVGA3dCmdSetScissorRect;
typedef
struct  SVGA3dCmdSetClipPlane;
typedef
struct  SVGA3dCmdDefineShader;
typedef
struct  SVGA3dCmdDestroyShader;
typedef
struct  SVGA3dCmdSetShaderConst;
typedef
struct  SVGA3dCmdSetShader;
typedef
struct  SVGA3dCmdBeginQuery;
typedef
struct  SVGA3dCmdEndQuery;
typedef
struct  SVGA3dCmdWaitForQuery;
typedef
struct  SVGA3dQueryResult;
typedef
struct  SVGA3dCmdBlitSurfaceToScreen;
typedef enum  SVGA3dDevCapIndex;
typedef union  SVGA3dDevCapResult;
