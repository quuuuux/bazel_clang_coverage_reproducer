```sh
bazel coverage test
genhtml --branch-coverage --output genhtml \
    "$(bazel info output_path)/_coverage/_coverage_report.dat"
```
