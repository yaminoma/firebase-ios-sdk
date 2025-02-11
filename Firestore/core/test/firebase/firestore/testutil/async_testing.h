/*
 * Copyright 2019 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FIRESTORE_CORE_TEST_FIREBASE_FIRESTORE_TESTUTIL_ASYNC_TESTING_H_
#define FIRESTORE_CORE_TEST_FIREBASE_FIRESTORE_TESTUTIL_ASYNC_TESTING_H_

#include <memory>

namespace firebase {
namespace firestore {
namespace util {

class AsyncQueue;
class Executor;

}  // namespace util

namespace testutil {

/**
 * Creates an AsyncQueue suitable for testing, based on the default executor
 * for the current platform.
 *
 * @param name A simple name for the kind of executor this is (e.g. "user" for
 *     executors that emulate delivery of user events or "worker" for executors
 *     that back AsyncQueues.)
 */
std::unique_ptr<util::Executor> ExecutorForTesting(const char* name);

/**
 * Creates an AsyncQueue suitable for testing, based on the default executor
 * for the current platform.
 */
std::shared_ptr<util::AsyncQueue> AsyncQueueForTesting();

}  // namespace testutil
}  // namespace firestore
}  // namespace firebase

#endif  // FIRESTORE_CORE_TEST_FIREBASE_FIRESTORE_TESTUTIL_ASYNC_TESTING_H_
