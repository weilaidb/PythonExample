#if HAVE_VSX
fft32_vsx_interleave
fft64_vsx_interleave
fft128_vsx_interleave
fft256_vsx_interleave
fft512_vsx_interleave
fft1024_vsx_interleave
fft2048_vsx_interleave
fft4096_vsx_interleave
fft8192_vsx_interleave
fft16384_vsx_interleave
fft32768_vsx_interleave
fft65536_vsx_interleave
fft32_vsx
fft64_vsx
fft128_vsx
fft256_vsx
fft512_vsx
fft1024_vsx
fft2048_vsx
fft4096_vsx
fft8192_vsx
fft16384_vsx
fft32768_vsx
fft65536_vsx
static void (* const fft_dispatch_vsx[])(FFTComplex*) = ;
static void (* const fft_dispatch_vsx_interleave[])(FFTComplex*) = ;
ff_fft_calc_interleave_vsx
ff_fft_calc_vsx
