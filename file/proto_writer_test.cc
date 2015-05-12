// Copyright 2013, Ubimo.com .  All rights reserved.
// Author: Roman Gershman (romange@gmail.com)
//
#include "file/proto_writer.h"
#include "file/proto_writer_test.pb.h"
#include "base/gtest.h"

namespace file {

class ProtoWriterTest : public ::testing::Test {
protected:
};

TEST_F(ProtoWriterTest, Basic) {
  ProtoWriter writer("foo.lst", test::Container::descriptor());
  test::Container boo;
  boo.mutable_person()->set_name("Roman");
  boo.mutable_person()->set_id(5);
  ASSERT_TRUE(writer.Add(boo).ok());
}


}  // namespace file