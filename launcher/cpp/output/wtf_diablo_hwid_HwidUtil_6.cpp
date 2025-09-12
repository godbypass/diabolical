#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "wtf_diablo_hwid_HwidUtil_6.hpp"

// wtf/diablo/hwid/HwidUtil
namespace native_jvm::classes::__ngen_wtf_diablo_hwid_HwidUtil_6 {

    char *string_pool;

    jstring cstrings[41];
    std::mutex cclasses_mtx[15];
    jclass cclasses[15];
    jmethodID cmethods[44];

    // generateHwid()Ljava/lang/String;
    jobject JNICALL __ngen_native_generateHwid1(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (jobject) 0; }
    
        jobject lookup = nullptr;
        jvalue cstack0 = {}, cstack1 = {}, cstack2 = {}, cstack3 = {};
        jvalue clocal0 = {}, clocal1 = {}, clocal2 = {}, clocal3 = {};
        std::unordered_set<jobject> refs;
    
    
        // LABEL L1; Stack: 0
        L1: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 16; Stack: 0
        // New stack: 0
        // NEW java/lang/StringBuilder; Stack: 0
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[0]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // INVOKESPECIAL java/lang/StringBuilder.<init>()V; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 16); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[0]), (cmethods[0])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 0; Stack: 1
        clocal0.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L2; Stack: 0
        L2: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 18; Stack: 0
        // New stack: 0
        // NEW oshi/SystemInfo; Stack: 0
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[1]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[1]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // INVOKESPECIAL oshi/SystemInfo.<init>()V; Stack: 2
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[1]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 18); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[1]), (cmethods[1])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 1; Stack: 1
        clocal1.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L3; Stack: 0
        L3: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 19; Stack: 0
        // New stack: 0
        // ALOAD 1; Stack: 0
        cstack0.l = clocal1.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL oshi/SystemInfo.getHardware()Loshi/hardware/HardwareAbstractionLayer;; Stack: 1
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[1]))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 6569LL)), ((char *)(string_pool + 6581LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 19); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[2])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 2; Stack: 1
        clocal2.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L4; Stack: 0
        L4: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 21; Stack: 0
        // New stack: 0
        // NEW java/util/HashMap; Stack: 0
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[2]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[2]))) { cstack0.l = obj; refs.insert(obj); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // DUP; Stack: 1
        cstack1 = cstack0;
        // New stack: 2
        // INVOKESPECIAL java/util/HashMap.<init>()V; Stack: 2
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[2]))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 66LL)), ((char *)(string_pool + 73LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 108LL)), 21); else env->CallNonvirtualVoidMethod(cstack1.l, (cclasses[2]), (cmethods[3])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ASTORE 3; Stack: 1
        clocal3.l = cstack0.l; refs.insert(cstack0.l);
        // New stack: 0
        // LABEL L5; Stack: 0
        L5: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 23; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 23); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getManufacturer()Ljava/lang/String;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[5]) { cmethods[5] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6675LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 23); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[5])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 23); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L6; Stack: 0
        L6: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 24; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC Manufacturer; Stack: 1
        cstack1.l = (cstrings[5]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 24); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getManufacturer()Ljava/lang/String;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[5]) { cmethods[5] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6675LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 24); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[5])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 24); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L7; Stack: 0
        L7: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 26; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 26); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getModel()Ljava/lang/String;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6752LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 26); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[8])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 26); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L8; Stack: 0
        L8: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 27; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC Model; Stack: 1
        cstack1.l = (cstrings[7]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 27); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getModel()Ljava/lang/String;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6752LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 27); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[8])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 27); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L9; Stack: 0
        L9: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 29; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 29); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getSerialNumber()Ljava/lang/String;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6761LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 29); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[9])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 29); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L10; Stack: 0
        L10: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 30; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC SerialNumber; Stack: 1
        cstack1.l = (cstrings[8]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 30); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getSerialNumber()Ljava/lang/String;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6761LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 30); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[9])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 30); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L11; Stack: 0
        L11: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 32; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 32); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[10])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 32); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[11])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getName()Ljava/lang/String;; Stack: 2
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[12]) { cmethods[12] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6903LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 32); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[12])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 32); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L12; Stack: 0
        L12: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 33; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC ProcessorName; Stack: 1
        cstack1.l = (cstrings[11]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 33); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[10])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 3
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 33); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[11])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getName()Ljava/lang/String;; Stack: 3
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[12]) { cmethods[12] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6903LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 33); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[12])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 33); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L13; Stack: 0
        L13: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 35; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 35); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[10])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 35); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[11])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getVendor()Ljava/lang/String;; Stack: 2
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[13]) { cmethods[13] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6911LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 35); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[13])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 35); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L14; Stack: 0
        L14: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 36; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC ProcessorVendor; Stack: 1
        cstack1.l = (cstrings[12]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 36); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[10])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 3
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 36); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[11])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getVendor()Ljava/lang/String;; Stack: 3
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[13]) { cmethods[13] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6911LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 36); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[13])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 36); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L15; Stack: 0
        L15: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 38; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 38); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[10])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 38); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[11])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getFamily()Ljava/lang/String;; Stack: 2
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[14]) { cmethods[14] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6921LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 38); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[14])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 38); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L16; Stack: 0
        L16: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 39; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC ProcessorFamily; Stack: 1
        cstack1.l = (cstrings[13]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 39); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[10])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 3
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 39); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[11])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getFamily()Ljava/lang/String;; Stack: 3
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[14]) { cmethods[14] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6921LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 39); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[14])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 39); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L17; Stack: 0
        L17: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 41; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 41); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[10])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 41); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[11])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getStepping()Ljava/lang/String;; Stack: 2
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6931LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 41); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[15])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 41); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L18; Stack: 0
        L18: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 42; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC ProcessorStepping; Stack: 1
        cstack1.l = (cstrings[14]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 42); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[10])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 3
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 42); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[11])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getStepping()Ljava/lang/String;; Stack: 3
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6931LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 42); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[15])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 42); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L19; Stack: 0
        L19: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 44; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 44); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[10])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 44); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[11])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getIdentifier()Ljava/lang/String;; Stack: 2
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6943LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 44); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[16])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 44); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L20; Stack: 0
        L20: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 45; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC ProcessorIdentifier; Stack: 1
        cstack1.l = (cstrings[15]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 45); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[10])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 3
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 45); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[11])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getIdentifier()Ljava/lang/String;; Stack: 3
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6943LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 45); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[16])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 45); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L21; Stack: 0
        L21: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 47; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 47); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[10])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 47); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[11])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getMicroarchitecture()Ljava/lang/String;; Stack: 2
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6957LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 47); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[17])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 47); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L22; Stack: 0
        L22: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 48; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC ProcessorMicroarchitecture; Stack: 1
        cstack1.l = (cstrings[16]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 48); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[10])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 3
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 48); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[11])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getMicroarchitecture()Ljava/lang/String;; Stack: 3
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6957LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 48); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[17])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 48); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L23; Stack: 0
        L23: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 50; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 50); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[10])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 2
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 50); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[11])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getProcessorID()Ljava/lang/String;; Stack: 2
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6978LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 50); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[18])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 50); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L24; Stack: 0
        L24: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 51; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC ProcessorID; Stack: 1
        cstack1.l = (cstrings[17]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getProcessor()Loshi/hardware/CentralProcessor;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6777LL)), ((char *)(string_pool + 6790LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 51); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[10])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/CentralProcessor.getProcessorIdentifier()Loshi/hardware/CentralProcessor$ProcessorIdentifier;; Stack: 3
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[9]))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 6825LL)), ((char *)(string_pool + 6848LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 51); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[11])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEVIRTUAL oshi/hardware/CentralProcessor$ProcessorIdentifier.getProcessorID()Ljava/lang/String;; Stack: 3
        if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[10]))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 6978LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 51); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[18])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 51); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L25; Stack: 0
        L25: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 53; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 53); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getBaseboard()Loshi/hardware/Baseboard;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6993LL)), ((char *)(string_pool + 7006LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 53); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[19])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/Baseboard.getManufacturer()Ljava/lang/String;; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[20]) { cmethods[20] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 6675LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 53); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[20])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 53); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L26; Stack: 0
        L26: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 54; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC BaseboardManufacturer; Stack: 1
        cstack1.l = (cstrings[19]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 54); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getBaseboard()Loshi/hardware/Baseboard;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6993LL)), ((char *)(string_pool + 7006LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 54); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[19])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/Baseboard.getManufacturer()Ljava/lang/String;; Stack: 3
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[20]) { cmethods[20] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 6675LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 54); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[20])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 54); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L27; Stack: 0
        L27: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 56; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 56); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getBaseboard()Loshi/hardware/Baseboard;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6993LL)), ((char *)(string_pool + 7006LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 56); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[19])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/Baseboard.getModel()Ljava/lang/String;; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[21]) { cmethods[21] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 6752LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 56); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[21])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 56); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L28; Stack: 0
        L28: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 57; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC BaseboardModel; Stack: 1
        cstack1.l = (cstrings[20]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 57); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getBaseboard()Loshi/hardware/Baseboard;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6993LL)), ((char *)(string_pool + 7006LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 57); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[19])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/Baseboard.getModel()Ljava/lang/String;; Stack: 3
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[21]) { cmethods[21] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 6752LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 57); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[21])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 57); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L29; Stack: 0
        L29: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 59; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 59); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getBaseboard()Loshi/hardware/Baseboard;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6993LL)), ((char *)(string_pool + 7006LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 59); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[19])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/Baseboard.getVersion()Ljava/lang/String;; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[22]) { cmethods[22] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 7034LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 59); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[22])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 59); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L30; Stack: 0
        L30: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 60; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC BaseboardVersion; Stack: 1
        cstack1.l = (cstrings[21]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 60); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getBaseboard()Loshi/hardware/Baseboard;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6993LL)), ((char *)(string_pool + 7006LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 60); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[19])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/Baseboard.getVersion()Ljava/lang/String;; Stack: 3
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[22]) { cmethods[22] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 7034LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 60); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[22])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 60); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L31; Stack: 0
        L31: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 62; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 62); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getBaseboard()Loshi/hardware/Baseboard;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6993LL)), ((char *)(string_pool + 7006LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 62); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[19])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/Baseboard.getSerialNumber()Ljava/lang/String;; Stack: 2
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 6761LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 62); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[23])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 62); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L32; Stack: 0
        L32: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 63; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC BaseboardSerialNumber; Stack: 1
        cstack1.l = (cstrings[22]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 63); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getBaseboard()Loshi/hardware/Baseboard;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 6993LL)), ((char *)(string_pool + 7006LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 63); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[19])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/Baseboard.getSerialNumber()Ljava/lang/String;; Stack: 3
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[18]))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetMethodID((cclasses[8]), ((char *)(string_pool + 6761LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 63); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[23])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 63); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L33; Stack: 0
        L33: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 65; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 65); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 65); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[24])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/Firmware.getName()Ljava/lang/String;; Stack: 2
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[25]) { cmethods[25] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 6903LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 65); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[25])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 65); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L34; Stack: 0
        L34: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 66; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC FirmwareName; Stack: 1
        cstack1.l = (cstrings[24]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 66); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 66); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[24])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/Firmware.getName()Ljava/lang/String;; Stack: 3
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[25]) { cmethods[25] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 6903LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 66); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[25])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 66); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L35; Stack: 0
        L35: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 68; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 68); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 68); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[24])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/Firmware.getManufacturer()Ljava/lang/String;; Stack: 2
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[26]) { cmethods[26] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 6675LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 68); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[26])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 68); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L36; Stack: 0
        L36: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 69; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC FirmwareManufacturer; Stack: 1
        cstack1.l = (cstrings[25]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 69); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 69); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[24])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/Firmware.getManufacturer()Ljava/lang/String;; Stack: 3
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[26]) { cmethods[26] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 6675LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 69); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[26])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 69); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L37; Stack: 0
        L37: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 71; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 71); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 71); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[24])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/Firmware.getDescription()Ljava/lang/String;; Stack: 2
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[27]) { cmethods[27] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 7084LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 71); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[27])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 71); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L38; Stack: 0
        L38: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 72; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC FirmwareDescription; Stack: 1
        cstack1.l = (cstrings[26]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 72); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 72); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[24])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/Firmware.getDescription()Ljava/lang/String;; Stack: 3
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[27]) { cmethods[27] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 7084LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 72); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[27])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 72); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L39; Stack: 0
        L39: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 74; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 74); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 74); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[24])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/Firmware.getVersion()Ljava/lang/String;; Stack: 2
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[28]) { cmethods[28] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 7034LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 74); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[28])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 74); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L40; Stack: 0
        L40: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 75; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC FirmwareVersion; Stack: 1
        cstack1.l = (cstrings[27]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 75); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 75); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[24])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/Firmware.getVersion()Ljava/lang/String;; Stack: 3
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[28]) { cmethods[28] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 7034LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 75); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[28])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 75); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L41; Stack: 0
        L41: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 77; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 77); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 77); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[24])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/Firmware.getReleaseDate()Ljava/lang/String;; Stack: 2
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[29]) { cmethods[29] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 7099LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 77); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[29])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 77); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L42; Stack: 0
        L42: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 78; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC FirmwareReleaseDate; Stack: 1
        cstack1.l = (cstrings[28]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 78); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getFirmware()Loshi/hardware/Firmware;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7045LL)), ((char *)(string_pool + 7057LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 78); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[24])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/Firmware.getReleaseDate()Ljava/lang/String;; Stack: 3
        if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[23]))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[29]) { cmethods[29] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 7099LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 78); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[29])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 78); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L43; Stack: 0
        L43: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 80; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 80); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[4])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getHardwareUUID()Ljava/lang/String;; Stack: 2
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[30]) { cmethods[30] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7114LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 80); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[30])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 80); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L44; Stack: 0
        L44: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 81; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC HardwareUUID; Stack: 1
        cstack1.l = (cstrings[29]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getComputerSystem()Loshi/hardware/ComputerSystem;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 6624LL)), ((char *)(string_pool + 6642LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 81); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[4])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/ComputerSystem.getHardwareUUID()Ljava/lang/String;; Stack: 3
        if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[4]))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[30]) { cmethods[30] = env->GetMethodID((cclasses[4]), ((char *)(string_pool + 7114LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 81); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[30])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 81); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L45; Stack: 0
        L45: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 83; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getGraphicsCards()Ljava/util/List;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[31]) { cmethods[31] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7130LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 83); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[31])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // ICONST_0; Stack: 2
        cstack2.i = 0;
        // New stack: 3
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 3
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 83); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[32]), cstack2.i); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // CHECKCAST oshi/hardware/GraphicsCard; Stack: 2
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[31]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[11]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7188LL)))).c_str(), 83); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/GraphicsCard.getDeviceId()Ljava/lang/String;; Stack: 2
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[31]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[33]) { cmethods[33] = env->GetMethodID((cclasses[11]), ((char *)(string_pool + 7215LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 83); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[33])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 83); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L46; Stack: 0
        L46: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 84; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC GraphicsDeviceId; Stack: 1
        cstack1.l = (cstrings[32]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getGraphicsCards()Ljava/util/List;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[31]) { cmethods[31] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7130LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 84); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[31])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 4
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 84); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[32]), cstack3.i); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // CHECKCAST oshi/hardware/GraphicsCard; Stack: 3
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[31]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack2.l != nullptr && !env->IsInstanceOf(cstack2.l, (cclasses[11]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7188LL)))).c_str(), 84); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/GraphicsCard.getDeviceId()Ljava/lang/String;; Stack: 3
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[31]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[33]) { cmethods[33] = env->GetMethodID((cclasses[11]), ((char *)(string_pool + 7215LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 84); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[33])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 84); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L47; Stack: 0
        L47: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 86; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getGraphicsCards()Ljava/util/List;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[31]) { cmethods[31] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7130LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 86); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[31])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // ICONST_0; Stack: 2
        cstack2.i = 0;
        // New stack: 3
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 3
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 86); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[32]), cstack2.i); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // CHECKCAST oshi/hardware/GraphicsCard; Stack: 2
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[31]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[11]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7188LL)))).c_str(), 86); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/GraphicsCard.getVendor()Ljava/lang/String;; Stack: 2
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[31]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[34]) { cmethods[34] = env->GetMethodID((cclasses[11]), ((char *)(string_pool + 6911LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 86); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[34])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 86); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L48; Stack: 0
        L48: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 87; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC GraphicsVendor; Stack: 1
        cstack1.l = (cstrings[33]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getGraphicsCards()Ljava/util/List;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[31]) { cmethods[31] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7130LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 87); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[31])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 4
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 87); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[32]), cstack3.i); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // CHECKCAST oshi/hardware/GraphicsCard; Stack: 3
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[31]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack2.l != nullptr && !env->IsInstanceOf(cstack2.l, (cclasses[11]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7188LL)))).c_str(), 87); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/GraphicsCard.getVendor()Ljava/lang/String;; Stack: 3
        if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { cclasses_mtx[11].lock(); if (!cclasses[11] || env->IsSameObject(cclasses[11], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[31]))) { cclasses[11] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[11].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[34]) { cmethods[34] = env->GetMethodID((cclasses[11]), ((char *)(string_pool + 6911LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 87); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[34])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 87); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L49; Stack: 0
        L49: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 89; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getPowerSources()Ljava/util/List;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7227LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 89); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[35])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // ICONST_0; Stack: 2
        cstack2.i = 0;
        // New stack: 3
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 3
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 89); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[32]), cstack2.i); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // CHECKCAST oshi/hardware/PowerSource; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[12]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7243LL)))).c_str(), 89); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/PowerSource.getDeviceName()Ljava/lang/String;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[36]) { cmethods[36] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 7269LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 89); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[36])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 89); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L50; Stack: 0
        L50: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 90; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC PowerSourceDeviceName; Stack: 1
        cstack1.l = (cstrings[35]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getPowerSources()Ljava/util/List;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7227LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 90); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 4
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 90); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[32]), cstack3.i); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // CHECKCAST oshi/hardware/PowerSource; Stack: 3
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack2.l != nullptr && !env->IsInstanceOf(cstack2.l, (cclasses[12]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7243LL)))).c_str(), 90); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/PowerSource.getDeviceName()Ljava/lang/String;; Stack: 3
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[36]) { cmethods[36] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 7269LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 90); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[36])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 90); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L51; Stack: 0
        L51: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 92; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getPowerSources()Ljava/util/List;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7227LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 92); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[35])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // ICONST_0; Stack: 2
        cstack2.i = 0;
        // New stack: 3
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 3
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 92); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[32]), cstack2.i); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // CHECKCAST oshi/hardware/PowerSource; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[12]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7243LL)))).c_str(), 92); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/PowerSource.getManufacturer()Ljava/lang/String;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[37]) { cmethods[37] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 6675LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 92); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[37])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 92); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L52; Stack: 0
        L52: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 93; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC PowerSourceManufacturer; Stack: 1
        cstack1.l = (cstrings[36]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getPowerSources()Ljava/util/List;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7227LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 93); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 4
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 93); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[32]), cstack3.i); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // CHECKCAST oshi/hardware/PowerSource; Stack: 3
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack2.l != nullptr && !env->IsInstanceOf(cstack2.l, (cclasses[12]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7243LL)))).c_str(), 93); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/PowerSource.getManufacturer()Ljava/lang/String;; Stack: 3
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[37]) { cmethods[37] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 6675LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 93); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[37])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 93); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L53; Stack: 0
        L53: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 95; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getPowerSources()Ljava/util/List;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7227LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 95); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[35])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // ICONST_0; Stack: 2
        cstack2.i = 0;
        // New stack: 3
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 3
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 95); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[32]), cstack2.i); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // CHECKCAST oshi/hardware/PowerSource; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[12]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7243LL)))).c_str(), 95); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/PowerSource.getSerialNumber()Ljava/lang/String;; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[38]) { cmethods[38] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 6761LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 95); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[38])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 1780LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 95); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[6]), cstack1.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L54; Stack: 0
        L54: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 96; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC PowerSourceSerialNumber; Stack: 1
        cstack1.l = (cstrings[37]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getPowerSources()Ljava/util/List;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7227LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 96); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 4
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 96); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[32]), cstack3.i); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // CHECKCAST oshi/hardware/PowerSource; Stack: 3
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack2.l != nullptr && !env->IsInstanceOf(cstack2.l, (cclasses[12]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7243LL)))).c_str(), 96); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/PowerSource.getSerialNumber()Ljava/lang/String;; Stack: 3
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[38]) { cmethods[38] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 6761LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 96); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[38])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 96); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L55; Stack: 0
        L55: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 98; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // ALOAD 2; Stack: 1
        cstack1.l = clocal2.l; refs.insert(cstack1.l);
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getPowerSources()Ljava/util/List;; Stack: 2
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7227LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 98); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[35])); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // ICONST_0; Stack: 2
        cstack2.i = 0;
        // New stack: 3
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 3
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 98); else { cstack1.l = env->CallObjectMethod(cstack1.l, (cmethods[32]), cstack2.i); refs.insert(cstack1.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // CHECKCAST oshi/hardware/PowerSource; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack1.l != nullptr && !env->IsInstanceOf(cstack1.l, (cclasses[12]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7243LL)))).c_str(), 98); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 2
        // INVOKEINTERFACE oshi/hardware/PowerSource.getMaxCapacity()I; Stack: 2
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[39]) { cmethods[39] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 7283LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack1.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 664LL)), 98); else cstack1.i = env->CallIntMethod(cstack1.l, (cmethods[39])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 2
        // INVOKEVIRTUAL java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;; Stack: 2
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[40]) { cmethods[40] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1773LL)), ((char *)(string_pool + 4649LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 98); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[40]), cstack1.i); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L56; Stack: 0
        L56: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 99; Stack: 0
        // New stack: 0
        // ALOAD 3; Stack: 0
        cstack0.l = clocal3.l; refs.insert(cstack0.l);
        // New stack: 1
        // LDC PowerSourceMaxCapacity; Stack: 1
        cstack1.l = (cstrings[38]);
        // New stack: 2
        // ALOAD 2; Stack: 2
        cstack2.l = clocal2.l; refs.insert(cstack2.l);
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/HardwareAbstractionLayer.getPowerSources()Ljava/util/List;; Stack: 3
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[3]))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[35]) { cmethods[35] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 7227LL)), ((char *)(string_pool + 7147LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 99); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[35])); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // ICONST_0; Stack: 3
        cstack3.i = 0;
        // New stack: 4
        // INVOKEINTERFACE java/util/List.get(I)Ljava/lang/Object;; Stack: 4
        if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { cclasses_mtx[10].lock(); if (!cclasses[10] || env->IsSameObject(cclasses[10], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[30]))) { cclasses[10] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[10].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[32]) { cmethods[32] = env->GetMethodID((cclasses[10]), ((char *)(string_pool + 882LL)), ((char *)(string_pool + 7166LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 99); else { cstack2.l = env->CallObjectMethod(cstack2.l, (cmethods[32]), cstack3.i); refs.insert(cstack2.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // CHECKCAST oshi/hardware/PowerSource; Stack: 3
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack2.l != nullptr && !env->IsInstanceOf(cstack2.l, (cclasses[12]))) { utils::throw_re(env, ((char *)(string_pool + 365LL)), (std::string(((char *)(string_pool + 394LL))) + std::string(((char *)(string_pool + 7243LL)))).c_str(), 99); 
        if (env->ExceptionCheck()) { return (jobject) 0; } } 
        // New stack: 3
        // INVOKEINTERFACE oshi/hardware/PowerSource.getMaxCapacity()I; Stack: 3
        if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { cclasses_mtx[12].lock(); if (!cclasses[12] || env->IsSameObject(cclasses[12], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[34]))) { cclasses[12] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[12].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[39]) { cmethods[39] = env->GetMethodID((cclasses[12]), ((char *)(string_pool + 7283LL)), ((char *)(string_pool + 660LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack2.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 664LL)), 99); else cstack2.i = env->CallIntMethod(cstack2.l, (cmethods[39])); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKESTATIC java/lang/String.valueOf(I)Ljava/lang/String;; Stack: 3
        if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { cclasses_mtx[13].lock(); if (!cclasses[13] || env->IsSameObject(cclasses[13], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[39]))) { cclasses[13] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[13].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[41]) { cmethods[41] = env->GetStaticMethodID((cclasses[13]), ((char *)(string_pool + 5334LL)), ((char *)(string_pool + 4499LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack2.l = env->CallStaticObjectMethod((cclasses[13]), (cmethods[41]), cstack2.i); refs.insert(cstack2.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 3
        // INVOKEINTERFACE java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;; Stack: 3
        if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[6]))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 6691LL)), ((char *)(string_pool + 6695LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 338LL)), 99); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[7]), cstack1.l, cstack2.l); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // POP; Stack: 1
        ;
        // New stack: 0
        // LABEL L57; Stack: 0
        L57: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        // Line 101; Stack: 0
        // New stack: 0
        // ALOAD 0; Stack: 0
        cstack0.l = clocal0.l; refs.insert(cstack0.l);
        // New stack: 1
        // INVOKEVIRTUAL java/lang/StringBuilder.toString()Ljava/lang/String;; Stack: 1
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[0]))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[42]) { cmethods[42] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1855LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack0.l == nullptr) utils::throw_re(env, ((char *)(string_pool + 77LL)), ((char *)(string_pool + 528LL)), 101); else { cstack0.l = env->CallObjectMethod(cstack0.l, (cmethods[42])); refs.insert(cstack0.l); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // INVOKESTATIC wtf/diablo/hwid/CryptoUtil.toBase64(Ljava/lang/String;)Ljava/lang/String;; Stack: 1
        if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { cclasses_mtx[14].lock(); if (!cclasses[14] || env->IsSameObject(cclasses[14], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, classloader, (cstrings[40]))) { cclasses[14] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[14].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[43]) { cmethods[43] = env->GetStaticMethodID((cclasses[14]), ((char *)(string_pool + 6413LL)), ((char *)(string_pool + 2427LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack0.l = env->CallStaticObjectMethod((cclasses[14]), (cmethods[43]), cstack0.l); refs.insert(cstack0.l); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 1
        // ARETURN; Stack: 1
        return (jobject) cstack0.l;
        // New stack: 0
        // LABEL L58; Stack: 0
        L58: if (env->ExceptionCheck()) { return (jobject) 0; }
        // New stack: 0
        return (jobject) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_native0_special_clinit2(JNIEnv *env, jclass clazz) {
        jobject classloader = utils::get_classloader_from_class(env, clazz);
        if (env->ExceptionCheck()) { return (void) 0; }
        if (classloader == nullptr) { env->FatalError(((char *)(string_pool + 46LL))); return (void) 0; }
    
        jobject lookup = nullptr;
        std::unordered_set<jobject> refs;
    
    
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();

        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7298LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[13] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 6542LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[40] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7314LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[17] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7326LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[20] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7341LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[9] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7372LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[6] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7386LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[5] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7399LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[19] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7421LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[38] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7444LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[11] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7458LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[12] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7474LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[18] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7498LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[4] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7527LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[10] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7578LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[21] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 5971LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[30] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7595LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[31] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7622LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[8] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7635LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[15] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3265LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[0] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7655LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[37] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7679LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[32] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7696LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[28] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7716LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[34] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7742LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[2] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7760LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[35] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7782LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[36] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7806LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[1] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7822LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[3] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7861LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[14] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7879LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[24] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 3709LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[39] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7892LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[26] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7912LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[23] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7935LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[22] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7957LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[27] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7973LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[25] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 7994LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[16] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 8021LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[29] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 8034LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[33] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 8049LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[7] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }

        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 1290LL)), (char *)((char *)(string_pool + 948LL)), (void *)&__ngen_native_generateHwid1 },
            { (char *)((char *)(string_pool + 6476LL)), (char *)((char *)(string_pool + 73LL)), (void *)&__ngen_native0_special_clinit2 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 3320LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}