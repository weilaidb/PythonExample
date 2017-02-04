#if HAVE_WINDOWS_H
#define WIN32_LEAN_AND_MEAN
#if HAVE_OPENGL_GL3_H
#elif HAVE_ES2_GL_H
#if HAVE_GLXGETPROCADDRESS
#if HAVE_SDL2
#define APIENTRY
defined
#define FF_GL_RED_COMPONENT GL_RED
defined
#define FF_GL_RED_COMPONENT GL_LUMINANCE
#define FF_GL_RED_COMPONENT 0x1903;
#define FF_GL_UNSIGNED_BYTE_3_3_2 0x8032
#define FF_GL_UNSIGNED_BYTE_2_3_3_REV 0x8362
#define FF_GL_UNSIGNED_SHORT_1_5_5_5_REV 0x8366
#define FF_GL_UNPACK_ROW_LENGTH          0x0CF2
#define FF_GL_ARRAY_BUFFER                0x8892
#define FF_GL_ELEMENT_ARRAY_BUFFER        0x8893
#define FF_GL_STATIC_DRAW                 0x88E4
#define FF_GL_FRAGMENT_SHADER             0x8B30
#define FF_GL_VERTEX_SHADER               0x8B31
#define FF_GL_COMPILE_STATUS              0x8B81
#define FF_GL_LINK_STATUS                 0x8B82
#define FF_GL_INFO_LOG_LENGTH             0x8B84
typedef void   (APIENTRY *FF_PFNGLACTIVETEXTUREPROC) (GLenum texture);
typedef void   (APIENTRY *FF_PFNGLGENBUFFERSPROC) (GLsizei n, GLuint *buffers);
typedef void   (APIENTRY *FF_PFNGLDELETEBUFFERSPROC) (GLsizei n, const GLuint *buffers);
typedef void   (APIENTRY *FF_PFNGLBUFFERDATAPROC) (GLenum target, ptrdiff_t size, const GLvoid *data, GLenum usage);
typedef void   (APIENTRY *FF_PFNGLBINDBUFFERPROC) (GLenum target, GLuint buffer);
typedef GLint  (APIENTRY *FF_PFNGLGETATTRIBLOCATIONPROC) (GLuint program, const char *name);
typedef void   (APIENTRY *FF_PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void   (APIENTRY *FF_PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, uintptr_t pointer);
typedef GLint  (APIENTRY *FF_PFNGLGETUNIFORMLOCATIONPROC) (GLuint program, const char *name);
typedef void   (APIENTRY *FF_PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
typedef void   (APIENTRY *FF_PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
typedef void   (APIENTRY *FF_PFNGLUNIFORMMATRIX4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef GLuint (APIENTRY *FF_PFNGLCREATEPROGRAMPROC) (void);
typedef void   (APIENTRY *FF_PFNGLDELETEPROGRAMPROC) (GLuint program);
typedef void   (APIENTRY *FF_PFNGLUSEPROGRAMPROC) (GLuint program);
typedef void   (APIENTRY *FF_PFNGLLINKPROGRAMPROC) (GLuint program);
typedef void   (APIENTRY *FF_PFNGLGETPROGRAMIVPROC) (GLuint program, GLenum pname, GLint *params);
typedef void   (APIENTRY *FF_PFNGLGETPROGRAMINFOLOGPROC) (GLuint program, GLsizei bufSize, GLsizei *length, char *infoLog);
typedef void   (APIENTRY *FF_PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
typedef GLuint (APIENTRY *FF_PFNGLCREATESHADERPROC) (GLenum type);
typedef void   (APIENTRY *FF_PFNGLDELETESHADERPROC) (GLuint shader);
typedef void   (APIENTRY *FF_PFNGLCOMPILESHADERPROC) (GLuint shader);
typedef void   (APIENTRY *FF_PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const char* *string, const GLint *length);
typedef void   (APIENTRY *FF_PFNGLGETSHADERIVPROC) (GLuint shader, GLenum pname, GLint *params);
typedef void   (APIENTRY *FF_PFNGLGETSHADERINFOLOGPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, char *infoLog);
typedef struct FFOpenGLFunctions  FFOpenGLFunctions;
OPENGL_ERROR_CHECK \
\
typedef struct OpenGLVertexInfo
OpenGLVertexInfo;
static const GLushort g_index[6] =
;
typedef struct OpenGLContext  OpenGLContext;
static const struct OpenGLFormatDesc  opengl_format_desc[] = ;
opengl_prepare_vertex;
opengl_draw;
opengl_init_context;
opengl_deinit_context
opengl_resize
opengl_control_message
#if HAVE_SDL2
opengl_sdl_process_events
opengl_sdl_create_window
opengl_sdl_load_procedures
defined
opengl_load_procedures
opengl_load_procedures
opengl_make_identity
opengl_make_ortho
opengl_read_limits
opengl_get_fragment_shader_code
opengl_type_size
opengl_get_texture_params
opengl_compute_display_area
opengl_get_texture_size
opengl_fill_color_map
opengl_load_shader
opengl_compile_shaders
opengl_configure_texture
opengl_prepare_vertex
opengl_prepare
opengl_create_window
opengl_release_window
opengl_write_trailer
opengl_init_context
opengl_write_header
opengl_get_plane_pointer
LOAD_TEXTURE_DATA                                                  \
opengl_draw
opengl_write_packet
opengl_write_frame
OFFSET offsetof(OpenGLContext, x)
#define ENC AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ,
,
,
,
};
static const AVClass opengl_class = ;
AVOutputFormat ff_opengl_muxer = ;
