#ifndef XXD_EMBEDDED_H
#define XXD_EMBEDDED_H

#if defined(__APPLE__)
#include <TargetConditionals.h>
#endif

extern unsigned char checkra1n[];
extern unsigned int checkra1n_len;

extern unsigned char checkra1n_kpf_pongo[];
extern unsigned int checkra1n_kpf_pongo_len;

extern unsigned char ramdisk_dmg_lzma[];
extern unsigned int ramdisk_dmg_lzma_len;

extern unsigned char binpack_dmg[];
extern unsigned int binpack_dmg_len;

extern unsigned char Pongo_bin[];
extern unsigned int Pongo_bin_len;

#if defined(__APPLE__) && (TARGET_OS_IPHONE || defined(DEV_BUILD))
extern unsigned char libcheckra1nhelper_dylib[];
extern unsigned int libcheckra1nhelper_dylib_len;
#endif

#endif
