#include <jni.h>
#include "./libass/libass/ass.h"

ASS_Library *ass_library;
ASS_Renderer *ass_renderer;

jstring Java_com_shadfin_libass_libasskt_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject this) {

    ass_library = ass_library_init();

    char buffer[] = "hello, libass initialized";
    return (*env)->NewStringUTF(env, buffer);
}