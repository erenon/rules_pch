# Precompiled Header (PCH) support for Bazel + GCC

Requires GCC and Bazel 3.1. Clang support needs slight modification.

## Usage

 - Copy precompiled_headers.bzl to your workspace
 - Create a header file that is going to be the first include in your source files, e.g: `Common.hpp` or `stdafx.h`
 - Add common includes to this main header file - these are going to be precompiled
 - Add a precompiled_headers rule, add `cc_library` dependencies that provide the header files included by the main header file:

        load("//:precompiled_headers.bzl", "precompiled_headers")

        precompiled_headers(
          name = "pch",
          main = "Common.hpp",
          deps = [":libA", ":libB"],
        )

 - Depend on the created target:

        cc_binary(
          name = "app",
          copts = ["-Winvalid-pch", "-Werror"], # for testing
          srcs = ["app.cpp"],
          deps = [":pch"],
        )

## License

Public domain.
