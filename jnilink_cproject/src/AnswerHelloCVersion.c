#include <jni.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "com_lleclerc_jnilink_SayHelloMain.h"

JNIEXPORT jstring JNICALL Java_com_lleclerc_jnilink_SayHelloMain_sayHello(
		JNIEnv *env, jobject obj, jstring string) {
// Return what I get
//	return string;

// Return new string
//	jstring jstr = NULL;
//	jstr= (*env)->NewStringUTF(env, "Abc");
//	return jstr;

// Modify the string
	const char *name = (*env)->GetStringUTFChars(env, string, NULL);
	char msg[60] = "Hello ";
	jstring result;

	strcat(msg, name);
	(*env)->ReleaseStringUTFChars(env, string, name);
	result = (*env)->NewStringUTF(env, msg);
	return result;
}
