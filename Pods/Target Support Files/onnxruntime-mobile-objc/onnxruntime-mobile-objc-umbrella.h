#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "onnxruntime.h"
#import "ort_enums.h"
#import "ort_env.h"
#import "ort_session.h"
#import "ort_value.h"

FOUNDATION_EXPORT double onnxruntime_mobile_objcVersionNumber;
FOUNDATION_EXPORT const unsigned char onnxruntime_mobile_objcVersionString[];

