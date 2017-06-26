#include <jni.h>
 #include <stdio.h>
 #include "com_lleclerc_jnilink_SayHelloMain.h"
  
 JNIEXPORT void JNICALL 
 Java_HelloWorld_print(JNIEnv *env, jobject obj)
 {
     printf("Hello World!\n");
     return;
 }
