typedef enum  GL_Shader;
typedef struct GL_ShaderContext GL_ShaderContext;
extern GL_ShaderContext * GL_CreateShaderContext();
extern void GL_SelectShader(GL_ShaderContext *ctx, GL_Shader shader);
extern void GL_DestroyShaderContext(GL_ShaderContext *ctx);
