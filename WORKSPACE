workspace(name = "bazel_clang_coverage_reproducer")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

TOOLCHAINS_LLVM_VER = "0.10.3"
http_archive(
    name = "toolchains_llvm",
    sha256 = "b7cd301ef7b0ece28d20d3e778697a5e3b81828393150bed04838c0c52963a01",
    urls = [
        "https://github.com/grailbio/bazel-toolchain/releases/download/{0}/toolchains_llvm-{0}.tar.gz"
            .format(TOOLCHAINS_LLVM_VER),
    ],
    strip_prefix = "toolchains_llvm-{}".format(TOOLCHAINS_LLVM_VER),
)

load("@toolchains_llvm//toolchain:deps.bzl", "bazel_toolchain_dependencies")
load("@toolchains_llvm//toolchain:rules.bzl", "llvm_toolchain")

bazel_toolchain_dependencies()
llvm_toolchain(
    name = "llvm_toolchain",
    llvm_version = "16.0.4",
)

load("@llvm_toolchain//:toolchains.bzl", "llvm_register_toolchains")

llvm_register_toolchains()

GOOGLETEST_VER = "1.12.1"
http_archive(
    name = "com_google_googletest",
    sha256 = "81964fe578e9bd7c94dfdb09c8e4d6e6759e19967e397dbea48d1c10e45d0df2",
    urls = ["https://github.com/google/googletest/archive/refs/tags/release-{}.tar.gz".format(GOOGLETEST_VER)],
    strip_prefix = "googletest-release-{}".format(GOOGLETEST_VER),
)
