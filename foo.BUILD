genrule(
    name = "foo_genrule",
    srcs = glob(["**"]),
    outs = ["libfoo.dylib", "foo.h"],
    cmd = "make"
)
cc_library(
    name = "foo",
    hdrs = ["foo.h"],
    srcs = ["libfoo.dylib"],
    deps = [],
    visibility = ["//visibility:public"]
)