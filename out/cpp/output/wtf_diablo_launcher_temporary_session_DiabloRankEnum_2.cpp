#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "wtf_diablo_launcher_temporary_session_DiabloRankEnum_2.hpp"

// wtf/diablo/launcher/temporary/session/DiabloRankEnum
namespace native_jvm::classes::__ngen_wtf_diablo_launcher_temporary_session_DiabloRankEnum_2 {

    char *string_pool;

    jstring cstrings[9];
    std::mutex cclasses_mtx[6];
    jclass cclasses[6];
    jmethodID cmethods[7];
    jfieldID cfields[6];

    // values()[Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;
    jarray JNICALL __ngen_native_values0(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jarray) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jarray) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {};
        std::unordered_set<jobject> refs;
    
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jarray) 0; }
        // New stack: 0
        // Line 8; Stack: 0
        // New stack: 0
        // GETSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.$VALUES [Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 0
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jarray) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 5264LL)), ((char *)(string_pool + 5272LL))); if (env->ExceptionCheck()) { return (jarray) 0; }  } cstack0.l = env->GetStaticObjectField((cclasses[0]), (cfields[0])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jarray) 0; }
        // New stack: 1
        // INVOKEVIRTUAL [Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;.clone()Ljava/lang/Object;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = env->FindClass(((char *)(string_pool + 5272LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jarray) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 5328LL)), ((char *)(string_pool + 752LL))); if (env->ExceptionCheck()) { return (jarray) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 8); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[0])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jarray) 0; }
        // New stack: 1
        // CHECKCAST [Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = env->FindClass(((char *)(string_pool + 5272LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jarray) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[1]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 5272LL)))).c_str(), 8); 
        if (env->ExceptionCheck()) { return (jarray) 0; } } 
        // New stack: 1
        // ARETURN; Stack: 1
        return (jarray) cstack0.l;
        // New stack: 0
        return (jarray) 0;
    }
    
    // valueOf(Ljava/lang/String;)Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;
    jobject JNICALL __ngen_native_valueOf1(JNIEnv *env, jclass clazz, jobject arg0) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {};
        jvalue clocal0 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.l = arg0; refs.insert(clocal0.l);
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 8; Stack: 0
        // New stack: 0
        // LDC Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 0
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } cstack0.l = (cclasses[2]);
        // New stack: 1
        // ALOAD 0; Stack: 1
        cstack1.l = clocal0.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKESTATIC java/lang/Enum.valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[1]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetStaticMethodID((cclasses[3]), ((char *)(string_pool + 5334LL)), ((char *)(string_pool + 5417LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[3]), (cmethods[1]), cstack0.l, cstack1.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // CHECKCAST wtf/diablo/launcher/temporary/session/DiabloRankEnum; Stack: 1
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack0.l != nullptr && !env->IsInstanceOf(cstack0.l, (cclasses[0]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 5471LL)))).c_str(), 8); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // getPermissionLevel()I
    jint JNICALL __ngen_native_getPermissionLevel3(JNIEnv *env, jobject obj) {
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
        // Line 24; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/session/DiabloRankEnum.permissionLevel I; Stack: 1
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 5543LL)), ((char *)(string_pool + 5559LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 5561LL)), 24); else cstack0.i = env->GetIntField(cstack0.l, (cfields[1])); 
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
    
    // getLaunchType()Ljava/lang/String;
    jobject JNICALL __ngen_native_getLaunchType4(JNIEnv *env, jobject obj) {
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
        // Line 28; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // GETFIELD wtf/diablo/launcher/temporary/session/DiabloRankEnum.launchType Ljava/lang/String;; Stack: 1
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 5592LL)), ((char *)(string_pool + 1836LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 1111LL)), 28); else { cstack0.l = env->GetObjectField(cstack0.l, (cfields[2])); refs.insert(cstack0.l); } 
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
    
    // getRank(I)Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;
    jobject JNICALL __ngen_native_getRank5(JNIEnv *env, jclass clazz, jint arg0) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {}, clocal4 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.i = arg0;
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 33; Stack: 0
        // New stack: 0
        // INVOKESTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.values()[Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 0
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetStaticMethodID((cclasses[0]), ((char *)(string_pool + 5199LL)), ((char *)(string_pool + 5206LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[0]), (cmethods[2])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 1; Stack: 1
        clocal1.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // ALOAD 1; Stack: 0
        cstack0.l = clocal1.l; refs.insert(cstack0.l);
        // New stack: 1
        // ARRAYLENGTH; Stack: 1
        if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 4619LL)), 33); else cstack0.i = env->GetArrayLength((jarray) cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ISTORE 2; Stack: 1
        clocal2.i = cstack0.i;
        // New stack: 0
        // ICONST_0; Stack: 0
        cstack0.i = 0;
        // New stack: 1
        // ISTORE 3; Stack: 1
        clocal3.i = cstack0.i;
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // FRAME APPEND L: [[Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;, 1, 1] S: null; Stack: 0
        refs.erase(clocal1.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ILOAD 3; Stack: 0
        cstack0.i = clocal3.i;
        // New stack: 1
        // ILOAD 2; Stack: 1
        cstack1.i = clocal2.i;
        // New stack: 2
        // IF_ICMPGE L3; Stack: 2
        if (cstack0.i >= cstack1.i) goto L3;
        // New stack: 0
        // ALOAD 1; Stack: 0
        cstack0.l = clocal1.l; refs.insert(cstack0.l);
        // New stack: 1
        // ILOAD 3; Stack: 1
        cstack1.i = clocal3.i;
        // New stack: 2
        // AALOAD; Stack: 2
        if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 5669LL)), 33); else { cstack0.l = env->GetObjectArrayElement((jobjectArray) cstack0.l, cstack1.i); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 4; Stack: 1
        clocal4.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 34; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloRankEnum.getPermissionLevel()I; Stack: 1
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 5524LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 5680LL)), 34); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[3])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ILOAD 0; Stack: 1
        cstack1.i = clocal0.i;
        // New stack: 2
        // IF_ICMPNE L5; Stack: 2
        if (cstack0.i != cstack1.i) goto L5;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 35; Stack: 0
        // New stack: 0
        // ALOAD 4; Stack: 0
        cstack0.l = clocal4.l; refs.insert(cstack0.l);
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 33; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [wtf/diablo/launcher/temporary/session/DiabloRankEnum] S: null; Stack: 0
        refs.erase(clocal1.l); refs.erase(clocal4.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // IINC 3 1; Stack: 0
        clocal3.i += 1;
        // New stack: 0
        // GOTO L2; Stack: 0
        goto L2;
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 38; Stack: 0
        // New stack: 0
        // FRAME CHOP L: [null] S: null; Stack: 0
        refs.erase(clocal1.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ACONST_NULL; Stack: 0
        cstack0.l = nullptr;
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // getRanksFromPermissionLevel(I)Ljava/util/List;
    jobject JNICALL __ngen_native_getRanksFromPermissionLevel6(JNIEnv *env, jclass clazz, jint arg0) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {}, clocal4 = {}, clocal5 = {};
        std::unordered_set<jobject> refs;
    
        clocal0.i = arg0;
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 42; Stack: 0
        // New stack: 0
        // NEW java/util/ArrayList; Stack: 0
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[2]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[4]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // INVOKESPECIAL java/util/ArrayList.<init>()V; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[2]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 42); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[4]), (cmethods[4])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 1; Stack: 1
        clocal1.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 44; Stack: 0
        // New stack: 0
        // INVOKESTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.values()[Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 0
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetStaticMethodID((cclasses[0]), ((char *)(string_pool + 5199LL)), ((char *)(string_pool + 5206LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[0]), (cmethods[2])); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // ARRAYLENGTH; Stack: 1
        if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 4619LL)), 44); else cstack0.i = env->GetArrayLength((jarray) cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ISTORE 3; Stack: 1
        clocal3.i = cstack0.i;
        // New stack: 0
        // ICONST_0; Stack: 0
        cstack0.i = 0;
        // New stack: 1
        // ISTORE 4; Stack: 1
        clocal4.i = cstack0.i;
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // FRAME FULL L: [1, java/util/ArrayList, [Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;, 1, 1] S: []; Stack: 0
        refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ILOAD 4; Stack: 0
        cstack0.i = clocal4.i;
        // New stack: 1
        // ILOAD 3; Stack: 1
        cstack1.i = clocal3.i;
        // New stack: 2
        // IF_ICMPGE L4; Stack: 2
        if (cstack0.i >= cstack1.i) goto L4;
        // New stack: 0
        // ALOAD 2; Stack: 0
        cstack0.l = clocal2.l; refs.insert(cstack0.l);
        // New stack: 1
        // ILOAD 4; Stack: 1
        cstack1.i = clocal4.i;
        // New stack: 2
        // AALOAD; Stack: 2
        if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 5669LL)), 44); else { cstack0.l = env->GetObjectArrayElement((jobjectArray) cstack0.l, cstack1.i); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 5; Stack: 1
        clocal5.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 45; Stack: 0
        // New stack: 0
        // ALOAD 5; Stack: 0
        cstack0.l = clocal5.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL wtf/diablo/launcher/temporary/session/DiabloRankEnum.getPermissionLevel()I; Stack: 1
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 5524LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 5680LL)), 45); else cstack0.i = env->CallIntMethod(cstack0.l, (cmethods[3])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ILOAD 0; Stack: 1
        cstack1.i = clocal0.i;
        // New stack: 2
        // IF_ICMPGT L6; Stack: 2
        if (cstack0.i > cstack1.i) goto L6;
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 46; Stack: 0
        // New stack: 0
        // ALOAD 1; Stack: 0
        cstack0.l = clocal1.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 5; Stack: 1
        cstack1.l = clocal5.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE java/util/List.add(Ljava/lang/Object;)Z; Stack: 2
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[5]) { cmethods[5] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 5750LL)), ((char *)(string_pool + 5754LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 5776LL)), 46); else cstack0.i = (jint) env->CallBooleanMethod(cstack0.l, (cmethods[5]), cstack1.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 44; Stack: 0
        // New stack: 0
        // FRAME APPEND L: [wtf/diablo/launcher/temporary/session/DiabloRankEnum] S: null; Stack: 0
        refs.erase(clocal1.l); refs.erase(clocal2.l); refs.erase(clocal5.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // IINC 4 1; Stack: 0
        clocal4.i += 1;
        // New stack: 0
        // GOTO L3; Stack: 0
        goto L3;
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 49; Stack: 0
        // New stack: 0
        // FRAME CHOP L: [null] S: null; Stack: 0
        refs.erase(clocal1.l); refs.erase(clocal2.l); 
        utils::clear_refs(env, refs);
        // New stack: 0
        // ALOAD 1; Stack: 0
        cstack0.l = clocal1.l; refs.insert(cstack0.l);
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_native0_special_clinit7(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {}, cstack4 = {}, cstack5 = {};
        std::unordered_set<jobject> refs;
    
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 10; Stack: 0
        // New stack: 0
        // NEW wtf/diablo/launcher/temporary/session/DiabloRankEnum; Stack: 0
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[0]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // LDC USER; Stack: 2
        cstack2.l = (cstrings[4]);
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // ICONST_0; Stack: 4
        cstack4.i = 0;
        // New stack: 5
        // LDC RELEASE; Stack: 5
        cstack5.l = (cstrings[5]);
        // New stack: 6
        // INVOKESPECIAL wtf/diablo/launcher/temporary/session/DiabloRankEnum.<init>(Ljava/lang/String;IILjava/lang/String;)V; Stack: 6
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 5828LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 10); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[0]), (cmethods[6]), cstack2.l, cstack3.i, cstack4.i, cstack5.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // PUTSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.USER Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 1
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 5870LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticObjectField((cclasses[0]), (cfields[3]), cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 11; Stack: 0
        // New stack: 0
        // NEW wtf/diablo/launcher/temporary/session/DiabloRankEnum; Stack: 0
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[0]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // LDC STAGING; Stack: 2
        cstack2.l = (cstrings[6]);
        // New stack: 3
        // ICONST_1; Stack: 3
        cstack3.i = 1;
        // New stack: 4
        // ICONST_1; Stack: 4
        cstack4.i = 1;
        // New stack: 5
        // LDC STAGING; Stack: 5
        cstack5.l = (cstrings[6]);
        // New stack: 6
        // INVOKESPECIAL wtf/diablo/launcher/temporary/session/DiabloRankEnum.<init>(Ljava/lang/String;IILjava/lang/String;)V; Stack: 6
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 5828LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 11); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[0]), (cmethods[6]), cstack2.l, cstack3.i, cstack4.i, cstack5.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // PUTSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.STAGING Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 1
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 5930LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticObjectField((cclasses[0]), (cfields[4]), cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 12; Stack: 0
        // New stack: 0
        // NEW wtf/diablo/launcher/temporary/session/DiabloRankEnum; Stack: 0
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[0]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // LDC DEVELOPER; Stack: 2
        cstack2.l = (cstrings[7]);
        // New stack: 3
        // ICONST_2; Stack: 3
        cstack3.i = 2;
        // New stack: 4
        // ICONST_2; Stack: 4
        cstack4.i = 2;
        // New stack: 5
        // LDC DEBUG; Stack: 5
        cstack5.l = (cstrings[8]);
        // New stack: 6
        // INVOKESPECIAL wtf/diablo/launcher/temporary/session/DiabloRankEnum.<init>(Ljava/lang/String;IILjava/lang/String;)V; Stack: 6
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 5828LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 12); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[0]), (cmethods[6]), cstack2.l, cstack3.i, cstack4.i, cstack5.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // PUTSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.DEVELOPER Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 1
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 5938LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticObjectField((cclasses[0]), (cfields[5]), cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // Line 8; Stack: 0
        // New stack: 0
        // ICONST_3; Stack: 0
        cstack0.i = 3;
        // New stack: 1
        // ANEWARRAY wtf/diablo/launcher/temporary/session/DiabloRankEnum; Stack: 1
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack0.i < 0) utils::throw_re(env, ((char *)(string_pool + 1864LL)), ((char *)(string_pool + 1901LL)), 8); else { cstack0.l = env->NewObjectArray(cstack0.i, (cclasses[0]), nullptr); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ICONST_0; Stack: 2
        cstack2.i = 0;
        // New stack: 3
        // GETSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.USER Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 3
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 5870LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[0]), (cfields[3])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 4
        // AASTORE; Stack: 4
        if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 8); else { env->SetObjectArrayElement((jobjectArray) cstack1.l, cstack2.i, cstack3.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ICONST_1; Stack: 2
        cstack2.i = 1;
        // New stack: 3
        // GETSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.STAGING Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 3
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 5930LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[0]), (cfields[4])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 4
        // AASTORE; Stack: 4
        if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 8); else { env->SetObjectArrayElement((jobjectArray) cstack1.l, cstack2.i, cstack3.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // ICONST_2; Stack: 2
        cstack2.i = 2;
        // New stack: 3
        // GETSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.DEVELOPER Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 3
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 5938LL)), ((char *)(string_pool + 5875LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack3.l = env->GetStaticObjectField((cclasses[0]), (cfields[5])); refs.insert(cstack3.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 4
        // AASTORE; Stack: 4
        if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 2002LL)), 8); else { env->SetObjectArrayElement((jobjectArray) cstack1.l, cstack2.i, cstack3.l); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 1
        // PUTSTATIC wtf/diablo/launcher/temporary/session/DiabloRankEnum.$VALUES [Lwtf/diablo/launcher/temporary/session/DiabloRankEnum;; Stack: 1
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 5264LL)), ((char *)(string_pool + 5272LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticObjectField((cclasses[0]), (cfields[0]), cstack0.l); 
        if (env->ExceptionCheck()) { return (void) 0; }
        // New stack: 0
        // RETURN; Stack: 0
        return;
        // New stack: 0
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();

        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5948LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[1] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5930LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[6] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5963LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[5] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5971LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[3] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5986LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[0] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 6039LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[2] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5938LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[7] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5870LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[4] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 6059LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[8] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }

        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 5199LL)), (char *)((char *)(string_pool + 5206LL)), (void *)&__ngen_native_values0 },
            { (char *)((char *)(string_pool + 5334LL)), (char *)((char *)(string_pool + 5342LL)), (void *)&__ngen_native_valueOf1 },
            { (char *)((char *)(string_pool + 5524LL)), (char *)((char *)(string_pool + 660LL)), (void *)&__ngen_native_getPermissionLevel3 },
            { (char *)((char *)(string_pool + 5578LL)), (char *)((char *)(string_pool + 948LL)), (void *)&__ngen_native_getLaunchType4 },
            { (char *)((char *)(string_pool + 5603LL)), (char *)((char *)(string_pool + 5611LL)), (void *)&__ngen_native_getRank5 },
            { (char *)((char *)(string_pool + 5702LL)), (char *)((char *)(string_pool + 5730LL)), (void *)&__ngen_native_getRanksFromPermissionLevel6 },
            { (char *)((char *)(string_pool + 5804LL)), (char *)((char *)(string_pool + 73LL)), (void *)&__ngen_native0_special_clinit7 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 5986LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}