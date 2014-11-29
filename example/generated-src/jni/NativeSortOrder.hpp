// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#pragma once

#include "djinni_support.hpp"
#include "sort_order.hpp"

namespace djinni_generated {

class NativeSortOrder final : djinni::JniEnum {
public:
    using CppType = ::textsort::sort_order;
    using JniType = jobject;

    static jobject toJava(JNIEnv* jniEnv, ::textsort::sort_order c) { return djinni::JniClass<NativeSortOrder>::get().create(jniEnv, static_cast<int>(c)).release(); }
    static ::textsort::sort_order fromJava(JNIEnv* jniEnv, jobject j) { return static_cast<::textsort::sort_order>(djinni::JniClass<NativeSortOrder>::get().ordinal(jniEnv, j)); }

private:
    NativeSortOrder() : JniEnum("com/dropbox/textsort/SortOrder") {}
    friend class djinni::JniClass<NativeSortOrder>;
};

}  // namespace djinni_generated
