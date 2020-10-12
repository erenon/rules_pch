cc_library(
  name = "lib",
  copts = ["-Winvalid-pch", "-Werror", "-fpch-deps", "-fno-exceptions"],
  srcs = ["lib.cpp"],
  deps = ["//test/lib:pch"],
)

cc_binary(
  name = "app",
  copts = ["-Winvalid-pch", "-Werror", "-fpch-deps", "-fno-exceptions"],
  srcs = ["app.cpp"],
  deps = ["//test/lib:pch"],
)
