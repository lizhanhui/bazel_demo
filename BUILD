# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    copts = ["-g", "-Wall", "-Wextra", "-Werror"],
    deps = [
        "@foo//:foo"
    ],
)