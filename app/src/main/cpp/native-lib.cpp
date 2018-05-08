#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_me_pbarrett_happybirthday_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Happy birthday you old fuck";
    std::string goodbye = "Cya later you ugly mofo";
    return env->NewStringUTF(hello.c_str());
    //return env->NewStringUTF(goodbye.c_str());
}
