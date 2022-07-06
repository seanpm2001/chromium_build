// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BUILD_RUST_TESTS_TEST_RS_BINDINGS_FROM_CC_SELF_CONTAINED_HEADER_H_
#define BUILD_RUST_TESTS_TEST_RS_BINDINGS_FROM_CC_SELF_CONTAINED_HEADER_H_

inline int MultiplyViaCc(int x, int y) {
  return x * y;
}

#endif  // BUILD_RUST_TESTS_TEST_RS_BINDINGS_FROM_CC_SELF_CONTAINED_HEADER_H_