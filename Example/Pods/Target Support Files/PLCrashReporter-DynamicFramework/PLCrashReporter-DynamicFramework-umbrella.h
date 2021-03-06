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

#import "Source/CrashReporter.h"
#import "Source/crash_report.pb-c.h"
#import "Source/dwarf_private.h"
#import "Source/mach_exc.h"
#import "Source/mach_exc_i386.h"
#import "Source/mach_exc_x86_64.h"
#import "Source/PLCrashAsync.h"
#import "Source/PLCrashAsyncAllocator.h"
#import "Source/PLCrashAsyncCompactUnwindEncoding.h"
#import "Source/PLCrashAsyncDynamicLoader.h"
#import "Source/PLCrashAsyncMachExceptionInfo.h"
#import "Source/PLCrashAsyncMachOImage.h"
#import "Source/PLCrashAsyncMachOString.h"
#import "Source/PLCrashAsyncMObject.h"
#import "Source/PLCrashAsyncObjCSection.h"
#import "Source/PLCrashAsyncSignalInfo.h"
#import "Source/PLCrashAsyncSymbolication.h"
#import "Source/PLCrashAsyncThread.h"
#import "Source/PLCrashAsyncThread_arm.h"
#import "Source/PLCrashAsyncThread_current_defs.h"
#import "Source/PLCrashAsyncThread_x86.h"
#import "Source/PLCrashCompatConstants.h"
#import "Source/PLCrashFeatureConfig.h"
#import "Source/PLCrashFrameCompactUnwind.h"
#import "Source/PLCrashFrameDWARFUnwind.h"
#import "Source/PLCrashFrameStackUnwind.h"
#import "Source/PLCrashFrameWalker.h"
#import "Source/PLCrashHostInfo.h"
#import "Source/PLCrashLogWriter.h"
#import "Source/PLCrashLogWriterEncoding.h"
#import "Source/PLCrashMachExceptionPort.h"
#import "Source/PLCrashMachExceptionPortSet.h"
#import "Source/PLCrashMachExceptionServer.h"
#import "Source/PLCrashMacros.h"
#import "Source/PLCrashNamespace.h"
#import "Source/PLCrashProcessInfo.h"
#import "Source/PLCrashReport.h"
#import "Source/PLCrashReportApplicationInfo.h"
#import "Source/PLCrashReportBinaryImageInfo.h"
#import "Source/PLCrashReporter.h"
#import "Source/PLCrashReporterConfig.h"
#import "Source/PLCrashReporterNSError.h"
#import "Source/PLCrashReportExceptionInfo.h"
#import "Source/PLCrashReportFormatter.h"
#import "Source/PLCrashReportMachExceptionInfo.h"
#import "Source/PLCrashReportMachineInfo.h"
#import "Source/PLCrashReportProcessInfo.h"
#import "Source/PLCrashReportProcessorInfo.h"
#import "Source/PLCrashReportRegisterInfo.h"
#import "Source/PLCrashReportSignalInfo.h"
#import "Source/PLCrashReportStackFrameInfo.h"
#import "Source/PLCrashReportSymbolInfo.h"
#import "Source/PLCrashReportSystemInfo.h"
#import "Source/PLCrashReportTextFormatter.h"
#import "Source/PLCrashReportThreadInfo.h"
#import "Source/PLCrashSignalHandler.h"
#import "Source/PLCrashSysctl.h"
#import "Source/PLCrashTestThread.h"
#import "Source/PLCrashUncaughtExceptionHandler.h"
#import "Dependencies/protobuf-2.0.3/src/protobuf-c-private.h"
#import "Dependencies/protobuf-2.0.3/src/protobuf-c.h"

FOUNDATION_EXPORT double PLCrashReporter_DynamicFrameworkVersionNumber;
FOUNDATION_EXPORT const unsigned char PLCrashReporter_DynamicFrameworkVersionString[];

