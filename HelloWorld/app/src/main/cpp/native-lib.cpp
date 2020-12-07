#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_helloworld_MainActivity_stringFromJNI(
        JNIEnv *env, jobject /* this */){
    
    std:: string hello = "Hello World from C++";
    return env-> NewStringUTF(hello.c_str());
}