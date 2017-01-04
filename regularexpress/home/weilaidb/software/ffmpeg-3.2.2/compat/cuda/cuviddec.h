#if !defined(__CUDA_VIDEO_H__)
#define __CUDA_VIDEO_H__
#if defined(__x86_64) || defined(AMD64) || defined(_M_AMD64)
#if (CUDA_VERSION >= 3020) && (!defined(CUDA_FORCE_API_VERSION) || (CUDA_FORCE_API_VERSION >= 3020))
#define __CUVID_DEVPTR64
#if defined(__cplusplus)
extern "C"
