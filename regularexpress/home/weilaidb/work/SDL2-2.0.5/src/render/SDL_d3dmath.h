#if (SDL_VIDEO_RENDER_D3D || SDL_VIDEO_RENDER_D3D11) && !SDL_RENDER_DISABLED
typedef struct
Float2;
typedef struct
Float3;
typedef struct
Float4;
typedef struct
Float4X4;
Float4X4 MatrixIdentity();
Float4X4 MatrixMultiply(Float4X4 M1, Float4X4 M2);
Float4X4 MatrixScaling(float x, float y, float z);
Float4X4 MatrixTranslation(float x, float y, float z);
Float4X4 MatrixRotationX(float r);
Float4X4 MatrixRotationY(float r);
Float4X4 MatrixRotationZ(float r);
