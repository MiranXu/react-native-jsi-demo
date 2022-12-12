#ifdef __cplusplus
#import "react-native-jsi-demo.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNJsiDemoSpec.h"

@interface JsiDemo : NSObject <NativeJsiDemoSpec>
#else
#import <React/RCTBridgeModule.h>

@interface JsiDemo : NSObject <RCTBridgeModule>
#endif

@end
