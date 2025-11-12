#### Usage

Run this to build the grammar c library:
```
zig build generate --summary all
```

Or run the default to build everything: `zig build`

For an interactive parser repl, use `zig build run`.

To import, run this in the root of a project folder.
```
zig fetch --save git+https://github.com/hugh-fox/Tree-Sitter-Sifu#HEAD
```
