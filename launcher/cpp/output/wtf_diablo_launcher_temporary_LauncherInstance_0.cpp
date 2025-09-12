#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "wtf_diablo_launcher_temporary_LauncherInstance_0.hpp"

// wtf/diablo/launcher/temporary/LauncherInstance
namespace native_jvm::classes::__ngen_wtf_diablo_launcher_temporary_LauncherInstance_0 {

    char *string_pool;

    jstring cstrings[71];
    std::mutex cclasses_mtx[26];
    jclass cclasses[26];
    jmethodID cmethods[52];
    jfieldID cfields[6];

    // login(Ljava/lang/String;Ljava/lang/String;)Z
    jboolean JNICALL __ngen_native_login1(JNIEnv *env, jobject obj, jobject arg0, jobject arg1) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jboolean) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {}, clocal4 = {}, clocal5 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
        clocal1.l = arg0; refs.insert(clocal1.l);
        clocal2.l = arg1; refs.insert(clocal2.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 29; Stack: 0
        // New stack: 0
        // NEW com/google/gson/JsonObject; Stack: 0
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (jobject obj = env->AllocObject((cclasses[0]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // INVOKESPECIAL com/google/gson/JsonObject.<init>()V; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 29); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[0]), (cmethods[0])); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 30; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC username; Stack: 1
        cstack1.l = (cstrings[1]);
        // New stack: 2
        // ALOAD 1; Stack: 2
        cstack2.l = clocal1.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/JsonObject.addProperty(Ljava/lang/String;Ljava/lang/String;)V; Stack: 3
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 131LL)), ((char *)(string_pool + 143LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 30); else env->CallVoidMethod(cstack0.l, (cmethods[1]), cstack1.l, cstack2.l); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 31; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC password; Stack: 1
        cstack1.l = (cstrings[2]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/JsonObject.addProperty(Ljava/lang/String;Ljava/lang/String;)V; Stack: 3
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 131LL)), ((char *)(string_pool + 143LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 31); else env->CallVoidMethod(cstack0.l, (cmethods[1]), cstack1.l, cstack2.l); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 33; Stack: 0
        // New stack: 0
        // LDC https://diablo.wtf/api/v1/auth/login; Stack: 0
        cstack0.l = (cstrings[3]);
        // New stack: 1
        // INVOKESTATIC kong/unirest/Unirest.post(Ljava/lang/String;)Lkong/unirest/HttpRequestWithBody;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetStaticMethodID((cclasses[1]), ((char *)(string_pool + 206LL)), ((char *)(string_pool + 211LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[1]), (cmethods[2]), cstack0.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // LDC Content-Type; Stack: 1
        cstack1.l = (cstrings[5]);
        // New stack: 2
        // LDC application/json; Stack: 2
        cstack2.l = (cstrings[6]);
        // New stack: 3
        // LABEL L5; Stack: 3
        L5: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 3
        // Line 34; Stack: 3
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/HttpRequestWithBody.header(Ljava/lang/String;Ljava/lang/String;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[7]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 266LL)), ((char *)(string_pool + 273LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 34); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[3]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/HttpRequestWithBody; Stack: 1
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[7]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 410LL)))).c_str(), 34); 
        if (env->ExceptionCheck()) { return (jboolean) 0; } } 
        // New stack: 1
        // GETSTATIC wtf/diablo/launcher/temporary/util/Constants.GSON Lcom/google/gson/Gson;; Stack: 1
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[8]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[3]), ((char *)(string_pool + 443LL)), ((char *)(string_pool + 448LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } cstack1.l = env->GetStaticObjectField((cclasses[3]), (cfields[0])); refs.insert(cstack1.l); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 2
        // ALOAD 3; Stack: 2
        cstack2.l = clocal3.l; refs.insert(cstack2.l);
        // New stack: 3
        // LABEL L6; Stack: 3
        L6: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 3
        // Line 35; Stack: 3
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/Gson.toJson(Lcom/google/gson/JsonElement;)Ljava/lang/String;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 471LL)), ((char *)(string_pool + 478LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 35); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4]), cstack2.l); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 2
        // INVOKEINTERFACE kong/unirest/HttpRequestWithBody.body(Ljava/lang/String;)Lkong/unirest/RequestBodyEntity;; Stack: 2
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[7]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[5]) { cmethods[5] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 553LL)), ((char *)(string_pool + 558LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 35); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[5]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // LABEL L7; Stack: 1
        L7: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // Line 36; Stack: 1
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/RequestBodyEntity.asString()Lkong/unirest/HttpResponse;; Stack: 1
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 611LL)), ((char *)(string_pool + 620LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 36); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 38; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/HttpResponse.getStatus()I; Stack: 1
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 650LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 664LL)), 38); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[7])); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // SIPUSH 200; Stack: 1
        cstack1.i = (jint) 200;
        // New stack: 2
        // IF_ICMPEQ L9; Stack: 2
        if (cstack0.i == cstack1.i) goto L9;
        // New stack: 0
        // LABEL L10; Stack: 0
        L10: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 39; Stack: 0
        // New stack: 0
        // GETSTATIC java/lang/System.out Ljava/io/PrintStream;; Stack: 0
        if (!cclasses[7]  || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[12]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cfields[1]) { cfields[1] = env->GetStaticFieldID((cclasses[7]), ((char *)(string_pool + 688LL)), ((char *)(string_pool + 692LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[7]), (cfields[1])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // LDC Invalid username or password.; Stack: 1
        cstack1.l = (cstrings[13]);
        // New stack: 2
        // INVOKEVIRTUAL java/io/PrintStream.println(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[14]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 714LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 39); else env->CallVoidMethod(cstack0.l, (cmethods[8]), cstack1.l); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // LABEL L11; Stack: 0
        L11: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 40; Stack: 0
        // New stack: 0
        // ICONST_0; Stack: 0
        cstack0.i = 0;
        // New stack: 1
        // IRETURN; Stack: 1
        return (jboolean) cstack0.i;
        // New stack: 0
        // LABEL L9; Stack: 0
        L9: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 43; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [com/google/gson/JsonObject, kong/unirest/HttpResponse] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GETSTATIC wtf/diablo/launcher/temporary/util/Constants.GSON Lcom/google/gson/Gson;; Stack: 0
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[8]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[3]), ((char *)(string_pool + 443LL)), ((char *)(string_pool + 448LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[3]), (cfields[0])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // ALOAD 4; Stack: 1
        cstack1.l = clocal4.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE kong/unirest/HttpResponse.getBody()Ljava/lang/Object;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 744LL)), ((char *)(string_pool + 752LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 43); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[9])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 2
        // CHECKCAST java/lang/String; Stack: 2
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[15]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[9]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 773LL)))).c_str(), 43); 
        if (env->ExceptionCheck()) { return (jboolean) 0; } } 
        // New stack: 2
        // LDC Lcom/google/gson/JsonObject;; Stack: 2
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } cstack2.l = (cclasses[10]);
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/Gson.fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 790LL)), ((char *)(string_pool + 799LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 43); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[10]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // CHECKCAST com/google/gson/JsonObject; Stack: 1
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[0]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 855LL)))).c_str(), 43); 
        if (env->ExceptionCheck()) { return (jboolean) 0; } } 
        // New stack: 1
        // ASTORE 5; Stack: 1
        clocal5.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L12; Stack: 0
        L12: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 44; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 5; Stack: 1
        cstack1.l = clocal5.l; refs.insert(cstack1.l);
        // New stack: 2
        // LDC sessionID; Stack: 2
        cstack2.l = (cstrings[16]);
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/JsonObject.get(Ljava/lang/String;)Lcom/google/gson/JsonElement;; Stack: 3
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 886LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 44); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[11]), cstack2.l); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 2
        // INVOKEVIRTUAL com/google/gson/JsonElement.getAsString()Ljava/lang/String;; Stack: 2
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[17]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[12]) { cmethods[12] = env->GetMethodID((cclasses[11]), ((char *)(string_pool + 936LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 44); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[12])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 2
        // INVOKESPECIAL wtf/diablo/launcher/temporary/LauncherInstance.attemptAuthorization(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[13]) { cmethods[13] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 969LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 44); else env->CallNonvirtualVoidMethod(cstack0.l, (cclasses[12]), (cmethods[13]), cstack1.l); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // LABEL L13; Stack: 0
        L13: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 45; Stack: 0
        // New stack: 0
        // ICONST_1; Stack: 0
        cstack0.i = 1;
        // New stack: 1
        // IRETURN; Stack: 1
        return (jboolean) cstack0.i;
        // New stack: 0
        // LABEL L14; Stack: 0
        L14: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        return (jboolean) 0;
    }
    
    // validateHWID()V
    void JNICALL __ngen_native_validateHWID2(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (void) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {}, clocal4 = {}, clocal5 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 49; Stack: 0
        // New stack: 0
        // LDC https://diablo.wtf/api/v1/auth/hwid/isSet; Stack: 0
        cstack0.l = (cstrings[19]);
        // New stack: 1
        // INVOKESTATIC kong/unirest/Unirest.get(Ljava/lang/String;)Lkong/unirest/GetRequest;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[14]) { cmethods[14] = env->GetStaticMethodID((cclasses[1]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 1003LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[1]), (cmethods[14]), cstack0.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC Authorization; Stack: 1
        cstack1.l = (cstrings[20]);
        // New stack: 2
        // ALOAD 0; Stack: 2
        cstack2.l = clocal0.l; refs.insert(cstack2.l);
        // New stack: 3
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 3
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 49); else { cstack2.l = env->GetObjectField(cstack2.l, (cfields[2])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // LABEL L2; Stack: 3
        L2: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // Line 50; Stack: 3
        // New stack: 3
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloSession.getSessionID()Ljava/lang/String;; Stack: 3
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1131LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 50); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[15])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/GetRequest.header(Ljava/lang/String;Ljava/lang/String;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 266LL)), ((char *)(string_pool + 273LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 50); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[16]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/GetRequest; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[14]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 1144LL)))).c_str(), 50); 
        if (env->ExceptionCheck()) { return (void) 0; } } 
        // New stack: 1
        // LABEL L3; Stack: 1
        L3: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // Line 51; Stack: 1
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/GetRequest.asString()Lkong/unirest/HttpResponse;; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 611LL)), ((char *)(string_pool + 620LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 51); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[17])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 1; Stack: 1
        clocal1.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 53; Stack: 0
        // New stack: 0
        // ALOAD 1; Stack: 0
        cstack0.l = clocal1.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/HttpResponse.getStatus()I; Stack: 1
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 650LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 664LL)), 53); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[7])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // SIPUSH 200; Stack: 1
        cstack1.i = (jint) 200;
        // New stack: 2
        // IF_ICMPEQ L5; Stack: 2
        if (cstack0.i == cstack1.i) goto L5;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 54; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC Failed to get content.; Stack: 1
        cstack1.l = (cstrings[23]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 55; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 58; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [kong/unirest/HttpResponse] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GETSTATIC wtf/diablo/launcher/temporary/util/Constants.GSON Lcom/google/gson/Gson;; Stack: 0
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[8]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[3]), ((char *)(string_pool + 443LL)), ((char *)(string_pool + 448LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[3]), (cfields[0])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ALOAD 1; Stack: 1
        cstack1.l = clocal1.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE kong/unirest/HttpResponse.getBody()Ljava/lang/Object;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 744LL)), ((char *)(string_pool + 752LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 58); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[9])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 2
        // CHECKCAST java/lang/String; Stack: 2
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[15]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[9]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 773LL)))).c_str(), 58); 
        if (env->ExceptionCheck()) { return (void) 0; } } 
        // New stack: 2
        // LDC Lcom/google/gson/JsonObject;; Stack: 2
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } cstack2.l = (cclasses[10]);
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/Gson.fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 790LL)), ((char *)(string_pool + 799LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 58); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[10]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // CHECKCAST com/google/gson/JsonObject; Stack: 1
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[0]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 855LL)))).c_str(), 58); 
        if (env->ExceptionCheck()) { return (void) 0; } } 
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 59; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC isSet; Stack: 1
        cstack1.l = (cstrings[26]);
        // New stack: 2
        // INVOKEVIRTUAL com/google/gson/JsonObject.get(Ljava/lang/String;)Lcom/google/gson/JsonElement;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 886LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 59); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[11]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // INVOKEVIRTUAL com/google/gson/JsonElement.getAsBoolean()Z; Stack: 1
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[17]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[11]), ((char *)(string_pool + 1247LL)), ((char *)(string_pool + 1260LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 59); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[19])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ISTORE 3; Stack: 1
        clocal3.i = cstack0.i;
        // New stack: 0
        // LABEL L9; Stack: 0
        L9: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 61; Stack: 0
        // New stack: 0
        // ILOAD 3; Stack: 0
        cstack0.i = clocal3.i;
        // New stack: 1
        // IFNE L10; Stack: 1
        if (cstack0.i != 0) goto L10;
        // New stack: 0
        // LABEL L11; Stack: 0
        L11: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 62; Stack: 0
        // New stack: 0
        // NEW com/google/gson/JsonObject; Stack: 0
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[0]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // INVOKESPECIAL com/google/gson/JsonObject.<init>()V; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 62); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[0]), (cmethods[0])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L12; Stack: 0
        L12: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 63; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC hwid; Stack: 1
        cstack1.l = (cstrings[27]);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/hwid/HwidUtil.generateHwid()Ljava/lang/String;; Stack: 2
        if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { cclasses_mtx[16].lock(); if (!cclasses[16] || env->IsSameObject(cclasses[16], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[28]))) { cclasses[16] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[16].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[20]) { cmethods[20] = env->GetStaticMethodID((cclasses[16]), ((char *)(string_pool + 1290LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack2.l = env->CallStaticObjectMethod((cclasses[16]), (cmethods[20])); refs.insert(cstack2.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/JsonObject.addProperty(Ljava/lang/String;Ljava/lang/String;)V; Stack: 3
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 131LL)), ((char *)(string_pool + 143LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 63); else env->CallVoidMethod(cstack0.l, (cmethods[1]), cstack1.l, cstack2.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L13; Stack: 0
        L13: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 65; Stack: 0
        // New stack: 0
        // LDC https://diablo.wtf/api/v1/auth/hwid/set; Stack: 0
        cstack0.l = (cstrings[29]);
        // New stack: 1
        // INVOKESTATIC kong/unirest/Unirest.post(Ljava/lang/String;)Lkong/unirest/HttpRequestWithBody;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetStaticMethodID((cclasses[1]), ((char *)(string_pool + 206LL)), ((char *)(string_pool + 211LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[1]), (cmethods[2]), cstack0.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC Authorization; Stack: 1
        cstack1.l = (cstrings[20]);
        // New stack: 2
        // ALOAD 0; Stack: 2
        cstack2.l = clocal0.l; refs.insert(cstack2.l);
        // New stack: 3
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 3
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 65); else { cstack2.l = env->GetObjectField(cstack2.l, (cfields[2])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // LABEL L14; Stack: 3
        L14: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // Line 66; Stack: 3
        // New stack: 3
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloSession.getSessionID()Ljava/lang/String;; Stack: 3
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1131LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 66); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[15])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/HttpRequestWithBody.header(Ljava/lang/String;Ljava/lang/String;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[7]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 266LL)), ((char *)(string_pool + 273LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 66); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[3]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/HttpRequestWithBody; Stack: 1
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[7]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 410LL)))).c_str(), 66); 
        if (env->ExceptionCheck()) { return (void) 0; } } 
        // New stack: 1
        // LDC Content-Type; Stack: 1
        cstack1.l = (cstrings[5]);
        // New stack: 2
        // LDC application/json; Stack: 2
        cstack2.l = (cstrings[6]);
        // New stack: 3
        // LABEL L15; Stack: 3
        L15: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // Line 67; Stack: 3
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/HttpRequestWithBody.header(Ljava/lang/String;Ljava/lang/String;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[7]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 266LL)), ((char *)(string_pool + 273LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 67); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[3]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/HttpRequestWithBody; Stack: 1
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[7]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 410LL)))).c_str(), 67); 
        if (env->ExceptionCheck()) { return (void) 0; } } 
        // New stack: 1
        // GETSTATIC wtf/diablo/launcher/temporary/util/Constants.GSON Lcom/google/gson/Gson;; Stack: 1
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[8]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[3]), ((char *)(string_pool + 443LL)), ((char *)(string_pool + 448LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack1.l = env->GetStaticObjectField((cclasses[3]), (cfields[0])); refs.insert(cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 2
        // ALOAD 4; Stack: 2
        cstack2.l = clocal4.l; refs.insert(cstack2.l);
        // New stack: 3
        // LABEL L16; Stack: 3
        L16: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // Line 68; Stack: 3
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/Gson.toJson(Lcom/google/gson/JsonElement;)Ljava/lang/String;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 471LL)), ((char *)(string_pool + 478LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 68); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4]), cstack2.l); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 2
        // INVOKEINTERFACE kong/unirest/HttpRequestWithBody.body(Ljava/lang/String;)Lkong/unirest/RequestBodyEntity;; Stack: 2
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[7]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[5]) { cmethods[5] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 553LL)), ((char *)(string_pool + 558LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 68); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[5]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LABEL L17; Stack: 1
        L17: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // Line 69; Stack: 1
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/RequestBodyEntity.asString()Lkong/unirest/HttpResponse;; Stack: 1
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 611LL)), ((char *)(string_pool + 620LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 69); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 5; Stack: 1
        clocal5.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L18; Stack: 0
        L18: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 71; Stack: 0
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/HttpResponse.getStatus()I; Stack: 1
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 650LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 664LL)), 71); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[7])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // SIPUSH 200; Stack: 1
        cstack1.i = (jint) 200;
        // New stack: 2
        // IF_ICMPEQ L19; Stack: 2
        if (cstack0.i == cstack1.i) goto L19;
        // New stack: 0
        // LABEL L20; Stack: 0
        L20: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 72; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC Failed to set HWID.; Stack: 1
        cstack1.l = (cstrings[30]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L21; Stack: 0
        L21: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 73; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L19; Stack: 0
        L19: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 76; Stack: 0
        // New stack: 0
        // FRAME FULL L: [wtf/diablo/launcher/temporary/LauncherInstance, kong/unirest/HttpResponse, com/google/gson/JsonObject, 1, com/google/gson/JsonObject, kong/unirest/HttpResponse] S: []; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC Your HWID was bound to this machine.; Stack: 1
        cstack1.l = (cstrings[31]);
        // New stack: 2
        // LDC HWID Update; Stack: 2
        cstack2.l = (cstrings[32]);
        // New stack: 3
        // ICONST_1; Stack: 3
        cstack3.i = 1;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L10; Stack: 0
        L10: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 78; Stack: 0
        // New stack: 0
        // FRAME CHOP L: [null, null] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L22; Stack: 0
        L22: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        return (void) 0;
    }
    
    // attemptAuthorization(Ljava/lang/String;)V
    void JNICALL __ngen_native_attemptAuthorization3(JNIEnv *env, jobject obj, jobject arg0) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (void) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
        clocal1.l = arg0; refs.insert(clocal1.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 80; Stack: 0
        // New stack: 0
        // NEW wtf/diablo/launcher/temporary/session/DiabloSession; Stack: 0
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[13]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ALOAD 1; Stack: 2
        cstack2.l = clocal1.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKESPECIAL wtf/diablo/launcher/temporary/session/DiabloSession.<init>(Ljava/lang/String;)V; Stack: 3
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[21]) { cmethods[21] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 80); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[13]), (cmethods[21]), cstack2.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 81; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // PUTFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 2
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1303LL)), 81); else env->SetObjectField(cstack0.l, (cfields[2]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 82; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 82); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloSession.update()V; Stack: 1
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[22]) { cmethods[22] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1323LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 82); else env->CallVoidMethod(cstack0.l, (cmethods[22])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 83; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        return (void) 0;
    }
    
    // initializeAssets()V
    void JNICALL __ngen_native_initializeAssets4(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (void) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        // try-catch-class java/io/IOException
        if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { cclasses_mtx[17].lock(); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[33]))) { cclasses[17] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[17].unlock(); if (env->ExceptionCheck()) { return (void) 0; } }
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {}, clocal4 = {}, clocal5 = {}, clocal6 = {}, clocal7 = {}, clocal8 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        // LABEL L10; Stack: 0
        L10: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 86; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 86); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC bootstrapper; Stack: 1
        cstack1.l = (cstrings[34]);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.generateContentID(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/lang/String;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1347LL)), ((char *)(string_pool + 1365LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[12]), (cmethods[23]), cstack0.l, cstack1.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 1; Stack: 1
        clocal1.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L11; Stack: 0
        L11: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 88; Stack: 0
        // New stack: 0
        // ALOAD 1; Stack: 0
        cstack0.l = clocal1.l; refs.insert(cstack0.l);
        // New stack: 1
        // IFNONNULL L12; Stack: 1
        if (!env->IsSameObject(cstack0.l, nullptr)) goto L12;
        // New stack: 0
        // LABEL L13; Stack: 0
        L13: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 89; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while generating the content ID; Stack: 1
        cstack1.l = (cstrings[35]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L14; Stack: 0
        L14: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 90; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L12; Stack: 0
        L12: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 93; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/lang/String] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GETSTATIC java/lang/System.out Ljava/io/PrintStream;; Stack: 0
        if (!cclasses[7]  || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[12]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetStaticFieldID((cclasses[7]), ((char *)(string_pool + 688LL)), ((char *)(string_pool + 692LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[7]), (cfields[1])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC Downloading bootstrapper...; Stack: 1
        cstack1.l = (cstrings[36]);
        // New stack: 2
        // INVOKEVIRTUAL java/io/PrintStream.println(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[14]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 714LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 93); else env->CallVoidMethod(cstack0.l, (cmethods[8]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L15; Stack: 0
        L15: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 95; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 97; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 97); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 1
        // ALOAD 1; Stack: 1
        cstack1.l = clocal1.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.writeBootstrapperFile(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/io/File;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[24]) { cmethods[24] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1457LL)), ((char *)(string_pool + 1479LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[12]), (cmethods[24]), cstack0.l, cstack1.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L16; Stack: 0
        L16: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 99; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // IFNONNULL L17; Stack: 1
        if (!env->IsSameObject(cstack0.l, nullptr)) goto L17;
        // New stack: 0
        // LABEL L18; Stack: 0
        L18: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 100; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while downloading the bootstrapper; Stack: 1
        cstack1.l = (cstrings[37]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 101; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L17; Stack: 0
        L17: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 109; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/io/File] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GOTO L19; Stack: 0
        goto L19;
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 105; Stack: 0
        // New stack: 0
        // FRAME SAME1 L: null S: [java/io/IOException]; Stack: 0
        refs.erase(cstack0.l); 
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L20; Stack: 0
        L20: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 106; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/IOException.printStackTrace()V; Stack: 1
        if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { cclasses_mtx[17].lock(); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[33]))) { cclasses[17] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[17].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[25]) { cmethods[25] = env->GetMethodID((cclasses[17]), ((char *)(string_pool + 1567LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 106); else env->CallVoidMethod(cstack0.l, (cmethods[25])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L21; Stack: 0
        L21: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 107; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while downloading the bootstrapper; Stack: 1
        cstack1.l = (cstrings[37]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L22; Stack: 0
        L22: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 108; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L19; Stack: 0
        L19: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 111; Stack: 0
        // New stack: 0
        // FRAME SAME L: null S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 111); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC natives; Stack: 1
        cstack1.l = (cstrings[38]);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.generateContentID(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/lang/String;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1347LL)), ((char *)(string_pool + 1365LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[12]), (cmethods[23]), cstack0.l, cstack1.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L23; Stack: 0
        L23: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 113; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // IFNONNULL L24; Stack: 1
        if (!env->IsSameObject(cstack0.l, nullptr)) goto L24;
        // New stack: 0
        // LABEL L25; Stack: 0
        L25: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 114; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while generating the content ID; Stack: 1
        cstack1.l = (cstrings[35]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L26; Stack: 0
        L26: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 115; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L24; Stack: 0
        L24: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 118; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/lang/String] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // NEW java/io/File; Stack: 0
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[18]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // GETSTATIC wtf/diablo/launcher/temporary/LauncherInstance.LAUNCHER_DIRECTORY Ljava/io/File;; Stack: 2
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 1583LL)), ((char *)(string_pool + 1602LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack2.l = env->GetStaticObjectField((cclasses[12]), (cfields[3])); refs.insert(cstack2.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // LDC natives; Stack: 3
        cstack3.l = (cstrings[38]);
        // New stack: 4
        // INVOKESPECIAL java/io/File.<init>(Ljava/io/File;Ljava/lang/String;)V; Stack: 4
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[26]) { cmethods[26] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 1617LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 118); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[18]), (cmethods[26]), cstack2.l, cstack3.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L27; Stack: 0
        L27: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 120; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/File.exists()Z; Stack: 1
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[27]) { cmethods[27] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1653LL)), ((char *)(string_pool + 1260LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 120); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[27])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // IFNE L28; Stack: 1
        if (cstack0.i != 0) goto L28;
        // New stack: 0
        // LABEL L29; Stack: 0
        L29: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 121; Stack: 0
        // New stack: 0
        // GETSTATIC java/lang/System.out Ljava/io/PrintStream;; Stack: 0
        if (!cclasses[7]  || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[12]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetStaticFieldID((cclasses[7]), ((char *)(string_pool + 688LL)), ((char *)(string_pool + 692LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[7]), (cfields[1])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC Creating natives directory...; Stack: 1
        cstack1.l = (cstrings[40]);
        // New stack: 2
        // INVOKEVIRTUAL java/io/PrintStream.println(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[14]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 714LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 121); else env->CallVoidMethod(cstack0.l, (cmethods[8]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L30; Stack: 0
        L30: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 123; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/File.mkdirs()Z; Stack: 1
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[28]) { cmethods[28] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1660LL)), ((char *)(string_pool + 1260LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 123); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[28])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L31; Stack: 0
        L31: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 124; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // ASTORE 5; Stack: 1
        clocal5.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; }
        // New stack: 0
        // Line 127; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 127); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; }
        // New stack: 1
        // ALOAD 3; Stack: 1
        cstack1.l = clocal3.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.writeNativesFile(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/io/File;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; } } if (!cmethods[29]) { cmethods[29] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1667LL)), ((char *)(string_pool + 1479LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[12]), (cmethods[29]), cstack0.l, cstack1.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; }
        // New stack: 1
        // ASTORE 5; Stack: 1
        clocal5.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L32; Stack: 0
        L32: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; }
        // New stack: 0
        // Line 129; Stack: 0
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // IFNONNULL L33; Stack: 1
        if (!env->IsSameObject(cstack0.l, nullptr)) goto L33;
        // New stack: 0
        // LABEL L34; Stack: 0
        L34: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; }
        // New stack: 0
        // Line 130; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while downloading the natives; Stack: 1
        cstack1.l = (cstrings[41]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_1; }
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 131; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L33; Stack: 0
        L33: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 137; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/io/File, java/io/File] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GOTO L35; Stack: 0
        goto L35;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 133; Stack: 0
        // New stack: 0
        // FRAME SAME1 L: null S: [java/io/IOException]; Stack: 0
        refs.erase(cstack0.l); 
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 1
        // ASTORE 6; Stack: 1
        clocal6.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L36; Stack: 0
        L36: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 134; Stack: 0
        // New stack: 0
        // ALOAD 6; Stack: 0
        cstack0.l = clocal6.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/IOException.printStackTrace()V; Stack: 1
        if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { cclasses_mtx[17].lock(); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[33]))) { cclasses[17] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[17].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[25]) { cmethods[25] = env->GetMethodID((cclasses[17]), ((char *)(string_pool + 1567LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 134); else env->CallVoidMethod(cstack0.l, (cmethods[25])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L37; Stack: 0
        L37: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 135; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while downloading the natives; Stack: 1
        cstack1.l = (cstrings[41]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L38; Stack: 0
        L38: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 136; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L35; Stack: 0
        L35: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 139; Stack: 0
        // New stack: 0
        // FRAME SAME L: null S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 139); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC libraries; Stack: 1
        cstack1.l = (cstrings[42]);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.generateContentID(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/lang/String;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1347LL)), ((char *)(string_pool + 1365LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[12]), (cmethods[23]), cstack0.l, cstack1.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 6; Stack: 1
        clocal6.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L39; Stack: 0
        L39: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 141; Stack: 0
        // New stack: 0
        // ALOAD 6; Stack: 0
        cstack0.l = clocal6.l; refs.insert(cstack0.l);
        // New stack: 1
        // IFNONNULL L40; Stack: 1
        if (!env->IsSameObject(cstack0.l, nullptr)) goto L40;
        // New stack: 0
        // LABEL L41; Stack: 0
        L41: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 142; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while generating the content ID; Stack: 1
        cstack1.l = (cstrings[35]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L42; Stack: 0
        L42: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 143; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L40; Stack: 0
        L40: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 146; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/lang/String] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); refs.erase(clocal6.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GETSTATIC java/lang/System.out Ljava/io/PrintStream;; Stack: 0
        if (!cclasses[7]  || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[12]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetStaticFieldID((cclasses[7]), ((char *)(string_pool + 688LL)), ((char *)(string_pool + 692LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[7]), (cfields[1])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC Downloading libraries...; Stack: 1
        cstack1.l = (cstrings[43]);
        // New stack: 2
        // INVOKEVIRTUAL java/io/PrintStream.println(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[14]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 714LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 146); else env->CallVoidMethod(cstack0.l, (cmethods[8]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L43; Stack: 0
        L43: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 148; Stack: 0
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 4; Stack: 1
        cstack1.l = clocal4.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.extract(Ljava/io/File;Ljava/io/File;)Z; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[30]) { cmethods[30] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1684LL)), ((char *)(string_pool + 1692LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.i = (jint) env->CallStaticBooleanMethod((cclasses[12]), (cmethods[30]), cstack0.l, cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ISTORE 7; Stack: 1
        clocal7.i = cstack0.i;
        // New stack: 0
        // LABEL L44; Stack: 0
        L44: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 150; Stack: 0
        // New stack: 0
        // ILOAD 7; Stack: 0
        cstack0.i = clocal7.i;
        // New stack: 1
        // IFNE L45; Stack: 1
        if (cstack0.i != 0) goto L45;
        // New stack: 0
        // LABEL L46; Stack: 0
        L46: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 151; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while extracting the natives; Stack: 1
        cstack1.l = (cstrings[44]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L47; Stack: 0
        L47: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 152; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L45; Stack: 0
        L45: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 155; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [1] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); refs.erase(clocal6.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/File.delete()Z; Stack: 1
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[31]) { cmethods[31] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1724LL)), ((char *)(string_pool + 1260LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 155); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[31])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // IFNE L28; Stack: 1
        if (cstack0.i != 0) goto L28;
        // New stack: 0
        // LABEL L48; Stack: 0
        L48: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 156; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while deleting the natives file; Stack: 1
        cstack1.l = (cstrings[45]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L49; Stack: 0
        L49: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 157; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L28; Stack: 0
        L28: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 162; Stack: 0
        // New stack: 0
        // FRAME CHOP L: [null, null, null] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 162); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC libraries; Stack: 1
        cstack1.l = (cstrings[42]);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.generateContentID(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/lang/String;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1347LL)), ((char *)(string_pool + 1365LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[12]), (cmethods[23]), cstack0.l, cstack1.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 5; Stack: 1
        clocal5.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L50; Stack: 0
        L50: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 164; Stack: 0
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // IFNONNULL L51; Stack: 1
        if (!env->IsSameObject(cstack0.l, nullptr)) goto L51;
        // New stack: 0
        // LABEL L52; Stack: 0
        L52: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 165; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while generating the content ID; Stack: 1
        cstack1.l = (cstrings[35]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L53; Stack: 0
        L53: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 166; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L51; Stack: 0
        L51: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 169; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/lang/String] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // NEW java/io/File; Stack: 0
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[18]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // GETSTATIC wtf/diablo/launcher/temporary/LauncherInstance.LAUNCHER_DIRECTORY Ljava/io/File;; Stack: 2
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 1583LL)), ((char *)(string_pool + 1602LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack2.l = env->GetStaticObjectField((cclasses[12]), (cfields[3])); refs.insert(cstack2.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // LDC libraries; Stack: 3
        cstack3.l = (cstrings[42]);
        // New stack: 4
        // INVOKESPECIAL java/io/File.<init>(Ljava/io/File;Ljava/lang/String;)V; Stack: 4
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[26]) { cmethods[26] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 1617LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 169); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[18]), (cmethods[26]), cstack2.l, cstack3.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 6; Stack: 1
        clocal6.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L54; Stack: 0
        L54: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 171; Stack: 0
        // New stack: 0
        // ALOAD 6; Stack: 0
        cstack0.l = clocal6.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/File.exists()Z; Stack: 1
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[27]) { cmethods[27] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1653LL)), ((char *)(string_pool + 1260LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 171); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[27])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // IFNE L55; Stack: 1
        if (cstack0.i != 0) goto L55;
        // New stack: 0
        // LABEL L56; Stack: 0
        L56: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 172; Stack: 0
        // New stack: 0
        // ALOAD 6; Stack: 0
        cstack0.l = clocal6.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/File.mkdirs()Z; Stack: 1
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[28]) { cmethods[28] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1660LL)), ((char *)(string_pool + 1260LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 172); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[28])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L57; Stack: 0
        L57: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 174; Stack: 0
        // New stack: 0
        // GETSTATIC java/lang/System.out Ljava/io/PrintStream;; Stack: 0
        if (!cclasses[7]  || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[12]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetStaticFieldID((cclasses[7]), ((char *)(string_pool + 688LL)), ((char *)(string_pool + 692LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[7]), (cfields[1])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC Downloading libraries...; Stack: 1
        cstack1.l = (cstrings[43]);
        // New stack: 2
        // INVOKEVIRTUAL java/io/PrintStream.println(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[14]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 714LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 174); else env->CallVoidMethod(cstack0.l, (cmethods[8]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L58; Stack: 0
        L58: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 176; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // ASTORE 7; Stack: 1
        clocal7.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; }
        // New stack: 0
        // Line 179; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 179); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; }
        // New stack: 1
        // ALOAD 5; Stack: 1
        cstack1.l = clocal5.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.writeLibrariesFile(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/io/File;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; } } if (!cmethods[32]) { cmethods[32] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1731LL)), ((char *)(string_pool + 1479LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[12]), (cmethods[32]), cstack0.l, cstack1.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; }
        // New stack: 1
        // ASTORE 7; Stack: 1
        clocal7.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L59; Stack: 0
        L59: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; }
        // New stack: 0
        // Line 181; Stack: 0
        // New stack: 0
        // ALOAD 7; Stack: 0
        cstack0.l = clocal7.l; refs.insert(cstack0.l);
        // New stack: 1
        // IFNONNULL L60; Stack: 1
        if (!env->IsSameObject(cstack0.l, nullptr)) goto L60;
        // New stack: 0
        // LABEL L61; Stack: 0
        L61: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; }
        // New stack: 0
        // Line 182; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while downloading the libraries; Stack: 1
        cstack1.l = (cstrings[46]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_2; }
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 183; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L60; Stack: 0
        L60: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 189; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/io/File, java/io/File] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); refs.erase(clocal6.l); refs.erase(clocal7.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GOTO L62; Stack: 0
        goto L62;
        // New stack: 0
        // LABEL L9; Stack: 0
        L9: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 185; Stack: 0
        // New stack: 0
        // FRAME SAME1 L: null S: [java/io/IOException]; Stack: 0
        refs.erase(cstack0.l); 
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); refs.erase(clocal6.l); refs.erase(clocal7.l); 
        utils::clear_refs(env, refs);
        // New stack: 1
        // ASTORE 8; Stack: 1
        clocal8.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L63; Stack: 0
        L63: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 186; Stack: 0
        // New stack: 0
        // ALOAD 8; Stack: 0
        cstack0.l = clocal8.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/IOException.printStackTrace()V; Stack: 1
        if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { cclasses_mtx[17].lock(); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[33]))) { cclasses[17] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[17].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[25]) { cmethods[25] = env->GetMethodID((cclasses[17]), ((char *)(string_pool + 1567LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 186); else env->CallVoidMethod(cstack0.l, (cmethods[25])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L64; Stack: 0
        L64: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 187; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while downloading the libraries; Stack: 1
        cstack1.l = (cstrings[46]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L65; Stack: 0
        L65: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 188; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L62; Stack: 0
        L62: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 191; Stack: 0
        // New stack: 0
        // FRAME SAME L: null S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); refs.erase(clocal6.l); refs.erase(clocal7.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GETSTATIC java/lang/System.out Ljava/io/PrintStream;; Stack: 0
        if (!cclasses[7]  || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[12]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetStaticFieldID((cclasses[7]), ((char *)(string_pool + 688LL)), ((char *)(string_pool + 692LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[7]), (cfields[1])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC Extracting libraries...; Stack: 1
        cstack1.l = (cstrings[47]);
        // New stack: 2
        // INVOKEVIRTUAL java/io/PrintStream.println(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[14]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 714LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 191); else env->CallVoidMethod(cstack0.l, (cmethods[8]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L66; Stack: 0
        L66: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 193; Stack: 0
        // New stack: 0
        // ALOAD 7; Stack: 0
        cstack0.l = clocal7.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 6; Stack: 1
        cstack1.l = clocal6.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.extract(Ljava/io/File;Ljava/io/File;)Z; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[30]) { cmethods[30] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1684LL)), ((char *)(string_pool + 1692LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.i = (jint) env->CallStaticBooleanMethod((cclasses[12]), (cmethods[30]), cstack0.l, cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ISTORE 8; Stack: 1
        clocal8.i = cstack0.i;
        // New stack: 0
        // LABEL L67; Stack: 0
        L67: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 195; Stack: 0
        // New stack: 0
        // ILOAD 8; Stack: 0
        cstack0.i = clocal8.i;
        // New stack: 1
        // IFNE L68; Stack: 1
        if (cstack0.i != 0) goto L68;
        // New stack: 0
        // LABEL L69; Stack: 0
        L69: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 196; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while extracting the libraries; Stack: 1
        cstack1.l = (cstrings[48]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L70; Stack: 0
        L70: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 197; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L68; Stack: 0
        L68: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 200; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [1] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); refs.erase(clocal6.l); refs.erase(clocal7.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 7; Stack: 0
        cstack0.l = clocal7.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/File.delete()Z; Stack: 1
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[31]) { cmethods[31] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1724LL)), ((char *)(string_pool + 1260LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 200); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[31])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // IFNE L55; Stack: 1
        if (cstack0.i != 0) goto L55;
        // New stack: 0
        // LABEL L71; Stack: 0
        L71: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 201; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while deleting the libraries file; Stack: 1
        cstack1.l = (cstrings[49]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L72; Stack: 0
        L72: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 202; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L55; Stack: 0
        L55: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 205; Stack: 0
        // New stack: 0
        // FRAME CHOP L: [null, null] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); refs.erase(clocal6.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L73; Stack: 0
        L73: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        return (void) 0;
        L_CATCH_2: if (env->IsInstanceOf(cstack0.l, (cclasses[17]))) { goto L9; }
        env->Throw((jthrowable) cstack0.l); return (void) 0;
        L_CATCH_1: if (env->IsInstanceOf(cstack0.l, (cclasses[17]))) { goto L6; }
        env->Throw((jthrowable) cstack0.l); return (void) 0;
        L_CATCH_0: if (env->IsInstanceOf(cstack0.l, (cclasses[17]))) { goto L3; }
        env->Throw((jthrowable) cstack0.l); return (void) 0;
    }
    
    // launch()V
    void JNICALL __ngen_native_launch5(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (void) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        // try-catch-class java/lang/Exception
        if (!cclasses[19] || env->IsSameObject(cclasses[19], NULL)) { cclasses_mtx[19].lock(); if (!cclasses[19] || env->IsSameObject(cclasses[19], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[50]))) { cclasses[19] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[19].unlock(); if (env->ExceptionCheck()) { return (void) 0; } }
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {}, cstack4 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 208; Stack: 0
        // New stack: 0
        // NEW java/io/File; Stack: 0
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[18]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // NEW java/lang/StringBuilder; Stack: 2
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[20]))) { cstack2.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // DUP; Stack: 3
        cstack3 = cstack2;
        // New stack: 4
        // INVOKESPECIAL java/lang/StringBuilder.<init>()V; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[33]) { cmethods[33] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 208); else env->CallNonvirtualVoidMethod(cstack3.l, (cclasses[20]), (cmethods[33])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // GETSTATIC wtf/diablo/launcher/temporary/LauncherInstance.LAUNCHER_DIRECTORY Ljava/io/File;; Stack: 3
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 1583LL)), ((char *)(string_pool + 1602LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[12]), (cfields[3])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/io/File.getAbsolutePath()Ljava/lang/String;; Stack: 4
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[34]) { cmethods[34] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1757LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 208); else { cstack3.l = env->CallObjectMethod(cstack3.l, (cmethods[34])); refs.insert(cstack3.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 208); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // GETSTATIC java/io/File.separator Ljava/lang/String;; Stack: 3
        if (!cclasses[18]  || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetStaticFieldID((cclasses[18]), ((char *)(string_pool + 1826LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[18]), (cfields[4])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 208); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // LDC bootstrapper.exe; Stack: 3
        cstack3.l = (cstrings[52]);
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 208); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // INVOKEVIRTUAL java/lang/StringBuilder.toString()Ljava/lang/String;; Stack: 3
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[36]) { cmethods[36] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1855LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 208); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[36])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // INVOKESPECIAL java/io/File.<init>(Ljava/lang/String;)V; Stack: 3
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[37]) { cmethods[37] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 208); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[18]), (cmethods[37]), cstack2.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 1; Stack: 1
        clocal1.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 210; Stack: 0
        // New stack: 0
        // ALOAD 1; Stack: 0
        cstack0.l = clocal1.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/File.exists()Z; Stack: 1
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[27]) { cmethods[27] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1653LL)), ((char *)(string_pool + 1260LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 210); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[27])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // IFNE L6; Stack: 1
        if (cstack0.i != 0) goto L6;
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 211; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while locating the bootstrapper; Stack: 1
        cstack1.l = (cstrings[53]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 212; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 215; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/io/File] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 215); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC release; Stack: 1
        cstack1.l = (cstrings[54]);
        // New stack: 2
        // INVOKESTATIC wtf/diablo/launcher/temporary/LauncherInstance.generateContentID(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/lang/String;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetStaticMethodID((cclasses[12]), ((char *)(string_pool + 1347LL)), ((char *)(string_pool + 1365LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[12]), (cmethods[23]), cstack0.l, cstack1.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L9; Stack: 0
        L9: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 217; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // IFNONNULL L10; Stack: 1
        if (!env->IsSameObject(cstack0.l, nullptr)) goto L10;
        // New stack: 0
        // LABEL L11; Stack: 0
        L11: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 218; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // LDC An error occurred while generating the content ID; Stack: 1
        cstack1.l = (cstrings[35]);
        // New stack: 2
        // LDC Error; Stack: 2
        cstack2.l = (cstrings[24]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKESTATIC javax/swing/JOptionPane.showMessageDialog(Ljava/awt/Component;Ljava/lang/Object;Ljava/lang/String;I)V; Stack: 4
        if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { cclasses_mtx[15].lock(); if (!cclasses[15] || env->IsSameObject(cclasses[15], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[25]))) { cclasses[15] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[15].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetStaticMethodID((cclasses[15]), ((char *)(string_pool + 1168LL)), ((char *)(string_pool + 1186LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->CallStaticVoidMethod((cclasses[15]), (cmethods[18]), cstack0.l, cstack1.l, cstack2.l, cstack3.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L12; Stack: 0
        L12: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 219; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L10; Stack: 0
        L10: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 222; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/lang/String] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GETSTATIC java/lang/System.out Ljava/io/PrintStream;; Stack: 0
        if (!cclasses[7]  || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[12]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetStaticFieldID((cclasses[7]), ((char *)(string_pool + 688LL)), ((char *)(string_pool + 692LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[7]), (cfields[1])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC Launching Diablo...; Stack: 1
        cstack1.l = (cstrings[55]);
        // New stack: 2
        // INVOKEVIRTUAL java/io/PrintStream.println(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[14]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 714LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 222); else env->CallVoidMethod(cstack0.l, (cmethods[8]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 225; Stack: 0
        // New stack: 0
        // NEW java/lang/ProcessBuilder; Stack: 0
        if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { cclasses_mtx[21].lock(); if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[56]))) { cclasses[21] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[21].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (jobject obj = env->AllocObject((cclasses[21]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ICONST_0; Stack: 2
        cstack2.i = 0;
        // New stack: 3
        // ANEWARRAY java/lang/String; Stack: 3
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[15]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (cstack2.i < 0) utils::throw_re(env, ((char *)(string_pool + 1864LL)), ((char *)(string_pool + 1901LL)), 225); else { cstack2.l = env->NewObjectArray(cstack2.i, (cclasses[9]), nullptr); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 3
        // INVOKESPECIAL java/lang/ProcessBuilder.<init>([Ljava/lang/String;)V; Stack: 3
        if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { cclasses_mtx[21].lock(); if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[56]))) { cclasses[21] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[21].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[38]) { cmethods[38] = env->GetMethodID((cclasses[21]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 1926LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 225); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[21]), (cmethods[38]), cstack2.l); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L13; Stack: 0
        L13: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 226; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETSTATIC wtf/diablo/launcher/temporary/LauncherInstance.LAUNCHER_DIRECTORY Ljava/io/File;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 1583LL)), ((char *)(string_pool + 1602LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } cstack1.l = env->GetStaticObjectField((cclasses[12]), (cfields[3])); refs.insert(cstack1.l); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/ProcessBuilder.directory(Ljava/io/File;)Ljava/lang/ProcessBuilder;; Stack: 2
        if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { cclasses_mtx[21].lock(); if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[56]))) { cclasses[21] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[21].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[39]) { cmethods[39] = env->GetMethodID((cclasses[21]), ((char *)(string_pool + 1949LL)), ((char *)(string_pool + 1959LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 226); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[39]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L14; Stack: 0
        L14: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 227; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // BIPUSH 7; Stack: 1
        cstack1.i = (jint) 7;
        // New stack: 2
        // ANEWARRAY java/lang/String; Stack: 2
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[15]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (cstack1.i < 0) utils::throw_re(env, ((char *)(string_pool + 1864LL)), ((char *)(string_pool + 1901LL)), 227); else { cstack1.l = env->NewObjectArray(cstack1.i, (cclasses[9]), nullptr); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // DUP; Stack: 2
        cstack2 = cstack1;
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // LDC java; Stack: 4
        cstack4.l = (cstrings[57]);
        // New stack: 5
        // AASTORE; Stack: 5
        if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 227); else { env->SetObjectArrayElement((jobjectArray) cstack2.l, cstack3.i, cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // DUP; Stack: 2
        cstack2 = cstack1;
        // New stack: 3
        // ICONST_1; Stack: 3
        cstack3.i = 1;
        // New stack: 4
        // LDC -Djava.library.path=natives/; Stack: 4
        cstack4.l = (cstrings[58]);
        // New stack: 5
        // AASTORE; Stack: 5
        if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 227); else { env->SetObjectArrayElement((jobjectArray) cstack2.l, cstack3.i, cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // DUP; Stack: 2
        cstack2 = cstack1;
        // New stack: 3
        // ICONST_2; Stack: 3
        cstack3.i = 2;
        // New stack: 4
        // LDC -jar; Stack: 4
        cstack4.l = (cstrings[59]);
        // New stack: 5
        // AASTORE; Stack: 5
        if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 227); else { env->SetObjectArrayElement((jobjectArray) cstack2.l, cstack3.i, cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // DUP; Stack: 2
        cstack2 = cstack1;
        // New stack: 3
        // ICONST_3; Stack: 3
        cstack3.i = 3;
        // New stack: 4
        // ALOAD 1; Stack: 4
        cstack4.l = clocal1.l; refs.insert(cstack4.l);
        // New stack: 5
        // INVOKEVIRTUAL java/io/File.getAbsolutePath()Ljava/lang/String;; Stack: 5
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[34]) { cmethods[34] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1757LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack4.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 227); else { cstack4.l = env->CallObjectMethod(cstack4.l, (cmethods[34])); refs.insert(cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 5
        // AASTORE; Stack: 5
        if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 227); else { env->SetObjectArrayElement((jobjectArray) cstack2.l, cstack3.i, cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // DUP; Stack: 2
        cstack2 = cstack1;
        // New stack: 3
        // ICONST_4; Stack: 3
        cstack3.i = 4;
        // New stack: 4
        // ALOAD 2; Stack: 4
        cstack4.l = clocal2.l; refs.insert(cstack4.l);
        // New stack: 5
        // AASTORE; Stack: 5
        if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 227); else { env->SetObjectArrayElement((jobjectArray) cstack2.l, cstack3.i, cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // DUP; Stack: 2
        cstack2 = cstack1;
        // New stack: 3
        // ICONST_5; Stack: 3
        cstack3.i = 5;
        // New stack: 4
        // ALOAD 0; Stack: 4
        cstack4.l = clocal0.l; refs.insert(cstack4.l);
        // New stack: 5
        // GETFIELD wtf/diablo/launcher/temporary/LauncherInstance.session Lwtf/diablo/launcher/temporary/session/DiabloSession;; Stack: 5
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[12]), ((char *)(string_pool + 1049LL)), ((char *)(string_pool + 1057LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack4.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 227); else { cstack4.l = env->GetObjectField(cstack4.l, (cfields[2])); refs.insert(cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 5
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloSession.getSessionID()Ljava/lang/String;; Stack: 5
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1131LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack4.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 227); else { cstack4.l = env->CallObjectMethod(cstack4.l, (cmethods[15])); refs.insert(cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 5
        // AASTORE; Stack: 5
        if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 227); else { env->SetObjectArrayElement((jobjectArray) cstack2.l, cstack3.i, cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // DUP; Stack: 2
        cstack2 = cstack1;
        // New stack: 3
        // BIPUSH 6; Stack: 3
        cstack3.i = (jint) 6;
        // New stack: 4
        // LDC Start; Stack: 4
        cstack4.l = (cstrings[60]);
        // New stack: 5
        // AASTORE; Stack: 5
        if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 227); else { env->SetObjectArrayElement((jobjectArray) cstack2.l, cstack3.i, cstack4.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/ProcessBuilder.command([Ljava/lang/String;)Ljava/lang/ProcessBuilder;; Stack: 2
        if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { cclasses_mtx[21].lock(); if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[56]))) { cclasses[21] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[21].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[40]) { cmethods[40] = env->GetMethodID((cclasses[21]), ((char *)(string_pool + 2014LL)), ((char *)(string_pool + 2022LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 227); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[40]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L15; Stack: 0
        L15: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 228; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/lang/ProcessBuilder.start()Ljava/lang/Process;; Stack: 1
        if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { cclasses_mtx[21].lock(); if (!cclasses[21] || env->IsSameObject(cclasses[21], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[56]))) { cclasses[21] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[21].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[41]) { cmethods[41] = env->GetMethodID((cclasses[21]), ((char *)(string_pool + 2070LL)), ((char *)(string_pool + 2076LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 228); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[41])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 232; Stack: 0
        // New stack: 0
        // GOTO L16; Stack: 0
        goto L16;
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 230; Stack: 0
        // New stack: 0
        // FRAME SAME1 L: null S: [java/lang/Exception]; Stack: 0
        refs.erase(cstack0.l); 
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L17; Stack: 0
        L17: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 231; Stack: 0
        // New stack: 0
        // NEW java/lang/RuntimeException; Stack: 0
        if (!cclasses[22] || env->IsSameObject(cclasses[22], NULL)) { cclasses_mtx[22].lock(); if (!cclasses[22] || env->IsSameObject(cclasses[22], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[61]))) { cclasses[22] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[22].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[22]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ALOAD 3; Stack: 2
        cstack2.l = clocal3.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKESPECIAL java/lang/RuntimeException.<init>(Ljava/lang/Throwable;)V; Stack: 3
        if (!cclasses[22] || env->IsSameObject(cclasses[22], NULL)) { cclasses_mtx[22].lock(); if (!cclasses[22] || env->IsSameObject(cclasses[22], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[61]))) { cclasses[22] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[22].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[42]) { cmethods[42] = env->GetMethodID((cclasses[22]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 2098LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 231); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[22]), (cmethods[42]), cstack2.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ATHROW; Stack: 1
        if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2123LL)), 231); else { jthrowable exception = (jthrowable) cstack0.l; env->Throw(exception); refs.insert(exception); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L16; Stack: 0
        L16: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 233; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [java/lang/ProcessBuilder] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L18; Stack: 0
        L18: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        return (void) 0;
        L_CATCH_0: if (env->IsInstanceOf(cstack0.l, (cclasses[19]))) { goto L3; }
        env->Throw((jthrowable) cstack0.l); return (void) 0;
    }
    
    // generateContentID(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/lang/String;
    jobject JNICALL __ngen_native_generateContentID6(JNIEnv *env, jclass clazz, jobject arg0, jobject arg1) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = arg0; refs.insert(clocal0.l);
        clocal1.l = arg1; refs.insert(clocal1.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 236; Stack: 0
        // New stack: 0
        // NEW java/lang/StringBuilder; Stack: 0
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[20]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // INVOKESPECIAL java/lang/StringBuilder.<init>()V; Stack: 2
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[33]) { cmethods[33] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 236); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[20]), (cmethods[33])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // LDC https://diablo.wtf/api/v1/auth/generateContentID?type=; Stack: 1
        cstack1.l = (cstrings[62]);
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 236); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[35]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ALOAD 1; Stack: 1
        cstack1.l = clocal1.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 236); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[35]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // INVOKEVIRTUAL java/lang/StringBuilder.toString()Ljava/lang/String;; Stack: 1
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[36]) { cmethods[36] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1855LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 236); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[36])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // INVOKESTATIC kong/unirest/Unirest.get(Ljava/lang/String;)Lkong/unirest/GetRequest;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[14]) { cmethods[14] = env->GetStaticMethodID((cclasses[1]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 1003LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[1]), (cmethods[14]), cstack0.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // LDC Authorization; Stack: 1
        cstack1.l = (cstrings[20]);
        // New stack: 2
        // ALOAD 0; Stack: 2
        cstack2.l = clocal0.l; refs.insert(cstack2.l);
        // New stack: 3
        // LABEL L2; Stack: 3
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // Line 237; Stack: 3
        // New stack: 3
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloSession.getSessionID()Ljava/lang/String;; Stack: 3
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1131LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 237); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[15])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/GetRequest.header(Ljava/lang/String;Ljava/lang/String;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 266LL)), ((char *)(string_pool + 273LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 237); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[16]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/GetRequest; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[14]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 1144LL)))).c_str(), 237); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 1
        // LABEL L3; Stack: 1
        L3: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // Line 238; Stack: 1
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/GetRequest.asString()Lkong/unirest/HttpResponse;; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 611LL)), ((char *)(string_pool + 620LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 238); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[17])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 240; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/HttpResponse.getStatus()I; Stack: 1
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 650LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 664LL)), 240); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[7])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // SIPUSH 200; Stack: 1
        cstack1.i = (jint) 200;
        // New stack: 2
        // IF_ICMPEQ L5; Stack: 2
        if (cstack0.i == cstack1.i) goto L5;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 241; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 244; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [kong/unirest/HttpResponse] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/HttpResponse.getBody()Ljava/lang/Object;; Stack: 1
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 744LL)), ((char *)(string_pool + 752LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 244); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[9])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // CHECKCAST java/lang/String; Stack: 1
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[15]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[9]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 773LL)))).c_str(), 244); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // writeBootstrapperFile(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/io/File;
    jobject JNICALL __ngen_native_writeBootstrapperFile7(JNIEnv *env, jclass clazz, jobject arg0, jobject arg1) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {}, clocal4 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = arg0; refs.insert(clocal0.l);
        clocal1.l = arg1; refs.insert(clocal1.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 248; Stack: 0
        // New stack: 0
        // LDC https://diablo.wtf/api/v1/download/get; Stack: 0
        cstack0.l = (cstrings[63]);
        // New stack: 1
        // INVOKESTATIC kong/unirest/Unirest.get(Ljava/lang/String;)Lkong/unirest/GetRequest;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[14]) { cmethods[14] = env->GetStaticMethodID((cclasses[1]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 1003LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[1]), (cmethods[14]), cstack0.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // LDC Authorization; Stack: 1
        cstack1.l = (cstrings[20]);
        // New stack: 2
        // ALOAD 0; Stack: 2
        cstack2.l = clocal0.l; refs.insert(cstack2.l);
        // New stack: 3
        // LABEL L2; Stack: 3
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // Line 249; Stack: 3
        // New stack: 3
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloSession.getSessionID()Ljava/lang/String;; Stack: 3
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1131LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 249); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[15])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/GetRequest.header(Ljava/lang/String;Ljava/lang/String;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 266LL)), ((char *)(string_pool + 273LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 249); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[16]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/GetRequest; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[14]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 1144LL)))).c_str(), 249); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 1
        // LDC contentID; Stack: 1
        cstack1.l = (cstrings[64]);
        // New stack: 2
        // ALOAD 1; Stack: 2
        cstack2.l = clocal1.l; refs.insert(cstack2.l);
        // New stack: 3
        // LABEL L3; Stack: 3
        L3: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // Line 250; Stack: 3
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/GetRequest.queryString(Ljava/lang/String;Ljava/lang/Object;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[43]) { cmethods[43] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 2134LL)), ((char *)(string_pool + 2146LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 250); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[43]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/GetRequest; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[14]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 1144LL)))).c_str(), 250); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 1
        // LABEL L4; Stack: 1
        L4: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // Line 251; Stack: 1
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/GetRequest.asBytes()Lkong/unirest/HttpResponse;; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[44]) { cmethods[44] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 2211LL)), ((char *)(string_pool + 620LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 251); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[44])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 253; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/HttpResponse.getStatus()I; Stack: 1
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 650LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 664LL)), 253); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[7])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // SIPUSH 200; Stack: 1
        cstack1.i = (jint) 200;
        // New stack: 2
        // IF_ICMPEQ L6; Stack: 2
        if (cstack0.i == cstack1.i) goto L6;
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 254; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 257; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [kong/unirest/HttpResponse] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // NEW java/io/File; Stack: 0
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[18]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // NEW java/lang/StringBuilder; Stack: 2
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[20]))) { cstack2.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // DUP; Stack: 3
        cstack3 = cstack2;
        // New stack: 4
        // INVOKESPECIAL java/lang/StringBuilder.<init>()V; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[33]) { cmethods[33] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 257); else env->CallNonvirtualVoidMethod(cstack3.l, (cclasses[20]), (cmethods[33])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // GETSTATIC wtf/diablo/launcher/temporary/LauncherInstance.LAUNCHER_DIRECTORY Ljava/io/File;; Stack: 3
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 1583LL)), ((char *)(string_pool + 1602LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[12]), (cfields[3])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/io/File.getAbsolutePath()Ljava/lang/String;; Stack: 4
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[34]) { cmethods[34] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1757LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 257); else { cstack3.l = env->CallObjectMethod(cstack3.l, (cmethods[34])); refs.insert(cstack3.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 257); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // GETSTATIC java/io/File.separator Ljava/lang/String;; Stack: 3
        if (!cclasses[18]  || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[4]) { cfields[4] = env->GetStaticFieldID((cclasses[18]), ((char *)(string_pool + 1826LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[18]), (cfields[4])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 257); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // LDC bootstrapper.exe; Stack: 3
        cstack3.l = (cstrings[52]);
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 257); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL java/lang/StringBuilder.toString()Ljava/lang/String;; Stack: 3
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[36]) { cmethods[36] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1855LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 257); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[36])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKESPECIAL java/io/File.<init>(Ljava/lang/String;)V; Stack: 3
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[37]) { cmethods[37] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 257); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[18]), (cmethods[37]), cstack2.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 259; Stack: 0
        // New stack: 0
        // NEW java/io/FileOutputStream; Stack: 0
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[23]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ALOAD 3; Stack: 2
        cstack2.l = clocal3.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKESPECIAL java/io/FileOutputStream.<init>(Ljava/io/File;)V; Stack: 3
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[45]) { cmethods[45] = env->GetMethodID((cclasses[23]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 2219LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 259); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[23]), (cmethods[45]), cstack2.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L9; Stack: 0
        L9: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 260; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE kong/unirest/HttpResponse.getBody()Ljava/lang/Object;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 744LL)), ((char *)(string_pool + 752LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 260); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[9])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // CHECKCAST [B; Stack: 2
        if (!cclasses[24] || env->IsSameObject(cclasses[24], NULL)) { cclasses_mtx[24].lock(); if (!cclasses[24] || env->IsSameObject(cclasses[24], NULL)) { if (jclass clazz = env->FindClass(((char *)(string_pool + 2237LL)))) { cclasses[24] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[24].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[24]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 2237LL)))).c_str(), 260); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 2
        // INVOKEVIRTUAL java/io/FileOutputStream.write([B)V; Stack: 2
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[46]) { cmethods[46] = env->GetMethodID((cclasses[23]), ((char *)(string_pool + 2240LL)), ((char *)(string_pool + 2246LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 260); else env->CallVoidMethod(cstack0.l, (cmethods[46]), cstack1.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // LABEL L10; Stack: 0
        L10: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 261; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/FileOutputStream.close()V; Stack: 1
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[47]) { cmethods[47] = env->GetMethodID((cclasses[23]), ((char *)(string_pool + 2252LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 261); else env->CallVoidMethod(cstack0.l, (cmethods[47])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // LABEL L11; Stack: 0
        L11: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 263; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L12; Stack: 0
        L12: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // writeNativesFile(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/io/File;
    jobject JNICALL __ngen_native_writeNativesFile8(JNIEnv *env, jclass clazz, jobject arg0, jobject arg1) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {}, clocal4 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = arg0; refs.insert(clocal0.l);
        clocal1.l = arg1; refs.insert(clocal1.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 267; Stack: 0
        // New stack: 0
        // LDC https://diablo.wtf/api/v1/download/get; Stack: 0
        cstack0.l = (cstrings[63]);
        // New stack: 1
        // INVOKESTATIC kong/unirest/Unirest.get(Ljava/lang/String;)Lkong/unirest/GetRequest;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[14]) { cmethods[14] = env->GetStaticMethodID((cclasses[1]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 1003LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[1]), (cmethods[14]), cstack0.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // LDC Authorization; Stack: 1
        cstack1.l = (cstrings[20]);
        // New stack: 2
        // ALOAD 0; Stack: 2
        cstack2.l = clocal0.l; refs.insert(cstack2.l);
        // New stack: 3
        // LABEL L2; Stack: 3
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // Line 268; Stack: 3
        // New stack: 3
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloSession.getSessionID()Ljava/lang/String;; Stack: 3
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1131LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 268); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[15])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/GetRequest.header(Ljava/lang/String;Ljava/lang/String;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 266LL)), ((char *)(string_pool + 273LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 268); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[16]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/GetRequest; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[14]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 1144LL)))).c_str(), 268); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 1
        // LDC contentID; Stack: 1
        cstack1.l = (cstrings[64]);
        // New stack: 2
        // ALOAD 1; Stack: 2
        cstack2.l = clocal1.l; refs.insert(cstack2.l);
        // New stack: 3
        // LABEL L3; Stack: 3
        L3: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // Line 269; Stack: 3
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/GetRequest.queryString(Ljava/lang/String;Ljava/lang/Object;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[43]) { cmethods[43] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 2134LL)), ((char *)(string_pool + 2146LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 269); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[43]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/GetRequest; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[14]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 1144LL)))).c_str(), 269); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 1
        // LABEL L4; Stack: 1
        L4: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // Line 270; Stack: 1
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/GetRequest.asBytes()Lkong/unirest/HttpResponse;; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[44]) { cmethods[44] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 2211LL)), ((char *)(string_pool + 620LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 270); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[44])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 272; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/HttpResponse.getStatus()I; Stack: 1
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 650LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 664LL)), 272); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[7])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // SIPUSH 200; Stack: 1
        cstack1.i = (jint) 200;
        // New stack: 2
        // IF_ICMPEQ L6; Stack: 2
        if (cstack0.i == cstack1.i) goto L6;
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 273; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 276; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [kong/unirest/HttpResponse] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // NEW java/io/File; Stack: 0
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[18]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // NEW java/lang/StringBuilder; Stack: 2
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[20]))) { cstack2.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // DUP; Stack: 3
        cstack3 = cstack2;
        // New stack: 4
        // INVOKESPECIAL java/lang/StringBuilder.<init>()V; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[33]) { cmethods[33] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 276); else env->CallNonvirtualVoidMethod(cstack3.l, (cclasses[20]), (cmethods[33])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // GETSTATIC wtf/diablo/launcher/temporary/LauncherInstance.LAUNCHER_DIRECTORY Ljava/io/File;; Stack: 3
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 1583LL)), ((char *)(string_pool + 1602LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[12]), (cfields[3])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/io/File.getAbsolutePath()Ljava/lang/String;; Stack: 4
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[34]) { cmethods[34] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1757LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 276); else { cstack3.l = env->CallObjectMethod(cstack3.l, (cmethods[34])); refs.insert(cstack3.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 276); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // GETSTATIC java/io/File.separator Ljava/lang/String;; Stack: 3
        if (!cclasses[18]  || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[4]) { cfields[4] = env->GetStaticFieldID((cclasses[18]), ((char *)(string_pool + 1826LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[18]), (cfields[4])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 276); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // LDC natives.zip; Stack: 3
        cstack3.l = (cstrings[66]);
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 276); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL java/lang/StringBuilder.toString()Ljava/lang/String;; Stack: 3
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[36]) { cmethods[36] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1855LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 276); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[36])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKESPECIAL java/io/File.<init>(Ljava/lang/String;)V; Stack: 3
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[37]) { cmethods[37] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 276); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[18]), (cmethods[37]), cstack2.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 278; Stack: 0
        // New stack: 0
        // NEW java/io/FileOutputStream; Stack: 0
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[23]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ALOAD 3; Stack: 2
        cstack2.l = clocal3.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKESPECIAL java/io/FileOutputStream.<init>(Ljava/io/File;)V; Stack: 3
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[45]) { cmethods[45] = env->GetMethodID((cclasses[23]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 2219LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 278); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[23]), (cmethods[45]), cstack2.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L9; Stack: 0
        L9: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 279; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE kong/unirest/HttpResponse.getBody()Ljava/lang/Object;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 744LL)), ((char *)(string_pool + 752LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 279); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[9])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // CHECKCAST [B; Stack: 2
        if (!cclasses[24] || env->IsSameObject(cclasses[24], NULL)) { cclasses_mtx[24].lock(); if (!cclasses[24] || env->IsSameObject(cclasses[24], NULL)) { if (jclass clazz = env->FindClass(((char *)(string_pool + 2237LL)))) { cclasses[24] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[24].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[24]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 2237LL)))).c_str(), 279); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 2
        // INVOKEVIRTUAL java/io/FileOutputStream.write([B)V; Stack: 2
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[46]) { cmethods[46] = env->GetMethodID((cclasses[23]), ((char *)(string_pool + 2240LL)), ((char *)(string_pool + 2246LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 279); else env->CallVoidMethod(cstack0.l, (cmethods[46]), cstack1.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // LABEL L10; Stack: 0
        L10: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 280; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/FileOutputStream.close()V; Stack: 1
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[47]) { cmethods[47] = env->GetMethodID((cclasses[23]), ((char *)(string_pool + 2252LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 280); else env->CallVoidMethod(cstack0.l, (cmethods[47])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // LABEL L11; Stack: 0
        L11: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 282; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L12; Stack: 0
        L12: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // writeLibrariesFile(Lwtf/diablo/launcher/temporary/session/DiabloSession;Ljava/lang/String;)Ljava/io/File;
    jobject JNICALL __ngen_native_writeLibrariesFile9(JNIEnv *env, jclass clazz, jobject arg0, jobject arg1) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {}, clocal4 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = arg0; refs.insert(clocal0.l);
        clocal1.l = arg1; refs.insert(clocal1.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 286; Stack: 0
        // New stack: 0
        // LDC https://diablo.wtf/api/v1/download/get; Stack: 0
        cstack0.l = (cstrings[63]);
        // New stack: 1
        // INVOKESTATIC kong/unirest/Unirest.get(Ljava/lang/String;)Lkong/unirest/GetRequest;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[14]) { cmethods[14] = env->GetStaticMethodID((cclasses[1]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 1003LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[1]), (cmethods[14]), cstack0.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // LDC Authorization; Stack: 1
        cstack1.l = (cstrings[20]);
        // New stack: 2
        // ALOAD 0; Stack: 2
        cstack2.l = clocal0.l; refs.insert(cstack2.l);
        // New stack: 3
        // LABEL L2; Stack: 3
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // Line 287; Stack: 3
        // New stack: 3
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloSession.getSessionID()Ljava/lang/String;; Stack: 3
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[21]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[13]), ((char *)(string_pool + 1131LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 287); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[15])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/GetRequest.header(Ljava/lang/String;Ljava/lang/String;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 266LL)), ((char *)(string_pool + 273LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 287); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[16]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/GetRequest; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[14]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 1144LL)))).c_str(), 287); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 1
        // LDC contentID; Stack: 1
        cstack1.l = (cstrings[64]);
        // New stack: 2
        // ALOAD 1; Stack: 2
        cstack2.l = clocal1.l; refs.insert(cstack2.l);
        // New stack: 3
        // LABEL L3; Stack: 3
        L3: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // Line 288; Stack: 3
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/GetRequest.queryString(Ljava/lang/String;Ljava/lang/Object;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[43]) { cmethods[43] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 2134LL)), ((char *)(string_pool + 2146LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 288); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[43]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/GetRequest; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[14]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 1144LL)))).c_str(), 288); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 1
        // LABEL L4; Stack: 1
        L4: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // Line 289; Stack: 1
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/GetRequest.asBytes()Lkong/unirest/HttpResponse;; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[22]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[44]) { cmethods[44] = env->GetMethodID((cclasses[14]), ((char *)(string_pool + 2211LL)), ((char *)(string_pool + 620LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 289); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[44])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 291; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/HttpResponse.getStatus()I; Stack: 1
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 650LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 664LL)), 291); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[7])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // SIPUSH 200; Stack: 1
        cstack1.i = (jint) 200;
        // New stack: 2
        // IF_ICMPEQ L6; Stack: 2
        if (cstack0.i == cstack1.i) goto L6;
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 292; Stack: 0
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 295; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [kong/unirest/HttpResponse] S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // NEW java/io/File; Stack: 0
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[18]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // NEW java/lang/StringBuilder; Stack: 2
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[20]))) { cstack2.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // DUP; Stack: 3
        cstack3 = cstack2;
        // New stack: 4
        // INVOKESPECIAL java/lang/StringBuilder.<init>()V; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[33]) { cmethods[33] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 295); else env->CallNonvirtualVoidMethod(cstack3.l, (cclasses[20]), (cmethods[33])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // GETSTATIC wtf/diablo/launcher/temporary/LauncherInstance.LAUNCHER_DIRECTORY Ljava/io/File;; Stack: 3
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 1583LL)), ((char *)(string_pool + 1602LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[12]), (cfields[3])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/io/File.getAbsolutePath()Ljava/lang/String;; Stack: 4
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[34]) { cmethods[34] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1757LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 295); else { cstack3.l = env->CallObjectMethod(cstack3.l, (cmethods[34])); refs.insert(cstack3.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 295); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // GETSTATIC java/io/File.separator Ljava/lang/String;; Stack: 3
        if (!cclasses[18]  || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[4]) { cfields[4] = env->GetStaticFieldID((cclasses[18]), ((char *)(string_pool + 1826LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[18]), (cfields[4])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 295); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // LDC libraries.zip; Stack: 3
        cstack3.l = (cstrings[67]);
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 295); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL java/lang/StringBuilder.toString()Ljava/lang/String;; Stack: 3
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[36]) { cmethods[36] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1855LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 295); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[36])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKESPECIAL java/io/File.<init>(Ljava/lang/String;)V; Stack: 3
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[37]) { cmethods[37] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 295); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[18]), (cmethods[37]), cstack2.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 297; Stack: 0
        // New stack: 0
        // NEW java/io/FileOutputStream; Stack: 0
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[23]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ALOAD 3; Stack: 2
        cstack2.l = clocal3.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKESPECIAL java/io/FileOutputStream.<init>(Ljava/io/File;)V; Stack: 3
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[45]) { cmethods[45] = env->GetMethodID((cclasses[23]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 2219LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 297); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[23]), (cmethods[45]), cstack2.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L9; Stack: 0
        L9: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 298; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE kong/unirest/HttpResponse.getBody()Ljava/lang/Object;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 744LL)), ((char *)(string_pool + 752LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 298); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[9])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // CHECKCAST [B; Stack: 2
        if (!cclasses[24] || env->IsSameObject(cclasses[24], NULL)) { cclasses_mtx[24].lock(); if (!cclasses[24] || env->IsSameObject(cclasses[24], NULL)) { if (jclass clazz = env->FindClass(((char *)(string_pool + 2237LL)))) { cclasses[24] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[24].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[24]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 2237LL)))).c_str(), 298); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 2
        // INVOKEVIRTUAL java/io/FileOutputStream.write([B)V; Stack: 2
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[46]) { cmethods[46] = env->GetMethodID((cclasses[23]), ((char *)(string_pool + 2240LL)), ((char *)(string_pool + 2246LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 298); else env->CallVoidMethod(cstack0.l, (cmethods[46]), cstack1.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // LABEL L10; Stack: 0
        L10: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 299; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/FileOutputStream.close()V; Stack: 1
        if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { cclasses_mtx[23].lock(); if (!cclasses[23] || env->IsSameObject(cclasses[23], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[65]))) { cclasses[23] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[23].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[47]) { cmethods[47] = env->GetMethodID((cclasses[23]), ((char *)(string_pool + 2252LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 299); else env->CallVoidMethod(cstack0.l, (cmethods[47])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // LABEL L11; Stack: 0
        L11: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 301; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L12; Stack: 0
        L12: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // extract(Ljava/io/File;Ljava/io/File;)Z
    jboolean JNICALL __ngen_native_extract10(JNIEnv *env, jclass clazz, jobject arg0, jobject arg1) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jboolean) 0; }
    
        jobject lookup = nullptr;
        // try-catch-class java/io/IOException
        if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { cclasses_mtx[17].lock(); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[33]))) { cclasses[17] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[17].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } }
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = arg0; refs.insert(clocal0.l);
        clocal1.l = arg1; refs.insert(clocal1.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 306; Stack: 0
        // New stack: 0
        // NEW net/lingala/zip4j/ZipFile; Stack: 0
        if (!cclasses[25] || env->IsSameObject(cclasses[25], NULL)) { cclasses_mtx[25].lock(); if (!cclasses[25] || env->IsSameObject(cclasses[25], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[68]))) { cclasses[25] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[25].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (jobject obj = env->AllocObject((cclasses[25]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ALOAD 0; Stack: 2
        cstack2.l = clocal0.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKESPECIAL net/lingala/zip4j/ZipFile.<init>(Ljava/io/File;)V; Stack: 3
        if (!cclasses[25] || env->IsSameObject(cclasses[25], NULL)) { cclasses_mtx[25].lock(); if (!cclasses[25] || env->IsSameObject(cclasses[25], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[68]))) { cclasses[25] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[25].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[48]) { cmethods[48] = env->GetMethodID((cclasses[25]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 2219LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 306); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[25]), (cmethods[48]), cstack2.l); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 308; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 1; Stack: 1
        cstack1.l = clocal1.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEVIRTUAL java/io/File.getAbsolutePath()Ljava/lang/String;; Stack: 2
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[34]) { cmethods[34] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 1757LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 308); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[34])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 2
        // INVOKEVIRTUAL net/lingala/zip4j/ZipFile.extractAll(Ljava/lang/String;)V; Stack: 2
        if (!cclasses[25] || env->IsSameObject(cclasses[25], NULL)) { cclasses_mtx[25].lock(); if (!cclasses[25] || env->IsSameObject(cclasses[25], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[68]))) { cclasses[25] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[25].unlock(); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; } } if (!cmethods[49]) { cmethods[49] = env->GetMethodID((cclasses[25]), ((char *)(string_pool + 2258LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 308); else env->CallVoidMethod(cstack0.l, (cmethods[49]), cstack1.l); 
        if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack0.l = exception; refs.insert(exception); goto L_CATCH_0; }
        // New stack: 0
        // Line 309; Stack: 0
        // New stack: 0
        // ICONST_1; Stack: 0
        cstack0.i = 1;
        // New stack: 1
        // LABEL L2; Stack: 1
        L2: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 1
        // IRETURN; Stack: 1
        return (jboolean) cstack0.i;
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 310; Stack: 0
        // New stack: 0
        // FRAME SAME1 L: null S: [java/io/IOException]; Stack: 0
        refs.erase(cstack0.l); 
        refs.erase(clocal0.l); refs.erase(clocal1.l); 
        utils::clear_refs(env, refs);
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 311; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/io/IOException.printStackTrace()V; Stack: 1
        if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { cclasses_mtx[17].lock(); if (!cclasses[17] || env->IsSameObject(cclasses[17], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[33]))) { cclasses[17] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[17].unlock(); if (env->ExceptionCheck()) { return (jboolean) 0; } } if (!cmethods[25]) { cmethods[25] = env->GetMethodID((cclasses[17]), ((char *)(string_pool + 1567LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jboolean) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 183LL)), 311); else env->CallVoidMethod(cstack0.l, (cmethods[25])); 
        if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        // Line 312; Stack: 0
        // New stack: 0
        // ICONST_0; Stack: 0
        cstack0.i = 0;
        // New stack: 1
        // IRETURN; Stack: 1
        return (jboolean) cstack0.i;
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (jboolean) 0; }
        // New stack: 0
        return (jboolean) 0;
        L_CATCH_0: if (env->IsInstanceOf(cstack0.l, (cclasses[17]))) { goto L3; }
        env->Throw((jthrowable) cstack0.l); return (jboolean) 0;
    }
    
    // getInstance()Lwtf/diablo/launcher/temporary/LauncherInstance;
    jobject JNICALL __ngen_native_getInstance11(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {};
        std::unordered_set<jobject> refs;
    
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 317; Stack: 0
        // New stack: 0
        // GETSTATIC wtf/diablo/launcher/temporary/LauncherInstance.instance Lwtf/diablo/launcher/temporary/LauncherInstance;; Stack: 0
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[5]) { cfields[5] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 2332LL)), ((char *)(string_pool + 2341LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[12]), (cfields[5])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        return (jobject) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_native0_special_clinit12(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {};
        std::unordered_set<jobject> refs;
    
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 18; Stack: 0
        // New stack: 0
        // NEW java/io/File; Stack: 0
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[18]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // NEW java/lang/StringBuilder; Stack: 2
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[20]))) { cstack2.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // DUP; Stack: 3
        cstack3 = cstack2;
        // New stack: 4
        // INVOKESPECIAL java/lang/StringBuilder.<init>()V; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[33]) { cmethods[33] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 18); else env->CallNonvirtualVoidMethod(cstack3.l, (cclasses[20]), (cmethods[33])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // LDC user.home; Stack: 3
        cstack3.l = (cstrings[69]);
        // New stack: 4
        // INVOKESTATIC java/lang/System.getProperty(Ljava/lang/String;)Ljava/lang/String;; Stack: 4
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[12]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[50]) { cmethods[50] = env->GetStaticMethodID((cclasses[7]), ((char *)(string_pool + 2415LL)), ((char *)(string_pool + 2427LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack3.l = env->CallStaticObjectMethod((cclasses[7]), (cmethods[50]), cstack3.l); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 18); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // GETSTATIC java/io/File.separator Ljava/lang/String;; Stack: 3
        if (!cclasses[18]  || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetStaticFieldID((cclasses[18]), ((char *)(string_pool + 1826LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[18]), (cfields[4])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 18); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // LDC Diablo; Stack: 3
        cstack3.l = (cstrings[70]);
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 18); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // INVOKEVIRTUAL java/lang/StringBuilder.toString()Ljava/lang/String;; Stack: 3
        if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { cclasses_mtx[20].lock(); if (!cclasses[20] || env->IsSameObject(cclasses[20], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[51]))) { cclasses[20] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[20].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[36]) { cmethods[36] = env->GetMethodID((cclasses[20]), ((char *)(string_pool + 1855LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 18); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[36])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // INVOKESPECIAL java/io/File.<init>(Ljava/lang/String;)V; Stack: 3
        if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { cclasses_mtx[18].lock(); if (!cclasses[18] || env->IsSameObject(cclasses[18], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[18] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[18].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[37]) { cmethods[37] = env->GetMethodID((cclasses[18]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 722LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 18); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[18]), (cmethods[37]), cstack2.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // PUTSTATIC wtf/diablo/launcher/temporary/LauncherInstance.LAUNCHER_DIRECTORY Ljava/io/File;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 1583LL)), ((char *)(string_pool + 1602LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticObjectField((cclasses[12]), (cfields[3]), cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 19; Stack: 0
        // New stack: 0
        // NEW wtf/diablo/launcher/temporary/LauncherInstance; Stack: 0
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[12]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // INVOKESPECIAL wtf/diablo/launcher/temporary/LauncherInstance.<init>()V; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[51]) { cmethods[51] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 19); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[12]), (cmethods[51])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // PUTSTATIC wtf/diablo/launcher/temporary/LauncherInstance.instance Lwtf/diablo/launcher/temporary/LauncherInstance;; Stack: 1
        if (!cclasses[12]  || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetStaticFieldID((cclasses[12]), ((char *)(string_pool + 2332LL)), ((char *)(string_pool + 2341LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticObjectField((cclasses[12]), (cfields[5]), cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();

        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2466LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[0] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2493LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[11] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2519LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[60] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2525LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[12] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2542LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[54] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2550LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[67] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2564LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[13] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2594LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[58] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2623LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[16] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2633LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[3] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2670LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[63] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2709LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[2] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2718LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[21] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2770LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[57] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2775LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[9] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2796LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[32] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2808LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[37] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2861LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[52] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2878LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[55] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2898LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[10] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2929LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[8] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2974LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[6] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2991LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[26] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2997LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[69] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3007LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[47] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3031LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[4] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3052LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[50] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3072LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[43] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3097LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[49] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3149LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[66] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3161LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[45] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3211LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[68] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3237LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[36] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3265LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[51] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3289LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[38] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3297LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[23] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3320LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[28] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3345LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[41] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3393LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[62] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3448LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[46] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3498LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[17] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3526LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[20] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3540LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[18] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3587LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[40] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3617LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[59] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3622LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[31] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3659LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[35] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3709LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[15] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3726LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[27] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3731LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[30] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3751LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[56] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3776LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[29] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3816LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[5] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3829LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[14] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3849LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[7] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3882LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[42] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3892LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[64] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3902LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[24] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3908LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[65] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3933LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[33] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3953LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[48] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4002LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[22] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4026LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[61] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4053LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[25] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4077LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[39] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4090LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[19] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4132LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[70] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4139LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[53] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4189LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[44] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4236LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[34] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4249LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[1] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }

        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 0LL)), (char *)((char *)(string_pool + 6LL)), (void *)&__ngen_native_login1 },
            { (char *)((char *)(string_pool + 990LL)), (char *)((char *)(string_pool + 73LL)), (void *)&__ngen_native_validateHWID2 },
            { (char *)((char *)(string_pool + 969LL)), (char *)((char *)(string_pool + 722LL)), (void *)&__ngen_native_attemptAuthorization3 },
            { (char *)((char *)(string_pool + 1330LL)), (char *)((char *)(string_pool + 73LL)), (void *)&__ngen_native_initializeAssets4 },
            { (char *)((char *)(string_pool + 1750LL)), (char *)((char *)(string_pool + 73LL)), (void *)&__ngen_native_launch5 },
            { (char *)((char *)(string_pool + 1347LL)), (char *)((char *)(string_pool + 1365LL)), (void *)&__ngen_native_generateContentID6 },
            { (char *)((char *)(string_pool + 1457LL)), (char *)((char *)(string_pool + 1479LL)), (void *)&__ngen_native_writeBootstrapperFile7 },
            { (char *)((char *)(string_pool + 1667LL)), (char *)((char *)(string_pool + 1479LL)), (void *)&__ngen_native_writeNativesFile8 },
            { (char *)((char *)(string_pool + 1731LL)), (char *)((char *)(string_pool + 1479LL)), (void *)&__ngen_native_writeLibrariesFile9 },
            { (char *)((char *)(string_pool + 1684LL)), (char *)((char *)(string_pool + 1692LL)), (void *)&__ngen_native_extract10 },
            { (char *)((char *)(string_pool + 2269LL)), (char *)((char *)(string_pool + 2281LL)), (void *)&__ngen_native_getInstance11 },
            { (char *)((char *)(string_pool + 2390LL)), (char *)((char *)(string_pool + 73LL)), (void *)&__ngen_native0_special_clinit12 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 3540LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}