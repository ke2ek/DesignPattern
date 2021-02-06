load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "rules_python",
    remote = "https://github.com/bazelbuild/rules_python.git",
    commit = "4b84ad270387a7c439ebdccfd530e2339601ef27",  # (2019-08-02 or later)
)

load("@rules_python//python:repositories.bzl", "py_repositories")
py_repositories()

