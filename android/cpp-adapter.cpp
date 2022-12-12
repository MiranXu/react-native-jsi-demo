#include <jni.h>
#include "react-native-jsi-demo.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_jsidemo_JsiDemoModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return jsidemo::multiply(a, b);
}
