// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#include <jni.h>

#ifndef _Included_java_time_LocalDateTime
#define _Included_java_time_LocalDateTime

jobject JavaLocalDateTime_of(JNIEnv*, jobject, jobject);
jobject JavaLocalDateTime_toLocalDate(JNIEnv*, jobject);
jobject JavaLocalDateTime_toLocalTime(JNIEnv*, jobject);

#endif