#ifndef _STDIO_EXT_H
#define _STDIO_EXT_H

#include <sys/cdefs.h>
#include <stdio.h>


__BEGIN_DECLS


#if __ANDROID_API__ >= 23
size_t __fbufsize(FILE* __fp) __INTRODUCED_IN(23);
int __freadable(FILE* __fp) __INTRODUCED_IN(23);
#endif /* __ANDROID_API__ >= 23 */


#if __ANDROID_API__ >= __ANDROID_API_FUTURE__
//int __freading(FILE* __fp) __INTRODUCED_IN_FUTURE;
#endif /* __ANDROID_API__ >= __ANDROID_API_FUTURE__ */


#if __ANDROID_API__ >= 23
int __fwritable(FILE* __fp) __INTRODUCED_IN(23);
#endif /* __ANDROID_API__ >= 23 */


#if __ANDROID_API__ >= __ANDROID_API_FUTURE__
//int __fwriting(FILE* __fp) __INTRODUCED_IN_FUTURE;
#endif /* __ANDROID_API__ >= __ANDROID_API_FUTURE__ */


#if __ANDROID_API__ >= 23
int __flbf(FILE* __fp) __INTRODUCED_IN(23);
void __fpurge(FILE* __fp) __INTRODUCED_IN(23);
size_t __fpending(FILE* __fp) __INTRODUCED_IN(23);
void _flushlbf(void) __INTRODUCED_IN(23);
#endif /* __ANDROID_API__ >= 23 */


#define FSETLOCKING_QUERY 0
#define FSETLOCKING_INTERNAL 1
#define FSETLOCKING_BYCALLER 2

#if __ANDROID_API__ >= 23
int __fsetlocking(FILE* __fp, int __type) __INTRODUCED_IN(23);
#endif /* __ANDROID_API__ >= 23 */


__END_DECLS

#endif
