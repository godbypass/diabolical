#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "wtf_diablo_launcher_temporary_session_DiabloSession_3.hpp"

// wtf/diablo/launcher/temporary/session/DiabloSession
namespace native_jvm::classes::__ngen_wtf_diablo_launcher_temporary_session_DiabloSession_3 {

    char *string_pool;

    jstring cstrings[20];
    std::mutex cclasses_mtx[12];
    jclass cclasses[12];
    jmethodID cmethods[13];
    jfieldID cfields[8];

    // update()V
    void JNICALL __ngen_native_update1(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (void) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {}, clocal4 = {}, clocal5 = {}, clocal6 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 23; Stack: 0
        // New stack: 0
        // LDC https://diablo.wtf/api/v1/auth/user; Stack: 0
        cstack0.l = (cstrings[0]);
        // New stack: 1
        // INVOKESTATIC kong/unirest/Unirest.get(Ljava/lang/String;)Lkong/unirest/GetRequest;; Stack: 1
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[1]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetStaticMethodID((cclasses[0]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 1003LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[0]), (cmethods[0]), cstack0.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LDC Authorization; Stack: 1
        cstack1.l = (cstrings[2]);
        // New stack: 2
        // NEW java/lang/StringBuilder; Stack: 2
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[1]))) { cstack2.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // DUP; Stack: 3
        cstack3 = cstack2;
        // New stack: 4
        // INVOKESPECIAL java/lang/StringBuilder.<init>()V; Stack: 4
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 23); else env->CallNonvirtualVoidMethod(cstack3.l, (cclasses[1]), (cmethods[1])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // LDC Bearer ; Stack: 3
        cstack3.l = (cstrings[4]);
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 23); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[2]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // ALOAD 0; Stack: 3
        cstack3.l = clocal0.l; refs.insert(cstack3.l);
        // New stack: 4
        // GETFIELD wtf/diablo/launcher/temporary/session/DiabloSession.sessionID Ljava/lang/String;; Stack: 4
        if (!cclasses[2]  || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[5]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[2]), ((char *)(string_pool + 2623LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack3.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 23); else { cstack3.l = env->GetObjectField(cstack3.l, (cfields[0])); refs.insert(cstack3.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 4
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 4
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 23); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[2]), cstack3.l); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // INVOKEVIRTUAL java/lang/StringBuilder.toString()Ljava/lang/String;; Stack: 3
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 1855LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 23); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[3])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // LABEL L2; Stack: 3
        L2: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 3
        // Line 24; Stack: 3
        // New stack: 3
        // INVOKEINTERFACE kong/unirest/GetRequest.header(Ljava/lang/String;Ljava/lang/String;)Lkong/unirest/HttpRequest;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 266LL)), ((char *)(string_pool + 273LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 24); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[4]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // CHECKCAST kong/unirest/GetRequest; Stack: 1
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[3]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 1144LL)))).c_str(), 24); 
        if (env->ExceptionCheck()) { return (void) 0; } } 
        // New stack: 1
        // LABEL L3; Stack: 1
        L3: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // Line 25; Stack: 1
        // New stack: 1
        // INVOKEINTERFACE kong/unirest/GetRequest.asString()Lkong/unirest/HttpResponse;; Stack: 1
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[5]) { cmethods[5] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 611LL)), ((char *)(string_pool + 620LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 25); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[5])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 1; Stack: 1
        clocal1.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 27; Stack: 0
        // New stack: 0
        // GETSTATIC wtf/diablo/launcher/temporary/util/Constants.GSON Lcom/google/gson/Gson;; Stack: 0
        if (!cclasses[4]  || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[7]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetStaticFieldID((cclasses[4]), ((char *)(string_pool + 443LL)), ((char *)(string_pool + 448LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[4]), (cfields[1])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ALOAD 1; Stack: 1
        cstack1.l = clocal1.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE kong/unirest/HttpResponse.getBody()Ljava/lang/Object;; Stack: 2
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[8]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 744LL)), ((char *)(string_pool + 752LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 27); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[6])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 2
        // CHECKCAST java/lang/String; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[6]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 773LL)))).c_str(), 27); 
        if (env->ExceptionCheck()) { return (void) 0; } } 
        // New stack: 2
        // LDC Lcom/google/gson/JsonObject;; Stack: 2
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } cstack2.l = (cclasses[7]);
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/Gson.fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[11]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 790LL)), ((char *)(string_pool + 799LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 27); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // CHECKCAST com/google/gson/JsonObject; Stack: 1
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[9]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 855LL)))).c_str(), 27); 
        if (env->ExceptionCheck()) { return (void) 0; } } 
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 29; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // LDC username; Stack: 2
        cstack2.l = (cstrings[12]);
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/JsonObject.get(Ljava/lang/String;)Lcom/google/gson/JsonElement;; Stack: 3
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 886LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 29); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[8]), cstack2.l); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 2
        // INVOKEVIRTUAL com/google/gson/JsonElement.getAsString()Ljava/lang/String;; Stack: 2
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[13]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 936LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 29); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[9])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 2
        // PUTFIELD wtf/diablo/launcher/temporary/session/DiabloSession.username Ljava/lang/String;; Stack: 2
        if (!cclasses[2]  || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[5]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[2]), ((char *)(string_pool + 4249LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1303LL)), 29); else env->SetObjectField(cstack0.l, (cfields[2]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 30; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // LDC uid; Stack: 2
        cstack2.l = (cstrings[14]);
        // New stack: 3
        // INVOKEVIRTUAL com/google/gson/JsonObject.get(Ljava/lang/String;)Lcom/google/gson/JsonElement;; Stack: 3
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 886LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 30); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[8]), cstack2.l); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 2
        // INVOKEVIRTUAL com/google/gson/JsonElement.getAsInt()I; Stack: 2
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[13]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 6065LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 5680LL)), 30); else cstack1.i = env->CallIntMethod(cstack1.l, (cmethods[10])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 2
        // PUTFIELD wtf/diablo/launcher/temporary/session/DiabloSession.uid I; Stack: 2
        if (!cclasses[2]  || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[5]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetFieldID((cclasses[2]), ((char *)(string_pool + 6074LL)), ((char *)(string_pool + 5559LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 6078LL)), 30); else env->SetIntField(cstack0.l, (cfields[3]), cstack1.i); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 32; Stack: 0
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC rank; Stack: 1
        cstack1.l = (cstrings[15]);
        // New stack: 2
        // INVOKEVIRTUAL com/google/gson/JsonObject.get(Ljava/lang/String;)Lcom/google/gson/JsonElement;; Stack: 2
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 886LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 32); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[8]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // INVOKEVIRTUAL com/google/gson/JsonElement.getAsString()Ljava/lang/String;; Stack: 1
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[13]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 936LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 32); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[9])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 34; Stack: 0
        // New stack: 0
        // GETSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.USER Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 0
        if (!cclasses[11]  || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[16]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetStaticFieldID((cclasses[11]), ((char *)(string_pool + 5870LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[11]), (cfields[4])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L9; Stack: 0
        L9: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 35; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // ASTORE 5; Stack: 1
        clocal5.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // ICONST_M1; Stack: 0
        cstack0.i = -1;
        // New stack: 1
        // ISTORE 6; Stack: 1
        clocal6.i = cstack0.i;
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/lang/String.hashCode()I; Stack: 1
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6095LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 5680LL)), 35); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[11])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // LOOKUPSWITCH; Stack: 1
        switch (cstack0.i) {
            case -1830954323: goto L10; break;
            case -1179540453: goto L11; break;
            case 75627155: goto L12; break;
            default: goto L13; break;
        }
        // New stack: 0
        // LABEL L11; Stack: 0
        L11: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // FRAME FULL L: [wtf/diablo/launcher/temporary/session/DiabloSession, kong/unirest/HttpResponse, com/google/gson/JsonObject, java/lang/String, wtf/diablo/launcher/temporary/session/DiabloRankEnum, java/lang/String, 1] S: []; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC STAGING; Stack: 1
        cstack1.l = (cstrings[17]);
        // New stack: 2
        // INVOKEVIRTUAL java/lang/String.equals(Ljava/lang/Object;)Z; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[12]) { cmethods[12] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6104LL)), ((char *)(string_pool + 5754LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 35); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[12]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // IFEQ L13; Stack: 1
        if (cstack0.i == 0) goto L13;
        // New stack: 0
        // ICONST_0; Stack: 0
        cstack0.i = 0;
        // New stack: 1
        // ISTORE 6; Stack: 1
        clocal6.i = cstack0.i;
        // New stack: 0
        // GOTO L13; Stack: 0
        goto L13;
        // New stack: 0
        // LABEL L10; Stack: 0
        L10: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // FRAME SAME L: null S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC ADMINISTRATOR; Stack: 1
        cstack1.l = (cstrings[18]);
        // New stack: 2
        // INVOKEVIRTUAL java/lang/String.equals(Ljava/lang/Object;)Z; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[12]) { cmethods[12] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6104LL)), ((char *)(string_pool + 5754LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 35); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[12]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // IFEQ L13; Stack: 1
        if (cstack0.i == 0) goto L13;
        // New stack: 0
        // ICONST_1; Stack: 0
        cstack0.i = 1;
        // New stack: 1
        // ISTORE 6; Stack: 1
        clocal6.i = cstack0.i;
        // New stack: 0
        // GOTO L13; Stack: 0
        goto L13;
        // New stack: 0
        // LABEL L12; Stack: 0
        L12: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // FRAME SAME L: null S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC OWNER; Stack: 1
        cstack1.l = (cstrings[19]);
        // New stack: 2
        // INVOKEVIRTUAL java/lang/String.equals(Ljava/lang/Object;)Z; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[12]) { cmethods[12] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6104LL)), ((char *)(string_pool + 5754LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1264LL)), 35); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[12]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // IFEQ L13; Stack: 1
        if (cstack0.i == 0) goto L13;
        // New stack: 0
        // ICONST_2; Stack: 0
        cstack0.i = 2;
        // New stack: 1
        // ISTORE 6; Stack: 1
        clocal6.i = cstack0.i;
        // New stack: 0
        // LABEL L13; Stack: 0
        L13: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // FRAME SAME L: null S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ILOAD 6; Stack: 0
        cstack0.i = clocal6.i;
        // New stack: 1
        // TABLESWITCH; Stack: 1
        switch (cstack0.i) {
            case 0: goto L14; break;
            case 1: goto L14; break;
            case 2: goto L15; break;
            default: goto L16; break;
        }
        // New stack: 0
        // LABEL L14; Stack: 0
        L14: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 38; Stack: 0
        // New stack: 0
        // FRAME SAME L: null S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GETSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.STAGING Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 0
        if (!cclasses[11]  || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[16]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetStaticFieldID((cclasses[11]), ((char *)(string_pool + 5930LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[11]), (cfields[5])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L17; Stack: 0
        L17: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 39; Stack: 0
        // New stack: 0
        // GOTO L16; Stack: 0
        goto L16;
        // New stack: 0
        // LABEL L15; Stack: 0
        L15: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 41; Stack: 0
        // New stack: 0
        // FRAME SAME L: null S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // GETSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.DEVELOPER Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 0
        if (!cclasses[11]  || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[16]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[6]) { cfields[6] = env->GetStaticFieldID((cclasses[11]), ((char *)(string_pool + 5938LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[11]), (cfields[6])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L16; Stack: 0
        L16: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 45; Stack: 0
        // New stack: 0
        // FRAME SAME L: null S: null; Stack: 0
        refs.erase(clocal0.l); refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal3.l); refs.erase(clocal4.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 4; Stack: 1
        cstack1.l = clocal4.l; refs.insert(cstack1.l);
        // New stack: 2
        // PUTFIELD wtf/diablo/launcher/temporary/session/DiabloSession.rank Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 2
        if (!cclasses[2]  || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[5]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[7]) { cfields[7] = env->GetFieldID((cclasses[2]), ((char *)(string_pool + 6111LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1303LL)), 45); else env->SetObjectField(cstack0.l, (cfields[7]), cstack1.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L18; Stack: 0
        L18: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 46; Stack: 0
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        // LABEL L19; Stack: 0
        L19: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        return (void) 0;
    }
    
    // getSessionID()Ljava/lang/String;
    jobject JNICALL __ngen_native_getSessionID2(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {};
        jvalue clocal0 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 49; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/session/DiabloSession.sessionID Ljava/lang/String;; Stack: 1
        if (!cclasses[2]  || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[5]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[2]), ((char *)(string_pool + 2623LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 49); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[0])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // getUsername()Ljava/lang/String;
    jobject JNICALL __ngen_native_getUsername3(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {};
        jvalue clocal0 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 53; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/session/DiabloSession.username Ljava/lang/String;; Stack: 1
        if (!cclasses[2]  || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[5]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[2]), ((char *)(string_pool + 4249LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 53); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // getId()I
    jint JNICALL __ngen_native_getId4(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (jint) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jint) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jint) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {};
        jvalue clocal0 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jint) 0; }
        // New stack: 0
        // Line 57; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/session/DiabloSession.uid I; Stack: 1
        if (!cclasses[2]  || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[5]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cfields[3]) { cfields[3] = env->GetFieldID((cclasses[2]), ((char *)(string_pool + 6074LL)), ((char *)(string_pool + 5559LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 5561LL)), 57); else cstack0.i = env->GetIntField(cstack0.l, (cfields[3])); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        // New stack: 1
        // IRETURN; Stack: 1
        return (jint) cstack0.i;
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (jint) 0; }
        // New stack: 0
        return (jint) 0;
    }
    
    // getRank()Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;
    jobject JNICALL __ngen_native_getRank5(JNIEnv *env, jobject obj) {
        jclass clazz = utils::get_class_from_object(env, obj);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {};
        jvalue clocal0 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = obj; refs.insert(clocal0.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 61; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/session/DiabloSession.rank Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 1
        if (!cclasses[2]  || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[5]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[7]) { cfields[7] = env->GetFieldID((cclasses[2]), ((char *)(string_pool + 6111LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 61); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[7])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_native0_special_clinit6(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        std::unordered_set<jobject> refs;
    
    
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();

        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2466LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[10] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2493LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[8] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 6215LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[19] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2718LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[5] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2775LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[11] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 6111LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[15] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 2929LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[7] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5930LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[17] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3031LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[1] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 6221LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[0] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3265LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[3] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5986LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[16] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3526LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[2] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3498LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[13] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 6074LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[14] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3709LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[9] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4002LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[6] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 6257LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[18] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 6271LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[4] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 4249LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[12] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }

        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 1323LL)), (char *)((char *)(string_pool + 73LL)), (void *)&__ngen_native_update1 },
            { (char *)((char *)(string_pool + 1131LL)), (char *)((char *)(string_pool + 948LL)), (void *)&__ngen_native_getSessionID2 },
            { (char *)((char *)(string_pool + 6116LL)), (char *)((char *)(string_pool + 948LL)), (void *)&__ngen_native_getUsername3 },
            { (char *)((char *)(string_pool + 6128LL)), (char *)((char *)(string_pool + 660LL)), (void *)&__ngen_native_getId4 },
            { (char *)((char *)(string_pool + 5603LL)), (char *)((char *)(string_pool + 6134LL)), (void *)&__ngen_native_getRank5 },
            { (char *)((char *)(string_pool + 6191LL)), (char *)((char *)(string_pool + 73LL)), (void *)&__ngen_native0_special_clinit6 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 2718LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}