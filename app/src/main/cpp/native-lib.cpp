#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_dearzack_github_io_learnjni_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
