#### Usage

Run this to build the grammar shared library (using the Zig naming convention):
```
cd tree-sitter-sifu/ && tree-sitter build && tree-sitter-generate && mv si
fu.so libsifu.so && cd -
```

For an interactive repl, use `zig build run`.