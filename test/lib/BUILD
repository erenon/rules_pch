load("//:precompiled_headers.bzl", "precompiled_headers")

cc_library(
  name = "LibA",
  hdrs = [
    "LibA.hpp",
    "LibB.hpp",
    "LibC.hpp",
  ],
  defines = [
    'MY_FOO=bar',
    'MY_STR=\\"foo\\"',
    'MY_VAR=\\"$(BINDIR)\\"',
  ],
)

precompiled_headers(
  name = "pch",
  main = "Common.hpp",
  deps = [":LibA", "//test/lib/sublib"],
  visibility = ["//visibility:public"],
)
