cc_library(
    name = "lib",
    hdrs = [
        "include/doesntwork.h",
        "works.h",
    ],
    srcs = ["lib.cc"],
    includes = ["include"],
)

cc_test(
    name = "test",
    srcs = ["test.cc"],
    deps = [
        ":lib",
        "@com_google_googletest//:gtest_main",
    ],
)
