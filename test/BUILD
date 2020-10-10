load("//:precompiled_headers.bzl", "precompiled_headers")

cc_library(
  name = "LibA",
  hdrs = [
    "LibA.hpp",
    "LibB.hpp",
    "LibC.hpp",
  ],
  defines = ['MY_FOO=bar'],
)

precompiled_headers(
  name = "pch",
  main = "Common.hpp",
  deps = [":LibA", "//test/sublib"],
)

cc_library(
  name = "lib",
  copts = ["-Winvalid-pch", "-Werror"],
  srcs = ["lib.cpp"],
  deps = [":pch"],
)

cc_binary(
  name = "app",
  copts = ["-Winvalid-pch", "-Werror"],
  srcs = ["app.cpp"],
  deps = [":pch"],
)
